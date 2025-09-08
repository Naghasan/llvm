//==--- SPIRVBuiltins.td - SPIRV builtin declarations -------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file contains TableGen definitions for SPIR-V builtin function
// declarations.  In case of an unresolved function name, Clang will check for
// a function described in this file when -fdeclare-spirv-builtins is specified.
//
//===----------------------------------------------------------------------===//

//===----------------------------------------------------------------------===//
//              Definitions of miscellaneous basic entities.
//===----------------------------------------------------------------------===//
// TODO: basic entities declaration with OpenCLBuiltins.td

// TODO: Manage version using the JSON grammar.  Unused for now.
class Version<int _Version> {
  int ID = _Version;
}
def SPIRVAll : Version<  0>;

// Address spaces
// Pointer types need to be assigned an address space.
class AddressSpace<string _AS> {
  string Name = _AS;
}
// Default is important for the frontend as there is not necessarily
// an automatic conversion from this address space to
// the one it will be lowered to.
// This file assumes it will get lowered to generic or private.
def DefaultAS    : AddressSpace<"clang::LangAS::Default">;
def PrivateAS    : AddressSpace<"clang::LangAS::sycl_private">;
def GlobalAS     : AddressSpace<"clang::LangAS::sycl_global">;
def ConstantAS   : AddressSpace<"clang::LangAS::opencl_constant">;
def LocalAS      : AddressSpace<"clang::LangAS::sycl_local">;
def GenericAS    : AddressSpace<"clang::LangAS::opencl_generic">;

// TODO: Manage capabilities. Unused for now.
class AbstractExtension<string _Ext> {
  string ExtName = _Ext;
}

// Extension associated to a builtin function.
class FunctionExtension<string _Ext> : AbstractExtension<_Ext>;

// FunctionExtension definitions.
def FuncExtNone                          : FunctionExtension<"">;

// Extension associated to a type.  This enables implicit conditionalization of
// builtin function overloads containing a type that depends on an extension.
// During overload resolution, when a builtin function overload contains a type
// with a TypeExtension, those overloads are skipped when the extension is
// disabled.
class TypeExtension<string _Ext> : AbstractExtension<_Ext>;

// TypeExtension definitions.
def NoTypeExt   : TypeExtension<"">;

// Qualified Type.  These map to ASTContext::QualType.
// TODO: Create a QualTypeFromASTContext.
//       To fully make sense here, this class should represent
//       the QualType only. How the QualType is accessed should be separated.
class QualType<string _TypeExpr, bit _IsAbstract=0, bit _IsSigned=0> {
  // Name of the field or function in a clang::ASTContext
  // E.g. Name="IntTy" for the int type, and "getIntPtrType()" for an intptr_t
  string TypeExpr = _TypeExpr;
  // Some QualTypes in this file represent an abstract type for which there is
  // no corresponding AST QualType, e.g. a GenType or an `image2d_t` type
  // without access qualifiers.
  bit IsAbstract = _IsAbstract;
  bit IsSigned = _IsSigned;
}

// Qualified Type.  These map to a function taking an ASTContext
// and returning a QualType.
// Instead of direclty accessing ASTContext fields, the builtin lookup can
// call a function to extract the correct type for the call.
// The name will be interpreted as the function to call
// rather than the field to access.
class QualTypeFromFunction<string _Name, bit _IsAbstract=0, bit _IsSigned=0> :
      QualType<_Name, _IsAbstract, _IsSigned> {
// TODO: At the moment the user is expected to write the function outside this file.
//       Although they could be generated in the .inc file and
//       the user would only have to provide the body here
//       (like it can be done for attributes for instance).
}

// List of integers.
class IntList<string _Name, list<int> _List> {
  string Name = _Name;
  list<int> List = _List;
}

