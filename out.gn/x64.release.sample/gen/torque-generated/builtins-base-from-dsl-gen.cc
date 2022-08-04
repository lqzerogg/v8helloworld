#include "src/code-stub-assembler.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-base-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Hole() {
  TNode<Oddball> t0 = UncheckedCast<Oddball>(TheHoleConstant());
  USE(implicit_cast<TNode<Oddball>>(t0));
  return implicit_cast<TNode<Oddball>>(t0);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Null() {
  TNode<Oddball> t1 = UncheckedCast<Oddball>(NullConstant());
  USE(implicit_cast<TNode<Oddball>>(t1));
  return implicit_cast<TNode<Oddball>>(t1);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Undefined() {
  TNode<Oddball> t2 = UncheckedCast<Oddball>(UndefinedConstant());
  USE(implicit_cast<TNode<Oddball>>(t2));
  return implicit_cast<TNode<Oddball>>(t2);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::True() {
  TNode<Oddball> t3 = UncheckedCast<Oddball>(TrueConstant());
  USE(implicit_cast<TNode<Oddball>>(t3));
  return implicit_cast<TNode<Oddball>>(t3);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::False() {
  TNode<Oddball> t4 = UncheckedCast<Oddball>(FalseConstant());
  USE(implicit_cast<TNode<Oddball>>(t4));
  return implicit_cast<TNode<Oddball>>(t4);
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::min(TNode<Number> p_x, TNode<Number> p_y) {
  TVARIABLE(Number, _return_0_impl);
  auto _return_0 = &_return_0_impl;
  USE(_return_0);
  Label label_macro_end_1028_impl(this, {_return_0});
  Label* label_macro_end_1028 = &label_macro_end_1028_impl;
  USE(label_macro_end_1028);
  // ../../src/builtins/base.tq:303:41
  {
    // ../../src/builtins/base.tq:304:3
    TNode<Number> t5 = UncheckedCast<Number>(NumberMin(implicit_cast<TNode<Number>>(p_x), implicit_cast<TNode<Number>>(p_y)));
    USE(implicit_cast<TNode<Number>>(t5));
    *_return_0 = implicit_cast<TNode<Number>>(t5);
    Goto(label_macro_end_1028);
  }
  BIND(label_macro_end_1028);
  return implicit_cast<TNode<Number>>((*_return_0).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::max(TNode<Number> p_x, TNode<Number> p_y) {
  TVARIABLE(Number, _return_1_impl);
  auto _return_1 = &_return_1_impl;
  USE(_return_1);
  Label label_macro_end_1029_impl(this, {_return_1});
  Label* label_macro_end_1029 = &label_macro_end_1029_impl;
  USE(label_macro_end_1029);
  // ../../src/builtins/base.tq:306:41
  {
    // ../../src/builtins/base.tq:307:3
    TNode<Number> t6 = UncheckedCast<Number>(NumberMax(implicit_cast<TNode<Number>>(p_x), implicit_cast<TNode<Number>>(p_y)));
    USE(implicit_cast<TNode<Number>>(t6));
    *_return_1 = implicit_cast<TNode<Number>>(t6);
    Goto(label_macro_end_1029);
  }
  BIND(label_macro_end_1029);
  return implicit_cast<TNode<Number>>((*_return_1).value());
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::cast_HeapObject12ATHeapObject(TNode<HeapObject> p_o, Label* label_CastError_0) {
  TVARIABLE(HeapObject, _return_2_impl);
  auto _return_2 = &_return_2_impl;
  USE(_return_2);
  Label label_macro_end_1030_impl(this, {_return_2});
  Label* label_macro_end_1030 = &label_macro_end_1030_impl;
  USE(label_macro_end_1030);
  // ../../src/builtins/base.tq:344:75
  {
    // ../../src/builtins/base.tq:344:77
    *_return_2 = implicit_cast<TNode<HeapObject>>(p_o);
    Goto(label_macro_end_1030);
  }
  BIND(label_macro_end_1030);
  return implicit_cast<TNode<HeapObject>>((*_return_2).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::cast_HeapObject12ATFixedArray(TNode<HeapObject> p_o, Label* label_CastError_1) {
  TVARIABLE(FixedArray, _return_3_impl);
  auto _return_3 = &_return_3_impl;
  USE(_return_3);
  Label label_macro_end_1031_impl(this, {_return_3});
  Label* label_macro_end_1031 = &label_macro_end_1031_impl;
  USE(label_macro_end_1031);
  // ../../src/builtins/base.tq:345:73
  {
    // ../../src/builtins/base.tq:346:3
    TNode<FixedArray> t7 = UncheckedCast<FixedArray>(HeapObjectToFixedArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_1));
    USE(implicit_cast<TNode<FixedArray>>(t7));
    *_return_3 = implicit_cast<TNode<FixedArray>>(t7);
    Goto(label_macro_end_1031);
  }
  BIND(label_macro_end_1031);
  return implicit_cast<TNode<FixedArray>>((*_return_3).value());
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::cast_HeapObject18ATFixedDoubleArray(TNode<HeapObject> p_o, Label* label_CastError_2) {
  TVARIABLE(FixedDoubleArray, _return_4_impl);
  auto _return_4 = &_return_4_impl;
  USE(_return_4);
  Label label_macro_end_1032_impl(this, {_return_4});
  Label* label_macro_end_1032 = &label_macro_end_1032_impl;
  USE(label_macro_end_1032);
  // ../../src/builtins/base.tq:348:85
  {
    // ../../src/builtins/base.tq:349:3
    TNode<FixedDoubleArray> t8 = UncheckedCast<FixedDoubleArray>(HeapObjectToFixedDoubleArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_2));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t8));
    *_return_4 = implicit_cast<TNode<FixedDoubleArray>>(t8);
    Goto(label_macro_end_1032);
  }
  BIND(label_macro_end_1032);
  return implicit_cast<TNode<FixedDoubleArray>>((*_return_4).value());
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::cast_HeapObject12ATJSDataView(TNode<HeapObject> p_o, Label* label_CastError_3) {
  TVARIABLE(JSDataView, _return_5_impl);
  auto _return_5 = &_return_5_impl;
  USE(_return_5);
  Label label_macro_end_1033_impl(this, {_return_5});
  Label* label_macro_end_1033 = &label_macro_end_1033_impl;
  USE(label_macro_end_1033);
  // ../../src/builtins/base.tq:351:73
  {
    // ../../src/builtins/base.tq:352:3
    TNode<JSDataView> t9 = UncheckedCast<JSDataView>(HeapObjectToJSDataView(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_3));
    USE(implicit_cast<TNode<JSDataView>>(t9));
    *_return_5 = implicit_cast<TNode<JSDataView>>(t9);
    Goto(label_macro_end_1033);
  }
  BIND(label_macro_end_1033);
  return implicit_cast<TNode<JSDataView>>((*_return_5).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::cast_HeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<HeapObject> p_o, Label* label_CastError_4) {
  TVARIABLE(JSReceiver, _return_6_impl);
  auto _return_6 = &_return_6_impl;
  USE(_return_6);
  Label label_macro_end_1034_impl(this, {_return_6});
  Label* label_macro_end_1034 = &label_macro_end_1034_impl;
  USE(label_macro_end_1034);
  // ../../src/builtins/base.tq:354:69
  {
    // ../../src/builtins/base.tq:355:3
    TNode<JSReceiver> t10 = UncheckedCast<JSReceiver>(HeapObjectToCallable(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_4));
    USE(implicit_cast<TNode<JSReceiver>>(t10));
    *_return_6 = implicit_cast<TNode<JSReceiver>>(t10);
    Goto(label_macro_end_1034);
  }
  BIND(label_macro_end_1034);
  return implicit_cast<TNode<JSReceiver>>((*_return_6).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::cast_HeapObject9ATJSArray(TNode<HeapObject> p_o, Label* label_CastError_5) {
  TVARIABLE(JSArray, _return_7_impl);
  auto _return_7 = &_return_7_impl;
  USE(_return_7);
  Label label_macro_end_1035_impl(this, {_return_7});
  Label* label_macro_end_1035 = &label_macro_end_1035_impl;
  USE(label_macro_end_1035);
  // ../../src/builtins/base.tq:357:67
  {
    // ../../src/builtins/base.tq:358:3
    TNode<JSArray> t11 = UncheckedCast<JSArray>(HeapObjectToJSArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_5));
    USE(implicit_cast<TNode<JSArray>>(t11));
    *_return_7 = implicit_cast<TNode<JSArray>>(t11);
    Goto(label_macro_end_1035);
  }
  BIND(label_macro_end_1035);
  return implicit_cast<TNode<JSArray>>((*_return_7).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::cast5ATSmi(TNode<Object> p_o, Label* label_CastError_6) {
  TVARIABLE(Smi, _return_8_impl);
  auto _return_8 = &_return_8_impl;
  USE(_return_8);
  Label label_macro_end_1036_impl(this, {_return_8});
  Label* label_macro_end_1036 = &label_macro_end_1036_impl;
  USE(label_macro_end_1036);
  // ../../src/builtins/base.tq:371:44
  {
    // ../../src/builtins/base.tq:372:3
    TNode<Smi> t12 = UncheckedCast<Smi>(TaggedToSmi(implicit_cast<TNode<Object>>(p_o), label_CastError_6));
    USE(implicit_cast<TNode<Smi>>(t12));
    *_return_8 = implicit_cast<TNode<Smi>>(t12);
    Goto(label_macro_end_1036);
  }
  BIND(label_macro_end_1036);
  return implicit_cast<TNode<Smi>>((*_return_8).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o, Label* label_CastError_7) {
  TVARIABLE(Number, _return_9_impl);
  auto _return_9 = &_return_9_impl;
  USE(_return_9);
  Label label_macro_end_1037_impl(this, {_return_9});
  Label* label_macro_end_1037 = &label_macro_end_1037_impl;
  USE(label_macro_end_1037);
  // ../../src/builtins/base.tq:374:50
  {
    // ../../src/builtins/base.tq:375:3
    TNode<Number> t13 = UncheckedCast<Number>(TaggedToNumber(implicit_cast<TNode<Object>>(p_o), label_CastError_7));
    USE(implicit_cast<TNode<Number>>(t13));
    *_return_9 = implicit_cast<TNode<Number>>(t13);
    Goto(label_macro_end_1037);
  }
  BIND(label_macro_end_1037);
  return implicit_cast<TNode<Number>>((*_return_9).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_10_impl);
  auto _return_10 = &_return_10_impl;
  USE(_return_10);
  Label label_macro_end_1038_impl(this, {_return_10});
  Label* label_macro_end_1038 = &label_macro_end_1038_impl;
  USE(label_macro_end_1038);
  // ../../src/builtins/base.tq:414:52
  {
    // ../../src/builtins/base.tq:415:3
    TNode<IntPtrT> t14 = UncheckedCast<IntPtrT>(IntPtrConstant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<IntPtrT>>(t14));
    *_return_10 = implicit_cast<TNode<IntPtrT>>(t14);
    Goto(label_macro_end_1038);
  }
  BIND(label_macro_end_1038);
  return implicit_cast<TNode<IntPtrT>>((*_return_10).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint31(int31_t p_i) {
  TVARIABLE(Int32T, _return_11_impl);
  auto _return_11 = &_return_11_impl;
  USE(_return_11);
  Label label_macro_end_1039_impl(this, {_return_11});
  Label* label_macro_end_1039 = &label_macro_end_1039_impl;
  USE(label_macro_end_1039);
  // ../../src/builtins/base.tq:417:50
  {
    // ../../src/builtins/base.tq:418:3
    TNode<Int32T> t15 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t15));
    *_return_11 = implicit_cast<TNode<Int32T>>(t15);
    Goto(label_macro_end_1039);
  }
  BIND(label_macro_end_1039);
  return implicit_cast<TNode<Int32T>>((*_return_11).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint32(int31_t p_i) {
  TVARIABLE(Int32T, _return_12_impl);
  auto _return_12 = &_return_12_impl;
  USE(_return_12);
  Label label_macro_end_1040_impl(this, {_return_12});
  Label* label_macro_end_1040 = &label_macro_end_1040_impl;
  USE(label_macro_end_1040);
  // ../../src/builtins/base.tq:420:50
  {
    // ../../src/builtins/base.tq:421:3
    TNode<Int32T> t16 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t16));
    *_return_12 = implicit_cast<TNode<Int32T>>(t16);
    Goto(label_macro_end_1040);
  }
  BIND(label_macro_end_1040);
  return implicit_cast<TNode<Int32T>>((*_return_12).value());
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::from_constexpr8ATuint32(int31_t p_i) {
  TVARIABLE(Uint32T, _return_13_impl);
  auto _return_13 = &_return_13_impl;
  USE(_return_13);
  Label label_macro_end_1041_impl(this, {_return_13});
  Label* label_macro_end_1041 = &label_macro_end_1041_impl;
  USE(label_macro_end_1041);
  // ../../src/builtins/base.tq:423:52
  {
    // ../../src/builtins/base.tq:424:3
    TNode<Int32T> t17 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t17));
    TNode<Uint32T> t18 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t17)));
    USE(implicit_cast<TNode<Uint32T>>(t18));
    *_return_13 = implicit_cast<TNode<Uint32T>>(t18);
    Goto(label_macro_end_1041);
  }
  BIND(label_macro_end_1041);
  return implicit_cast<TNode<Uint32T>>((*_return_13).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr9ATuintptr(int31_t p_i) {
  TVARIABLE(UintPtrT, _return_14_impl);
  auto _return_14 = &_return_14_impl;
  USE(_return_14);
  Label label_macro_end_1042_impl(this, {_return_14});
  Label* label_macro_end_1042 = &label_macro_end_1042_impl;
  USE(label_macro_end_1042);
  // ../../src/builtins/base.tq:426:54
  {
    // ../../src/builtins/base.tq:427:3
    TNode<Uint32T> t19 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(p_i)));
    TNode<UintPtrT> t20 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(implicit_cast<TNode<Uint32T>>(t19)));
    USE(implicit_cast<TNode<UintPtrT>>(t20));
    *_return_14 = implicit_cast<TNode<UintPtrT>>(t20);
    Goto(label_macro_end_1042);
  }
  BIND(label_macro_end_1042);
  return implicit_cast<TNode<UintPtrT>>((*_return_14).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::from_constexpr5ATSmi(int31_t p_i) {
  TVARIABLE(Smi, _return_15_impl);
  auto _return_15 = &_return_15_impl;
  USE(_return_15);
  Label label_macro_end_1043_impl(this, {_return_15});
  Label* label_macro_end_1043 = &label_macro_end_1043_impl;
  USE(label_macro_end_1043);
  // ../../src/builtins/base.tq:429:46
  {
    // ../../src/builtins/base.tq:430:3
    TNode<Smi> t21 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t21));
    *_return_15 = implicit_cast<TNode<Smi>>(t21);
    Goto(label_macro_end_1043);
  }
  BIND(label_macro_end_1043);
  return implicit_cast<TNode<Smi>>((*_return_15).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(int31_t p_i) {
  TVARIABLE(Number, _return_16_impl);
  auto _return_16 = &_return_16_impl;
  USE(_return_16);
  Label label_macro_end_1044_impl(this, {_return_16});
  Label* label_macro_end_1044 = &label_macro_end_1044_impl;
  USE(label_macro_end_1044);
  // ../../src/builtins/base.tq:432:52
  {
    // ../../src/builtins/base.tq:433:3
    TNode<Smi> t22 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t22));
    *_return_16 = implicit_cast<TNode<Number>>(t22);
    Goto(label_macro_end_1044);
  }
  BIND(label_macro_end_1044);
  return implicit_cast<TNode<Number>>((*_return_16).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::from_constexpr9ATfloat64(int31_t p_i) {
  TVARIABLE(Float64T, _return_17_impl);
  auto _return_17 = &_return_17_impl;
  USE(_return_17);
  Label label_macro_end_1045_impl(this, {_return_17});
  Label* label_macro_end_1045 = &label_macro_end_1045_impl;
  USE(label_macro_end_1045);
  // ../../src/builtins/base.tq:435:54
  {
    // ../../src/builtins/base.tq:436:3
    TNode<Float64T> t23 = UncheckedCast<Float64T>(Float64Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Float64T>>(t23));
    *_return_17 = implicit_cast<TNode<Float64T>>(t23);
    Goto(label_macro_end_1045);
  }
  BIND(label_macro_end_1045);
  return implicit_cast<TNode<Float64T>>((*_return_17).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr8ATintptr(int32_t p_i) {
  TVARIABLE(IntPtrT, _return_18_impl);
  auto _return_18 = &_return_18_impl;
  USE(_return_18);
  Label label_macro_end_1046_impl(this, {_return_18});
  Label* label_macro_end_1046 = &label_macro_end_1046_impl;
  USE(label_macro_end_1046);
  // ../../src/builtins/base.tq:439:52
  {
    // ../../src/builtins/base.tq:440:3
    TNode<IntPtrT> t24 = UncheckedCast<IntPtrT>(IntPtrConstant(implicit_cast<int32_t>(p_i)));
    USE(implicit_cast<TNode<IntPtrT>>(t24));
    *_return_18 = implicit_cast<TNode<IntPtrT>>(t24);
    Goto(label_macro_end_1046);
  }
  BIND(label_macro_end_1046);
  return implicit_cast<TNode<IntPtrT>>((*_return_18).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint32(int32_t p_i) {
  TVARIABLE(Int32T, _return_19_impl);
  auto _return_19 = &_return_19_impl;
  USE(_return_19);
  Label label_macro_end_1047_impl(this, {_return_19});
  Label* label_macro_end_1047 = &label_macro_end_1047_impl;
  USE(label_macro_end_1047);
  // ../../src/builtins/base.tq:442:50
  {
    // ../../src/builtins/base.tq:443:3
    TNode<Int32T> t25 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int32_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t25));
    *_return_19 = implicit_cast<TNode<Int32T>>(t25);
    Goto(label_macro_end_1047);
  }
  BIND(label_macro_end_1047);
  return implicit_cast<TNode<Int32T>>((*_return_19).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(int32_t p_i) {
  TVARIABLE(Number, _return_20_impl);
  auto _return_20 = &_return_20_impl;
  USE(_return_20);
  Label label_macro_end_1048_impl(this, {_return_20});
  Label* label_macro_end_1048 = &label_macro_end_1048_impl;
  USE(label_macro_end_1048);
  // ../../src/builtins/base.tq:445:52
  {
    // ../../src/builtins/base.tq:446:3
    TNode<Number> t26 = UncheckedCast<Number>(NumberConstant(implicit_cast<int32_t>(p_i)));
    USE(implicit_cast<TNode<Number>>(t26));
    *_return_20 = implicit_cast<TNode<Number>>(t26);
    Goto(label_macro_end_1048);
  }
  BIND(label_macro_end_1048);
  return implicit_cast<TNode<Number>>((*_return_20).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(double p_f) {
  TVARIABLE(Number, _return_21_impl);
  auto _return_21 = &_return_21_impl;
  USE(_return_21);
  Label label_macro_end_1049_impl(this, {_return_21});
  Label* label_macro_end_1049 = &label_macro_end_1049_impl;
  USE(label_macro_end_1049);
  // ../../src/builtins/base.tq:449:54
  {
    // ../../src/builtins/base.tq:450:3
    TNode<Number> t27 = UncheckedCast<Number>(NumberConstant(implicit_cast<double>(p_f)));
    USE(implicit_cast<TNode<Number>>(t27));
    *_return_21 = implicit_cast<TNode<Number>>(t27);
    Goto(label_macro_end_1049);
  }
  BIND(label_macro_end_1049);
  return implicit_cast<TNode<Number>>((*_return_21).value());
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::from_constexpr6ATbool(bool p_b) {
  TVARIABLE(BoolT, _return_22_impl);
  auto _return_22 = &_return_22_impl;
  USE(_return_22);
  Label label_macro_end_1050_impl(this, {_return_22});
  Label* label_macro_end_1050 = &label_macro_end_1050_impl;
  USE(label_macro_end_1050);
  // ../../src/builtins/base.tq:453:47
  {
    // ../../src/builtins/base.tq:454:3
    TNode<BoolT> t28 = UncheckedCast<BoolT>(BoolConstant(implicit_cast<bool>(p_b)));
    USE(implicit_cast<TNode<BoolT>>(t28));
    *_return_22 = implicit_cast<TNode<BoolT>>(t28);
    Goto(label_macro_end_1050);
  }
  BIND(label_macro_end_1050);
  return implicit_cast<TNode<BoolT>>((*_return_22).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::from_constexpr14ATLanguageMode(LanguageMode p_b) {
  TVARIABLE(Smi, _return_23_impl);
  auto _return_23 = &_return_23_impl;
  USE(_return_23);
  Label label_macro_end_1051_impl(this, {_return_23});
  Label* label_macro_end_1051 = &label_macro_end_1051_impl;
  USE(label_macro_end_1051);
  // ../../src/builtins/base.tq:457:71
  {
    // ../../src/builtins/base.tq:458:3
    TNode<Smi> t29 = UncheckedCast<Smi>(LanguageModeConstant(implicit_cast<LanguageMode>(p_b)));
    USE(implicit_cast<TNode<Smi>>(t29));
    *_return_23 = implicit_cast<TNode<Smi>>(t29);
    Goto(label_macro_end_1051);
  }
  BIND(label_macro_end_1051);
  return implicit_cast<TNode<Smi>>((*_return_23).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr14ATElementsKind(ElementsKind p_e) {
  TVARIABLE(Int32T, _return_24_impl);
  auto _return_24 = &_return_24_impl;
  USE(_return_24);
  Label label_macro_end_1052_impl(this, {_return_24});
  Label* label_macro_end_1052 = &label_macro_end_1052_impl;
  USE(label_macro_end_1052);
  // ../../src/builtins/base.tq:461:71
  {
    // ../../src/builtins/base.tq:462:3
    TNode<Int32T> t30 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<ElementsKind>(p_e)));
    USE(implicit_cast<TNode<Int32T>>(t30));
    *_return_24 = implicit_cast<TNode<Int32T>>(t30);
    Goto(label_macro_end_1052);
  }
  BIND(label_macro_end_1052);
  return implicit_cast<TNode<Int32T>>((*_return_24).value());
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::from_constexpr8ATString(const char* p_s) {
  TVARIABLE(String, _return_25_impl);
  auto _return_25 = &_return_25_impl;
  USE(_return_25);
  Label label_macro_end_1053_impl(this, {_return_25});
  Label* label_macro_end_1053 = &label_macro_end_1053_impl;
  USE(label_macro_end_1053);
  // ../../src/builtins/base.tq:465:53
  {
    // ../../src/builtins/base.tq:466:3
    TNode<String> t31 = UncheckedCast<String>(StringConstant(implicit_cast<const char*>(p_s)));
    USE(implicit_cast<TNode<String>>(t31));
    *_return_25 = implicit_cast<TNode<String>>(t31);
    Goto(label_macro_end_1053);
  }
  BIND(label_macro_end_1053);
  return implicit_cast<TNode<String>>((*_return_25).value());
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapObject5ATSmi(const char* p_s) {
  TVARIABLE(Object, _return_26_impl);
  auto _return_26 = &_return_26_impl;
  USE(_return_26);
  Label label_macro_end_1054_impl(this, {_return_26});
  Label* label_macro_end_1054 = &label_macro_end_1054_impl;
  USE(label_macro_end_1054);
  // ../../src/builtins/base.tq:468:53
  {
    // ../../src/builtins/base.tq:469:3
    TNode<String> t32 = UncheckedCast<String>(StringConstant(implicit_cast<const char*>(p_s)));
    USE(implicit_cast<TNode<String>>(t32));
    *_return_26 = implicit_cast<TNode<Object>>(t32);
    Goto(label_macro_end_1054);
  }
  BIND(label_macro_end_1054);
  return implicit_cast<TNode<Object>>((*_return_26).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Number, _return_27_impl);
  auto _return_27 = &_return_27_impl;
  USE(_return_27);
  Label label_macro_end_1055_impl(this, {_return_27});
  Label* label_macro_end_1055 = &label_macro_end_1055_impl;
  USE(label_macro_end_1055);
  // ../../src/builtins/base.tq:476:35
  {
    // ../../src/builtins/base.tq:477:3
    TNode<Number> t33 = UncheckedCast<Number>(ChangeInt32ToTagged(implicit_cast<TNode<Int32T>>(p_i)));
    USE(implicit_cast<TNode<Number>>(t33));
    *_return_27 = implicit_cast<TNode<Number>>(t33);
    Goto(label_macro_end_1055);
  }
  BIND(label_macro_end_1055);
  return implicit_cast<TNode<Number>>((*_return_27).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<Int32T> p_i) {
  TVARIABLE(IntPtrT, _return_28_impl);
  auto _return_28 = &_return_28_impl;
  USE(_return_28);
  Label label_macro_end_1056_impl(this, {_return_28});
  Label* label_macro_end_1056 = &label_macro_end_1056_impl;
  USE(label_macro_end_1056);
  // ../../src/builtins/base.tq:479:35
  {
    // ../../src/builtins/base.tq:480:3
    TNode<IntPtrT> t34 = UncheckedCast<IntPtrT>(ChangeInt32ToIntPtr(implicit_cast<TNode<Int32T>>(p_i)));
    USE(implicit_cast<TNode<IntPtrT>>(t34));
    *_return_28 = implicit_cast<TNode<IntPtrT>>(t34);
    Goto(label_macro_end_1056);
  }
  BIND(label_macro_end_1056);
  return implicit_cast<TNode<IntPtrT>>((*_return_28).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Smi, _return_29_impl);
  auto _return_29 = &_return_29_impl;
  USE(_return_29);
  Label label_macro_end_1057_impl(this, {_return_29});
  Label* label_macro_end_1057 = &label_macro_end_1057_impl;
  USE(label_macro_end_1057);
  // ../../src/builtins/base.tq:482:29
  {
    // ../../src/builtins/base.tq:483:3
    TNode<Smi> t35 = UncheckedCast<Smi>(SmiFromInt32(implicit_cast<TNode<Int32T>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t35));
    *_return_29 = implicit_cast<TNode<Smi>>(t35);
    Goto(label_macro_end_1057);
  }
  BIND(label_macro_end_1057);
  return implicit_cast<TNode<Smi>>((*_return_29).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Number, _return_30_impl);
  auto _return_30 = &_return_30_impl;
  USE(_return_30);
  Label label_macro_end_1058_impl(this, {_return_30});
  Label* label_macro_end_1058 = &label_macro_end_1058_impl;
  USE(label_macro_end_1058);
  // ../../src/builtins/base.tq:486:37
  {
    // ../../src/builtins/base.tq:487:3
    TNode<Number> t36 = UncheckedCast<Number>(ChangeUint32ToTagged(implicit_cast<TNode<Uint32T>>(p_ui)));
    USE(implicit_cast<TNode<Number>>(t36));
    *_return_30 = implicit_cast<TNode<Number>>(t36);
    Goto(label_macro_end_1058);
  }
  BIND(label_macro_end_1058);
  return implicit_cast<TNode<Number>>((*_return_30).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Smi, _return_31_impl);
  auto _return_31 = &_return_31_impl;
  USE(_return_31);
  Label label_macro_end_1059_impl(this, {_return_31});
  Label* label_macro_end_1059 = &label_macro_end_1059_impl;
  USE(label_macro_end_1059);
  // ../../src/builtins/base.tq:489:31
  {
    // ../../src/builtins/base.tq:490:3
    TNode<Int32T> t37 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_ui)));
    USE(implicit_cast<TNode<Int32T>>(t37));
    TNode<Smi> t38 = UncheckedCast<Smi>(SmiFromInt32(implicit_cast<TNode<Int32T>>(t37)));
    USE(implicit_cast<TNode<Smi>>(t38));
    *_return_31 = implicit_cast<TNode<Smi>>(t38);
    Goto(label_macro_end_1059);
  }
  BIND(label_macro_end_1059);
  return implicit_cast<TNode<Smi>>((*_return_31).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<Uint32T> p_ui) {
  TVARIABLE(UintPtrT, _return_32_impl);
  auto _return_32 = &_return_32_impl;
  USE(_return_32);
  Label label_macro_end_1060_impl(this, {_return_32});
  Label* label_macro_end_1060 = &label_macro_end_1060_impl;
  USE(label_macro_end_1060);
  // ../../src/builtins/base.tq:492:39
  {
    // ../../src/builtins/base.tq:493:3
    TNode<UintPtrT> t39 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(implicit_cast<TNode<Uint32T>>(p_ui)));
    USE(implicit_cast<TNode<UintPtrT>>(t39));
    *_return_32 = implicit_cast<TNode<UintPtrT>>(t39);
    Goto(label_macro_end_1060);
  }
  BIND(label_macro_end_1060);
  return implicit_cast<TNode<UintPtrT>>((*_return_32).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::convert7ATint32(TNode<IntPtrT> p_i) {
  TVARIABLE(Int32T, _return_33_impl);
  auto _return_33 = &_return_33_impl;
  USE(_return_33);
  Label label_macro_end_1061_impl(this, {_return_33});
  Label* label_macro_end_1061 = &label_macro_end_1061_impl;
  USE(label_macro_end_1061);
  // ../../src/builtins/base.tq:496:34
  {
    // ../../src/builtins/base.tq:497:3
    TNode<Int32T> t40 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(implicit_cast<TNode<IntPtrT>>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t40));
    *_return_33 = implicit_cast<TNode<Int32T>>(t40);
    Goto(label_macro_end_1061);
  }
  BIND(label_macro_end_1061);
  return implicit_cast<TNode<Int32T>>((*_return_33).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<IntPtrT> p_i) {
  TVARIABLE(Smi, _return_34_impl);
  auto _return_34 = &_return_34_impl;
  USE(_return_34);
  Label label_macro_end_1062_impl(this, {_return_34});
  Label* label_macro_end_1062 = &label_macro_end_1062_impl;
  USE(label_macro_end_1062);
  // ../../src/builtins/base.tq:499:30
  {
    // ../../src/builtins/base.tq:500:3
    TNode<Smi> t41 = UncheckedCast<Smi>(SmiTag(implicit_cast<TNode<IntPtrT>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t41));
    *_return_34 = implicit_cast<TNode<Smi>>(t41);
    Goto(label_macro_end_1062);
  }
  BIND(label_macro_end_1062);
  return implicit_cast<TNode<Smi>>((*_return_34).value());
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::convert8ATuint32(TNode<UintPtrT> p_ui) {
  TVARIABLE(Uint32T, _return_35_impl);
  auto _return_35 = &_return_35_impl;
  USE(_return_35);
  Label label_macro_end_1063_impl(this, {_return_35});
  Label* label_macro_end_1063 = &label_macro_end_1063_impl;
  USE(label_macro_end_1063);
  // ../../src/builtins/base.tq:503:38
  {
    // ../../src/builtins/base.tq:504:3
    TNode<IntPtrT> t42 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(p_ui)));
    USE(implicit_cast<TNode<IntPtrT>>(t42));
    TNode<Int32T> t43 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(implicit_cast<TNode<IntPtrT>>(t42)));
    USE(implicit_cast<TNode<Int32T>>(t43));
    TNode<Uint32T> t44 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t43)));
    USE(implicit_cast<TNode<Uint32T>>(t44));
    *_return_35 = implicit_cast<TNode<Uint32T>>(t44);
    Goto(label_macro_end_1063);
  }
  BIND(label_macro_end_1063);
  return implicit_cast<TNode<Uint32T>>((*_return_35).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<Smi> p_s) {
  TVARIABLE(IntPtrT, _return_36_impl);
  auto _return_36 = &_return_36_impl;
  USE(_return_36);
  Label label_macro_end_1064_impl(this, {_return_36});
  Label* label_macro_end_1064 = &label_macro_end_1064_impl;
  USE(label_macro_end_1064);
  // ../../src/builtins/base.tq:507:33
  {
    // ../../src/builtins/base.tq:508:3
    TNode<IntPtrT> t45 = UncheckedCast<IntPtrT>(SmiUntag(implicit_cast<TNode<Smi>>(p_s)));
    USE(implicit_cast<TNode<IntPtrT>>(t45));
    *_return_36 = implicit_cast<TNode<IntPtrT>>(t45);
    Goto(label_macro_end_1064);
  }
  BIND(label_macro_end_1064);
  return implicit_cast<TNode<IntPtrT>>((*_return_36).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::convert7ATint32(TNode<Smi> p_s) {
  TVARIABLE(Int32T, _return_37_impl);
  auto _return_37 = &_return_37_impl;
  USE(_return_37);
  Label label_macro_end_1065_impl(this, {_return_37});
  Label* label_macro_end_1065 = &label_macro_end_1065_impl;
  USE(label_macro_end_1065);
  // ../../src/builtins/base.tq:510:31
  {
    // ../../src/builtins/base.tq:511:3
    TNode<Int32T> t46 = UncheckedCast<Int32T>(SmiToInt32(implicit_cast<TNode<Smi>>(p_s)));
    USE(implicit_cast<TNode<Int32T>>(t46));
    *_return_37 = implicit_cast<TNode<Int32T>>(t46);
    Goto(label_macro_end_1065);
  }
  BIND(label_macro_end_1065);
  return implicit_cast<TNode<Int32T>>((*_return_37).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<HeapNumber> p_h) {
  TVARIABLE(Float64T, _return_38_impl);
  auto _return_38 = &_return_38_impl;
  USE(_return_38);
  Label label_macro_end_1066_impl(this, {_return_38});
  Label* label_macro_end_1066 = &label_macro_end_1066_impl;
  USE(label_macro_end_1066);
  // ../../src/builtins/base.tq:514:42
  {
    // ../../src/builtins/base.tq:515:3
    TNode<Float64T> t47 = UncheckedCast<Float64T>(LoadHeapNumberValue(implicit_cast<TNode<HeapNumber>>(p_h)));
    USE(implicit_cast<TNode<Float64T>>(t47));
    *_return_38 = implicit_cast<TNode<Float64T>>(t47);
    Goto(label_macro_end_1066);
  }
  BIND(label_macro_end_1066);
  return implicit_cast<TNode<Float64T>>((*_return_38).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<Number> p_n) {
  TVARIABLE(Float64T, _return_39_impl);
  auto _return_39 = &_return_39_impl;
  USE(_return_39);
  Label label_macro_end_1067_impl(this, {_return_39});
  Label* label_macro_end_1067 = &label_macro_end_1067_impl;
  USE(label_macro_end_1067);
  // ../../src/builtins/base.tq:518:38
  {
    // ../../src/builtins/base.tq:519:3
    TNode<Float64T> t48 = UncheckedCast<Float64T>(ChangeNumberToFloat64(implicit_cast<TNode<Number>>(p_n)));
    USE(implicit_cast<TNode<Float64T>>(t48));
    *_return_39 = implicit_cast<TNode<Float64T>>(t48);
    Goto(label_macro_end_1067);
  }
  BIND(label_macro_end_1067);
  return implicit_cast<TNode<Float64T>>((*_return_39).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<Float32T> p_f) {
  TVARIABLE(Float64T, _return_40_impl);
  auto _return_40 = &_return_40_impl;
  USE(_return_40);
  Label label_macro_end_1068_impl(this, {_return_40});
  Label* label_macro_end_1068 = &label_macro_end_1068_impl;
  USE(label_macro_end_1068);
  // ../../src/builtins/base.tq:522:39
  {
    // ../../src/builtins/base.tq:523:3
    TNode<Float64T> t49 = UncheckedCast<Float64T>(ChangeFloat32ToFloat64(implicit_cast<TNode<Float32T>>(p_f)));
    USE(implicit_cast<TNode<Float64T>>(t49));
    *_return_40 = implicit_cast<TNode<Float64T>>(t49);
    Goto(label_macro_end_1068);
  }
  BIND(label_macro_end_1068);
  return implicit_cast<TNode<Float64T>>((*_return_40).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Float64T> p_d) {
  TVARIABLE(Number, _return_41_impl);
  auto _return_41 = &_return_41_impl;
  USE(_return_41);
  Label label_macro_end_1069_impl(this, {_return_41});
  Label* label_macro_end_1069 = &label_macro_end_1069_impl;
  USE(label_macro_end_1069);
  // ../../src/builtins/base.tq:526:37
  {
    // ../../src/builtins/base.tq:527:3
    TNode<HeapNumber> t50 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>(p_d)));
    USE(implicit_cast<TNode<HeapNumber>>(t50));
    *_return_41 = implicit_cast<TNode<Number>>(t50);
    Goto(label_macro_end_1069);
  }
  BIND(label_macro_end_1069);
  return implicit_cast<TNode<Number>>((*_return_41).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<Float64T> p_d) {
  TVARIABLE(UintPtrT, _return_42_impl);
  auto _return_42 = &_return_42_impl;
  USE(_return_42);
  Label label_macro_end_1070_impl(this, {_return_42});
  Label* label_macro_end_1070 = &label_macro_end_1070_impl;
  USE(label_macro_end_1070);
  // ../../src/builtins/base.tq:529:39
  {
    // ../../src/builtins/base.tq:530:3
    TNode<UintPtrT> t51 = UncheckedCast<UintPtrT>(ChangeFloat64ToUintPtr(implicit_cast<TNode<Float64T>>(p_d)));
    USE(implicit_cast<TNode<UintPtrT>>(t51));
    *_return_42 = implicit_cast<TNode<UintPtrT>>(t51);
    Goto(label_macro_end_1070);
  }
  BIND(label_macro_end_1070);
  return implicit_cast<TNode<UintPtrT>>((*_return_42).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(UintPtrT, _return_43_impl);
  auto _return_43 = &_return_43_impl;
  USE(_return_43);
  Label label_macro_end_1071_impl(this, {_return_43});
  Label* label_macro_end_1071 = &label_macro_end_1071_impl;
  USE(label_macro_end_1071);
  // ../../src/builtins/base.tq:533:38
  {
    // ../../src/builtins/base.tq:534:3
    TNode<UintPtrT> t52 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<RawPtrT>>(p_r)));
    USE(implicit_cast<TNode<UintPtrT>>(t52));
    *_return_43 = implicit_cast<TNode<UintPtrT>>(t52);
    Goto(label_macro_end_1071);
  }
  BIND(label_macro_end_1071);
  return implicit_cast<TNode<UintPtrT>>((*_return_43).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(IntPtrT, _return_44_impl);
  auto _return_44 = &_return_44_impl;
  USE(_return_44);
  Label label_macro_end_1072_impl(this, {_return_44});
  Label* label_macro_end_1072 = &label_macro_end_1072_impl;
  USE(label_macro_end_1072);
  // ../../src/builtins/base.tq:536:36
  {
    // ../../src/builtins/base.tq:537:3
    TNode<IntPtrT> t53 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<RawPtrT>>(p_r)));
    USE(implicit_cast<TNode<IntPtrT>>(t53));
    *_return_44 = implicit_cast<TNode<IntPtrT>>(t53);
    Goto(label_macro_end_1072);
  }
  BIND(label_macro_end_1072);
  return implicit_cast<TNode<IntPtrT>>((*_return_44).value());
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapNumber(TNode<Number> p_n) {
  TVARIABLE(HeapNumber, _return_45_impl);
  auto _return_45 = &_return_45_impl;
  USE(_return_45);
  Label label_macro_end_1073_impl(this, {_return_45});
  Label* label_macro_end_1073 = &label_macro_end_1073_impl;
  USE(label_macro_end_1073);
  // ../../src/builtins/base.tq:557:48
  {
    // ../../src/builtins/base.tq:558:3
    TNode<HeapNumber> t54 = UncheckedCast<HeapNumber>(UnsafeCastNumberToHeapNumber(implicit_cast<TNode<Number>>(p_n)));
    USE(implicit_cast<TNode<HeapNumber>>(t54));
    *_return_45 = implicit_cast<TNode<HeapNumber>>(t54);
    Goto(label_macro_end_1073);
  }
  BIND(label_macro_end_1073);
  return implicit_cast<TNode<HeapNumber>>((*_return_45).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATFixedArray(TNode<Object> p_o) {
  TVARIABLE(FixedArray, _return_46_impl);
  auto _return_46 = &_return_46_impl;
  USE(_return_46);
  Label label_macro_end_1074_impl(this, {_return_46});
  Label* label_macro_end_1074 = &label_macro_end_1074_impl;
  USE(label_macro_end_1074);
  // ../../src/builtins/base.tq:561:48
  {
    // ../../src/builtins/base.tq:562:3
    TNode<FixedArray> t55 = UncheckedCast<FixedArray>(UnsafeCastObjectToFixedArray(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedArray>>(t55));
    *_return_46 = implicit_cast<TNode<FixedArray>>(t55);
    Goto(label_macro_end_1074);
  }
  BIND(label_macro_end_1074);
  return implicit_cast<TNode<FixedArray>>((*_return_46).value());
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::unsafe_cast18ATFixedDoubleArray(TNode<Object> p_o) {
  TVARIABLE(FixedDoubleArray, _return_47_impl);
  auto _return_47 = &_return_47_impl;
  USE(_return_47);
  Label label_macro_end_1075_impl(this, {_return_47});
  Label* label_macro_end_1075 = &label_macro_end_1075_impl;
  USE(label_macro_end_1075);
  // ../../src/builtins/base.tq:564:60
  {
    // ../../src/builtins/base.tq:565:3
    TNode<FixedDoubleArray> t56 = UncheckedCast<FixedDoubleArray>(UnsafeCastObjectToFixedDoubleArray(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t56));
    *_return_47 = implicit_cast<TNode<FixedDoubleArray>>(t56);
    Goto(label_macro_end_1075);
  }
  BIND(label_macro_end_1075);
  return implicit_cast<TNode<FixedDoubleArray>>((*_return_47).value());
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapNumber(TNode<Object> p_o) {
  TVARIABLE(HeapNumber, _return_48_impl);
  auto _return_48 = &_return_48_impl;
  USE(_return_48);
  Label label_macro_end_1076_impl(this, {_return_48});
  Label* label_macro_end_1076 = &label_macro_end_1076_impl;
  USE(label_macro_end_1076);
  // ../../src/builtins/base.tq:567:48
  {
    // ../../src/builtins/base.tq:568:3
    TNode<HeapNumber> t57 = UncheckedCast<HeapNumber>(UnsafeCastObjectToHeapNumber(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<HeapNumber>>(t57));
    *_return_48 = implicit_cast<TNode<HeapNumber>>(t57);
    Goto(label_macro_end_1076);
  }
  BIND(label_macro_end_1076);
  return implicit_cast<TNode<HeapNumber>>((*_return_48).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::unsafe_cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_49_impl);
  auto _return_49 = &_return_49_impl;
  USE(_return_49);
  Label label_macro_end_1077_impl(this, {_return_49});
  Label* label_macro_end_1077 = &label_macro_end_1077_impl;
  USE(label_macro_end_1077);
  // ../../src/builtins/base.tq:570:44
  {
    // ../../src/builtins/base.tq:571:3
    TNode<JSReceiver> t58 = UncheckedCast<JSReceiver>(UnsafeCastObjectToCallable(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSReceiver>>(t58));
    *_return_49 = implicit_cast<TNode<JSReceiver>>(t58);
    Goto(label_macro_end_1077);
  }
  BIND(label_macro_end_1077);
  return implicit_cast<TNode<JSReceiver>>((*_return_49).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::unsafe_cast5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Smi, _return_50_impl);
  auto _return_50 = &_return_50_impl;
  USE(_return_50);
  Label label_macro_end_1078_impl(this, {_return_50});
  Label* label_macro_end_1078 = &label_macro_end_1078_impl;
  USE(label_macro_end_1078);
  // ../../src/builtins/base.tq:573:34
  {
    // ../../src/builtins/base.tq:574:3
    TNode<Smi> t59 = UncheckedCast<Smi>(UnsafeCastObjectToSmi(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Smi>>(t59));
    *_return_50 = implicit_cast<TNode<Smi>>(t59);
    Goto(label_macro_end_1078);
  }
  BIND(label_macro_end_1078);
  return implicit_cast<TNode<Smi>>((*_return_50).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::unsafe_cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Number, _return_51_impl);
  auto _return_51 = &_return_51_impl;
  USE(_return_51);
  Label label_macro_end_1079_impl(this, {_return_51});
  Label* label_macro_end_1079 = &label_macro_end_1079_impl;
  USE(label_macro_end_1079);
  // ../../src/builtins/base.tq:576:40
  {
    // ../../src/builtins/base.tq:577:3
    TNode<Number> t60 = UncheckedCast<Number>(UnsafeCastObjectToNumber(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Number>>(t60));
    *_return_51 = implicit_cast<TNode<Number>>(t60);
    Goto(label_macro_end_1079);
  }
  BIND(label_macro_end_1079);
  return implicit_cast<TNode<Number>>((*_return_51).value());
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapObject(TNode<Object> p_o) {
  TVARIABLE(HeapObject, _return_52_impl);
  auto _return_52 = &_return_52_impl;
  USE(_return_52);
  Label label_macro_end_1080_impl(this, {_return_52});
  Label* label_macro_end_1080 = &label_macro_end_1080_impl;
  USE(label_macro_end_1080);
  // ../../src/builtins/base.tq:579:48
  {
    // ../../src/builtins/base.tq:580:3
    TNode<HeapObject> t61 = UncheckedCast<HeapObject>(UnsafeCastObjectToHeapObject(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<HeapObject>>(t61));
    *_return_52 = implicit_cast<TNode<HeapObject>>(t61);
    Goto(label_macro_end_1080);
  }
  BIND(label_macro_end_1080);
  return implicit_cast<TNode<HeapObject>>((*_return_52).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::unsafe_cast9ATJSArray(TNode<Object> p_o) {
  TVARIABLE(JSArray, _return_53_impl);
  auto _return_53 = &_return_53_impl;
  USE(_return_53);
  Label label_macro_end_1081_impl(this, {_return_53});
  Label* label_macro_end_1081 = &label_macro_end_1081_impl;
  USE(label_macro_end_1081);
  // ../../src/builtins/base.tq:582:42
  {
    // ../../src/builtins/base.tq:583:3
    TNode<JSArray> t62 = UncheckedCast<JSArray>(UnsafeCastObjectToJSArray(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSArray>>(t62));
    *_return_53 = implicit_cast<TNode<JSArray>>(t62);
    Goto(label_macro_end_1081);
  }
  BIND(label_macro_end_1081);
  return implicit_cast<TNode<JSArray>>((*_return_53).value());
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::unsafe_cast21ATFixedTypedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedTypedArrayBase, _return_54_impl);
  auto _return_54 = &_return_54_impl;
  USE(_return_54);
  Label label_macro_end_1082_impl(this, {_return_54});
  Label* label_macro_end_1082 = &label_macro_end_1082_impl;
  USE(label_macro_end_1082);
  // ../../src/builtins/base.tq:585:66
  {
    // ../../src/builtins/base.tq:586:3
    TNode<FixedTypedArrayBase> t63 = UncheckedCast<FixedTypedArrayBase>(UnsafeCastObjectToFixedTypedArrayBase(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t63));
    *_return_54 = implicit_cast<TNode<FixedTypedArrayBase>>(t63);
    Goto(label_macro_end_1082);
  }
  BIND(label_macro_end_1082);
  return implicit_cast<TNode<FixedTypedArrayBase>>((*_return_54).value());
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::unsafe_cast18ATNumberDictionary(TNode<Object> p_o) {
  TVARIABLE(NumberDictionary, _return_55_impl);
  auto _return_55 = &_return_55_impl;
  USE(_return_55);
  Label label_macro_end_1083_impl(this, {_return_55});
  Label* label_macro_end_1083 = &label_macro_end_1083_impl;
  USE(label_macro_end_1083);
  // ../../src/builtins/base.tq:588:60
  {
    // ../../src/builtins/base.tq:589:3
    TNode<NumberDictionary> t64 = UncheckedCast<NumberDictionary>(UnsafeCastObjectToNumberDictionary(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<NumberDictionary>>(t64));
    *_return_55 = implicit_cast<TNode<NumberDictionary>>(t64);
    Goto(label_macro_end_1083);
  }
  BIND(label_macro_end_1083);
  return implicit_cast<TNode<NumberDictionary>>((*_return_55).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATJSReceiver(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_56_impl);
  auto _return_56 = &_return_56_impl;
  USE(_return_56);
  Label label_macro_end_1084_impl(this, {_return_56});
  Label* label_macro_end_1084 = &label_macro_end_1084_impl;
  USE(label_macro_end_1084);
  // ../../src/builtins/base.tq:591:48
  {
    // ../../src/builtins/base.tq:592:3
    TNode<JSReceiver> t65 = UncheckedCast<JSReceiver>(UnsafeCastObjectToJSReceiver(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSReceiver>>(t65));
    *_return_56 = implicit_cast<TNode<JSReceiver>>(t65);
    Goto(label_macro_end_1084);
  }
  BIND(label_macro_end_1084);
  return implicit_cast<TNode<JSReceiver>>((*_return_56).value());
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::unsafe_cast10ATJSObject(TNode<Object> p_o) {
  TVARIABLE(JSObject, _return_57_impl);
  auto _return_57 = &_return_57_impl;
  USE(_return_57);
  Label label_macro_end_1085_impl(this, {_return_57});
  Label* label_macro_end_1085 = &label_macro_end_1085_impl;
  USE(label_macro_end_1085);
  // ../../src/builtins/base.tq:594:44
  {
    // ../../src/builtins/base.tq:595:3
    TNode<JSObject> t66 = UncheckedCast<JSObject>(UnsafeCastObjectToJSObject(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSObject>>(t66));
    *_return_57 = implicit_cast<TNode<JSObject>>(t66);
    Goto(label_macro_end_1085);
  }
  BIND(label_macro_end_1085);
  return implicit_cast<TNode<JSObject>>((*_return_57).value());
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::unsafe_cast5ATMap(TNode<Object> p_o) {
  TVARIABLE(Map, _return_58_impl);
  auto _return_58 = &_return_58_impl;
  USE(_return_58);
  Label label_macro_end_1086_impl(this, {_return_58});
  Label* label_macro_end_1086 = &label_macro_end_1086_impl;
  USE(label_macro_end_1086);
  // ../../src/builtins/base.tq:597:34
  {
    // ../../src/builtins/base.tq:598:3
    TNode<Map> t67 = UncheckedCast<Map>(UnsafeCastObjectToMap(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Map>>(t67));
    *_return_58 = implicit_cast<TNode<Map>>(t67);
    Goto(label_macro_end_1086);
  }
  BIND(label_macro_end_1086);
  return implicit_cast<TNode<Map>>((*_return_58).value());
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::unsafe_cast16ATFixedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedArrayBase, _return_59_impl);
  auto _return_59 = &_return_59_impl;
  USE(_return_59);
  Label label_macro_end_1087_impl(this, {_return_59});
  Label* label_macro_end_1087 = &label_macro_end_1087_impl;
  USE(label_macro_end_1087);
  // ../../src/builtins/base.tq:600:56
  {
    // ../../src/builtins/base.tq:601:3
    TNode<FixedArrayBase> t68 = UncheckedCast<FixedArrayBase>(UnsafeCastObjectToFixedArrayBase(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedArrayBase>>(t68));
    *_return_59 = implicit_cast<TNode<FixedArrayBase>>(t68);
    Goto(label_macro_end_1087);
  }
  BIND(label_macro_end_1087);
  return implicit_cast<TNode<FixedArrayBase>>((*_return_59).value());
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::kCOWMap() {
  TNode<Object> t69 = UncheckedCast<Object>(LoadRoot(implicit_cast<Heap::RootListIndex>(Heap::kFixedCOWArrayMapRootIndex)));
  USE(implicit_cast<TNode<Object>>(t69));
  TNode<Map> t70 = UncheckedCast<Map>(unsafe_cast5ATMap(implicit_cast<TNode<Object>>(t69)));
  USE(implicit_cast<TNode<Map>>(t70));
  return implicit_cast<TNode<Map>>(t70);
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::kEmptyFixedArray() {
  TNode<Object> t71 = UncheckedCast<Object>(LoadRoot(implicit_cast<Heap::RootListIndex>(Heap::kEmptyFixedArrayRootIndex)));
  USE(implicit_cast<TNode<Object>>(t71));
  TNode<FixedArrayBase> t72 = UncheckedCast<FixedArrayBase>(unsafe_cast16ATFixedArrayBase(implicit_cast<TNode<Object>>(t71)));
  USE(implicit_cast<TNode<FixedArrayBase>>(t72));
  return implicit_cast<TNode<FixedArrayBase>>(t72);
}

void BaseBuiltinsFromDSLAssembler::EnsureFastJSArray(TNode<Context> p_context, TNode<Object> p_object, Label* label_Bailout_8) {
  Label label_macro_end_1088_impl(this, {});
  Label* label_macro_end_1088 = &label_macro_end_1088_impl;
  USE(label_macro_end_1088);
  // ../../src/builtins/base.tq:612:74
  {
    // ../../src/builtins/base.tq:613:3
    {
      Label label__True_9_impl(this);
      Label* label__True_9 = &label__True_9_impl;
      USE(label__True_9);
      Label label__False_10_impl(this, {});
      Label* label__False_10 = &label__False_10_impl;
      USE(label__False_10);
      BranchIfNotFastJSArray(implicit_cast<TNode<Object>>(p_object), implicit_cast<TNode<Context>>(p_context), label__True_9, label__False_10);
      if (label__True_9->is_used())
      {
        BIND(label__True_9);
        // ../../src/builtins/base.tq:613:48
        Goto(label_Bailout_8);
      }
      BIND(label__False_10);
    }
  }
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayElementWithSmiIndex(TNode<FixedDoubleArray> p_array, TNode<Smi> p_index, TNode<Float64T> p_value) {
  Label label_macro_end_1089_impl(this, {});
  Label* label_macro_end_1089 = &label_macro_end_1089_impl;
  USE(label_macro_end_1089);
  // ../../src/builtins/base.tq:663:58
  {
    // ../../src/builtins/base.tq:664:3
    StoreFixedDoubleArrayElement(implicit_cast<TNode<FixedDoubleArray>>(p_array), implicit_cast<TNode<Object>>(p_index), implicit_cast<TNode<Float64T>>(p_value), implicit_cast<ParameterMode>(SMI_PARAMETERS));
  }
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole12ATFixedArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_11) {
  TVARIABLE(Object, _return_60_impl);
  auto _return_60 = &_return_60_impl;
  USE(_return_60);
  Label label_macro_end_1090_impl(this, {_return_60});
  Label* label_macro_end_1090 = &label_macro_end_1090_impl;
  USE(label_macro_end_1090);
  // ../../src/builtins/base.tq:714:15
  {
    // ../../src/builtins/base.tq:715:3
    {
      Label label_try_done_574_1091_impl(this);
      Label* label_try_done_574_1091 = &label_try_done_574_1091_impl;
      USE(label_try_done_574_1091);
      Label label_Unexpected_12_impl(this);
      Label* label_Unexpected_12 = &label_Unexpected_12_impl;
      USE(label_Unexpected_12);
      Label label_try_begin_575_1092_impl(this);
      Label* label_try_begin_575_1092 = &label_try_begin_575_1092_impl;
      USE(label_try_begin_575_1092);
      Goto(label_try_begin_575_1092);
      if (label_try_begin_575_1092->is_used())
      {
        BIND(label_try_begin_575_1092);
        // ../../src/builtins/base.tq:715:7
        {
          // ../../src/builtins/base.tq:716:5
          TNode<FixedArrayBase> t73 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_a)));
          TNode<FixedArray> t74 = UncheckedCast<FixedArray>(cast12ATFixedArray(implicit_cast<TNode<HeapObject>>(t73), label_Unexpected_12));
          USE(implicit_cast<TNode<FixedArray>>(t74));
          TVARIABLE(FixedArray, elements_61_impl);
          auto elements_61 = &elements_61_impl;
          USE(elements_61);
          *elements_61 = implicit_cast<TNode<FixedArray>>(t74);
          // ../../src/builtins/base.tq:718:5
          TNode<Object> t75 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elements_61).value()), implicit_cast<TNode<Smi>>(p_index)));
          TVARIABLE(Object, e_62_impl);
          auto e_62 = &e_62_impl;
          USE(e_62);
          *e_62 = implicit_cast<TNode<Object>>(t75);
          // ../../src/builtins/base.tq:719:5
          {
            Label label__True_13_impl(this);
            Label* label__True_13 = &label__True_13_impl;
            USE(label__True_13);
            Label label__False_14_impl(this, {});
            Label* label__False_14 = &label__False_14_impl;
            USE(label__False_14);
            TNode<BoolT> t76 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*e_62).value()), implicit_cast<TNode<Object>>(Hole())));
            USE(implicit_cast<TNode<BoolT>>(t76));
            Branch(implicit_cast<TNode<BoolT>>(t76), label__True_13, label__False_14);
            if (label__True_13->is_used())
            {
              BIND(label__True_13);
              // ../../src/builtins/base.tq:719:20
              {
                // ../../src/builtins/base.tq:720:7
                Goto(label_IfHole_11);
              }
            }
            BIND(label__False_14);
          }
          // ../../src/builtins/base.tq:722:5
          *_return_60 = implicit_cast<TNode<Object>>((*e_62).value());
          Goto(label_macro_end_1090);
        }
      }
      if (label_Unexpected_12->is_used())
      {
        BIND(label_Unexpected_12);
        // ../../src/builtins/base.tq:724:20
        {
          // ../../src/builtins/base.tq:725:5
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_1090);
  return implicit_cast<TNode<Object>>((*_return_60).value());
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole18ATFixedDoubleArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_15) {
  TVARIABLE(Object, _return_63_impl);
  auto _return_63 = &_return_63_impl;
  USE(_return_63);
  Label label_macro_end_1093_impl(this, {_return_63});
  Label* label_macro_end_1093 = &label_macro_end_1093_impl;
  USE(label_macro_end_1093);
  // ../../src/builtins/base.tq:730:15
  {
    // ../../src/builtins/base.tq:731:3
    {
      Label label_try_done_576_1094_impl(this);
      Label* label_try_done_576_1094 = &label_try_done_576_1094_impl;
      USE(label_try_done_576_1094);
      Label label_Unexpected_16_impl(this);
      Label* label_Unexpected_16 = &label_Unexpected_16_impl;
      USE(label_Unexpected_16);
      Label label_try_begin_577_1095_impl(this);
      Label* label_try_begin_577_1095 = &label_try_begin_577_1095_impl;
      USE(label_try_begin_577_1095);
      Goto(label_try_begin_577_1095);
      if (label_try_begin_577_1095->is_used())
      {
        BIND(label_try_begin_577_1095);
        // ../../src/builtins/base.tq:731:7
        {
          // ../../src/builtins/base.tq:732:5
          TNode<FixedArrayBase> t77 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_a)));
          TNode<FixedDoubleArray> t78 = UncheckedCast<FixedDoubleArray>(cast18ATFixedDoubleArray(implicit_cast<TNode<HeapObject>>(t77), label_Unexpected_16));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t78));
          TVARIABLE(FixedDoubleArray, elements_64_impl);
          auto elements_64 = &elements_64_impl;
          USE(elements_64);
          *elements_64 = implicit_cast<TNode<FixedDoubleArray>>(t78);
          // ../../src/builtins/base.tq:734:5
          TNode<Float64T> t79 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elements_64).value()), implicit_cast<TNode<Smi>>(p_index), label_IfHole_15));
          USE(implicit_cast<TNode<Float64T>>(t79));
          TVARIABLE(Float64T, e_65_impl);
          auto e_65 = &e_65_impl;
          USE(e_65);
          *e_65 = implicit_cast<TNode<Float64T>>(t79);
          // ../../src/builtins/base.tq:735:5
          TNode<HeapNumber> t80 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>((*e_65).value())));
          USE(implicit_cast<TNode<HeapNumber>>(t80));
          *_return_63 = implicit_cast<TNode<Object>>(t80);
          Goto(label_macro_end_1093);
        }
      }
      if (label_Unexpected_16->is_used())
      {
        BIND(label_Unexpected_16);
        // ../../src/builtins/base.tq:737:20
        {
          // ../../src/builtins/base.tq:738:5
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_1093);
  return implicit_cast<TNode<Object>>((*_return_63).value());
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::NumberIsNaN(TNode<Number> p_number) {
  TVARIABLE(BoolT, _return_66_impl);
  auto _return_66 = &_return_66_impl;
  USE(_return_66);
  Label label_macro_end_1096_impl(this, {_return_66});
  Label* label_macro_end_1096 = &label_macro_end_1096_impl;
  USE(label_macro_end_1096);
  // ../../src/builtins/base.tq:754:41
  {
    // ../../src/builtins/base.tq:755:3
    {
      // ../../src/builtins/base.tq:755:14
      TNode<Number> _value_578_impl;
      auto _value_578 = &_value_578_impl;
      USE(_value_578);
      *_value_578 = implicit_cast<TNode<Number>>(p_number);
      // ../../src/builtins/base.tq:756:5
      {
        Label label_try_done_579_1097_impl(this);
        Label* label_try_done_579_1097 = &label_try_done_579_1097_impl;
        USE(label_try_done_579_1097);
        Label label__NextCase_17_impl(this);
        Label* label__NextCase_17 = &label__NextCase_17_impl;
        USE(label__NextCase_17);
        Label label_try_begin_580_1098_impl(this);
        Label* label_try_begin_580_1098 = &label_try_begin_580_1098_impl;
        USE(label_try_begin_580_1098);
        Goto(label_try_begin_580_1098);
        if (label_try_begin_580_1098->is_used())
        {
          BIND(label_try_begin_580_1098);
          // ../../src/builtins/base.tq:756:5
          {
            // ../../src/builtins/base.tq:756:5
            TNode<Smi> t81 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>((*_value_578)), label__NextCase_17));
            USE(implicit_cast<TNode<Smi>>(t81));
            TNode<Smi> _case_value_581_impl;
            auto _case_value_581 = &_case_value_581_impl;
            USE(_case_value_581);
            *_case_value_581 = implicit_cast<TNode<Smi>>(t81);
            // ../../src/builtins/base.tq:756:16
            {
              // ../../src/builtins/base.tq:757:7
              TNode<BoolT> t82 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
              *_return_66 = implicit_cast<TNode<BoolT>>(t82);
              Goto(label_macro_end_1096);
            }
          }
        }
        if (label__NextCase_17->is_used())
        {
          BIND(label__NextCase_17);
          // ../../src/builtins/base.tq:756:5
          {
            // ../../src/builtins/base.tq:758:7
            TNode<HeapNumber> hn_582_impl;
            auto hn_582 = &hn_582_impl;
            USE(hn_582);
            *hn_582 = implicit_cast<TNode<HeapNumber>>(UncheckedCast<HeapNumber>(implicit_cast<TNode<Number>>((*_value_578))));
            // ../../src/builtins/base.tq:758:30
            {
              // ../../src/builtins/base.tq:759:7
              TNode<Float64T> t83 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<HeapNumber>>((*hn_582))));
              USE(implicit_cast<TNode<Float64T>>(t83));
              TVARIABLE(Float64T, value_67_impl);
              auto value_67 = &value_67_impl;
              USE(value_67);
              *value_67 = implicit_cast<TNode<Float64T>>(t83);
              // ../../src/builtins/base.tq:760:7
              TNode<BoolT> t84 = UncheckedCast<BoolT>(Float64NotEqual(implicit_cast<TNode<Float64T>>((*value_67).value()), implicit_cast<TNode<Float64T>>((*value_67).value())));
              USE(implicit_cast<TNode<BoolT>>(t84));
              *_return_66 = implicit_cast<TNode<BoolT>>(t84);
              Goto(label_macro_end_1096);
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1096);
  return implicit_cast<TNode<BoolT>>((*_return_66).value());
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ToBoolean(TNode<Object> p_obj) {
  TVARIABLE(BoolT, _return_68_impl);
  auto _return_68 = &_return_68_impl;
  USE(_return_68);
  Label label_macro_end_1099_impl(this, {_return_68});
  Label* label_macro_end_1099 = &label_macro_end_1099_impl;
  USE(label_macro_end_1099);
  // ../../src/builtins/base.tq:767:36
  {
    // ../../src/builtins/base.tq:768:3
    {
      Label label__True_18_impl(this);
      Label* label__True_18 = &label__True_18_impl;
      USE(label__True_18);
      Label label__False_19_impl(this);
      Label* label__False_19 = &label__False_19_impl;
      USE(label__False_19);
      Label label_if_done_label_583_1100_impl(this, {});
      Label* label_if_done_label_583_1100 = &label_if_done_label_583_1100_impl;
      USE(label_if_done_label_583_1100);
      BranchIfToBooleanIsTrue(implicit_cast<TNode<Object>>(p_obj), label__True_18, label__False_19);
      if (label__True_18->is_used())
      {
        BIND(label__True_18);
        // ../../src/builtins/base.tq:768:37
        {
          // ../../src/builtins/base.tq:769:5
          TNode<BoolT> t85 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
          *_return_68 = implicit_cast<TNode<BoolT>>(t85);
          Goto(label_macro_end_1099);
        }
      }
      if (label__False_19->is_used())
      {
        BIND(label__False_19);
        // ../../src/builtins/base.tq:770:10
        {
          // ../../src/builtins/base.tq:771:5
          TNode<BoolT> t86 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
          *_return_68 = implicit_cast<TNode<BoolT>>(t86);
          Goto(label_macro_end_1099);
        }
      }
    }
  }
  BIND(label_macro_end_1099);
  return implicit_cast<TNode<BoolT>>((*_return_68).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::ToIndex(TNode<Object> p_input, TNode<Context> p_context, Label* label_RangeError_20) {
  TVARIABLE(Number, _return_69_impl);
  auto _return_69 = &_return_69_impl;
  USE(_return_69);
  Label label_macro_end_1101_impl(this, {_return_69});
  Label* label_macro_end_1101 = &label_macro_end_1101_impl;
  USE(label_macro_end_1101);
  // ../../src/builtins/base.tq:775:74
  {
    // ../../src/builtins/base.tq:776:3
    {
      Label label__True_21_impl(this);
      Label* label__True_21 = &label__True_21_impl;
      USE(label__True_21);
      Label label__False_22_impl(this, {});
      Label* label__False_22 = &label__False_22_impl;
      USE(label__False_22);
      TNode<BoolT> t87 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_input), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t87));
      Branch(implicit_cast<TNode<BoolT>>(t87), label__True_21, label__False_22);
      if (label__True_21->is_used())
      {
        BIND(label__True_21);
        // ../../src/builtins/base.tq:776:27
        {
          // ../../src/builtins/base.tq:777:5
          int31_t t88 = 0;
          TNode<Number> t89 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t88)));
          *_return_69 = implicit_cast<TNode<Number>>(t89);
          Goto(label_macro_end_1101);
        }
      }
      BIND(label__False_22);
    }
    // ../../src/builtins/base.tq:780:3
    TNode<Number> t90 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_input), implicit_cast<ToIntegerTruncationMode>(ToIntegerTruncationMode::kTruncateMinusZero)));
    USE(implicit_cast<TNode<Number>>(t90));
    TVARIABLE(Number, value_70_impl);
    auto value_70 = &value_70_impl;
    USE(value_70);
    *value_70 = implicit_cast<TNode<Number>>(t90);
    // ../../src/builtins/base.tq:781:3
    {
      Label label__True_23_impl(this);
      Label* label__True_23 = &label__True_23_impl;
      USE(label__True_23);
      Label label__False_24_impl(this, {});
      Label* label__False_24 = &label__False_24_impl;
      USE(label__False_24);
      Label label__False_25_impl(this);
      Label* label__False_25 = &label__False_25_impl;
      USE(label__False_25);
      int31_t t91 = 0;
      TNode<Number> t92 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t91)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*value_70).value()), implicit_cast<TNode<Number>>(t92), label__True_23, label__False_25);
      BIND(label__False_25);
      TNode<Number> t93 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(kMaxSafeInteger)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*value_70).value()), implicit_cast<TNode<Number>>(t93), label__True_23, label__False_24);
      if (label__True_23->is_used())
      {
        BIND(label__True_23);
        // ../../src/builtins/base.tq:781:45
        {
          // ../../src/builtins/base.tq:782:5
          Goto(label_RangeError_20);
        }
      }
      BIND(label__False_24);
    }
    // ../../src/builtins/base.tq:785:3
    *_return_69 = implicit_cast<TNode<Number>>((*value_70).value());
    Goto(label_macro_end_1101);
  }
  BIND(label_macro_end_1101);
  return implicit_cast<TNode<Number>>((*_return_69).value());
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::unsafe_cast108FT9ATContext22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Code, _return_422_impl);
  auto _return_422 = &_return_422_impl;
  USE(_return_422);
  Label label_macro_end_1386_impl(this, {_return_422});
  Label* label_macro_end_1386 = &label_macro_end_1386_impl;
  USE(label_macro_end_1386);
  // ../../third_party/v8/builtins/array-sort.tq:262:62
  {
    // ../../third_party/v8/builtins/array-sort.tq:263:5
    TNode<Code> t2369 = UncheckedCast<Code>(UnsafeCastObjectToCompareBuiltinFn(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Code>>(t2369));
    *_return_422 = implicit_cast<TNode<Code>>(t2369);
    Goto(label_macro_end_1386);
  }
  BIND(label_macro_end_1386);
  return implicit_cast<TNode<Code>>((*_return_422).value());
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::unsafe_cast70FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Code, _return_423_impl);
  auto _return_423 = &_return_423_impl;
  USE(_return_423);
  Label label_macro_end_1387_impl(this, {_return_423});
  Label* label_macro_end_1387 = &label_macro_end_1387_impl;
  USE(label_macro_end_1387);
  // ../../third_party/v8/builtins/array-sort.tq:267:42
  {
    // ../../third_party/v8/builtins/array-sort.tq:268:5
    TNode<Code> t2370 = UncheckedCast<Code>(UnsafeCastObjectToLoadFn(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Code>>(t2370));
    *_return_423 = implicit_cast<TNode<Code>>(t2370);
    Goto(label_macro_end_1387);
  }
  BIND(label_macro_end_1387);
  return implicit_cast<TNode<Code>>((*_return_423).value());
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::unsafe_cast76FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Code, _return_424_impl);
  auto _return_424 = &_return_424_impl;
  USE(_return_424);
  Label label_macro_end_1388_impl(this, {_return_424});
  Label* label_macro_end_1388 = &label_macro_end_1388_impl;
  USE(label_macro_end_1388);
  // ../../third_party/v8/builtins/array-sort.tq:272:44
  {
    // ../../third_party/v8/builtins/array-sort.tq:273:5
    TNode<Code> t2371 = UncheckedCast<Code>(UnsafeCastObjectToStoreFn(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Code>>(t2371));
    *_return_424 = implicit_cast<TNode<Code>>(t2371);
    Goto(label_macro_end_1388);
  }
  BIND(label_macro_end_1388);
  return implicit_cast<TNode<Code>>((*_return_424).value());
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::unsafe_cast84FT9ATContext12ATJSReceiver22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi9ATBoolean(TNode<Object> p_o) {
  TVARIABLE(Code, _return_425_impl);
  auto _return_425 = &_return_425_impl;
  USE(_return_425);
  Label label_macro_end_1389_impl(this, {_return_425});
  Label* label_macro_end_1389 = &label_macro_end_1389_impl;
  USE(label_macro_end_1389);
  // ../../third_party/v8/builtins/array-sort.tq:278:70
  {
    // ../../third_party/v8/builtins/array-sort.tq:279:5
    TNode<Code> t2372 = UncheckedCast<Code>(UnsafeCastObjectToCanUseSameAccessorFn(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Code>>(t2372));
    *_return_425 = implicit_cast<TNode<Code>>(t2372);
    Goto(label_macro_end_1389);
  }
  BIND(label_macro_end_1389);
  return implicit_cast<TNode<Code>>((*_return_425).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::cast12ATFixedArray(TNode<HeapObject> p_o, Label* label_CastError_964) {
  TVARIABLE(FixedArray, _return_528_impl);
  auto _return_528 = &_return_528_impl;
  USE(_return_528);
  Label label_macro_end_1496_impl(this, {_return_528});
  Label* label_macro_end_1496 = &label_macro_end_1496_impl;
  USE(label_macro_end_1496);
  // ../../src/builtins/base.tq:361:57
  {
    // ../../src/builtins/base.tq:362:3
    TNode<FixedArray> t3304 = UncheckedCast<FixedArray>(cast_HeapObject12ATFixedArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_964));
    USE(implicit_cast<TNode<FixedArray>>(t3304));
    *_return_528 = implicit_cast<TNode<FixedArray>>(t3304);
    Goto(label_macro_end_1496);
  }
  BIND(label_macro_end_1496);
  return implicit_cast<TNode<FixedArray>>((*_return_528).value());
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::cast18ATFixedDoubleArray(TNode<HeapObject> p_o, Label* label_CastError_966) {
  TVARIABLE(FixedDoubleArray, _return_530_impl);
  auto _return_530 = &_return_530_impl;
  USE(_return_530);
  Label label_macro_end_1497_impl(this, {_return_530});
  Label* label_macro_end_1497 = &label_macro_end_1497_impl;
  USE(label_macro_end_1497);
  // ../../src/builtins/base.tq:361:57
  {
    // ../../src/builtins/base.tq:362:3
    TNode<FixedDoubleArray> t3305 = UncheckedCast<FixedDoubleArray>(cast_HeapObject18ATFixedDoubleArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_966));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t3305));
    *_return_530 = implicit_cast<TNode<FixedDoubleArray>>(t3305);
    Goto(label_macro_end_1497);
  }
  BIND(label_macro_end_1497);
  return implicit_cast<TNode<FixedDoubleArray>>((*_return_530).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::cast9ATJSArray(TNode<Object> p_o, Label* label_CastError_970) {
  TVARIABLE(JSArray, _return_535_impl);
  auto _return_535 = &_return_535_impl;
  USE(_return_535);
  Label label_macro_end_1498_impl(this, {_return_535});
  Label* label_macro_end_1498 = &label_macro_end_1498_impl;
  USE(label_macro_end_1498);
  // ../../src/builtins/base.tq:367:53
  {
    // ../../src/builtins/base.tq:368:3
    TNode<HeapObject> t3306 = UncheckedCast<HeapObject>(TaggedToHeapObject(implicit_cast<TNode<Object>>(p_o), label_CastError_970));
    USE(implicit_cast<TNode<HeapObject>>(t3306));
    TNode<JSArray> t3307 = UncheckedCast<JSArray>(cast_HeapObject9ATJSArray(implicit_cast<TNode<HeapObject>>(t3306), label_CastError_970));
    USE(implicit_cast<TNode<JSArray>>(t3307));
    *_return_535 = implicit_cast<TNode<JSArray>>(t3307);
    Goto(label_macro_end_1498);
  }
  BIND(label_macro_end_1498);
  return implicit_cast<TNode<JSArray>>((*_return_535).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o, Label* label_CastError_972) {
  TVARIABLE(JSReceiver, _return_538_impl);
  auto _return_538 = &_return_538_impl;
  USE(_return_538);
  Label label_macro_end_1499_impl(this, {_return_538});
  Label* label_macro_end_1499 = &label_macro_end_1499_impl;
  USE(label_macro_end_1499);
  // ../../src/builtins/base.tq:367:53
  {
    // ../../src/builtins/base.tq:368:3
    TNode<HeapObject> t3308 = UncheckedCast<HeapObject>(TaggedToHeapObject(implicit_cast<TNode<Object>>(p_o), label_CastError_972));
    USE(implicit_cast<TNode<HeapObject>>(t3308));
    TNode<JSReceiver> t3309 = UncheckedCast<JSReceiver>(cast_HeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<HeapObject>>(t3308), label_CastError_972));
    USE(implicit_cast<TNode<JSReceiver>>(t3309));
    *_return_538 = implicit_cast<TNode<JSReceiver>>(t3309);
    Goto(label_macro_end_1499);
  }
  BIND(label_macro_end_1499);
  return implicit_cast<TNode<JSReceiver>>((*_return_538).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::cast9ATJSArray(TNode<HeapObject> p_o, Label* label_CastError_969) {
  TVARIABLE(JSArray, _return_534_impl);
  auto _return_534 = &_return_534_impl;
  USE(_return_534);
  Label label_macro_end_1500_impl(this, {_return_534});
  Label* label_macro_end_1500 = &label_macro_end_1500_impl;
  USE(label_macro_end_1500);
  // ../../src/builtins/base.tq:361:57
  {
    // ../../src/builtins/base.tq:362:3
    TNode<JSArray> t3310 = UncheckedCast<JSArray>(cast_HeapObject9ATJSArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_969));
    USE(implicit_cast<TNode<JSArray>>(t3310));
    *_return_534 = implicit_cast<TNode<JSArray>>(t3310);
    Goto(label_macro_end_1500);
  }
  BIND(label_macro_end_1500);
  return implicit_cast<TNode<JSArray>>((*_return_534).value());
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::cast12ATJSDataView(TNode<Object> p_o, Label* label_CastError_1013) {
  TVARIABLE(JSDataView, _return_555_impl);
  auto _return_555 = &_return_555_impl;
  USE(_return_555);
  Label label_macro_end_1529_impl(this, {_return_555});
  Label* label_macro_end_1529 = &label_macro_end_1529_impl;
  USE(label_macro_end_1529);
  // ../../src/builtins/base.tq:367:53
  {
    // ../../src/builtins/base.tq:368:3
    TNode<HeapObject> t3461 = UncheckedCast<HeapObject>(TaggedToHeapObject(implicit_cast<TNode<Object>>(p_o), label_CastError_1013));
    USE(implicit_cast<TNode<HeapObject>>(t3461));
    TNode<JSDataView> t3462 = UncheckedCast<JSDataView>(cast_HeapObject12ATJSDataView(implicit_cast<TNode<HeapObject>>(t3461), label_CastError_1013));
    USE(implicit_cast<TNode<JSDataView>>(t3462));
    *_return_555 = implicit_cast<TNode<JSDataView>>(t3462);
    Goto(label_macro_end_1529);
  }
  BIND(label_macro_end_1529);
  return implicit_cast<TNode<JSDataView>>((*_return_555).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_558_impl);
  auto _return_558 = &_return_558_impl;
  USE(_return_558);
  Label label_macro_end_1532_impl(this, {_return_558});
  Label* label_macro_end_1532 = &label_macro_end_1532_impl;
  USE(label_macro_end_1532);
  // ../../src/builtins/base.tq:472:48
  {
    // ../../src/builtins/base.tq:473:3
    TNode<IntPtrT> t3463 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(p_i)));
    *_return_558 = implicit_cast<TNode<IntPtrT>>(t3463);
    Goto(label_macro_end_1532);
  }
  BIND(label_macro_end_1532);
  return implicit_cast<TNode<IntPtrT>>((*_return_558).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::cast12ATFixedArray(TNode<Object> p_o, Label* label_CastError_965) {
  TVARIABLE(FixedArray, _return_529_impl);
  auto _return_529 = &_return_529_impl;
  USE(_return_529);
  Label label_macro_end_1536_impl(this, {_return_529});
  Label* label_macro_end_1536 = &label_macro_end_1536_impl;
  USE(label_macro_end_1536);
  // ../../src/builtins/base.tq:367:53
  {
    // ../../src/builtins/base.tq:368:3
    TNode<HeapObject> t3468 = UncheckedCast<HeapObject>(TaggedToHeapObject(implicit_cast<TNode<Object>>(p_o), label_CastError_965));
    USE(implicit_cast<TNode<HeapObject>>(t3468));
    TNode<FixedArray> t3469 = UncheckedCast<FixedArray>(cast_HeapObject12ATFixedArray(implicit_cast<TNode<HeapObject>>(t3468), label_CastError_965));
    USE(implicit_cast<TNode<FixedArray>>(t3469));
    *_return_529 = implicit_cast<TNode<FixedArray>>(t3469);
    Goto(label_macro_end_1536);
  }
  BIND(label_macro_end_1536);
  return implicit_cast<TNode<FixedArray>>((*_return_529).value());
}

}  // namespace internal
}  // namespace v8