// Basic data types (int, float, image2d_t, ...).
// Its child classes can represent concrete types (e.g. VectorType) or
// abstract types (e.g. GenType).
class Type<string _Name, QualType _QTExpr> {
  // Name of the Type.
  string Name = _Name;
  // QualType associated with this type.
  QualType QTExpr = _QTExpr;
  // Size of the vector (if applicable).
  int VecWidth = 1;
  // Size of the element in bits.
  int ElementSize = 1;
  // Is a integer.
  bit IsInteger = 0;
  // Is a signed integer.
  bit IsSigned = 1;
  // Is a float.
  bit IsFloat = 0;
  // Is a pointer.
  bit IsPointer = 0;
  // "const" qualifier.
  bit IsConst = 0;
  // "volatile" qualifier.
  bit IsVolatile = 0;
  // Access qualifier. Must be one of ("RO", "WO", "RW").
  string AccessQualifier = "";
  // Address space.
  string AddrSpace = DefaultAS.Name;
  // Extension that needs to be enabled to expose a builtin that uses this type.
  TypeExtension Extension = NoTypeExt;
}

class FundamentalType<string _Name, QualType _QTName, int _Size> : Type<_Name, _QTName> {
  // Inherited fields
  let ElementSize = _Size;
}

// Integer Type.
class IntType<string _Name, QualType _QTName, int _Size> : FundamentalType<_Name, _QTName, _Size> {
  // Inherited fields
  let IsInteger = 1;
  let IsSigned = 1;
}

// Unsigned integer Type.
class UIntType<string _Name, QualType _QTName, int _Size> : FundamentalType<_Name, _QTName, _Size> {
  // Inherited fields
  let IsInteger = 1;
  let IsSigned = 0;
}

// Floating Type.
class FPType<string _Name, QualType _QTName, int _Size> : FundamentalType<_Name, _QTName, _Size> {
  // Inherited fields
  let IsFloat = 1;
}

class CompoundType<Type _Ty> : Type<_Ty.Name, _Ty.QTExpr> {
  // Inherited fields
  let VecWidth = _Ty.VecWidth;
  let ElementSize = _Ty.ElementSize;
  let IsInteger = _Ty.IsInteger;
  let IsSigned = _Ty.IsSigned;
  let IsFloat = _Ty.IsFloat;
  let IsPointer = _Ty.IsPointer;
  let IsConst = _Ty.IsConst;
  let IsVolatile = _Ty.IsVolatile;
  let AccessQualifier = _Ty.AccessQualifier;
  let AddrSpace = _Ty.AddrSpace;
  let Extension = _Ty.Extension;

  Type ElementType = _Ty;
}

// Vector types (e.g. int2, int3, int16, float8, ...).
class VectorType<Type _Ty, int _VecWidth> : Type<_Ty.Name, _Ty.QTExpr> {
  let VecWidth = _VecWidth;
  let AccessQualifier = "";
  // Inherited fields
  let ElementSize = _Ty.ElementSize;
  let IsInteger = _Ty.IsInteger;
  let IsSigned = _Ty.IsSigned;
  let IsFloat = _Ty.IsFloat;
  let IsPointer = _Ty.IsPointer;
  let IsConst = _Ty.IsConst;
  let IsVolatile = _Ty.IsVolatile;
  let AccessQualifier = _Ty.AccessQualifier;
  let AddrSpace = _Ty.AddrSpace;
  let Extension = _Ty.Extension;
}

// Pointer types (e.g. int*, float*, ...).
class PointerType<Type _Ty, AddressSpace _AS = DefaultAS> :
    CompoundType<_Ty> {
  // Inherited fields
  let IsPointer = 1;
  let AddrSpace = _AS.Name;
  let Extension = _Ty.Extension;
}

// Const types (e.g. const int).
class ConstType<Type _Ty> : CompoundType<_Ty> {
  // Inherited fields
  let IsConst = 1;
  let Extension = _Ty.Extension;
}

// Volatile types (e.g. volatile int).
class VolatileType<Type _Ty> : CompoundType<_Ty> {
  // Inherited fields
  let IsVolatile = 1;
  let Extension = _Ty.Extension;
}

// Image types (e.g. image2d).
class ImageType<Type _Ty, string _AccessQualifier> :
    Type<_Ty.Name, QualType<_Ty.QTExpr.TypeExpr # _AccessQualifier # "Ty", 0>> {
  let VecWidth = 0;
  let AccessQualifier = _AccessQualifier;
  // Inherited fields
  let ElementSize = _Ty.ElementSize;
  let IsInteger = _Ty.IsInteger;
  let IsSigned = _Ty.IsSigned;
  let IsFloat = _Ty.IsFloat;
  let IsPointer = _Ty.IsPointer;
  let IsConst = _Ty.IsConst;
  let IsVolatile = _Ty.IsVolatile;
  let AddrSpace = _Ty.AddrSpace;
  let Extension = _Ty.Extension;
}

// List of Types.
class TypeList<list<Type> _Type> {
  list<Type> List = _Type;
}

// A GenericType is an abstract type that defines a set of types as a
// combination of Types and vector sizes.
//
// For example, if TypeList = <int, float> and VectorList = <1, 2, 4>, then it
// represents <int, int2, int4, float, float2, float4>.
//
// Some rules apply when using multiple GenericType arguments in a declaration:
//   1. The number of vector sizes must be equal or 1 for all gentypes in a
//      declaration.
//   2. The number of Types must be equal or 1 for all gentypes in a
//      declaration.
//   3. Generic types are combined by iterating over all generic types at once.
//      For example, for the following GenericTypes
//        GenT1 = GenericType<half, [1, 2]> and
//        GenT2 = GenericType<float, int, [1, 2]>
//      A declaration f(GenT1, GenT2) results in the combinations
//        f(half, float), f(half2, float2), f(half, int), f(half2, int2) .
//   4. "sgentype" from the OpenCL specification is supported by specifying
//      a single vector size.
//      For example, for the following GenericTypes
//        GenT = GenericType<half, int, [1, 2]> and
//        SGenT = GenericType<half, int, [1]>
//      A declaration f(GenT, SGenT) results in the combinations
//        f(half, half), f(half2, half), f(int, int), f(int2, int) .
class GenericType<string _Ty, TypeList _TypeList, IntList _VectorList> :
    Type<_Ty, QualType<"null", 1>> {
  // Possible element types of the generic type.
  TypeList TypeList = _TypeList;
  // Possible vector sizes of the types in the TypeList.
  IntList VectorList = _VectorList;
  // The VecWidth field is ignored for GenericTypes. Use VectorList instead.
  let VecWidth = 0;
}

// Builtin function attributes.
def Attr {
  list<bit> None = [0, 0, 0];
  list<bit> Pure = [1, 0, 0];
  list<bit> Const = [0, 1, 0];
  list<bit> Convergent = [0, 0, 1];
}

//===----------------------------------------------------------------------===//
//                      Class for builtin functions
//===----------------------------------------------------------------------===//
class Builtin<string _Name, list<Type> _Signature, list<bit> _Attributes = Attr.None> {
  // Name of the builtin function
  string Name = _Name;
  // List of types used by the function. The first one is the return type and
  // the following are the arguments. The list must have at least one element
  // (the return type).
  list<Type> Signature = _Signature;
  // Function attribute __attribute__((pure))
  bit IsPure = _Attributes[0];
  // Function attribute __attribute__((const))
  bit IsConst = _Attributes[1];
  // Function attribute __attribute__((convergent))
  bit IsConv = _Attributes[2];
  // Is function a variadic one
  bit IsVariadic = 0;
  // OpenCL extensions to which the function belongs.
  FunctionExtension Extension = FuncExtNone;
  // Version from which the function is available.
  // MinVersion is inclusive.
  Version MinVersion = SPIRVAll;
  // Version from which the function is not supported anymore.
  // MaxVersion is exclusive.
  // SPIRVAll makes the function available for all versions.
  Version MaxVersion = SPIRVAll;
}

// Helper to declare SPIR-V Core builtins.
class SPVBuiltin<string _Name, list<Type> _Signature, list<bit> _Attributes = Attr.None> :
  Builtin<"__spirv_" # _Name, _Signature, _Attributes> {}

// Helper to declare OpenCL SPIR-V extended set builtins.
class OCLSPVBuiltin<string _Name, list<Type> _Signature, list<bit> _Attributes = Attr.None> :
  SPVBuiltin<"ocl_" # _Name, _Signature, _Attributes> {}

class ConstOCLSPVBuiltin<string _Name, list<Type> _Signature> :
  OCLSPVBuiltin<_Name, _Signature, Attr.Const> {}

//===----------------------------------------------------------------------===//
//                 Definitions of types
//===----------------------------------------------------------------------===//

// OpenCL v1.0/1.2/2.0 s6.1.1: Built-in Scalar Data Types.
def Bool      : IntType<"__spv_bool",   QualType<"Context.BoolTy">, 1>;
def Char      : IntType<"__spv_char",     QualType<"Context.CharTy", 0, 1>, 8>;
def SChar     : IntType<"__spv_int8",     QualType<"Context.SignedCharTy", 0, 1>, 8>;
def UChar     : UIntType<"__spv_uint8",     QualType<"Context.UnsignedCharTy">, 8>;
def Short     : IntType<"__spv_int16",     QualType<"Context.ShortTy", 0, 1>, 16>;
def UShort    : UIntType<"__spv_uint16",    QualType<"Context.UnsignedShortTy">, 16>;
def Int       : IntType<"__spv_int32",       QualType<"Context.IntTy", 0, 1>, 32>;
def UInt      : UIntType<"__spv_uint32",      QualType<"Context.UnsignedIntTy">, 32>;
def Long      : IntType<"__spv_int64",      QualType<"Context.getIntTypeForBitwidth(64, true)", 0, 1>, 64>;
def ULong     : UIntType<"__spv_uint64",     QualType<"Context.getIntTypeForBitwidth(64, false)">, 64>;
def Float     : FPType<"__spv_fp32",     QualType<"Context.FloatTy">, 32>;
def Double    : FPType<"__spv_fp64",    QualType<"Context.DoubleTy">, 64>;
def Half      : FPType<"__spv_fp16",      QualTypeFromFunction<"GetFloat16Type">, 16>;
def Void      : Type<"void",      QualType<"Context.VoidTy">>;
// FIXME: ensure this is portable...
def Size      : Type<"__spv_size_t",    QualType<"Context.getSizeType()">>;

def Sampler               : Type<"sampler_t", QualType<"Context.OCLSamplerTy">>;
def Event                 : Type<"event_t", QualType<"Context.OCLEventTy">>;

//===----------------------------------------------------------------------===//
//                 Definitions of gentype variants
//===----------------------------------------------------------------------===//

// Vector width lists.
def VecAndScalar: IntList<"VecAndScalar", [1, 2, 3, 4, 8, 16]>;
def VecNoScalar : IntList<"VecNoScalar", [2, 3, 4, 8, 16]>;
def Vec1        : IntList<"Vec1", [1]>;
def Vec2        : IntList<"Vec2", [2]>;
def Vec4        : IntList<"Vec4", [4]>;
def Vec8        : IntList<"Vec8", [8]>;
def Vec16       : IntList<"Vec16", [16]>;
def Vec1234     : IntList<"Vec1234", [1, 2, 3, 4]>;

// Type lists.
def TLAll           : TypeList<[Char,  SChar, UChar, Short,  UShort, Int,  UInt, Long,  ULong, Float, Double, Half]>;
def TLAllUnsigned   : TypeList<[UChar, UChar, UChar, UShort, UShort, UInt, UInt, ULong, ULong, UInt,  ULong,  UShort]>;
def TLAllWithBool : TypeList<[Bool, Char, SChar, UChar, Short, UShort, Int, UInt, Long,
                              ULong, Float, Double, Half]>;
def TLFloat         : TypeList<[Float, Double, Half]>;
// FIXME: handle properly char (signed or unsigned depending on host)
def TLSignedInts    : TypeList<[Char, SChar, Short, Int, Long]>;
def TLUIToSIInts    : TypeList<[UChar, UChar, UShort, UInt, ULong]>;
def TLUnsignedInts : TypeList<[UChar, UShort, UInt, ULong]>;

// Signed to Unsigned conversion
// FIXME: handle properly char (signed or unsigned depending on host)
def TLSToUSignedInts    : TypeList<[Char, SChar, Short, Int, Long]>;
def TLSToUUnsignedInts  : TypeList<[UChar, UChar, UShort, UInt, ULong]>;

def TLIntLongFloats : TypeList<[Int, UInt, Long, ULong, Float, Double, Half]>;

// All unsigned integer types twice, to facilitate unsigned return types for e.g.
// uchar abs(char) and
// uchar abs(uchar).
def TLAllUIntsTwice : TypeList<[UChar, UChar, UChar, UShort, UShort, UInt, UInt, ULong, ULong]>;

def TLAllInts       : TypeList<[Char, SChar, UChar, Short, UShort, Int, UInt, Long, ULong]>;

// GenType definitions for multiple base types (e.g. all floating point types,
// or all integer types).
// All types
def AGenType1              : GenericType<"AGenType1", TLAll, Vec1>;
def AGenTypeN              : GenericType<"AGenTypeN", TLAll, VecAndScalar>;
def AGenTypeNNoScalar      : GenericType<"AGenTypeNNoScalar", TLAll, VecNoScalar>;
def AGenTypeNWithBool
    : GenericType<"AGenTypeNWithBool", TLAllWithBool, VecAndScalar>;
// Bool
def BoolGenTypeN : GenericType<"BoolGenTypeN", TypeList<[Bool]>, VecAndScalar>;
// All integer
def AIGenType1             : GenericType<"AIGenType1", TLAllInts, Vec1>;
def AIGenTypeN             : GenericType<"AIGenTypeN", TLAllInts, VecAndScalar>;
def AUIGenTypeN             : GenericType<"AUIGenTypeN", TLUnsignedInts, VecAndScalar>;
def ASIGenTypeN             : GenericType<"ASIGenTypeN", TLSignedInts, VecAndScalar>;
// unsigned integers matching 1:1 with signed ints
def AUIToSIGenTypeN          : GenericType<"AUIToSIGenTypeN", TLUIToSIInts, VecAndScalar>;
def AIGenTypeNNoScalar     : GenericType<"AIGenTypeNNoScalar", TLAllInts, VecNoScalar>;
// All integer to unsigned
def AI2UGenTypeN           : GenericType<"AI2UGenTypeN", TLAllUIntsTwice, VecAndScalar>;
// Signed integer
def SGenType1 : GenericType<"SGenType1", TLSignedInts, Vec1>;
def SGenTypeN              : GenericType<"SGenTypeN", TLSignedInts, VecAndScalar>;
// Unsigned integer
def UGenType1 : GenericType<"UGenType1", TLUnsignedInts, Vec1>;
def UGenTypeN              : GenericType<"UGenTypeN", TLUnsignedInts, VecAndScalar>;
def UToSGenTypeN           : GenericType<"UToSGenTypeN", TLUIToSIInts, VecAndScalar>;
def UInt4 : GenericType<"UInt4", TypeList<[UInt]>, Vec4>;
// Float
def FGenType1 : GenericType<"FGenType1", TLFloat, Vec1>;
def FGenTypeN              : GenericType<"FGenTypeN", TLFloat, VecAndScalar>;
// (u)int, (u)long, and all floats
def IntLongFloatGenType1   : GenericType<"IntLongFloatGenType1", TLIntLongFloats, Vec1>;

// GenType definitions for every single base type (e.g. fp32 only).
// Names are like: GenTypeFloatVecAndScalar.
foreach Type = [Char, SChar, UChar, Short, UShort,
                Int, UInt, Long, ULong,
                Float, Double, Half] in {
  foreach VecSizes = [VecAndScalar, VecNoScalar] in {
    def "GenType" # Type # VecSizes :
              GenericType<"GenType" # Type # VecSizes,
                          TypeList<[Type]>, VecSizes>;
  }
}

// GenType definitions for vec1234.
foreach Type = [Float, Double, Half] in {
  def "GenType" # Type # Vec1234 :
              GenericType<"GenType" # Type # Vec1234,
                          TypeList<[Type]>, Vec1234>;
}

//===----------------------------------------------------------------------===//
//                 Definitions of builtins
//           extinst.opencl.std.100.grammar.json
//===----------------------------------------------------------------------===//

// 2.1. Math extended instructions


foreach name  = ["acos", "acosh", "acospi",
                 "asin", "asinh", "asinpi",
                 "atan", "atanh", "atanpi",
                 "cbrt", "ceil", "cos",
                 "cosh", "cospi",
                 "erfc", "erf",
                 "exp", "exp2", "exp10",
                 "expm1", "fabs", "floor", "lgamma",
                 "log", "log2", "log10", "log1p", "logb",
                 "rint", "round", "rsqrt",
                 "sin", "sinh", "sinpi",
                 "sqrt",
                 "tan", "tanh", "tanpi",
                 "tgamma", "trunc"] in {
  def : ConstOCLSPVBuiltin<name, [FGenTypeN, FGenTypeN]>;
}
