#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::GetLengthProperty(TNode<Context> p_context, TNode<Object> p_o) {
  TVARIABLE(Number, _return_71_impl);
  auto _return_71 = &_return_71_impl;
  USE(_return_71);
  Label label_macro_end_1102_impl(this, {_return_71});
  Label* label_macro_end_1102 = &label_macro_end_1102_impl;
  USE(label_macro_end_1102);
  // ../../src/builtins/array.tq:17:64
  {
    // ../../src/builtins/array.tq:18:5
    {
      Label label__True_26_impl(this);
      Label* label__True_26 = &label__True_26_impl;
      USE(label__True_26);
      Label label__False_27_impl(this);
      Label* label__False_27 = &label__False_27_impl;
      USE(label__False_27);
      Label label_if_done_label_584_1103_impl(this, {});
      Label* label_if_done_label_584_1103 = &label_if_done_label_584_1103_impl;
      USE(label_if_done_label_584_1103);
      BranchIfFastJSArray(implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Context>>(p_context), label__True_26, label__False_27);
      if (label__True_26->is_used())
      {
        BIND(label__True_26);
        // ../../src/builtins/array.tq:18:42
        {
          // ../../src/builtins/array.tq:19:7
          TNode<JSArray> t94 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_o)));
          USE(implicit_cast<TNode<JSArray>>(t94));
          TVARIABLE(JSArray, a_72_impl);
          auto a_72 = &a_72_impl;
          USE(a_72);
          *a_72 = implicit_cast<TNode<JSArray>>(t94);
          // ../../src/builtins/array.tq:20:7
          TNode<Smi> t95 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_72).value())));
          *_return_71 = implicit_cast<TNode<Number>>(t95);
          Goto(label_macro_end_1102);
        }
      }
      if (label__False_27->is_used())
      {
        BIND(label__False_27);
        // ../../src/builtins/array.tq:22:7
        {
          // ../../src/builtins/array.tq:23:9
          const char* t96 = "length";
          TNode<Object> t97 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t96)));
          TNode<Object> t98 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>(t97)));
          USE(implicit_cast<TNode<Object>>(t98));
          TNode<Number> t99 = UncheckedCast<Number>(ToLength_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t98)));
          USE(implicit_cast<TNode<Number>>(t99));
          *_return_71 = implicit_cast<TNode<Number>>(t99);
          Goto(label_macro_end_1102);
        }
      }
    }
  }
  BIND(label_macro_end_1102);
  return implicit_cast<TNode<Number>>((*_return_71).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArraySplice(TNode<Context> p_context, CodeStubArguments* p_args, TNode<Object> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, Label* label_Bailout_28) {
  TVARIABLE(Object, _return_73_impl);
  auto _return_73 = &_return_73_impl;
  USE(_return_73);
  Label label_macro_end_1104_impl(this, {_return_73});
  Label* label_macro_end_1104 = &label_macro_end_1104_impl;
  USE(label_macro_end_1104);
  // ../../src/builtins/array.tq:31:18
  {
    // ../../src/builtins/array.tq:32:5
    TNode<Smi> t100 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_originalLengthNumber), label_Bailout_28));
    USE(implicit_cast<TNode<Smi>>(t100));
    TVARIABLE(Smi, originalLength_74_impl);
    auto originalLength_74 = &originalLength_74_impl;
    USE(originalLength_74);
    *originalLength_74 = implicit_cast<TNode<Smi>>(t100);
    // ../../src/builtins/array.tq:33:5
    TNode<Smi> t101 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_actualStartNumber), label_Bailout_28));
    USE(implicit_cast<TNode<Smi>>(t101));
    TVARIABLE(Smi, actualStart_75_impl);
    auto actualStart_75 = &actualStart_75_impl;
    USE(actualStart_75);
    *actualStart_75 = implicit_cast<TNode<Smi>>(t101);
    // ../../src/builtins/array.tq:34:5
    TNode<Smi> t102 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_actualDeleteCountNumber), label_Bailout_28));
    USE(implicit_cast<TNode<Smi>>(t102));
    TVARIABLE(Smi, actualDeleteCount_76_impl);
    auto actualDeleteCount_76 = &actualDeleteCount_76_impl;
    USE(actualDeleteCount_76);
    *actualDeleteCount_76 = implicit_cast<TNode<Smi>>(t102);
    // ../../src/builtins/array.tq:36:5
    TNode<Smi> t103 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>((*actualDeleteCount_76).value())));
    USE(implicit_cast<TNode<Smi>>(t103));
    TVARIABLE(Smi, lengthDelta_77_impl);
    auto lengthDelta_77 = &lengthDelta_77_impl;
    USE(lengthDelta_77);
    *lengthDelta_77 = implicit_cast<TNode<Smi>>(t103);
    // ../../src/builtins/array.tq:37:5
    TNode<Smi> t104 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*originalLength_74).value()), implicit_cast<TNode<Smi>>((*lengthDelta_77).value())));
    USE(implicit_cast<TNode<Smi>>(t104));
    TVARIABLE(Smi, newLength_78_impl);
    auto newLength_78 = &newLength_78_impl;
    USE(newLength_78);
    *newLength_78 = implicit_cast<TNode<Smi>>(t104);
    // ../../src/builtins/array.tq:39:5
    TNode<JSArray> t105 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<Object>>(p_o), label_Bailout_28));
    USE(implicit_cast<TNode<JSArray>>(t105));
    TVARIABLE(JSArray, a_79_impl);
    auto a_79 = &a_79_impl;
    USE(a_79);
    *a_79 = implicit_cast<TNode<JSArray>>(t105);
    // ../../src/builtins/array.tq:41:5
    TNode<Map> t106 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_79).value())));
    TVARIABLE(Map, map_80_impl);
    auto map_80 = &map_80_impl;
    USE(map_80);
    *map_80 = implicit_cast<TNode<Map>>(t106);
    // ../../src/builtins/array.tq:42:5
    {
      Label label__True_29_impl(this);
      Label* label__True_29 = &label__True_29_impl;
      USE(label__True_29);
      Label label__False_30_impl(this, {});
      Label* label__False_30 = &label__False_30_impl;
      USE(label__False_30);
      TNode<BoolT> t107 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Map>>((*map_80).value())));
      USE(implicit_cast<TNode<BoolT>>(t107));
      TNode<BoolT> t108 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t107)));
      USE(implicit_cast<TNode<BoolT>>(t108));
      Branch(implicit_cast<TNode<BoolT>>(t108), label__True_29, label__False_30);
      if (label__True_29->is_used())
      {
        BIND(label__True_29);
        // ../../src/builtins/array.tq:42:58
        Goto(label_Bailout_28);
      }
      BIND(label__False_30);
    }
    // ../../src/builtins/array.tq:43:5
    {
      Label label__True_31_impl(this);
      Label* label__True_31 = &label__True_31_impl;
      USE(label__True_31);
      Label label__False_32_impl(this, {});
      Label* label__False_32 = &label__False_32_impl;
      USE(label__False_32);
      TNode<BoolT> t109 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
      USE(implicit_cast<TNode<BoolT>>(t109));
      Branch(implicit_cast<TNode<BoolT>>(t109), label__True_31, label__False_32);
      if (label__True_31->is_used())
      {
        BIND(label__True_31);
        // ../../src/builtins/array.tq:43:45
        Goto(label_Bailout_28);
      }
      BIND(label__False_32);
    }
    // ../../src/builtins/array.tq:44:5
    {
      Label label__True_33_impl(this);
      Label* label__True_33 = &label__True_33_impl;
      USE(label__True_33);
      Label label__False_34_impl(this, {});
      Label* label__False_34 = &label__False_34_impl;
      USE(label__False_34);
      TNode<BoolT> t110 = UncheckedCast<BoolT>(IsArraySpeciesProtectorCellInvalid());
      USE(implicit_cast<TNode<BoolT>>(t110));
      Branch(implicit_cast<TNode<BoolT>>(t110), label__True_33, label__False_34);
      if (label__True_33->is_used())
      {
        BIND(label__True_33);
        // ../../src/builtins/array.tq:44:47
        Goto(label_Bailout_28);
      }
      BIND(label__False_34);
    }
    // ../../src/builtins/array.tq:47:5
    TNode<Int32T> t111 = UncheckedCast<Int32T>(EnsureArrayPushable(implicit_cast<TNode<Map>>((*map_80).value()), label_Bailout_28));
    USE(implicit_cast<TNode<Int32T>>(t111));
    TVARIABLE(Int32T, elementsKind_81_impl);
    auto elementsKind_81 = &elementsKind_81_impl;
    USE(elementsKind_81);
    *elementsKind_81 = implicit_cast<TNode<Int32T>>(t111);
    // ../../src/builtins/array.tq:48:5
    {
      Label label__True_35_impl(this);
      Label* label__True_35 = &label__True_35_impl;
      USE(label__True_35);
      Label label__False_36_impl(this, {});
      Label* label__False_36 = &label__False_36_impl;
      USE(label__False_36);
      TNode<BoolT> t112 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_81).value())));
      USE(implicit_cast<TNode<BoolT>>(t112));
      TNode<BoolT> t113 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t112)));
      USE(implicit_cast<TNode<BoolT>>(t113));
      Branch(implicit_cast<TNode<BoolT>>(t113), label__True_35, label__False_36);
      if (label__True_35->is_used())
      {
        BIND(label__True_35);
        // ../../src/builtins/array.tq:48:44
        Goto(label_Bailout_28);
      }
      BIND(label__False_36);
    }
    // ../../src/builtins/array.tq:51:5
    {
      Label label__True_37_impl(this);
      Label* label__True_37 = &label__True_37_impl;
      USE(label__True_37);
      Label label__False_38_impl(this, {});
      Label* label__False_38 = &label__False_38_impl;
      USE(label__False_38);
      TNode<BoolT> t114 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_81).value())));
      USE(implicit_cast<TNode<BoolT>>(t114));
      TNode<BoolT> t115 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t114)));
      USE(implicit_cast<TNode<BoolT>>(t115));
      Branch(implicit_cast<TNode<BoolT>>(t115), label__True_37, label__False_38);
      if (label__True_37->is_used())
      {
        BIND(label__True_37);
        // ../../src/builtins/array.tq:51:55
        Goto(label_Bailout_28);
      }
      BIND(label__False_38);
    }
    // ../../src/builtins/array.tq:53:5
    {
      Label label__True_39_impl(this);
      Label* label__True_39 = &label__True_39_impl;
      USE(label__True_39);
      Label label__False_40_impl(this, {});
      Label* label__False_40 = &label__False_40_impl;
      USE(label__False_40);
      TNode<BoolT> t116 = UncheckedCast<BoolT>(IsFastSmiElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_81).value())));
      USE(implicit_cast<TNode<BoolT>>(t116));
      Branch(implicit_cast<TNode<BoolT>>(t116), label__True_39, label__False_40);
      if (label__True_39->is_used())
      {
        BIND(label__True_39);
        // ../../src/builtins/array.tq:53:46
        {
          // ../../src/builtins/array.tq:54:7
          int31_t t117 = 2;
          TNode<IntPtrT> t118 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_args)));
          Label label_body_585_1105_impl(this);
          Label* label_body_585_1105 = &label_body_585_1105_impl;
          USE(label_body_585_1105);
          Label label_increment_586_1106_impl(this);
          Label* label_increment_586_1106 = &label_increment_586_1106_impl;
          USE(label_increment_586_1106);
          Label label_exit_587_1107_impl(this);
          Label* label_exit_587_1107 = &label_exit_587_1107_impl;
          USE(label_exit_587_1107);
          TVARIABLE(IntPtrT, _for_index_t119_588_impl);
          auto _for_index_t119_588 = &_for_index_t119_588_impl;
          USE(_for_index_t119_588);
          TNode<IntPtrT> t120 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t117)));
          *_for_index_t119_588 = implicit_cast<TNode<IntPtrT>>(t120);
          Label label_header_589_1108_impl(this, {_for_index_t119_588});
          Label* label_header_589_1108 = &label_header_589_1108_impl;
          USE(label_header_589_1108);
          Goto(label_header_589_1108);
          BIND(label_header_589_1108);
          TNode<BoolT> t121 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t119_588).value()), implicit_cast<TNode<IntPtrT>>(t118)));
          Branch(implicit_cast<TNode<BoolT>>(t121), label_body_585_1105, label_exit_587_1107);
          BIND(label_body_585_1105);
          TNode<Object> t122 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<IntPtrT>>((*_for_index_t119_588).value())));
          TVARIABLE(Object, e_82_impl);
          auto e_82 = &e_82_impl;
          USE(e_82);
          *e_82 = implicit_cast<TNode<Object>>(t122);
          // ../../src/builtins/array.tq:54:41
          {
            // ../../src/builtins/array.tq:55:9
            {
              Label label__True_41_impl(this);
              Label* label__True_41 = &label__True_41_impl;
              USE(label__True_41);
              Label label__False_42_impl(this, {});
              Label* label__False_42 = &label__False_42_impl;
              USE(label__False_42);
              TNode<BoolT> t123 = UncheckedCast<BoolT>(TaggedIsNotSmi(implicit_cast<TNode<Object>>((*e_82).value())));
              USE(implicit_cast<TNode<BoolT>>(t123));
              Branch(implicit_cast<TNode<BoolT>>(t123), label__True_41, label__False_42);
              if (label__True_41->is_used())
              {
                BIND(label__True_41);
                // ../../src/builtins/array.tq:55:32
                Goto(label_Bailout_28);
              }
              BIND(label__False_42);
            }
          }
          Goto(label_increment_586_1106);
          BIND(label_increment_586_1106);
          TNode<IntPtrT> t124 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t125 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t119_588).value()), implicit_cast<TNode<IntPtrT>>(t124)));
          *_for_index_t119_588 = implicit_cast<TNode<IntPtrT>>(t125);
          Goto(label_header_589_1108);
          BIND(label_exit_587_1107);
        }
        Goto(label__False_40);
      }
      BIND(label__False_40);
    }
    // ../../src/builtins/array.tq:60:5
    TNode<Number> t126 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>((*a_79).value())));
    TNode<Smi> t127 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(t126), label_Bailout_28));
    USE(implicit_cast<TNode<Smi>>(t127));
    TVARIABLE(Smi, length_83_impl);
    auto length_83 = &length_83_impl;
    USE(length_83);
    *length_83 = implicit_cast<TNode<Smi>>(t127);
    // ../../src/builtins/array.tq:61:5
    {
      Label label__True_43_impl(this);
      Label* label__True_43 = &label__True_43_impl;
      USE(label__True_43);
      Label label__False_44_impl(this, {});
      Label* label__False_44 = &label__False_44_impl;
      USE(label__False_44);
      TNode<BoolT> t128 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>((*originalLength_74).value()), implicit_cast<TNode<Smi>>((*length_83).value())));
      USE(implicit_cast<TNode<BoolT>>(t128));
      Branch(implicit_cast<TNode<BoolT>>(t128), label__True_43, label__False_44);
      if (label__True_43->is_used())
      {
        BIND(label__True_43);
        // ../../src/builtins/array.tq:61:35
        Goto(label_Bailout_28);
      }
      BIND(label__False_44);
    }
    // ../../src/builtins/array.tq:63:5
    TNode<JSArray> t129 = UncheckedCast<JSArray>(CallBuiltin(Builtins::kExtractFastJSArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_79).value()), implicit_cast<TNode<Smi>>((*actualStart_75).value()), implicit_cast<TNode<Smi>>((*actualDeleteCount_76).value())));
    USE(implicit_cast<TNode<JSArray>>(t129));
    TVARIABLE(JSArray, deletedResult_84_impl);
    auto deletedResult_84 = &deletedResult_84_impl;
    USE(deletedResult_84);
    *deletedResult_84 = implicit_cast<TNode<JSArray>>(t129);
    // ../../src/builtins/array.tq:66:5
    {
      Label label__True_45_impl(this);
      Label* label__True_45 = &label__True_45_impl;
      USE(label__True_45);
      Label label__False_46_impl(this, {});
      Label* label__False_46 = &label__False_46_impl;
      USE(label__False_46);
      int31_t t130 = 0;
      TNode<Smi> t131 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t130)));
      TNode<BoolT> t132 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*newLength_78).value()), implicit_cast<TNode<Smi>>(t131)));
      USE(implicit_cast<TNode<BoolT>>(t132));
      Branch(implicit_cast<TNode<BoolT>>(t132), label__True_45, label__False_46);
      if (label__True_45->is_used())
      {
        BIND(label__True_45);
        // ../../src/builtins/array.tq:66:25
        {
          // ../../src/builtins/array.tq:67:7
          StoreElements(implicit_cast<TNode<JSObject>>((*a_79).value()), implicit_cast<TNode<FixedArrayBase>>(kEmptyFixedArray()));
          // ../../src/builtins/array.tq:68:7
          int31_t t133 = 0;
          TNode<Smi> t134 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t133)));
          StoreJSArrayLength(implicit_cast<TNode<JSArray>>((*a_79).value()), implicit_cast<TNode<Smi>>(t134));
          // ../../src/builtins/array.tq:69:7
          *_return_73 = implicit_cast<TNode<Object>>((*deletedResult_84).value());
          Goto(label_macro_end_1104);
        }
      }
      BIND(label__False_46);
    }
    // ../../src/builtins/array.tq:72:5
    TNode<FixedArrayBase> t135 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*a_79).value())));
    TNode<FixedArray> t136 = UncheckedCast<FixedArray>(cast12ATFixedArray(implicit_cast<TNode<HeapObject>>(t135), label_Bailout_28));
    USE(implicit_cast<TNode<FixedArray>>(t136));
    TVARIABLE(FixedArray, elements_85_impl);
    auto elements_85 = &elements_85_impl;
    USE(elements_85);
    *elements_85 = implicit_cast<TNode<FixedArray>>(t136);
    // ../../src/builtins/array.tq:73:5
    TNode<Map> t137 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*elements_85).value())));
    TVARIABLE(Map, elementsMap_86_impl);
    auto elementsMap_86 = &elementsMap_86_impl;
    USE(elementsMap_86);
    *elementsMap_86 = implicit_cast<TNode<Map>>(t137);
    // ../../src/builtins/array.tq:77:5
    TVARIABLE(FixedArray, newElements_87_impl);
    auto newElements_87 = &newElements_87_impl;
    USE(newElements_87);
    *newElements_87 = implicit_cast<TNode<FixedArray>>((*elements_85).value());
    // ../../src/builtins/array.tq:78:5
    {
      Label label__True_47_impl(this);
      Label* label__True_47 = &label__True_47_impl;
      USE(label__True_47);
      Label label__False_48_impl(this, {newElements_87});
      Label* label__False_48 = &label__False_48_impl;
      USE(label__False_48);
      Label label__False_49_impl(this);
      Label* label__False_49 = &label__False_49_impl;
      USE(label__False_49);
      TNode<BoolT> t138 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elementsMap_86).value()), implicit_cast<TNode<Object>>(kCOWMap())));
      USE(implicit_cast<TNode<BoolT>>(t138));
      GotoIf(implicit_cast<TNode<BoolT>>(t138), label__True_47);
      int31_t t139 = 0;
      TNode<Smi> t140 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t139)));
      TNode<BoolT> t141 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthDelta_77).value()), implicit_cast<TNode<Smi>>(t140)));
      USE(implicit_cast<TNode<BoolT>>(t141));
      Branch(implicit_cast<TNode<BoolT>>(t141), label__True_47, label__False_48);
      if (label__True_47->is_used())
      {
        BIND(label__True_47);
        // ../../src/builtins/array.tq:78:56
        {
          // ../../src/builtins/array.tq:79:7
          int31_t t142 = 0;
          TNode<Smi> t143 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t142)));
          TNode<FixedArray> t144 = UncheckedCast<FixedArray>(ExtractFixedArray(implicit_cast<TNode<FixedArray>>((*elements_85).value()), implicit_cast<TNode<Smi>>(t143), implicit_cast<TNode<Smi>>((*actualStart_75).value()), implicit_cast<TNode<Smi>>((*newLength_78).value()), implicit_cast<ExtractFixedArrayFlags>(ExtractFixedArrayFlag::kAllFixedArrays)));
          USE(implicit_cast<TNode<FixedArray>>(t144));
          *newElements_87 = implicit_cast<TNode<FixedArray>>(t144);
          // ../../src/builtins/array.tq:81:7
          StoreMap(implicit_cast<TNode<HeapObject>>((*newElements_87).value()), implicit_cast<TNode<Map>>((*elementsMap_86).value()));
          // ../../src/builtins/array.tq:82:7
          StoreElements(implicit_cast<TNode<JSObject>>((*a_79).value()), implicit_cast<TNode<FixedArrayBase>>((*newElements_87).value()));
        }
        Goto(label__False_48);
      }
      BIND(label__False_48);
    }
    // ../../src/builtins/array.tq:86:5
    // ../../src/builtins/array.tq:89:5
    TVARIABLE(Smi, k_88_impl);
    auto k_88 = &k_88_impl;
    USE(k_88);
    *k_88 = implicit_cast<TNode<Smi>>((*actualStart_75).value());
    // ../../src/builtins/array.tq:90:5
    {
      Label label__True_50_impl(this);
      Label* label__True_50 = &label__True_50_impl;
      USE(label__True_50);
      Label label__False_51_impl(this, {k_88});
      Label* label__False_51 = &label__False_51_impl;
      USE(label__False_51);
      int31_t t145 = 0;
      TNode<Smi> t146 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t145)));
      TNode<BoolT> t147 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>(t146)));
      USE(implicit_cast<TNode<BoolT>>(t147));
      Branch(implicit_cast<TNode<BoolT>>(t147), label__True_50, label__False_51);
      if (label__True_50->is_used())
      {
        BIND(label__True_50);
        // ../../src/builtins/array.tq:90:26
        {
          // ../../src/builtins/array.tq:91:7
          int31_t t148 = 2;
          TNode<IntPtrT> t149 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_args)));
          Label label_body_590_1109_impl(this);
          Label* label_body_590_1109 = &label_body_590_1109_impl;
          USE(label_body_590_1109);
          Label label_increment_591_1110_impl(this);
          Label* label_increment_591_1110 = &label_increment_591_1110_impl;
          USE(label_increment_591_1110);
          Label label_exit_592_1111_impl(this);
          Label* label_exit_592_1111 = &label_exit_592_1111_impl;
          USE(label_exit_592_1111);
          TVARIABLE(IntPtrT, _for_index_t150_593_impl);
          auto _for_index_t150_593 = &_for_index_t150_593_impl;
          USE(_for_index_t150_593);
          TNode<IntPtrT> t151 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t148)));
          *_for_index_t150_593 = implicit_cast<TNode<IntPtrT>>(t151);
          Label label_header_594_1112_impl(this, {_for_index_t150_593, k_88});
          Label* label_header_594_1112 = &label_header_594_1112_impl;
          USE(label_header_594_1112);
          Goto(label_header_594_1112);
          BIND(label_header_594_1112);
          TNode<BoolT> t152 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t150_593).value()), implicit_cast<TNode<IntPtrT>>(t149)));
          Branch(implicit_cast<TNode<BoolT>>(t152), label_body_590_1109, label_exit_592_1111);
          BIND(label_body_590_1109);
          TNode<Object> t153 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<IntPtrT>>((*_for_index_t150_593).value())));
          TVARIABLE(Object, e_89_impl);
          auto e_89 = &e_89_impl;
          USE(e_89);
          *e_89 = implicit_cast<TNode<Object>>(t153);
          // ../../src/builtins/array.tq:91:41
          {
            // ../../src/builtins/array.tq:92:9
            TNode<Smi> t154 = implicit_cast<TNode<Smi>>((*k_88).value());
            USE(t154);
            TNode<Smi> t155 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t156 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>(t155)));
            *k_88 = implicit_cast<TNode<Smi>>(t156);
            StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*newElements_87).value()), implicit_cast<TNode<Smi>>(t154), implicit_cast<TNode<Object>>((*e_89).value()));
          }
          Goto(label_increment_591_1110);
          BIND(label_increment_591_1110);
          TNode<IntPtrT> t157 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t158 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t150_593).value()), implicit_cast<TNode<IntPtrT>>(t157)));
          *_for_index_t150_593 = implicit_cast<TNode<IntPtrT>>(t158);
          Goto(label_header_594_1112);
          BIND(label_exit_592_1111);
        }
        Goto(label__False_51);
      }
      BIND(label__False_51);
    }
    // ../../src/builtins/array.tq:97:5
    TNode<Smi> t159 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_83).value()), implicit_cast<TNode<Smi>>((*actualStart_75).value())));
    USE(implicit_cast<TNode<Smi>>(t159));
    TNode<Smi> t160 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t159), implicit_cast<TNode<Smi>>((*actualDeleteCount_76).value())));
    USE(implicit_cast<TNode<Smi>>(t160));
    TVARIABLE(Smi, count_90_impl);
    auto count_90 = &count_90_impl;
    USE(count_90);
    *count_90 = implicit_cast<TNode<Smi>>(t160);
    // ../../src/builtins/array.tq:98:5
    {
      Label label__True_52_impl(this);
      Label* label__True_52 = &label__True_52_impl;
      USE(label__True_52);
      Label label__False_53_impl(this);
      Label* label__False_53 = &label__False_53_impl;
      USE(label__False_53);
      Label label_header_595_1113_impl(this, {count_90, k_88});
      Label* label_header_595_1113 = &label_header_595_1113_impl;
      USE(label_header_595_1113);
      Goto(label_header_595_1113);
      BIND(label_header_595_1113);
      int31_t t161 = 0;
      TNode<Smi> t162 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t161)));
      TNode<BoolT> t163 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*count_90).value()), implicit_cast<TNode<Smi>>(t162)));
      USE(implicit_cast<TNode<BoolT>>(t163));
      Branch(implicit_cast<TNode<BoolT>>(t163), label__True_52, label__False_53);
      if (label__True_52->is_used())
      {
        BIND(label__True_52);
        // ../../src/builtins/array.tq:98:23
        {
          // ../../src/builtins/array.tq:99:7
          TNode<Smi> t164 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>((*lengthDelta_77).value())));
          USE(implicit_cast<TNode<Smi>>(t164));
          TNode<Object> t165 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elements_85).value()), implicit_cast<TNode<Smi>>(t164)));
          TVARIABLE(Object, e_91_impl);
          auto e_91 = &e_91_impl;
          USE(e_91);
          *e_91 = implicit_cast<TNode<Object>>(t165);
          // ../../src/builtins/array.tq:100:7
          TNode<Smi> t166 = implicit_cast<TNode<Smi>>((*k_88).value());
          USE(t166);
          TNode<Smi> t167 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t168 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>(t167)));
          *k_88 = implicit_cast<TNode<Smi>>(t168);
          StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*newElements_87).value()), implicit_cast<TNode<Smi>>(t166), implicit_cast<TNode<Object>>((*e_91).value()));
          // ../../src/builtins/array.tq:101:7
          TNode<Smi> t169 = implicit_cast<TNode<Smi>>((*count_90).value());
          USE(t169);
          TNode<Smi> t170 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t171 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*count_90).value()), implicit_cast<TNode<Smi>>(t170)));
          *count_90 = implicit_cast<TNode<Smi>>(t171);
        }
        Goto(label_header_595_1113);
      }
      BIND(label__False_53);
    }
    // ../../src/builtins/array.tq:107:5
    {
      Label label__True_54_impl(this);
      Label* label__True_54 = &label__True_54_impl;
      USE(label__True_54);
      Label label__False_55_impl(this, {k_88});
      Label* label__False_55 = &label__False_55_impl;
      USE(label__False_55);
      TNode<BoolT> t172 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elements_85).value()), implicit_cast<TNode<Object>>((*newElements_87).value())));
      USE(implicit_cast<TNode<BoolT>>(t172));
      Branch(implicit_cast<TNode<BoolT>>(t172), label__True_54, label__False_55);
      if (label__True_54->is_used())
      {
        BIND(label__True_54);
        // ../../src/builtins/array.tq:107:34
        {
          // ../../src/builtins/array.tq:108:7
          TNode<Smi> t173 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>((*elements_85).value())));
          TVARIABLE(Smi, limit_92_impl);
          auto limit_92 = &limit_92_impl;
          USE(limit_92);
          *limit_92 = implicit_cast<TNode<Smi>>(t173);
          // ../../src/builtins/array.tq:109:7
          {
            Label label__True_56_impl(this);
            Label* label__True_56 = &label__True_56_impl;
            USE(label__True_56);
            Label label__False_57_impl(this);
            Label* label__False_57 = &label__False_57_impl;
            USE(label__False_57);
            Label label_header_596_1114_impl(this, {k_88});
            Label* label_header_596_1114 = &label_header_596_1114_impl;
            USE(label_header_596_1114);
            Goto(label_header_596_1114);
            BIND(label_header_596_1114);
            TNode<BoolT> t174 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>((*limit_92).value())));
            USE(implicit_cast<TNode<BoolT>>(t174));
            Branch(implicit_cast<TNode<BoolT>>(t174), label__True_56, label__False_57);
            if (label__True_56->is_used())
            {
              BIND(label__True_56);
              // ../../src/builtins/array.tq:109:25
              {
                // ../../src/builtins/array.tq:110:9
                TNode<Smi> t175 = implicit_cast<TNode<Smi>>((*k_88).value());
                USE(t175);
                TNode<Smi> t176 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t177 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>(t176)));
                *k_88 = implicit_cast<TNode<Smi>>(t177);
                StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*newElements_87).value()), implicit_cast<TNode<Smi>>(t175), implicit_cast<TNode<Object>>(Hole()));
              }
              Goto(label_header_596_1114);
            }
            BIND(label__False_57);
          }
        }
        Goto(label__False_55);
      }
      BIND(label__False_55);
    }
    // ../../src/builtins/array.tq:115:5
    StoreJSArrayLength(implicit_cast<TNode<JSArray>>((*a_79).value()), implicit_cast<TNode<Smi>>((*newLength_78).value()));
    // ../../src/builtins/array.tq:117:5
    *_return_73 = implicit_cast<TNode<Object>>((*deletedResult_84).value());
    Goto(label_macro_end_1104);
  }
  BIND(label_macro_end_1104);
  return implicit_cast<TNode<Object>>((*_return_73).value());
}

TF_BUILTIN(ArraySpliceTorque, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array.tq:122:65
  {
    // ../../src/builtins/array.tq:124:5
    TNode<JSReceiver> t178 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t178));
    TVARIABLE(JSReceiver, o_93_impl);
    auto o_93 = &o_93_impl;
    USE(o_93);
    *o_93 = implicit_cast<TNode<JSReceiver>>(t178);
    // ../../src/builtins/array.tq:127:5
    TNode<Number> t179 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value())));
    USE(implicit_cast<TNode<Number>>(t179));
    TVARIABLE(Number, len_94_impl);
    auto len_94 = &len_94_impl;
    USE(len_94);
    *len_94 = implicit_cast<TNode<Number>>(t179);
    // ../../src/builtins/array.tq:130:5
    int31_t t180 = 0;
    TNode<IntPtrT> t181 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t180)));
    TNode<Object> t182 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t181)));
    TVARIABLE(Object, start_95_impl);
    auto start_95 = &start_95_impl;
    USE(start_95);
    *start_95 = implicit_cast<TNode<Object>>(t182);
    // ../../src/builtins/array.tq:131:5
    TNode<Number> t183 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*start_95).value())));
    USE(implicit_cast<TNode<Number>>(t183));
    TVARIABLE(Number, relativeStart_96_impl);
    auto relativeStart_96 = &relativeStart_96_impl;
    USE(relativeStart_96);
    *relativeStart_96 = implicit_cast<TNode<Number>>(t183);
    // ../../src/builtins/array.tq:136:5
    auto t184 = [=]() {
      TNode<Number> t186 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*relativeStart_96).value())));
      USE(implicit_cast<TNode<Number>>(t186));
      int31_t t187 = 0;
      TNode<Number> t188 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t187)));
      TNode<Number> t189 = UncheckedCast<Number>(max(implicit_cast<TNode<Number>>(t186), implicit_cast<TNode<Number>>(t188)));
      USE(implicit_cast<TNode<Number>>(t189));
      return implicit_cast<TNode<Number>>(t189);
    };
    auto t185 = [=]() {
      TNode<Number> t190 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>((*relativeStart_96).value()), implicit_cast<TNode<Number>>((*len_94).value())));
      USE(implicit_cast<TNode<Number>>(t190));
      return implicit_cast<TNode<Number>>(t190);
    };
    TVARIABLE(Number, t191_597_impl);
    auto t191_597 = &t191_597_impl;
    USE(t191_597);
    {
      Label label__True_58_impl(this);
      Label* label__True_58 = &label__True_58_impl;
      USE(label__True_58);
      Label label__False_59_impl(this);
      Label* label__False_59 = &label__False_59_impl;
      USE(label__False_59);
      Label label__done_598_1115_impl(this, {t191_597});
      Label* label__done_598_1115 = &label__done_598_1115_impl;
      USE(label__done_598_1115);
      int31_t t192 = 0;
      TNode<Number> t193 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t192)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*relativeStart_96).value()), implicit_cast<TNode<Number>>(t193), label__True_58, label__False_59);
      BIND(label__True_58);
            *t191_597 = implicit_cast<TNode<Number>>(t184());
      Goto(label__done_598_1115);
      BIND(label__False_59);
            *t191_597 = implicit_cast<TNode<Number>>(t185());
      Goto(label__done_598_1115);
      BIND(label__done_598_1115);
    }
    TVARIABLE(Number, actualStart_97_impl);
    auto actualStart_97 = &actualStart_97_impl;
    USE(actualStart_97);
    *actualStart_97 = implicit_cast<TNode<Number>>((*t191_597).value());
    // ../../src/builtins/array.tq:140:5
    TVARIABLE(Smi, insertCount_98_impl);
    auto insertCount_98 = &insertCount_98_impl;
    USE(insertCount_98);
    // ../../src/builtins/array.tq:141:5
    TVARIABLE(Number, actualDeleteCount_99_impl);
    auto actualDeleteCount_99 = &actualDeleteCount_99_impl;
    USE(actualDeleteCount_99);
    // ../../src/builtins/array.tq:143:5
    {
      Label label__True_60_impl(this);
      Label* label__True_60 = &label__True_60_impl;
      USE(label__True_60);
      Label label__False_61_impl(this);
      Label* label__False_61 = &label__False_61_impl;
      USE(label__False_61);
      Label label_if_done_label_599_1116_impl(this, {actualDeleteCount_99, insertCount_98});
      Label* label_if_done_label_599_1116 = &label_if_done_label_599_1116_impl;
      USE(label_if_done_label_599_1116);
      TNode<IntPtrT> t194 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t195 = 0;
      TNode<IntPtrT> t196 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t195)));
      TNode<BoolT> t197 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t194), implicit_cast<TNode<IntPtrT>>(t196)));
      USE(implicit_cast<TNode<BoolT>>(t197));
      Branch(implicit_cast<TNode<BoolT>>(t197), label__True_60, label__False_61);
      if (label__True_60->is_used())
      {
        BIND(label__True_60);
        // ../../src/builtins/array.tq:143:32
        {
          // ../../src/builtins/array.tq:145:7
          int31_t t198 = 0;
          TNode<Smi> t199 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t198)));
          *insertCount_98 = implicit_cast<TNode<Smi>>(t199);
          // ../../src/builtins/array.tq:147:7
          int31_t t200 = 0;
          TNode<Number> t201 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t200)));
          *actualDeleteCount_99 = implicit_cast<TNode<Number>>(t201);
        }
        Goto(label_if_done_label_599_1116);
      }
      if (label__False_61->is_used())
      {
        BIND(label__False_61);
        // ../../src/builtins/array.tq:149:12
        {
          Label label__True_62_impl(this);
          Label* label__True_62 = &label__True_62_impl;
          USE(label__True_62);
          Label label__False_63_impl(this);
          Label* label__False_63 = &label__False_63_impl;
          USE(label__False_63);
          Label label_if_done_label_600_1117_impl(this, {actualDeleteCount_99, insertCount_98});
          Label* label_if_done_label_600_1117 = &label_if_done_label_600_1117_impl;
          USE(label_if_done_label_600_1117);
          TNode<IntPtrT> t202 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
          int31_t t203 = 1;
          TNode<IntPtrT> t204 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t203)));
          TNode<BoolT> t205 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t202), implicit_cast<TNode<IntPtrT>>(t204)));
          USE(implicit_cast<TNode<BoolT>>(t205));
          Branch(implicit_cast<TNode<BoolT>>(t205), label__True_62, label__False_63);
          if (label__True_62->is_used())
          {
            BIND(label__True_62);
            // ../../src/builtins/array.tq:149:39
            {
              // ../../src/builtins/array.tq:151:7
              int31_t t206 = 0;
              TNode<Smi> t207 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t206)));
              *insertCount_98 = implicit_cast<TNode<Smi>>(t207);
              // ../../src/builtins/array.tq:153:7
              TNode<Number> t208 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualStart_97).value())));
              USE(implicit_cast<TNode<Number>>(t208));
              *actualDeleteCount_99 = implicit_cast<TNode<Number>>(t208);
            }
            Goto(label_if_done_label_600_1117);
          }
          if (label__False_63->is_used())
          {
            BIND(label__False_63);
            // ../../src/builtins/array.tq:155:12
            {
              // ../../src/builtins/array.tq:157:7
              TNode<IntPtrT> t209 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
              TNode<Smi> t210 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<IntPtrT>>(t209)));
              USE(implicit_cast<TNode<Smi>>(t210));
              int31_t t211 = 2;
              TNode<Smi> t212 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t211)));
              TNode<Smi> t213 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t210), implicit_cast<TNode<Smi>>(t212)));
              USE(implicit_cast<TNode<Smi>>(t213));
              *insertCount_98 = implicit_cast<TNode<Smi>>(t213);
              // ../../src/builtins/array.tq:159:7
              int31_t t214 = 1;
              TNode<IntPtrT> t215 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t214)));
              TNode<Object> t216 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t215)));
              TVARIABLE(Object, deleteCount_100_impl);
              auto deleteCount_100 = &deleteCount_100_impl;
              USE(deleteCount_100);
              *deleteCount_100 = implicit_cast<TNode<Object>>(t216);
              // ../../src/builtins/array.tq:160:7
              TNode<Number> t217 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*deleteCount_100).value())));
              USE(implicit_cast<TNode<Number>>(t217));
              TVARIABLE(Number, dc_101_impl);
              auto dc_101 = &dc_101_impl;
              USE(dc_101);
              *dc_101 = implicit_cast<TNode<Number>>(t217);
              // ../../src/builtins/array.tq:162:7
              int31_t t218 = 0;
              TNode<Number> t219 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t218)));
              TNode<Number> t220 = UncheckedCast<Number>(max(implicit_cast<TNode<Number>>((*dc_101).value()), implicit_cast<TNode<Number>>(t219)));
              USE(implicit_cast<TNode<Number>>(t220));
              TNode<Number> t221 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualStart_97).value())));
              USE(implicit_cast<TNode<Number>>(t221));
              TNode<Number> t222 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>(t220), implicit_cast<TNode<Number>>(t221)));
              USE(implicit_cast<TNode<Number>>(t222));
              *actualDeleteCount_99 = implicit_cast<TNode<Number>>(t222);
            }
            Goto(label_if_done_label_600_1117);
          }
          BIND(label_if_done_label_600_1117);
        }
        Goto(label_if_done_label_599_1116);
      }
      BIND(label_if_done_label_599_1116);
    }
    // ../../src/builtins/array.tq:167:5
    {
      Label label__True_64_impl(this);
      Label* label__True_64 = &label__True_64_impl;
      USE(label__True_64);
      Label label__False_65_impl(this, {});
      Label* label__False_65 = &label__False_65_impl;
      USE(label__False_65);
      TNode<Number> t223 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*insertCount_98).value())));
      USE(implicit_cast<TNode<Number>>(t223));
      TNode<Number> t224 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t223), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
      USE(implicit_cast<TNode<Number>>(t224));
      TNode<Number> t225 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(kMaxSafeInteger)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t224), implicit_cast<TNode<Number>>(t225), label__True_64, label__False_65);
      if (label__True_64->is_used())
      {
        BIND(label__True_64);
        // ../../src/builtins/array.tq:167:66
        {
          // ../../src/builtins/array.tq:168:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidArrayLength));
        }
      }
      BIND(label__False_65);
    }
    // ../../src/builtins/array.tq:171:5
    {
      Label label_try_done_601_1118_impl(this);
      Label* label_try_done_601_1118 = &label_try_done_601_1118_impl;
      USE(label_try_done_601_1118);
      Label label_Bailout_66_impl(this);
      Label* label_Bailout_66 = &label_Bailout_66_impl;
      USE(label_Bailout_66);
      Label label_try_begin_602_1119_impl(this);
      Label* label_try_begin_602_1119 = &label_try_begin_602_1119_impl;
      USE(label_try_begin_602_1119);
      Goto(label_try_begin_602_1119);
      if (label_try_begin_602_1119->is_used())
      {
        BIND(label_try_begin_602_1119);
        // ../../src/builtins/array.tq:171:9
        {
          // ../../src/builtins/array.tq:172:7
          TNode<Object> t226 = UncheckedCast<Object>(FastArraySplice(implicit_cast<TNode<Context>>(p_context), implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualStart_97).value()), implicit_cast<TNode<Smi>>((*insertCount_98).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value()), label_Bailout_66));
          USE(implicit_cast<TNode<Object>>(t226));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t226));
        }
      }
      if (label_Bailout_66->is_used())
      {
        BIND(label_Bailout_66);
        // ../../src/builtins/array.tq:176:19
        {
        }
        Goto(label_try_done_601_1118);
      }
      BIND(label_try_done_601_1118);
    }
    // ../../src/builtins/array.tq:181:5
    TNode<Object> t227 = UncheckedCast<Object>(ArraySpeciesCreate(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
    USE(implicit_cast<TNode<Object>>(t227));
    TVARIABLE(Object, a_102_impl);
    auto a_102 = &a_102_impl;
    USE(a_102);
    *a_102 = implicit_cast<TNode<Object>>(t227);
    // ../../src/builtins/array.tq:184:5
    int31_t t228 = 0;
    TVARIABLE(Number, k_103_impl);
    auto k_103 = &k_103_impl;
    USE(k_103);
    TNode<Number> t229 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t228)));
    *k_103 = implicit_cast<TNode<Number>>(t229);
    // ../../src/builtins/array.tq:187:5
    {
      Label label__True_67_impl(this);
      Label* label__True_67 = &label__True_67_impl;
      USE(label__True_67);
      Label label__False_68_impl(this);
      Label* label__False_68 = &label__False_68_impl;
      USE(label__False_68);
      Label label_header_603_1120_impl(this, {k_103});
      Label* label_header_603_1120 = &label_header_603_1120_impl;
      USE(label_header_603_1120);
      Goto(label_header_603_1120);
      BIND(label_header_603_1120);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_103).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value()), label__True_67, label__False_68);
      if (label__True_67->is_used())
      {
        BIND(label__True_67);
        // ../../src/builtins/array.tq:187:35
        {
          // ../../src/builtins/array.tq:189:7
          TNode<Number> t230 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*actualStart_97).value()), implicit_cast<TNode<Number>>((*k_103).value())));
          USE(implicit_cast<TNode<Number>>(t230));
          TNode<String> t231 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t230)));
          USE(implicit_cast<TNode<String>>(t231));
          TVARIABLE(String, from_104_impl);
          auto from_104 = &from_104_impl;
          USE(from_104);
          *from_104 = implicit_cast<TNode<String>>(t231);
          // ../../src/builtins/array.tq:192:7
          TNode<Oddball> t232 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_104).value())));
          USE(implicit_cast<TNode<Oddball>>(t232));
          TVARIABLE(Oddball, fromPresent_105_impl);
          auto fromPresent_105 = &fromPresent_105_impl;
          USE(fromPresent_105);
          *fromPresent_105 = implicit_cast<TNode<Oddball>>(t232);
          // ../../src/builtins/array.tq:195:7
          {
            Label label__True_69_impl(this);
            Label* label__True_69 = &label__True_69_impl;
            USE(label__True_69);
            Label label__False_70_impl(this, {});
            Label* label__False_70 = &label__False_70_impl;
            USE(label__False_70);
            TNode<BoolT> t233 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_105).value()), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t233));
            Branch(implicit_cast<TNode<BoolT>>(t233), label__True_69, label__False_70);
            if (label__True_69->is_used())
            {
              BIND(label__True_69);
              // ../../src/builtins/array.tq:195:32
              {
                // ../../src/builtins/array.tq:197:9
                TNode<Object> t234 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_104).value())));
                USE(implicit_cast<TNode<Object>>(t234));
                TVARIABLE(Object, fromValue_106_impl);
                auto fromValue_106 = &fromValue_106_impl;
                USE(fromValue_106);
                *fromValue_106 = implicit_cast<TNode<Object>>(t234);
                // ../../src/builtins/array.tq:200:9
                TNode<String> t235 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*k_103).value())));
                USE(implicit_cast<TNode<String>>(t235));
                CallRuntime(Runtime::kCreateDataProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*a_102).value()), implicit_cast<TNode<Object>>(t235), implicit_cast<TNode<Object>>((*fromValue_106).value()));
              }
              Goto(label__False_70);
            }
            BIND(label__False_70);
          }
          // ../../src/builtins/array.tq:204:7
          int31_t t236 = 1;
          TNode<Number> t237 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t236)));
          TNode<Number> t238 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_103).value()), implicit_cast<TNode<Number>>(t237)));
          USE(implicit_cast<TNode<Number>>(t238));
          *k_103 = implicit_cast<TNode<Number>>(t238);
        }
        Goto(label_header_603_1120);
      }
      BIND(label__False_68);
    }
    // ../../src/builtins/array.tq:208:5
    const char* t239 = "length";
    TNode<Object> t240 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t239)));
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*a_102).value()), implicit_cast<TNode<Object>>(t240), implicit_cast<TNode<Object>>((*actualDeleteCount_99).value()));
    // ../../src/builtins/array.tq:215:5
    TVARIABLE(Number, itemCount_107_impl);
    auto itemCount_107 = &itemCount_107_impl;
    USE(itemCount_107);
    *itemCount_107 = implicit_cast<TNode<Number>>((*insertCount_98).value());
    // ../../src/builtins/array.tq:218:5
    {
      Label label__True_71_impl(this);
      Label* label__True_71 = &label__True_71_impl;
      USE(label__True_71);
      Label label__False_72_impl(this);
      Label* label__False_72 = &label__False_72_impl;
      USE(label__False_72);
      Label label_if_done_label_604_1121_impl(this, {});
      Label* label_if_done_label_604_1121 = &label_if_done_label_604_1121_impl;
      USE(label_if_done_label_604_1121);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*itemCount_107).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value()), label__True_71, label__False_72);
      if (label__True_71->is_used())
      {
        BIND(label__True_71);
        // ../../src/builtins/array.tq:218:40
        {
          // ../../src/builtins/array.tq:220:7
          TVARIABLE(Number, k_108_impl);
          auto k_108 = &k_108_impl;
          USE(k_108);
          *k_108 = implicit_cast<TNode<Number>>((*actualStart_97).value());
          // ../../src/builtins/array.tq:223:7
          {
            Label label__True_73_impl(this);
            Label* label__True_73 = &label__True_73_impl;
            USE(label__True_73);
            Label label__False_74_impl(this);
            Label* label__False_74 = &label__False_74_impl;
            USE(label__False_74);
            Label label_header_605_1122_impl(this, {k_108});
            Label* label_header_605_1122 = &label_header_605_1122_impl;
            USE(label_header_605_1122);
            Goto(label_header_605_1122);
            BIND(label_header_605_1122);
            TNode<Number> t241 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
            USE(implicit_cast<TNode<Number>>(t241));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t241), label__True_73, label__False_74);
            if (label__True_73->is_used())
            {
              BIND(label__True_73);
              // ../../src/builtins/array.tq:223:45
              {
                // ../../src/builtins/array.tq:225:9
                TNode<Number> t242 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
                USE(implicit_cast<TNode<Number>>(t242));
                TNode<String> t243 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t242)));
                USE(implicit_cast<TNode<String>>(t243));
                TVARIABLE(String, from_109_impl);
                auto from_109 = &from_109_impl;
                USE(from_109);
                *from_109 = implicit_cast<TNode<String>>(t243);
                // ../../src/builtins/array.tq:227:9
                TNode<Number> t244 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>((*itemCount_107).value())));
                USE(implicit_cast<TNode<Number>>(t244));
                TNode<String> t245 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t244)));
                USE(implicit_cast<TNode<String>>(t245));
                TVARIABLE(String, to_110_impl);
                auto to_110 = &to_110_impl;
                USE(to_110);
                *to_110 = implicit_cast<TNode<String>>(t245);
                // ../../src/builtins/array.tq:230:9
                TNode<Oddball> t246 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_109).value())));
                USE(implicit_cast<TNode<Oddball>>(t246));
                TVARIABLE(Oddball, fromPresent_111_impl);
                auto fromPresent_111 = &fromPresent_111_impl;
                USE(fromPresent_111);
                *fromPresent_111 = implicit_cast<TNode<Oddball>>(t246);
                // ../../src/builtins/array.tq:233:9
                {
                  Label label__True_75_impl(this);
                  Label* label__True_75 = &label__True_75_impl;
                  USE(label__True_75);
                  Label label__False_76_impl(this);
                  Label* label__False_76 = &label__False_76_impl;
                  USE(label__False_76);
                  Label label_if_done_label_606_1123_impl(this, {});
                  Label* label_if_done_label_606_1123 = &label_if_done_label_606_1123_impl;
                  USE(label_if_done_label_606_1123);
                  TNode<BoolT> t247 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_111).value()), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t247));
                  Branch(implicit_cast<TNode<BoolT>>(t247), label__True_75, label__False_76);
                  if (label__True_75->is_used())
                  {
                    BIND(label__True_75);
                    // ../../src/builtins/array.tq:233:34
                    {
                      // ../../src/builtins/array.tq:235:11
                      TNode<Object> t248 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_109).value())));
                      USE(implicit_cast<TNode<Object>>(t248));
                      TVARIABLE(Object, fromValue_112_impl);
                      auto fromValue_112 = &fromValue_112_impl;
                      USE(fromValue_112);
                      *fromValue_112 = implicit_cast<TNode<Object>>(t248);
                      // ../../src/builtins/array.tq:238:11
                      CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*to_110).value()), implicit_cast<TNode<Object>>((*fromValue_112).value()));
                    }
                    Goto(label_if_done_label_606_1123);
                  }
                  if (label__False_76->is_used())
                  {
                    BIND(label__False_76);
                    // ../../src/builtins/array.tq:241:16
                    {
                      // ../../src/builtins/array.tq:243:11
                      TNode<Smi> t249 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                      CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*to_110).value()), implicit_cast<TNode<Smi>>(t249));
                    }
                    Goto(label_if_done_label_606_1123);
                  }
                  BIND(label_if_done_label_606_1123);
                }
                // ../../src/builtins/array.tq:246:9
                int31_t t250 = 1;
                TNode<Number> t251 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t250)));
                TNode<Number> t252 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t251)));
                USE(implicit_cast<TNode<Number>>(t252));
                *k_108 = implicit_cast<TNode<Number>>(t252);
              }
              Goto(label_header_605_1122);
            }
            BIND(label__False_74);
          }
          // ../../src/builtins/array.tq:250:7
          *k_108 = implicit_cast<TNode<Number>>((*len_94).value());
          // ../../src/builtins/array.tq:252:7
          {
            Label label__True_77_impl(this);
            Label* label__True_77 = &label__True_77_impl;
            USE(label__True_77);
            Label label__False_78_impl(this);
            Label* label__False_78 = &label__False_78_impl;
            USE(label__False_78);
            Label label_header_607_1124_impl(this, {k_108});
            Label* label_header_607_1124 = &label_header_607_1124_impl;
            USE(label_header_607_1124);
            Goto(label_header_607_1124);
            BIND(label_header_607_1124);
            TNode<Number> t253 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
            USE(implicit_cast<TNode<Number>>(t253));
            TNode<Number> t254 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(t253), implicit_cast<TNode<Number>>((*itemCount_107).value())));
            USE(implicit_cast<TNode<Number>>(t254));
            BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t254), label__True_77, label__False_78);
            if (label__True_77->is_used())
            {
              BIND(label__True_77);
              // ../../src/builtins/array.tq:252:57
              {
                // ../../src/builtins/array.tq:254:9
                int31_t t255 = 1;
                TNode<Number> t256 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t255)));
                TNode<Number> t257 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t256)));
                USE(implicit_cast<TNode<Number>>(t257));
                TNode<String> t258 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t257)));
                USE(implicit_cast<TNode<String>>(t258));
                TNode<Smi> t259 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>(t258), implicit_cast<TNode<Smi>>(t259));
                // ../../src/builtins/array.tq:257:9
                int31_t t260 = 1;
                TNode<Number> t261 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t260)));
                TNode<Number> t262 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t261)));
                USE(implicit_cast<TNode<Number>>(t262));
                *k_108 = implicit_cast<TNode<Number>>(t262);
              }
              Goto(label_header_607_1124);
            }
            BIND(label__False_78);
          }
        }
        Goto(label_if_done_label_604_1121);
      }
      if (label__False_72->is_used())
      {
        BIND(label__False_72);
        // ../../src/builtins/array.tq:260:12
        {
          Label label__True_79_impl(this);
          Label* label__True_79 = &label__True_79_impl;
          USE(label__True_79);
          Label label__False_80_impl(this, {});
          Label* label__False_80 = &label__False_80_impl;
          USE(label__False_80);
          BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*itemCount_107).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value()), label__True_79, label__False_80);
          if (label__True_79->is_used())
          {
            BIND(label__True_79);
            // ../../src/builtins/array.tq:260:47
            {
              // ../../src/builtins/array.tq:262:7
              TNode<Number> t263 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
              USE(implicit_cast<TNode<Number>>(t263));
              TVARIABLE(Number, k_113_impl);
              auto k_113 = &k_113_impl;
              USE(k_113);
              *k_113 = implicit_cast<TNode<Number>>(t263);
              // ../../src/builtins/array.tq:265:7
              {
                Label label__True_81_impl(this);
                Label* label__True_81 = &label__True_81_impl;
                USE(label__True_81);
                Label label__False_82_impl(this);
                Label* label__False_82 = &label__False_82_impl;
                USE(label__False_82);
                Label label_header_608_1125_impl(this, {k_113});
                Label* label_header_608_1125 = &label_header_608_1125_impl;
                USE(label_header_608_1125);
                Goto(label_header_608_1125);
                BIND(label_header_608_1125);
                BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>((*actualStart_97).value()), label__True_81, label__False_82);
                if (label__True_81->is_used())
                {
                  BIND(label__True_81);
                  // ../../src/builtins/array.tq:265:31
                  {
                    // ../../src/builtins/array.tq:267:9
                    TNode<Number> t264 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
                    USE(implicit_cast<TNode<Number>>(t264));
                    int31_t t265 = 1;
                    TNode<Number> t266 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t265)));
                    TNode<Number> t267 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t264), implicit_cast<TNode<Number>>(t266)));
                    USE(implicit_cast<TNode<Number>>(t267));
                    TNode<String> t268 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t267)));
                    USE(implicit_cast<TNode<String>>(t268));
                    TVARIABLE(String, from_114_impl);
                    auto from_114 = &from_114_impl;
                    USE(from_114);
                    *from_114 = implicit_cast<TNode<String>>(t268);
                    // ../../src/builtins/array.tq:270:9
                    TNode<Number> t269 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>((*itemCount_107).value())));
                    USE(implicit_cast<TNode<Number>>(t269));
                    int31_t t270 = 1;
                    TNode<Number> t271 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t270)));
                    TNode<Number> t272 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t269), implicit_cast<TNode<Number>>(t271)));
                    USE(implicit_cast<TNode<Number>>(t272));
                    TNode<String> t273 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t272)));
                    USE(implicit_cast<TNode<String>>(t273));
                    TVARIABLE(String, to_115_impl);
                    auto to_115 = &to_115_impl;
                    USE(to_115);
                    *to_115 = implicit_cast<TNode<String>>(t273);
                    // ../../src/builtins/array.tq:273:9
                    TNode<Oddball> t274 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_114).value())));
                    USE(implicit_cast<TNode<Oddball>>(t274));
                    TVARIABLE(Oddball, fromPresent_116_impl);
                    auto fromPresent_116 = &fromPresent_116_impl;
                    USE(fromPresent_116);
                    *fromPresent_116 = implicit_cast<TNode<Oddball>>(t274);
                    // ../../src/builtins/array.tq:276:9
                    {
                      Label label__True_83_impl(this);
                      Label* label__True_83 = &label__True_83_impl;
                      USE(label__True_83);
                      Label label__False_84_impl(this);
                      Label* label__False_84 = &label__False_84_impl;
                      USE(label__False_84);
                      Label label_if_done_label_609_1126_impl(this, {});
                      Label* label_if_done_label_609_1126 = &label_if_done_label_609_1126_impl;
                      USE(label_if_done_label_609_1126);
                      TNode<BoolT> t275 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_116).value()), implicit_cast<TNode<Object>>(True())));
                      USE(implicit_cast<TNode<BoolT>>(t275));
                      Branch(implicit_cast<TNode<BoolT>>(t275), label__True_83, label__False_84);
                      if (label__True_83->is_used())
                      {
                        BIND(label__True_83);
                        // ../../src/builtins/array.tq:276:34
                        {
                          // ../../src/builtins/array.tq:278:11
                          TNode<Object> t276 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_114).value())));
                          USE(implicit_cast<TNode<Object>>(t276));
                          TVARIABLE(Object, fromValue_117_impl);
                          auto fromValue_117 = &fromValue_117_impl;
                          USE(fromValue_117);
                          *fromValue_117 = implicit_cast<TNode<Object>>(t276);
                          // ../../src/builtins/array.tq:281:11
                          CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*to_115).value()), implicit_cast<TNode<Object>>((*fromValue_117).value()));
                        }
                        Goto(label_if_done_label_609_1126);
                      }
                      if (label__False_84->is_used())
                      {
                        BIND(label__False_84);
                        // ../../src/builtins/array.tq:284:16
                        {
                          // ../../src/builtins/array.tq:286:11
                          TNode<Smi> t277 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                          CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*to_115).value()), implicit_cast<TNode<Smi>>(t277));
                        }
                        Goto(label_if_done_label_609_1126);
                      }
                      BIND(label_if_done_label_609_1126);
                    }
                    // ../../src/builtins/array.tq:290:9
                    int31_t t278 = 1;
                    TNode<Number> t279 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t278)));
                    TNode<Number> t280 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>(t279)));
                    USE(implicit_cast<TNode<Number>>(t280));
                    *k_113 = implicit_cast<TNode<Number>>(t280);
                  }
                  Goto(label_header_608_1125);
                }
                BIND(label__False_82);
              }
            }
            Goto(label__False_80);
          }
          BIND(label__False_80);
        }
        Goto(label_if_done_label_604_1121);
      }
      BIND(label_if_done_label_604_1121);
    }
    // ../../src/builtins/array.tq:295:5
    *k_103 = implicit_cast<TNode<Number>>((*actualStart_97).value());
    // ../../src/builtins/array.tq:300:5
    {
      Label label__True_85_impl(this);
      Label* label__True_85 = &label__True_85_impl;
      USE(label__True_85);
      Label label__False_86_impl(this, {k_103});
      Label* label__False_86 = &label__False_86_impl;
      USE(label__False_86);
      TNode<IntPtrT> t281 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t282 = 2;
      TNode<IntPtrT> t283 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t282)));
      TNode<BoolT> t284 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t281), implicit_cast<TNode<IntPtrT>>(t283)));
      USE(implicit_cast<TNode<BoolT>>(t284));
      Branch(implicit_cast<TNode<BoolT>>(t284), label__True_85, label__False_86);
      if (label__True_85->is_used())
      {
        BIND(label__True_85);
        // ../../src/builtins/array.tq:300:31
        {
          // ../../src/builtins/array.tq:301:7
          int31_t t285 = 2;
          TNode<IntPtrT> t286 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
          Label label_body_610_1127_impl(this);
          Label* label_body_610_1127 = &label_body_610_1127_impl;
          USE(label_body_610_1127);
          Label label_increment_611_1128_impl(this);
          Label* label_increment_611_1128 = &label_increment_611_1128_impl;
          USE(label_increment_611_1128);
          Label label_exit_612_1129_impl(this);
          Label* label_exit_612_1129 = &label_exit_612_1129_impl;
          USE(label_exit_612_1129);
          TVARIABLE(IntPtrT, _for_index_t287_613_impl);
          auto _for_index_t287_613 = &_for_index_t287_613_impl;
          USE(_for_index_t287_613);
          TNode<IntPtrT> t288 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t285)));
          *_for_index_t287_613 = implicit_cast<TNode<IntPtrT>>(t288);
          Label label_header_614_1130_impl(this, {_for_index_t287_613, k_103});
          Label* label_header_614_1130 = &label_header_614_1130_impl;
          USE(label_header_614_1130);
          Goto(label_header_614_1130);
          BIND(label_header_614_1130);
          TNode<BoolT> t289 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t287_613).value()), implicit_cast<TNode<IntPtrT>>(t286)));
          Branch(implicit_cast<TNode<BoolT>>(t289), label_body_610_1127, label_exit_612_1129);
          BIND(label_body_610_1127);
          TNode<Object> t290 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>((*_for_index_t287_613).value())));
          TVARIABLE(Object, e_118_impl);
          auto e_118 = &e_118_impl;
          USE(e_118);
          *e_118 = implicit_cast<TNode<Object>>(t290);
          // ../../src/builtins/array.tq:301:46
          {
            // ../../src/builtins/array.tq:303:9
            TNode<String> t291 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*k_103).value())));
            USE(implicit_cast<TNode<String>>(t291));
            CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>(t291), implicit_cast<TNode<Object>>((*e_118).value()));
            // ../../src/builtins/array.tq:306:9
            int31_t t292 = 1;
            TNode<Number> t293 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t292)));
            TNode<Number> t294 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_103).value()), implicit_cast<TNode<Number>>(t293)));
            USE(implicit_cast<TNode<Number>>(t294));
            *k_103 = implicit_cast<TNode<Number>>(t294);
          }
          Goto(label_increment_611_1128);
          BIND(label_increment_611_1128);
          TNode<IntPtrT> t295 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t296 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t287_613).value()), implicit_cast<TNode<IntPtrT>>(t295)));
          *_for_index_t287_613 = implicit_cast<TNode<IntPtrT>>(t296);
          Goto(label_header_614_1130);
          BIND(label_exit_612_1129);
        }
        Goto(label__False_86);
      }
      BIND(label__False_86);
    }
    // ../../src/builtins/array.tq:312:5
    const char* t297 = "length";
    TNode<Number> t298 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
    USE(implicit_cast<TNode<Number>>(t298));
    TNode<Number> t299 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(t298), implicit_cast<TNode<Number>>((*itemCount_107).value())));
    USE(implicit_cast<TNode<Number>>(t299));
    TNode<Object> t300 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t297)));
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>(t300), implicit_cast<TNode<Object>>(t299));
    // ../../src/builtins/array.tq:314:5
    arguments->PopAndReturn(implicit_cast<TNode<Object>>((*a_102).value()));
  }
}

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::ConvertToRelativeIndex(TNode<Number> p_index, TNode<Number> p_length) {
  TVARIABLE(Number, _return_119_impl);
  auto _return_119 = &_return_119_impl;
  USE(_return_119);
  Label label_macro_end_1131_impl(this, {_return_119});
  Label* label_macro_end_1131 = &label_macro_end_1131_impl;
  USE(label_macro_end_1131);
  // ../../src/builtins/array-copywithin.tq:6:71
  {
    // ../../src/builtins/array-copywithin.tq:7:5
    auto t301 = [=]() {
      TNode<Number> t303 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(p_index), implicit_cast<TNode<Number>>(p_length)));
      USE(implicit_cast<TNode<Number>>(t303));
      int31_t t304 = 0;
      TNode<Number> t305 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t304)));
      TNode<Number> t306 = UncheckedCast<Number>(max(implicit_cast<TNode<Number>>(t303), implicit_cast<TNode<Number>>(t305)));
      USE(implicit_cast<TNode<Number>>(t306));
      return implicit_cast<TNode<Number>>(t306);
    };
    auto t302 = [=]() {
      TNode<Number> t307 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>(p_index), implicit_cast<TNode<Number>>(p_length)));
      USE(implicit_cast<TNode<Number>>(t307));
      return implicit_cast<TNode<Number>>(t307);
    };
    TVARIABLE(Number, t308_615_impl);
    auto t308_615 = &t308_615_impl;
    USE(t308_615);
    {
      Label label__True_87_impl(this);
      Label* label__True_87 = &label__True_87_impl;
      USE(label__True_87);
      Label label__False_88_impl(this);
      Label* label__False_88 = &label__False_88_impl;
      USE(label__False_88);
      Label label__done_616_1132_impl(this, {t308_615});
      Label* label__done_616_1132 = &label__done_616_1132_impl;
      USE(label__done_616_1132);
      int31_t t309 = 0;
      TNode<Number> t310 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t309)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>(p_index), implicit_cast<TNode<Number>>(t310), label__True_87, label__False_88);
      BIND(label__True_87);
            *t308_615 = implicit_cast<TNode<Number>>(t301());
      Goto(label__done_616_1132);
      BIND(label__False_88);
            *t308_615 = implicit_cast<TNode<Number>>(t302());
      Goto(label__done_616_1132);
      BIND(label__done_616_1132);
    }
    *_return_119 = implicit_cast<TNode<Number>>((*t308_615).value());
    Goto(label_macro_end_1131);
  }
  BIND(label_macro_end_1131);
  return implicit_cast<TNode<Number>>((*_return_119).value());
}

TF_BUILTIN(ArrayPrototypeCopyWithin, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-copywithin.tq:12:65
  {
    // ../../src/builtins/array-copywithin.tq:14:5
    TNode<JSReceiver> t311 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t311));
    TNode<JSReceiver> object_617_impl;
    auto object_617 = &object_617_impl;
    USE(object_617);
    *object_617 = implicit_cast<TNode<JSReceiver>>(t311);
    // ../../src/builtins/array-copywithin.tq:17:5
    TNode<Number> t312 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_617))));
    USE(implicit_cast<TNode<Number>>(t312));
    TNode<Number> length_618_impl;
    auto length_618 = &length_618_impl;
    USE(length_618);
    *length_618 = implicit_cast<TNode<Number>>(t312);
    // ../../src/builtins/array-copywithin.tq:20:5
    int31_t t313 = 0;
    TNode<IntPtrT> t314 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t313)));
    TNode<Object> t315 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t314)));
    TNode<Number> t316 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t315)));
    USE(implicit_cast<TNode<Number>>(t316));
    TNode<Number> relative_target_619_impl;
    auto relative_target_619 = &relative_target_619_impl;
    USE(relative_target_619);
    *relative_target_619 = implicit_cast<TNode<Number>>(t316);
    // ../../src/builtins/array-copywithin.tq:24:5
    TNode<Number> t317 = UncheckedCast<Number>(ConvertToRelativeIndex(implicit_cast<TNode<Number>>((*relative_target_619)), implicit_cast<TNode<Number>>((*length_618))));
    USE(implicit_cast<TNode<Number>>(t317));
    TVARIABLE(Number, to_120_impl);
    auto to_120 = &to_120_impl;
    USE(to_120);
    *to_120 = implicit_cast<TNode<Number>>(t317);
    // ../../src/builtins/array-copywithin.tq:27:5
    int31_t t318 = 1;
    TNode<IntPtrT> t319 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t318)));
    TNode<Object> t320 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t319)));
    TNode<Number> t321 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t320)));
    USE(implicit_cast<TNode<Number>>(t321));
    TNode<Number> relative_start_620_impl;
    auto relative_start_620 = &relative_start_620_impl;
    USE(relative_start_620);
    *relative_start_620 = implicit_cast<TNode<Number>>(t321);
    // ../../src/builtins/array-copywithin.tq:31:5
    TNode<Number> t322 = UncheckedCast<Number>(ConvertToRelativeIndex(implicit_cast<TNode<Number>>((*relative_start_620)), implicit_cast<TNode<Number>>((*length_618))));
    USE(implicit_cast<TNode<Number>>(t322));
    TVARIABLE(Number, from_121_impl);
    auto from_121 = &from_121_impl;
    USE(from_121);
    *from_121 = implicit_cast<TNode<Number>>(t322);
    // ../../src/builtins/array-copywithin.tq:35:5
    TVARIABLE(Number, relative_end_122_impl);
    auto relative_end_122 = &relative_end_122_impl;
    USE(relative_end_122);
    *relative_end_122 = implicit_cast<TNode<Number>>((*length_618));
    // ../../src/builtins/array-copywithin.tq:36:5
    {
      Label label__True_89_impl(this);
      Label* label__True_89 = &label__True_89_impl;
      USE(label__True_89);
      Label label__False_90_impl(this, {relative_end_122});
      Label* label__False_90 = &label__False_90_impl;
      USE(label__False_90);
      int31_t t323 = 2;
      TNode<IntPtrT> t324 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t323)));
      TNode<Object> t325 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t324)));
      TNode<BoolT> t326 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t325), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t326));
      Branch(implicit_cast<TNode<BoolT>>(t326), label__True_89, label__False_90);
      if (label__True_89->is_used())
      {
        BIND(label__True_89);
        // ../../src/builtins/array-copywithin.tq:36:36
        {
          // ../../src/builtins/array-copywithin.tq:37:7
          int31_t t327 = 2;
          TNode<IntPtrT> t328 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t327)));
          TNode<Object> t329 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t328)));
          TNode<Number> t330 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t329)));
          USE(implicit_cast<TNode<Number>>(t330));
          *relative_end_122 = implicit_cast<TNode<Number>>(t330);
        }
        Goto(label__False_90);
      }
      BIND(label__False_90);
    }
    // ../../src/builtins/array-copywithin.tq:42:5
    TNode<Number> t331 = UncheckedCast<Number>(ConvertToRelativeIndex(implicit_cast<TNode<Number>>((*relative_end_122).value()), implicit_cast<TNode<Number>>((*length_618))));
    USE(implicit_cast<TNode<Number>>(t331));
    TNode<Number> final_621_impl;
    auto final_621 = &final_621_impl;
    USE(final_621);
    *final_621 = implicit_cast<TNode<Number>>(t331);
    // ../../src/builtins/array-copywithin.tq:45:5
    TNode<Number> t332 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*final_621)), implicit_cast<TNode<Number>>((*from_121).value())));
    USE(implicit_cast<TNode<Number>>(t332));
    TNode<Number> t333 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*length_618)), implicit_cast<TNode<Number>>((*to_120).value())));
    USE(implicit_cast<TNode<Number>>(t333));
    TNode<Number> t334 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>(t332), implicit_cast<TNode<Number>>(t333)));
    USE(implicit_cast<TNode<Number>>(t334));
    TVARIABLE(Number, count_123_impl);
    auto count_123 = &count_123_impl;
    USE(count_123);
    *count_123 = implicit_cast<TNode<Number>>(t334);
    // ../../src/builtins/array-copywithin.tq:48:5
    int31_t t335 = 1;
    TVARIABLE(Number, direction_124_impl);
    auto direction_124 = &direction_124_impl;
    USE(direction_124);
    TNode<Number> t336 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t335)));
    *direction_124 = implicit_cast<TNode<Number>>(t336);
    // ../../src/builtins/array-copywithin.tq:50:5
    {
      Label label__True_91_impl(this);
      Label* label__True_91 = &label__True_91_impl;
      USE(label__True_91);
      Label label__False_92_impl(this, {direction_124, from_121, to_120});
      Label* label__False_92 = &label__False_92_impl;
      USE(label__False_92);
      Label label__True_93_impl(this);
      Label* label__True_93 = &label__True_93_impl;
      USE(label__True_93);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*from_121).value()), implicit_cast<TNode<Number>>((*to_120).value()), label__True_93, label__False_92);
      BIND(label__True_93);
      TNode<Number> t337 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*from_121).value()), implicit_cast<TNode<Number>>((*count_123).value())));
      USE(implicit_cast<TNode<Number>>(t337));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*to_120).value()), implicit_cast<TNode<Number>>(t337), label__True_91, label__False_92);
      if (label__True_91->is_used())
      {
        BIND(label__True_91);
        // ../../src/builtins/array-copywithin.tq:50:43
        {
          // ../../src/builtins/array-copywithin.tq:52:7
          int31_t t338 = -1;
          TNode<Number> t339 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t338)));
          *direction_124 = implicit_cast<TNode<Number>>(t339);
          // ../../src/builtins/array-copywithin.tq:55:7
          TNode<Number> t340 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*from_121).value()), implicit_cast<TNode<Number>>((*count_123).value())));
          USE(implicit_cast<TNode<Number>>(t340));
          int31_t t341 = 1;
          TNode<Number> t342 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t341)));
          TNode<Number> t343 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t340), implicit_cast<TNode<Number>>(t342)));
          USE(implicit_cast<TNode<Number>>(t343));
          *from_121 = implicit_cast<TNode<Number>>(t343);
          // ../../src/builtins/array-copywithin.tq:58:7
          TNode<Number> t344 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*to_120).value()), implicit_cast<TNode<Number>>((*count_123).value())));
          USE(implicit_cast<TNode<Number>>(t344));
          int31_t t345 = 1;
          TNode<Number> t346 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t345)));
          TNode<Number> t347 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t344), implicit_cast<TNode<Number>>(t346)));
          USE(implicit_cast<TNode<Number>>(t347));
          *to_120 = implicit_cast<TNode<Number>>(t347);
        }
        Goto(label__False_92);
      }
      BIND(label__False_92);
    }
    // ../../src/builtins/array-copywithin.tq:62:5
    {
      Label label__True_94_impl(this);
      Label* label__True_94 = &label__True_94_impl;
      USE(label__True_94);
      Label label__False_95_impl(this);
      Label* label__False_95 = &label__False_95_impl;
      USE(label__False_95);
      Label label_header_622_1133_impl(this, {count_123, from_121, to_120});
      Label* label_header_622_1133 = &label_header_622_1133_impl;
      USE(label_header_622_1133);
      Goto(label_header_622_1133);
      BIND(label_header_622_1133);
      int31_t t348 = 0;
      TNode<Number> t349 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t348)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*count_123).value()), implicit_cast<TNode<Number>>(t349), label__True_94, label__False_95);
      if (label__True_94->is_used())
      {
        BIND(label__True_94);
        // ../../src/builtins/array-copywithin.tq:62:23
        {
          // ../../src/builtins/array-copywithin.tq:66:7
          TNode<Oddball> t350 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_617)), implicit_cast<TNode<Object>>((*from_121).value())));
          USE(implicit_cast<TNode<Oddball>>(t350));
          TNode<Oddball> from_present_623_impl;
          auto from_present_623 = &from_present_623_impl;
          USE(from_present_623);
          *from_present_623 = implicit_cast<TNode<Oddball>>(t350);
          // ../../src/builtins/array-copywithin.tq:69:7
          {
            Label label__True_96_impl(this);
            Label* label__True_96 = &label__True_96_impl;
            USE(label__True_96);
            Label label__False_97_impl(this);
            Label* label__False_97 = &label__False_97_impl;
            USE(label__False_97);
            Label label_if_done_label_624_1134_impl(this, {});
            Label* label_if_done_label_624_1134 = &label_if_done_label_624_1134_impl;
            USE(label_if_done_label_624_1134);
            TNode<BoolT> t351 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*from_present_623)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t351));
            Branch(implicit_cast<TNode<BoolT>>(t351), label__True_96, label__False_97);
            if (label__True_96->is_used())
            {
              BIND(label__True_96);
              // ../../src/builtins/array-copywithin.tq:69:33
              {
                // ../../src/builtins/array-copywithin.tq:71:9
                TNode<Object> t352 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_617)), implicit_cast<TNode<Object>>((*from_121).value())));
                USE(implicit_cast<TNode<Object>>(t352));
                TNode<Object> from_val_625_impl;
                auto from_val_625 = &from_val_625_impl;
                USE(from_val_625);
                *from_val_625 = implicit_cast<TNode<Object>>(t352);
                // ../../src/builtins/array-copywithin.tq:74:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_617)), implicit_cast<TNode<Object>>((*to_120).value()), implicit_cast<TNode<Object>>((*from_val_625)));
              }
              Goto(label_if_done_label_624_1134);
            }
            if (label__False_97->is_used())
            {
              BIND(label__False_97);
              // ../../src/builtins/array-copywithin.tq:75:14
              {
                // ../../src/builtins/array-copywithin.tq:77:9
                TNode<Smi> t353 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_617)), implicit_cast<TNode<Object>>((*to_120).value()), implicit_cast<TNode<Smi>>(t353));
              }
              Goto(label_if_done_label_624_1134);
            }
            BIND(label_if_done_label_624_1134);
          }
          // ../../src/builtins/array-copywithin.tq:81:7
          TNode<Number> t354 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*from_121).value()), implicit_cast<TNode<Number>>((*direction_124).value())));
          USE(implicit_cast<TNode<Number>>(t354));
          *from_121 = implicit_cast<TNode<Number>>(t354);
          // ../../src/builtins/array-copywithin.tq:84:7
          TNode<Number> t355 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*to_120).value()), implicit_cast<TNode<Number>>((*direction_124).value())));
          USE(implicit_cast<TNode<Number>>(t355));
          *to_120 = implicit_cast<TNode<Number>>(t355);
          // ../../src/builtins/array-copywithin.tq:87:7
          TNode<Number> t356 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t357 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*count_123).value()), implicit_cast<TNode<Number>>(t356)));
          *count_123 = implicit_cast<TNode<Number>>(t357);
        }
        Goto(label_header_622_1133);
      }
      BIND(label__False_95);
    }
    // ../../src/builtins/array-copywithin.tq:91:5
    arguments->PopAndReturn(implicit_cast<TNode<Object>>((*object_617)));
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::ArrayForEachTorqueContinuation(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, TNode<Smi> p_initial_k) {
  TVARIABLE(Object, _return_125_impl);
  auto _return_125 = &_return_125_impl;
  USE(_return_125);
  Label label_macro_end_1135_impl(this, {_return_125});
  Label* label_macro_end_1135 = &label_macro_end_1135_impl;
  USE(label_macro_end_1135);
  // ../../src/builtins/array-foreach.tq:8:48
  {
    // ../../src/builtins/array-foreach.tq:11:5
    TVARIABLE(Smi, k_126_impl);
    auto k_126 = &k_126_impl;
    USE(k_126);
    *k_126 = implicit_cast<TNode<Smi>>(p_initial_k);
    Label label__True_98_impl(this);
    Label* label__True_98 = &label__True_98_impl;
    USE(label__True_98);
    Label label__False_99_impl(this);
    Label* label__False_99 = &label__False_99_impl;
    USE(label__False_99);
    Label label_header_626_1136_impl(this, {k_126});
    Label* label_header_626_1136 = &label_header_626_1136_impl;
    USE(label_header_626_1136);
    Goto(label_header_626_1136);
    BIND(label_header_626_1136);
    Label label_action_627_1137_impl(this);
    Label* label_action_627_1137 = &label_action_627_1137_impl;
    USE(label_action_627_1137);
    BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_126).value()), implicit_cast<TNode<Number>>(p_len), label__True_98, label__False_99);
    if (label__True_98->is_used())
    {
      BIND(label__True_98);
      // ../../src/builtins/array-foreach.tq:11:54
      {
        // ../../src/builtins/array-foreach.tq:13:7
        TNode<String> t358 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*k_126).value())));
        USE(implicit_cast<TNode<String>>(t358));
        TNode<String> pK_628_impl;
        auto pK_628 = &pK_628_impl;
        USE(pK_628);
        *pK_628 = implicit_cast<TNode<String>>(t358);
        // ../../src/builtins/array-foreach.tq:16:7
        TNode<Oddball> t359 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Object>>((*pK_628))));
        USE(implicit_cast<TNode<Oddball>>(t359));
        TNode<Oddball> kPresent_629_impl;
        auto kPresent_629 = &kPresent_629_impl;
        USE(kPresent_629);
        *kPresent_629 = implicit_cast<TNode<Oddball>>(t359);
        // ../../src/builtins/array-foreach.tq:19:7
        {
          Label label__True_100_impl(this);
          Label* label__True_100 = &label__True_100_impl;
          USE(label__True_100);
          Label label__False_101_impl(this, {});
          Label* label__False_101 = &label__False_101_impl;
          USE(label__False_101);
          TNode<BoolT> t360 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*kPresent_629)), implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<BoolT>>(t360));
          Branch(implicit_cast<TNode<BoolT>>(t360), label__True_100, label__False_101);
          if (label__True_100->is_used())
          {
            BIND(label__True_100);
            // ../../src/builtins/array-foreach.tq:19:29
            {
              // ../../src/builtins/array-foreach.tq:21:9
              TNode<Object> t361 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*pK_628))));
              USE(implicit_cast<TNode<Object>>(t361));
              TNode<Object> kValue_630_impl;
              auto kValue_630 = &kValue_630_impl;
              USE(kValue_630);
              *kValue_630 = implicit_cast<TNode<Object>>(t361);
              // ../../src/builtins/array-foreach.tq:24:9
              TNode<Object> t362 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*kValue_630)), implicit_cast<TNode<Object>>((*k_126).value()), implicit_cast<TNode<Object>>(p_o)));
              USE(implicit_cast<TNode<Object>>(t362));
            }
            Goto(label__False_101);
          }
          BIND(label__False_101);
        }
      }
      Goto(label_action_627_1137);
    }
    {
      BIND(label_action_627_1137);
      int31_t t363 = 1;
      TNode<Smi> t364 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t363)));
      TNode<Smi> t365 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_126).value()), implicit_cast<TNode<Smi>>(t364)));
      USE(implicit_cast<TNode<Smi>>(t365));
      *k_126 = implicit_cast<TNode<Smi>>(t365);
      Goto(label_header_626_1136);
    }
    BIND(label__False_99);
    // ../../src/builtins/array-foreach.tq:29:5
    *_return_125 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1135);
  }
  BIND(label_macro_end_1135);
  return implicit_cast<TNode<Object>>((*_return_125).value());
}

TF_BUILTIN(ArrayForEachLoopEagerDeoptContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../src/builtins/array-foreach.tq:34:49
  {
    // ../../src/builtins/array-foreach.tq:38:5
    TNode<JSReceiver> t366 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t366));
    TNode<JSReceiver> jsreceiver_631_impl;
    auto jsreceiver_631 = &jsreceiver_631_impl;
    USE(jsreceiver_631);
    *jsreceiver_631 = implicit_cast<TNode<JSReceiver>>(t366);
    // ../../src/builtins/array-foreach.tq:39:5
    TNode<Object> t367 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*jsreceiver_631)), implicit_cast<TNode<Object>>(p_callback), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>((*jsreceiver_631)), implicit_cast<TNode<Object>>(p_initialK), implicit_cast<TNode<Object>>(p_length), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t367));
    Return(implicit_cast<TNode<Object>>(t367));
  }
}

TF_BUILTIN(ArrayForEachLoopLazyDeoptContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Object> p_result = UncheckedCast<Object>(Parameter(Descriptor::kResult));
  USE(p_result);
  // ../../src/builtins/array-foreach.tq:46:65
  {
    // ../../src/builtins/array-foreach.tq:50:5
    TNode<JSReceiver> t368 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t368));
    TNode<JSReceiver> jsreceiver_632_impl;
    auto jsreceiver_632 = &jsreceiver_632_impl;
    USE(jsreceiver_632);
    *jsreceiver_632 = implicit_cast<TNode<JSReceiver>>(t368);
    // ../../src/builtins/array-foreach.tq:51:5
    TNode<Object> t369 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*jsreceiver_632)), implicit_cast<TNode<Object>>(p_callback), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>((*jsreceiver_632)), implicit_cast<TNode<Object>>(p_initialK), implicit_cast<TNode<Object>>(p_length), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t369));
    Return(implicit_cast<TNode<Object>>(t369));
  }
}

TF_BUILTIN(ArrayForEachLoopContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_array = UncheckedCast<Object>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Object> p_object = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(p_object);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Object> p_to = UncheckedCast<Object>(Parameter(Descriptor::kTo));
  USE(p_to);
  // ../../src/builtins/array-foreach.tq:59:27
  {
    // ../../src/builtins/array-foreach.tq:60:5
    {
      Label label_try_done_633_1138_impl(this);
      Label* label_try_done_633_1138 = &label_try_done_633_1138_impl;
      USE(label_try_done_633_1138);
      Label label_Unexpected_102_impl(this);
      Label* label_Unexpected_102 = &label_Unexpected_102_impl;
      USE(label_Unexpected_102);
      Label label_try_begin_634_1139_impl(this);
      Label* label_try_begin_634_1139 = &label_try_begin_634_1139_impl;
      USE(label_try_begin_634_1139);
      Goto(label_try_begin_634_1139);
      if (label_try_begin_634_1139->is_used())
      {
        BIND(label_try_begin_634_1139);
        // ../../src/builtins/array-foreach.tq:60:9
        {
          // ../../src/builtins/array-foreach.tq:61:7
          TNode<JSReceiver> t370 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(p_callback), label_Unexpected_102));
          USE(implicit_cast<TNode<JSReceiver>>(t370));
          TNode<JSReceiver> callbackfn_635_impl;
          auto callbackfn_635 = &callbackfn_635_impl;
          USE(callbackfn_635);
          *callbackfn_635 = implicit_cast<TNode<JSReceiver>>(t370);
          // ../../src/builtins/array-foreach.tq:63:7
          TNode<Smi> t371 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_initialK), label_Unexpected_102));
          USE(implicit_cast<TNode<Smi>>(t371));
          TNode<Smi> k_636_impl;
          auto k_636 = &k_636_impl;
          USE(k_636);
          *k_636 = implicit_cast<TNode<Smi>>(t371);
          // ../../src/builtins/array-foreach.tq:64:7
          TNode<Number> t372 = UncheckedCast<Number>(cast22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_length), label_Unexpected_102));
          USE(implicit_cast<TNode<Number>>(t372));
          TNode<Number> number_length_637_impl;
          auto number_length_637 = &number_length_637_impl;
          USE(number_length_637);
          *number_length_637 = implicit_cast<TNode<Number>>(t372);
          // ../../src/builtins/array-foreach.tq:66:7
          TNode<Object> t373 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_receiver), implicit_cast<TNode<Number>>((*number_length_637)), implicit_cast<TNode<JSReceiver>>((*callbackfn_635)), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Smi>>((*k_636))));
          USE(implicit_cast<TNode<Object>>(t373));
          Return(implicit_cast<TNode<Object>>(t373));
        }
      }
      if (label_Unexpected_102->is_used())
      {
        BIND(label_Unexpected_102);
        // ../../src/builtins/array-foreach.tq:69:22
        {
          // ../../src/builtins/array-foreach.tq:70:7
          Unreachable();
        }
      }
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArrayForEach(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_103, TVariable<Smi>* Bailout0_127) {
  TVARIABLE(Object, _return_128_impl);
  auto _return_128 = &_return_128_impl;
  USE(_return_128);
  Label label_macro_end_1140_impl(this, {_return_128});
  Label* label_macro_end_1140 = &label_macro_end_1140_impl;
  USE(label_macro_end_1140);
  // ../../src/builtins/array-foreach.tq:111:16
  {
    // ../../src/builtins/array-foreach.tq:112:5
    int31_t t374 = 0;
    TVARIABLE(Smi, k_129_impl);
    auto k_129 = &k_129_impl;
    USE(k_129);
    TNode<Smi> t375 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t374)));
    *k_129 = implicit_cast<TNode<Smi>>(t375);
    // ../../src/builtins/array-foreach.tq:113:5
    {
      Label label_try_done_638_1141_impl(this);
      Label* label_try_done_638_1141 = &label_try_done_638_1141_impl;
      USE(label_try_done_638_1141);
      Label label_Slow_104_impl(this);
      Label* label_Slow_104 = &label_Slow_104_impl;
      USE(label_Slow_104);
      Label label_try_begin_639_1142_impl(this);
      Label* label_try_begin_639_1142 = &label_try_begin_639_1142_impl;
      USE(label_try_begin_639_1142);
      Goto(label_try_begin_639_1142);
      if (label_try_begin_639_1142->is_used())
      {
        BIND(label_try_begin_639_1142);
        // ../../src/builtins/array-foreach.tq:113:9
        {
          // ../../src/builtins/array-foreach.tq:114:7
          TNode<Smi> t376 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_len), label_Slow_104));
          USE(implicit_cast<TNode<Smi>>(t376));
          TNode<Smi> smi_len_640_impl;
          auto smi_len_640 = &smi_len_640_impl;
          USE(smi_len_640);
          *smi_len_640 = implicit_cast<TNode<Smi>>(t376);
          // ../../src/builtins/array-foreach.tq:115:7
          TNode<JSArray> t377 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<HeapObject>>(p_o), label_Slow_104));
          USE(implicit_cast<TNode<JSArray>>(t377));
          TNode<JSArray> a_641_impl;
          auto a_641 = &a_641_impl;
          USE(a_641);
          *a_641 = implicit_cast<TNode<JSArray>>(t377);
          // ../../src/builtins/array-foreach.tq:116:7
          TNode<Map> t378 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_641))));
          TNode<Map> map_642_impl;
          auto map_642 = &map_642_impl;
          USE(map_642);
          *map_642 = implicit_cast<TNode<Map>>(t378);
          // ../../src/builtins/array-foreach.tq:118:7
          {
            Label label__True_105_impl(this);
            Label* label__True_105 = &label__True_105_impl;
            USE(label__True_105);
            Label label__False_106_impl(this, {});
            Label* label__False_106 = &label__False_106_impl;
            USE(label__False_106);
            TNode<BoolT> t379 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Map>>((*map_642))));
            USE(implicit_cast<TNode<BoolT>>(t379));
            TNode<BoolT> t380 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t379)));
            USE(implicit_cast<TNode<BoolT>>(t380));
            Branch(implicit_cast<TNode<BoolT>>(t380), label__True_105, label__False_106);
            if (label__True_105->is_used())
            {
              BIND(label__True_105);
              // ../../src/builtins/array-foreach.tq:118:60
              Goto(label_Slow_104);
            }
            BIND(label__False_106);
          }
          // ../../src/builtins/array-foreach.tq:119:7
          TNode<Int32T> t381 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_642))));
          TNode<Int32T> elementsKind_643_impl;
          auto elementsKind_643 = &elementsKind_643_impl;
          USE(elementsKind_643);
          *elementsKind_643 = implicit_cast<TNode<Int32T>>(t381);
          // ../../src/builtins/array-foreach.tq:120:7
          {
            Label label__True_107_impl(this);
            Label* label__True_107 = &label__True_107_impl;
            USE(label__True_107);
            Label label__False_108_impl(this, {});
            Label* label__False_108 = &label__False_108_impl;
            USE(label__False_108);
            TNode<BoolT> t382 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_643))));
            USE(implicit_cast<TNode<BoolT>>(t382));
            TNode<BoolT> t383 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t382)));
            USE(implicit_cast<TNode<BoolT>>(t383));
            Branch(implicit_cast<TNode<BoolT>>(t383), label__True_107, label__False_108);
            if (label__True_107->is_used())
            {
              BIND(label__True_107);
              // ../../src/builtins/array-foreach.tq:120:46
              Goto(label_Slow_104);
            }
            BIND(label__False_108);
          }
          // ../../src/builtins/array-foreach.tq:122:7
          {
            Label label__True_109_impl(this);
            Label* label__True_109 = &label__True_109_impl;
            USE(label__True_109);
            Label label__False_110_impl(this);
            Label* label__False_110 = &label__False_110_impl;
            USE(label__False_110);
            Label label_if_done_label_644_1143_impl(this, {});
            Label* label_if_done_label_644_1143 = &label_if_done_label_644_1143_impl;
            USE(label_if_done_label_644_1143);
            TNode<BoolT> t384 = UncheckedCast<BoolT>(IsElementsKindGreaterThan(implicit_cast<TNode<Int32T>>((*elementsKind_643)), implicit_cast<ElementsKind>(HOLEY_ELEMENTS)));
            USE(implicit_cast<TNode<BoolT>>(t384));
            Branch(implicit_cast<TNode<BoolT>>(t384), label__True_109, label__False_110);
            if (label__True_109->is_used())
            {
              BIND(label__True_109);
              // ../../src/builtins/array-foreach.tq:122:68
              {
                // ../../src/builtins/array-foreach.tq:123:9
                VisitAllElements18ATFixedDoubleArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_641)), implicit_cast<TNode<Smi>>((*smi_len_640)), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), label_Bailout_103, Bailout0_127);
              }
              Goto(label_if_done_label_644_1143);
            }
            if (label__False_110->is_used())
            {
              BIND(label__False_110);
              // ../../src/builtins/array-foreach.tq:126:14
              {
                // ../../src/builtins/array-foreach.tq:127:9
                VisitAllElements12ATFixedArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_641)), implicit_cast<TNode<Smi>>((*smi_len_640)), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), label_Bailout_103, Bailout0_127);
              }
              Goto(label_if_done_label_644_1143);
            }
            BIND(label_if_done_label_644_1143);
          }
        }
        Goto(label_try_done_638_1141);
      }
      if (label_Slow_104->is_used())
      {
        BIND(label_Slow_104);
        // ../../src/builtins/array-foreach.tq:131:16
        {
          // ../../src/builtins/array-foreach.tq:132:7
          *Bailout0_127 = implicit_cast<TNode<Smi>>((*k_129).value());
          Goto(label_Bailout_103);
        }
      }
      BIND(label_try_done_638_1141);
    }
    // ../../src/builtins/array-foreach.tq:134:5
    *_return_128 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1140);
  }
  BIND(label_macro_end_1140);
  return implicit_cast<TNode<Object>>((*_return_128).value());
}

TF_BUILTIN(ArrayForEach, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-foreach.tq:139:65
  {
    // ../../src/builtins/array-foreach.tq:140:5
    {
      Label label_try_done_645_1144_impl(this);
      Label* label_try_done_645_1144 = &label_try_done_645_1144_impl;
      USE(label_try_done_645_1144);
      Label label_TypeError_111_impl(this);
      Label* label_TypeError_111 = &label_TypeError_111_impl;
      USE(label_TypeError_111);
      Label label_NullOrUndefinedError_112_impl(this);
      Label* label_NullOrUndefinedError_112 = &label_NullOrUndefinedError_112_impl;
      USE(label_NullOrUndefinedError_112);
      Label label_try_begin_646_1145_impl(this);
      Label* label_try_begin_646_1145 = &label_try_begin_646_1145_impl;
      USE(label_try_begin_646_1145);
      Goto(label_try_begin_646_1145);
      if (label_try_begin_646_1145->is_used())
      {
        BIND(label_try_begin_646_1145);
        // ../../src/builtins/array-foreach.tq:140:9
        {
          // ../../src/builtins/array-foreach.tq:141:7
          {
            Label label__True_113_impl(this);
            Label* label__True_113 = &label__True_113_impl;
            USE(label__True_113);
            Label label__False_114_impl(this, {});
            Label* label__False_114 = &label__False_114_impl;
            USE(label__False_114);
            TNode<BoolT> t385 = UncheckedCast<BoolT>(IsNullOrUndefined(implicit_cast<TNode<Object>>(p_receiver)));
            USE(implicit_cast<TNode<BoolT>>(t385));
            Branch(implicit_cast<TNode<BoolT>>(t385), label__True_113, label__False_114);
            if (label__True_113->is_used())
            {
              BIND(label__True_113);
              // ../../src/builtins/array-foreach.tq:141:40
              {
                // ../../src/builtins/array-foreach.tq:142:9
                Goto(label_NullOrUndefinedError_112);
              }
            }
            BIND(label__False_114);
          }
          // ../../src/builtins/array-foreach.tq:146:7
          TNode<JSReceiver> t386 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
          USE(implicit_cast<TNode<JSReceiver>>(t386));
          TNode<JSReceiver> o_647_impl;
          auto o_647 = &o_647_impl;
          USE(o_647);
          *o_647 = implicit_cast<TNode<JSReceiver>>(t386);
          // ../../src/builtins/array-foreach.tq:149:7
          TNode<Number> t387 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_647))));
          USE(implicit_cast<TNode<Number>>(t387));
          TNode<Number> len_648_impl;
          auto len_648 = &len_648_impl;
          USE(len_648);
          *len_648 = implicit_cast<TNode<Number>>(t387);
          // ../../src/builtins/array-foreach.tq:152:7
          {
            Label label__True_115_impl(this);
            Label* label__True_115 = &label__True_115_impl;
            USE(label__True_115);
            Label label__False_116_impl(this, {});
            Label* label__False_116 = &label__False_116_impl;
            USE(label__False_116);
            TNode<IntPtrT> t388 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
            int31_t t389 = 0;
            TNode<IntPtrT> t390 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t389)));
            TNode<BoolT> t391 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t388), implicit_cast<TNode<IntPtrT>>(t390)));
            USE(implicit_cast<TNode<BoolT>>(t391));
            Branch(implicit_cast<TNode<BoolT>>(t391), label__True_115, label__False_116);
            if (label__True_115->is_used())
            {
              BIND(label__True_115);
              // ../../src/builtins/array-foreach.tq:152:34
              {
                // ../../src/builtins/array-foreach.tq:153:9
                Goto(label_TypeError_111);
              }
            }
            BIND(label__False_116);
          }
          // ../../src/builtins/array-foreach.tq:155:7
          int31_t t392 = 0;
          TNode<IntPtrT> t393 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t392)));
          TNode<Object> t394 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t393)));
          TNode<JSReceiver> t395 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(t394), label_TypeError_111));
          USE(implicit_cast<TNode<JSReceiver>>(t395));
          TNode<JSReceiver> callbackfn_649_impl;
          auto callbackfn_649 = &callbackfn_649_impl;
          USE(callbackfn_649);
          *callbackfn_649 = implicit_cast<TNode<JSReceiver>>(t395);
          // ../../src/builtins/array-foreach.tq:159:7
          auto t396 = [=]() {
            int31_t t398 = 1;
            TNode<IntPtrT> t399 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t398)));
            TNode<Object> t400 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t399)));
            return implicit_cast<TNode<Object>>(t400);
          };
          auto t397 = [=]() {
            return implicit_cast<TNode<Oddball>>(Undefined());
          };
          TVARIABLE(Object, t401_650_impl);
          auto t401_650 = &t401_650_impl;
          USE(t401_650);
          {
            Label label__True_117_impl(this);
            Label* label__True_117 = &label__True_117_impl;
            USE(label__True_117);
            Label label__False_118_impl(this);
            Label* label__False_118 = &label__False_118_impl;
            USE(label__False_118);
            Label label__done_651_1146_impl(this, {t401_650});
            Label* label__done_651_1146 = &label__done_651_1146_impl;
            USE(label__done_651_1146);
            TNode<IntPtrT> t402 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
            int31_t t403 = 1;
            TNode<IntPtrT> t404 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t403)));
            TNode<BoolT> t405 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t402), implicit_cast<TNode<IntPtrT>>(t404)));
            USE(implicit_cast<TNode<BoolT>>(t405));
            Branch(implicit_cast<TNode<BoolT>>(t405), label__True_117, label__False_118);
            BIND(label__True_117);
                        *t401_650 = implicit_cast<TNode<Object>>(t396());
            Goto(label__done_651_1146);
            BIND(label__False_118);
                        *t401_650 = implicit_cast<TNode<Object>>(t397());
            Goto(label__done_651_1146);
            BIND(label__done_651_1146);
          }
          TNode<Object> thisArg_652_impl;
          auto thisArg_652 = &thisArg_652_impl;
          USE(thisArg_652);
          *thisArg_652 = implicit_cast<TNode<Object>>((*t401_650).value());
          // ../../src/builtins/array-foreach.tq:162:7
          int31_t t406 = 0;
          TVARIABLE(Smi, k_130_impl);
          auto k_130 = &k_130_impl;
          USE(k_130);
          TNode<Smi> t407 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t406)));
          *k_130 = implicit_cast<TNode<Smi>>(t407);
          // ../../src/builtins/array-foreach.tq:163:7
          {
            Label label_try_done_653_1147_impl(this);
            Label* label_try_done_653_1147 = &label_try_done_653_1147_impl;
            USE(label_try_done_653_1147);
            Label label_Bailout_119_impl(this);
            Label* label_Bailout_119 = &label_Bailout_119_impl;
            USE(label_Bailout_119);
            TVARIABLE(Smi, k_value_131_impl);
            auto k_value_131 = &k_value_131_impl;
            USE(k_value_131);
            Label label_try_begin_654_1148_impl(this);
            Label* label_try_begin_654_1148 = &label_try_begin_654_1148_impl;
            USE(label_try_begin_654_1148);
            Goto(label_try_begin_654_1148);
            if (label_try_begin_654_1148->is_used())
            {
              BIND(label_try_begin_654_1148);
              // ../../src/builtins/array-foreach.tq:163:11
              {
                // ../../src/builtins/array-foreach.tq:164:9
                TNode<Object> t408 = UncheckedCast<Object>(FastArrayForEach(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_647)), implicit_cast<TNode<Number>>((*len_648)), implicit_cast<TNode<JSReceiver>>((*callbackfn_649)), implicit_cast<TNode<Object>>((*thisArg_652)), label_Bailout_119, k_value_131));
                USE(implicit_cast<TNode<Object>>(t408));
                arguments->PopAndReturn(implicit_cast<TNode<Object>>(t408));
              }
            }
            if (label_Bailout_119->is_used())
            {
              BIND(label_Bailout_119);
              // ../../src/builtins/array-foreach.tq:167:35
              {
                // ../../src/builtins/array-foreach.tq:168:9
                *k_130 = implicit_cast<TNode<Smi>>((*k_value_131).value());
              }
              Goto(label_try_done_653_1147);
            }
            BIND(label_try_done_653_1147);
          }
          // ../../src/builtins/array-foreach.tq:171:7
          TNode<Object> t409 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_647)), implicit_cast<TNode<Number>>((*len_648)), implicit_cast<TNode<JSReceiver>>((*callbackfn_649)), implicit_cast<TNode<Object>>((*thisArg_652)), implicit_cast<TNode<Smi>>((*k_130).value())));
          USE(implicit_cast<TNode<Object>>(t409));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t409));
        }
      }
      if (label_TypeError_111->is_used())
      {
        BIND(label_TypeError_111);
        // ../../src/builtins/array-foreach.tq:174:21
        {
          // ../../src/builtins/array-foreach.tq:175:7
          int31_t t410 = 0;
          TNode<IntPtrT> t411 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t410)));
          TNode<Object> t412 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t411)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kCalledNonCallable), implicit_cast<TNode<Object>>(t412));
        }
      }
      if (label_NullOrUndefinedError_112->is_used())
      {
        BIND(label_NullOrUndefinedError_112);
        // ../../src/builtins/array-foreach.tq:177:32
        {
          // ../../src/builtins/array-foreach.tq:178:7
          const char* t413 = "Array.prototype.forEach";
          TNode<Object> t414 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t413)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kCalledOnNullOrUndefined), implicit_cast<TNode<Object>>(t414));
        }
      }
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::LoadWithHoleCheck12ATFixedArray(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, Label* label_IfHole_120) {
  TVARIABLE(Object, _return_132_impl);
  auto _return_132 = &_return_132_impl;
  USE(_return_132);
  Label label_macro_end_1149_impl(this, {_return_132});
  Label* label_macro_end_1149 = &label_macro_end_1149_impl;
  USE(label_macro_end_1149);
  // ../../src/builtins/array-lastindexof.tq:11:17
  {
    // ../../src/builtins/array-lastindexof.tq:12:5
    TNode<FixedArray> t415 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t415));
    TNode<FixedArray> elements_655_impl;
    auto elements_655 = &elements_655_impl;
    USE(elements_655);
    *elements_655 = implicit_cast<TNode<FixedArray>>(t415);
    // ../../src/builtins/array-lastindexof.tq:13:5
    TNode<Object> t416 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elements_655)), implicit_cast<TNode<Smi>>(p_index)));
    TNode<Object> element_656_impl;
    auto element_656 = &element_656_impl;
    USE(element_656);
    *element_656 = implicit_cast<TNode<Object>>(t416);
    // ../../src/builtins/array-lastindexof.tq:14:5
    {
      Label label__True_121_impl(this);
      Label* label__True_121 = &label__True_121_impl;
      USE(label__True_121);
      Label label__False_122_impl(this, {});
      Label* label__False_122 = &label__False_122_impl;
      USE(label__False_122);
      TNode<BoolT> t417 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*element_656)), implicit_cast<TNode<Object>>(Hole())));
      USE(implicit_cast<TNode<BoolT>>(t417));
      Branch(implicit_cast<TNode<BoolT>>(t417), label__True_121, label__False_122);
      if (label__True_121->is_used())
      {
        BIND(label__True_121);
        // ../../src/builtins/array-lastindexof.tq:14:26
        Goto(label_IfHole_120);
      }
      BIND(label__False_122);
    }
    // ../../src/builtins/array-lastindexof.tq:15:5
    *_return_132 = implicit_cast<TNode<Object>>((*element_656));
    Goto(label_macro_end_1149);
  }
  BIND(label_macro_end_1149);
  return implicit_cast<TNode<Object>>((*_return_132).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::LoadWithHoleCheck18ATFixedDoubleArray(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, Label* label_IfHole_123) {
  TVARIABLE(Object, _return_133_impl);
  auto _return_133 = &_return_133_impl;
  USE(_return_133);
  Label label_macro_end_1150_impl(this, {_return_133});
  Label* label_macro_end_1150 = &label_macro_end_1150_impl;
  USE(label_macro_end_1150);
  // ../../src/builtins/array-lastindexof.tq:20:17
  {
    // ../../src/builtins/array-lastindexof.tq:21:5
    TNode<FixedDoubleArray> t418 = UncheckedCast<FixedDoubleArray>(unsafe_cast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t418));
    TNode<FixedDoubleArray> elements_657_impl;
    auto elements_657 = &elements_657_impl;
    USE(elements_657);
    *elements_657 = implicit_cast<TNode<FixedDoubleArray>>(t418);
    // ../../src/builtins/array-lastindexof.tq:22:5
    TNode<Float64T> t419 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elements_657)), implicit_cast<TNode<Smi>>(p_index), label_IfHole_123));
    USE(implicit_cast<TNode<Float64T>>(t419));
    TNode<Float64T> element_658_impl;
    auto element_658 = &element_658_impl;
    USE(element_658);
    *element_658 = implicit_cast<TNode<Float64T>>(t419);
    // ../../src/builtins/array-lastindexof.tq:24:5
    TNode<HeapNumber> t420 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>((*element_658))));
    USE(implicit_cast<TNode<HeapNumber>>(t420));
    *_return_133 = implicit_cast<TNode<Object>>(t420);
    Goto(label_macro_end_1150);
  }
  BIND(label_macro_end_1150);
  return implicit_cast<TNode<Object>>((*_return_133).value());
}

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::GetFromIndex(TNode<Context> p_context, TNode<Number> p_length, CodeStubArguments* p_arguments) {
  TVARIABLE(Number, _return_134_impl);
  auto _return_134 = &_return_134_impl;
  USE(_return_134);
  Label label_macro_end_1151_impl(this, {_return_134});
  Label* label_macro_end_1151 = &label_macro_end_1151_impl;
  USE(label_macro_end_1151);
  // ../../src/builtins/array-lastindexof.tq:54:47
  {
    // ../../src/builtins/array-lastindexof.tq:57:5
    auto t421 = [=]() {
      int31_t t423 = 1;
      TNode<Number> t424 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t423)));
      TNode<Number> t425 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(p_length), implicit_cast<TNode<Number>>(t424)));
      USE(implicit_cast<TNode<Number>>(t425));
      return implicit_cast<TNode<Number>>(t425);
    };
    auto t422 = [=]() {
      int31_t t426 = 1;
      TNode<IntPtrT> t427 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t426)));
      TNode<Object> t428 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_arguments), implicit_cast<TNode<IntPtrT>>(t427)));
      TNode<Number> t429 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t428), implicit_cast<ToIntegerTruncationMode>(ToIntegerTruncationMode::kTruncateMinusZero)));
      USE(implicit_cast<TNode<Number>>(t429));
      return implicit_cast<TNode<Number>>(t429);
    };
    TVARIABLE(Number, t430_659_impl);
    auto t430_659 = &t430_659_impl;
    USE(t430_659);
    {
      Label label__True_124_impl(this);
      Label* label__True_124 = &label__True_124_impl;
      USE(label__True_124);
      Label label__False_125_impl(this);
      Label* label__False_125 = &label__False_125_impl;
      USE(label__False_125);
      Label label__done_660_1152_impl(this, {t430_659});
      Label* label__done_660_1152 = &label__done_660_1152_impl;
      USE(label__done_660_1152);
      TNode<IntPtrT> t431 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_arguments)));
      int31_t t432 = 2;
      TNode<IntPtrT> t433 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t432)));
      TNode<BoolT> t434 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>(t431), implicit_cast<TNode<IntPtrT>>(t433)));
      USE(implicit_cast<TNode<BoolT>>(t434));
      Branch(implicit_cast<TNode<BoolT>>(t434), label__True_124, label__False_125);
      BIND(label__True_124);
            *t430_659 = implicit_cast<TNode<Number>>(t421());
      Goto(label__done_660_1152);
      BIND(label__False_125);
            *t430_659 = implicit_cast<TNode<Number>>(t422());
      Goto(label__done_660_1152);
      BIND(label__done_660_1152);
    }
    TNode<Number> n_661_impl;
    auto n_661 = &n_661_impl;
    USE(n_661);
    *n_661 = implicit_cast<TNode<Number>>((*t430_659).value());
    // ../../src/builtins/array-lastindexof.tq:62:5
    int31_t t435 = 0;
    TNode<Smi> t436 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t435)));
    USE(implicit_cast<TNode<Smi>>(t436));
    TVARIABLE(Number, k_135_impl);
    auto k_135 = &k_135_impl;
    USE(k_135);
    *k_135 = implicit_cast<TNode<Number>>(t436);
    // ../../src/builtins/array-lastindexof.tq:63:5
    {
      Label label__True_126_impl(this);
      Label* label__True_126 = &label__True_126_impl;
      USE(label__True_126);
      Label label__False_127_impl(this);
      Label* label__False_127 = &label__False_127_impl;
      USE(label__False_127);
      Label label_if_done_label_662_1153_impl(this, {k_135});
      Label* label_if_done_label_662_1153 = &label_if_done_label_662_1153_impl;
      USE(label_if_done_label_662_1153);
      int31_t t437 = 0;
      TNode<Number> t438 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t437)));
      BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*n_661)), implicit_cast<TNode<Number>>(t438), label__True_126, label__False_127);
      if (label__True_126->is_used())
      {
        BIND(label__True_126);
        // ../../src/builtins/array-lastindexof.tq:63:17
        {
          // ../../src/builtins/array-lastindexof.tq:66:7
          int31_t t439 = 1;
          TNode<Number> t440 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t439)));
          TNode<Number> t441 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(p_length), implicit_cast<TNode<Number>>(t440)));
          USE(implicit_cast<TNode<Number>>(t441));
          TNode<Number> t442 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>((*n_661)), implicit_cast<TNode<Number>>(t441)));
          USE(implicit_cast<TNode<Number>>(t442));
          *k_135 = implicit_cast<TNode<Number>>(t442);
        }
        Goto(label_if_done_label_662_1153);
      }
      if (label__False_127->is_used())
      {
        BIND(label__False_127);
        // ../../src/builtins/array-lastindexof.tq:67:12
        {
          // ../../src/builtins/array-lastindexof.tq:69:7
          TNode<Number> t443 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(p_length), implicit_cast<TNode<Number>>((*n_661))));
          USE(implicit_cast<TNode<Number>>(t443));
          *k_135 = implicit_cast<TNode<Number>>(t443);
        }
        Goto(label_if_done_label_662_1153);
      }
      BIND(label_if_done_label_662_1153);
    }
    // ../../src/builtins/array-lastindexof.tq:71:5
    *_return_134 = implicit_cast<TNode<Number>>((*k_135).value());
    Goto(label_macro_end_1151);
  }
  BIND(label_macro_end_1151);
  return implicit_cast<TNode<Number>>((*_return_134).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::TryFastArrayLastIndexOf(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<Object> p_searchElement, TNode<Number> p_from, Label* label_Slow_128) {
  TVARIABLE(Object, _return_136_impl);
  auto _return_136 = &_return_136_impl;
  USE(_return_136);
  Label label_macro_end_1154_impl(this, {_return_136});
  Label* label_macro_end_1154 = &label_macro_end_1154_impl;
  USE(label_macro_end_1154);
  // ../../src/builtins/array-lastindexof.tq:77:15
  {
    // ../../src/builtins/array-lastindexof.tq:78:5
    EnsureFastJSArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), label_Slow_128);
    // ../../src/builtins/array-lastindexof.tq:79:5
    TNode<JSArray> t444 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t444));
    TNode<JSArray> array_663_impl;
    auto array_663 = &array_663_impl;
    USE(array_663);
    *array_663 = implicit_cast<TNode<JSArray>>(t444);
    // ../../src/builtins/array-lastindexof.tq:81:5
    TNode<Smi> t445 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_663))));
    TNode<Smi> length_664_impl;
    auto length_664 = &length_664_impl;
    USE(length_664);
    *length_664 = implicit_cast<TNode<Smi>>(t445);
    // ../../src/builtins/array-lastindexof.tq:82:5
    {
      Label label__True_129_impl(this);
      Label* label__True_129 = &label__True_129_impl;
      USE(label__True_129);
      Label label__False_130_impl(this, {});
      Label* label__False_130 = &label__False_130_impl;
      USE(label__False_130);
      int31_t t446 = 0;
      TNode<Smi> t447 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t446)));
      TNode<BoolT> t448 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_664)), implicit_cast<TNode<Smi>>(t447)));
      USE(implicit_cast<TNode<BoolT>>(t448));
      Branch(implicit_cast<TNode<BoolT>>(t448), label__True_129, label__False_130);
      if (label__True_129->is_used())
      {
        BIND(label__True_129);
        // ../../src/builtins/array-lastindexof.tq:82:22
        int31_t t449 = -1;
        TNode<Smi> t450 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t449)));
        USE(implicit_cast<TNode<Smi>>(t450));
        *_return_136 = implicit_cast<TNode<Object>>(t450);
        Goto(label_macro_end_1154);
      }
      BIND(label__False_130);
    }
    // ../../src/builtins/array-lastindexof.tq:84:5
    TNode<Smi> t451 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_from), label_Slow_128));
    USE(implicit_cast<TNode<Smi>>(t451));
    TNode<Smi> fromSmi_665_impl;
    auto fromSmi_665 = &fromSmi_665_impl;
    USE(fromSmi_665);
    *fromSmi_665 = implicit_cast<TNode<Smi>>(t451);
    // ../../src/builtins/array-lastindexof.tq:85:5
    TNode<Map> t452 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*array_663))));
    TNode<Int32T> t453 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>(t452)));
    TNode<Int32T> kind_666_impl;
    auto kind_666 = &kind_666_impl;
    USE(kind_666);
    *kind_666 = implicit_cast<TNode<Int32T>>(t453);
    // ../../src/builtins/array-lastindexof.tq:86:5
    {
      Label label__True_131_impl(this);
      Label* label__True_131 = &label__True_131_impl;
      USE(label__True_131);
      Label label__False_132_impl(this, {});
      Label* label__False_132 = &label__False_132_impl;
      USE(label__False_132);
      TNode<BoolT> t454 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind(implicit_cast<TNode<Int32T>>((*kind_666))));
      USE(implicit_cast<TNode<BoolT>>(t454));
      Branch(implicit_cast<TNode<BoolT>>(t454), label__True_131, label__False_132);
      if (label__True_131->is_used())
      {
        BIND(label__True_131);
        // ../../src/builtins/array-lastindexof.tq:86:46
        {
          // ../../src/builtins/array-lastindexof.tq:87:7
          TNode<Smi> t455 = UncheckedCast<Smi>(FastArrayLastIndexOf12ATFixedArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*array_663)), implicit_cast<TNode<Smi>>((*length_664)), implicit_cast<TNode<Smi>>((*fromSmi_665)), implicit_cast<TNode<Object>>(p_searchElement)));
          USE(implicit_cast<TNode<Smi>>(t455));
          *_return_136 = implicit_cast<TNode<Object>>(t455);
          Goto(label_macro_end_1154);
        }
      }
      BIND(label__False_132);
    }
    // ../../src/builtins/array-lastindexof.tq:90:5
    // ../../src/builtins/array-lastindexof.tq:91:5
    TNode<Smi> t456 = UncheckedCast<Smi>(FastArrayLastIndexOf18ATFixedDoubleArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*array_663)), implicit_cast<TNode<Smi>>((*length_664)), implicit_cast<TNode<Smi>>((*fromSmi_665)), implicit_cast<TNode<Object>>(p_searchElement)));
    USE(implicit_cast<TNode<Smi>>(t456));
    *_return_136 = implicit_cast<TNode<Object>>(t456);
    Goto(label_macro_end_1154);
  }
  BIND(label_macro_end_1154);
  return implicit_cast<TNode<Object>>((*_return_136).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::GenericArrayLastIndexOf(TNode<Context> p_context, TNode<JSReceiver> p_object, TNode<Object> p_searchElement, TNode<Number> p_from) {
  TVARIABLE(Object, _return_137_impl);
  auto _return_137 = &_return_137_impl;
  USE(_return_137);
  Label label_macro_end_1155_impl(this, {_return_137});
  Label* label_macro_end_1155 = &label_macro_end_1155_impl;
  USE(label_macro_end_1155);
  // ../../src/builtins/array-lastindexof.tq:97:29
  {
    // ../../src/builtins/array-lastindexof.tq:98:5
    TVARIABLE(Number, k_138_impl);
    auto k_138 = &k_138_impl;
    USE(k_138);
    *k_138 = implicit_cast<TNode<Number>>(p_from);
    // ../../src/builtins/array-lastindexof.tq:101:5
    {
      Label label__True_133_impl(this);
      Label* label__True_133 = &label__True_133_impl;
      USE(label__True_133);
      Label label__False_134_impl(this);
      Label* label__False_134 = &label__False_134_impl;
      USE(label__False_134);
      Label label_header_667_1156_impl(this, {k_138});
      Label* label_header_667_1156 = &label_header_667_1156_impl;
      USE(label_header_667_1156);
      Goto(label_header_667_1156);
      BIND(label_header_667_1156);
      int31_t t457 = 0;
      TNode<Number> t458 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t457)));
      BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_138).value()), implicit_cast<TNode<Number>>(t458), label__True_133, label__False_134);
      if (label__True_133->is_used())
      {
        BIND(label__True_133);
        // ../../src/builtins/array-lastindexof.tq:101:20
        {
          // ../../src/builtins/array-lastindexof.tq:103:7
          TNode<Oddball> t459 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_object), implicit_cast<TNode<Object>>((*k_138).value())));
          USE(implicit_cast<TNode<Oddball>>(t459));
          TNode<Oddball> k_present_668_impl;
          auto k_present_668 = &k_present_668_impl;
          USE(k_present_668);
          *k_present_668 = implicit_cast<TNode<Oddball>>(t459);
          // ../../src/builtins/array-lastindexof.tq:106:7
          {
            Label label__True_135_impl(this);
            Label* label__True_135 = &label__True_135_impl;
            USE(label__True_135);
            Label label__False_136_impl(this, {});
            Label* label__False_136 = &label__False_136_impl;
            USE(label__False_136);
            TNode<BoolT> t460 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*k_present_668)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t460));
            Branch(implicit_cast<TNode<BoolT>>(t460), label__True_135, label__False_136);
            if (label__True_135->is_used())
            {
              BIND(label__True_135);
              // ../../src/builtins/array-lastindexof.tq:106:30
              {
                // ../../src/builtins/array-lastindexof.tq:108:9
                TNode<Object> t461 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_object), implicit_cast<TNode<Object>>((*k_138).value())));
                USE(implicit_cast<TNode<Object>>(t461));
                TNode<Object> element_669_impl;
                auto element_669 = &element_669_impl;
                USE(element_669);
                *element_669 = implicit_cast<TNode<Object>>(t461);
                // ../../src/builtins/array-lastindexof.tq:112:9
                TNode<Oddball> t462 = UncheckedCast<Oddball>(StrictEqual(implicit_cast<TNode<Object>>(p_searchElement), implicit_cast<TNode<Object>>((*element_669))));
                USE(implicit_cast<TNode<Oddball>>(t462));
                TNode<Oddball> same_670_impl;
                auto same_670 = &same_670_impl;
                USE(same_670);
                *same_670 = implicit_cast<TNode<Oddball>>(t462);
                // ../../src/builtins/array-lastindexof.tq:115:9
                {
                  Label label__True_137_impl(this);
                  Label* label__True_137 = &label__True_137_impl;
                  USE(label__True_137);
                  Label label__False_138_impl(this, {});
                  Label* label__False_138 = &label__False_138_impl;
                  USE(label__False_138);
                  TNode<BoolT> t463 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*same_670)), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t463));
                  Branch(implicit_cast<TNode<BoolT>>(t463), label__True_137, label__False_138);
                  if (label__True_137->is_used())
                  {
                    BIND(label__True_137);
                    // ../../src/builtins/array-lastindexof.tq:115:27
                    *_return_137 = implicit_cast<TNode<Object>>((*k_138).value());
                    Goto(label_macro_end_1155);
                  }
                  BIND(label__False_138);
                }
              }
              Goto(label__False_136);
            }
            BIND(label__False_136);
          }
          // ../../src/builtins/array-lastindexof.tq:119:7
          TNode<Number> t464 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t465 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_138).value()), implicit_cast<TNode<Number>>(t464)));
          *k_138 = implicit_cast<TNode<Number>>(t465);
        }
        Goto(label_header_667_1156);
      }
      BIND(label__False_134);
    }
    // ../../src/builtins/array-lastindexof.tq:123:5
    int31_t t466 = -1;
    TNode<Smi> t467 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t466)));
    USE(implicit_cast<TNode<Smi>>(t467));
    *_return_137 = implicit_cast<TNode<Object>>(t467);
    Goto(label_macro_end_1155);
  }
  BIND(label_macro_end_1155);
  return implicit_cast<TNode<Object>>((*_return_137).value());
}

TF_BUILTIN(ArrayPrototypeLastIndexOf, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-lastindexof.tq:128:65
  {
    // ../../src/builtins/array-lastindexof.tq:130:5
    TNode<JSReceiver> t468 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t468));
    TNode<JSReceiver> object_671_impl;
    auto object_671 = &object_671_impl;
    USE(object_671);
    *object_671 = implicit_cast<TNode<JSReceiver>>(t468);
    // ../../src/builtins/array-lastindexof.tq:133:5
    TNode<Number> t469 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_671))));
    USE(implicit_cast<TNode<Number>>(t469));
    TNode<Number> length_672_impl;
    auto length_672 = &length_672_impl;
    USE(length_672);
    *length_672 = implicit_cast<TNode<Number>>(t469);
    // ../../src/builtins/array-lastindexof.tq:136:5
    {
      Label label__True_139_impl(this);
      Label* label__True_139 = &label__True_139_impl;
      USE(label__True_139);
      Label label__False_140_impl(this, {});
      Label* label__False_140 = &label__False_140_impl;
      USE(label__False_140);
      int31_t t470 = 0;
      TNode<Smi> t471 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t470)));
      USE(implicit_cast<TNode<Smi>>(t471));
      TNode<BoolT> t472 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*length_672)), implicit_cast<TNode<Object>>(t471)));
      USE(implicit_cast<TNode<BoolT>>(t472));
      Branch(implicit_cast<TNode<BoolT>>(t472), label__True_139, label__False_140);
      if (label__True_139->is_used())
      {
        BIND(label__True_139);
        // ../../src/builtins/array-lastindexof.tq:136:35
        int31_t t473 = -1;
        TNode<Smi> t474 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t473)));
        USE(implicit_cast<TNode<Smi>>(t474));
        arguments->PopAndReturn(implicit_cast<TNode<Object>>(t474));
      }
      BIND(label__False_140);
    }
    // ../../src/builtins/array-lastindexof.tq:139:5
    TNode<Number> t475 = UncheckedCast<Number>(GetFromIndex(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Number>>((*length_672)), implicit_cast<CodeStubArguments*>(arguments)));
    USE(implicit_cast<TNode<Number>>(t475));
    TNode<Number> from_673_impl;
    auto from_673 = &from_673_impl;
    USE(from_673);
    *from_673 = implicit_cast<TNode<Number>>(t475);
    // ../../src/builtins/array-lastindexof.tq:141:5
    int31_t t476 = 0;
    TNode<IntPtrT> t477 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t476)));
    TNode<Object> t478 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t477)));
    TNode<Object> searchElement_674_impl;
    auto searchElement_674 = &searchElement_674_impl;
    USE(searchElement_674);
    *searchElement_674 = implicit_cast<TNode<Object>>(t478);
    // ../../src/builtins/array-lastindexof.tq:143:5
    {
      Label label_try_done_675_1157_impl(this);
      Label* label_try_done_675_1157 = &label_try_done_675_1157_impl;
      USE(label_try_done_675_1157);
      Label label_Baseline_141_impl(this);
      Label* label_Baseline_141 = &label_Baseline_141_impl;
      USE(label_Baseline_141);
      Label label_try_begin_676_1158_impl(this);
      Label* label_try_begin_676_1158 = &label_try_begin_676_1158_impl;
      USE(label_try_begin_676_1158);
      Goto(label_try_begin_676_1158);
      if (label_try_begin_676_1158->is_used())
      {
        BIND(label_try_begin_676_1158);
        // ../../src/builtins/array-lastindexof.tq:143:9
        {
          // ../../src/builtins/array-lastindexof.tq:144:7
          TNode<Object> t479 = UncheckedCast<Object>(TryFastArrayLastIndexOf(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_671)), implicit_cast<TNode<Object>>((*searchElement_674)), implicit_cast<TNode<Number>>((*from_673)), label_Baseline_141));
          USE(implicit_cast<TNode<Object>>(t479));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t479));
        }
      }
      if (label_Baseline_141->is_used())
      {
        BIND(label_Baseline_141);
        // ../../src/builtins/array-lastindexof.tq:147:20
        {
          // ../../src/builtins/array-lastindexof.tq:148:7
          TNode<Object> t480 = UncheckedCast<Object>(GenericArrayLastIndexOf(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_671)), implicit_cast<TNode<Object>>((*searchElement_674)), implicit_cast<TNode<Number>>((*from_673))));
          USE(implicit_cast<TNode<Object>>(t480));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t480));
        }
      }
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::LoadElement23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index) {
  TVARIABLE(Smi, _return_139_impl);
  auto _return_139 = &_return_139_impl;
  USE(_return_139);
  Label label_macro_end_1159_impl(this, {_return_139});
  Label* label_macro_end_1159 = &label_macro_end_1159_impl;
  USE(label_macro_end_1159);
  // ../../src/builtins/array-reverse.tq:10:50
  {
    // ../../src/builtins/array-reverse.tq:11:5
    TNode<FixedArray> t481 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t481));
    TNode<FixedArray> elems_677_impl;
    auto elems_677 = &elems_677_impl;
    USE(elems_677);
    *elems_677 = implicit_cast<TNode<FixedArray>>(t481);
    // ../../src/builtins/array-reverse.tq:12:5
    TNode<Object> t482 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_677)), implicit_cast<TNode<Smi>>(p_index)));
    TNode<Smi> t483 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t482)));
    USE(implicit_cast<TNode<Smi>>(t483));
    *_return_139 = implicit_cast<TNode<Smi>>(t483);
    Goto(label_macro_end_1159);
  }
  BIND(label_macro_end_1159);
  return implicit_cast<TNode<Smi>>((*_return_139).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index) {
  TVARIABLE(Object, _return_140_impl);
  auto _return_140 = &_return_140_impl;
  USE(_return_140);
  Label label_macro_end_1160_impl(this, {_return_140});
  Label* label_macro_end_1160 = &label_macro_end_1160_impl;
  USE(label_macro_end_1160);
  // ../../src/builtins/array-reverse.tq:16:53
  {
    // ../../src/builtins/array-reverse.tq:17:5
    TNode<FixedArray> t484 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t484));
    TNode<FixedArray> elems_678_impl;
    auto elems_678 = &elems_678_impl;
    USE(elems_678);
    *elems_678 = implicit_cast<TNode<FixedArray>>(t484);
    // ../../src/builtins/array-reverse.tq:18:5
    TNode<Object> t485 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_678)), implicit_cast<TNode<Smi>>(p_index)));
    *_return_140 = implicit_cast<TNode<Object>>(t485);
    Goto(label_macro_end_1160);
  }
  BIND(label_macro_end_1160);
  return implicit_cast<TNode<Object>>((*_return_140).value());
}

compiler::TNode<Float64T> ArrayBuiltinsFromDSLAssembler::LoadElement26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index) {
  TVARIABLE(Float64T, _return_141_impl);
  auto _return_141 = &_return_141_impl;
  USE(_return_141);
  Label label_macro_end_1161_impl(this, {_return_141});
  Label* label_macro_end_1161 = &label_macro_end_1161_impl;
  USE(label_macro_end_1161);
  // ../../src/builtins/array-reverse.tq:22:54
  {
    // ../../src/builtins/array-reverse.tq:23:5
    {
      Label label_try_done_679_1162_impl(this);
      Label* label_try_done_679_1162 = &label_try_done_679_1162_impl;
      USE(label_try_done_679_1162);
      Label label_Hole_142_impl(this);
      Label* label_Hole_142 = &label_Hole_142_impl;
      USE(label_Hole_142);
      Label label_try_begin_680_1163_impl(this);
      Label* label_try_begin_680_1163 = &label_try_begin_680_1163_impl;
      USE(label_try_begin_680_1163);
      Goto(label_try_begin_680_1163);
      if (label_try_begin_680_1163->is_used())
      {
        BIND(label_try_begin_680_1163);
        // ../../src/builtins/array-reverse.tq:23:9
        {
          // ../../src/builtins/array-reverse.tq:24:7
          TNode<FixedDoubleArray> t486 = UncheckedCast<FixedDoubleArray>(unsafe_cast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t486));
          TNode<FixedDoubleArray> elems_681_impl;
          auto elems_681 = &elems_681_impl;
          USE(elems_681);
          *elems_681 = implicit_cast<TNode<FixedDoubleArray>>(t486);
          // ../../src/builtins/array-reverse.tq:25:7
          TNode<Float64T> t487 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elems_681)), implicit_cast<TNode<Smi>>(p_index), label_Hole_142));
          USE(implicit_cast<TNode<Float64T>>(t487));
          *_return_141 = implicit_cast<TNode<Float64T>>(t487);
          Goto(label_macro_end_1161);
        }
      }
      if (label_Hole_142->is_used())
      {
        BIND(label_Hole_142);
        // ../../src/builtins/array-reverse.tq:27:16
        {
          // ../../src/builtins/array-reverse.tq:30:7
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_1161);
  return implicit_cast<TNode<Float64T>>((*_return_141).value());
}

void ArrayBuiltinsFromDSLAssembler::StoreElement23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Smi> p_value) {
  Label label_macro_end_1164_impl(this, {});
  Label* label_macro_end_1164 = &label_macro_end_1164_impl;
  USE(label_macro_end_1164);
  // ../../src/builtins/array-reverse.tq:38:57
  {
    // ../../src/builtins/array-reverse.tq:39:5
    TNode<FixedArray> t488 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t488));
    TNode<FixedArray> elems_682_impl;
    auto elems_682 = &elems_682_impl;
    USE(elems_682);
    *elems_682 = implicit_cast<TNode<FixedArray>>(t488);
    // ../../src/builtins/array-reverse.tq:40:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_682)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<WriteBarrierMode>(SKIP_WRITE_BARRIER));
  }
}

void ArrayBuiltinsFromDSLAssembler::StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Object> p_value) {
  Label label_macro_end_1165_impl(this, {});
  Label* label_macro_end_1165 = &label_macro_end_1165_impl;
  USE(label_macro_end_1165);
  // ../../src/builtins/array-reverse.tq:44:60
  {
    // ../../src/builtins/array-reverse.tq:45:5
    TNode<FixedArray> t489 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t489));
    TNode<FixedArray> elems_683_impl;
    auto elems_683 = &elems_683_impl;
    USE(elems_683);
    *elems_683 = implicit_cast<TNode<FixedArray>>(t489);
    // ../../src/builtins/array-reverse.tq:46:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_683)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value));
  }
}

void ArrayBuiltinsFromDSLAssembler::StoreElement26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Float64T> p_value) {
  Label label_macro_end_1166_impl(this, {});
  Label* label_macro_end_1166 = &label_macro_end_1166_impl;
  USE(label_macro_end_1166);
  // ../../src/builtins/array-reverse.tq:50:61
  {
    // ../../src/builtins/array-reverse.tq:51:5
    TNode<FixedDoubleArray> t490 = UncheckedCast<FixedDoubleArray>(unsafe_cast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t490));
    TNode<FixedDoubleArray> elems_684_impl;
    auto elems_684 = &elems_684_impl;
    USE(elems_684);
    *elems_684 = implicit_cast<TNode<FixedDoubleArray>>(t490);
    // ../../src/builtins/array-reverse.tq:53:5
    // ../../src/builtins/array-reverse.tq:54:5
    StoreFixedDoubleArrayElementWithSmiIndex(implicit_cast<TNode<FixedDoubleArray>>((*elems_684)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Float64T>>(p_value));
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::GenericArrayReverse(TNode<Context> p_context, TNode<Object> p_receiver) {
  TVARIABLE(Object, _return_142_impl);
  auto _return_142 = &_return_142_impl;
  USE(_return_142);
  Label label_macro_end_1167_impl(this, {_return_142});
  Label* label_macro_end_1167 = &label_macro_end_1167_impl;
  USE(label_macro_end_1167);
  // ../../src/builtins/array-reverse.tq:75:73
  {
    // ../../src/builtins/array-reverse.tq:77:5
    TNode<JSReceiver> t491 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t491));
    TNode<JSReceiver> object_685_impl;
    auto object_685 = &object_685_impl;
    USE(object_685);
    *object_685 = implicit_cast<TNode<JSReceiver>>(t491);
    // ../../src/builtins/array-reverse.tq:80:5
    TNode<Number> t492 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_685))));
    USE(implicit_cast<TNode<Number>>(t492));
    TNode<Number> length_686_impl;
    auto length_686 = &length_686_impl;
    USE(length_686);
    *length_686 = implicit_cast<TNode<Number>>(t492);
    // ../../src/builtins/array-reverse.tq:89:5
    int31_t t493 = 0;
    TVARIABLE(Number, lower_143_impl);
    auto lower_143 = &lower_143_impl;
    USE(lower_143);
    TNode<Number> t494 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t493)));
    *lower_143 = implicit_cast<TNode<Number>>(t494);
    // ../../src/builtins/array-reverse.tq:90:5
    int31_t t495 = 1;
    TNode<Number> t496 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t495)));
    TNode<Number> t497 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*length_686)), implicit_cast<TNode<Number>>(t496)));
    USE(implicit_cast<TNode<Number>>(t497));
    TVARIABLE(Number, upper_144_impl);
    auto upper_144 = &upper_144_impl;
    USE(upper_144);
    *upper_144 = implicit_cast<TNode<Number>>(t497);
    // ../../src/builtins/array-reverse.tq:92:5
    {
      Label label__True_143_impl(this);
      Label* label__True_143 = &label__True_143_impl;
      USE(label__True_143);
      Label label__False_144_impl(this);
      Label* label__False_144 = &label__False_144_impl;
      USE(label__False_144);
      Label label_header_687_1168_impl(this, {lower_143, upper_144});
      Label* label_header_687_1168 = &label_header_687_1168_impl;
      USE(label_header_687_1168);
      Goto(label_header_687_1168);
      BIND(label_header_687_1168);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*lower_143).value()), implicit_cast<TNode<Number>>((*upper_144).value()), label__True_143, label__False_144);
      if (label__True_143->is_used())
      {
        BIND(label__True_143);
        // ../../src/builtins/array-reverse.tq:92:27
        {
          // ../../src/builtins/array-reverse.tq:93:7
          TVARIABLE(Object, lower_value_145_impl);
          auto lower_value_145 = &lower_value_145_impl;
          USE(lower_value_145);
          *lower_value_145 = implicit_cast<TNode<Object>>(Undefined());
          // ../../src/builtins/array-reverse.tq:94:7
          TVARIABLE(Object, upper_value_146_impl);
          auto upper_value_146 = &upper_value_146_impl;
          USE(upper_value_146);
          *upper_value_146 = implicit_cast<TNode<Object>>(Undefined());
          // ../../src/builtins/array-reverse.tq:99:7
          TNode<Oddball> t498 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_685)), implicit_cast<TNode<Object>>((*lower_143).value())));
          USE(implicit_cast<TNode<Oddball>>(t498));
          TNode<Oddball> lower_exists_688_impl;
          auto lower_exists_688 = &lower_exists_688_impl;
          USE(lower_exists_688);
          *lower_exists_688 = implicit_cast<TNode<Oddball>>(t498);
          // ../../src/builtins/array-reverse.tq:102:7
          {
            Label label__True_145_impl(this);
            Label* label__True_145 = &label__True_145_impl;
            USE(label__True_145);
            Label label__False_146_impl(this, {lower_value_145});
            Label* label__False_146 = &label__False_146_impl;
            USE(label__False_146);
            TNode<BoolT> t499 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lower_exists_688)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t499));
            Branch(implicit_cast<TNode<BoolT>>(t499), label__True_145, label__False_146);
            if (label__True_145->is_used())
            {
              BIND(label__True_145);
              // ../../src/builtins/array-reverse.tq:102:33
              {
                // ../../src/builtins/array-reverse.tq:104:9
                TNode<Object> t500 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_685)), implicit_cast<TNode<Object>>((*lower_143).value())));
                USE(implicit_cast<TNode<Object>>(t500));
                *lower_value_145 = implicit_cast<TNode<Object>>(t500);
              }
              Goto(label__False_146);
            }
            BIND(label__False_146);
          }
          // ../../src/builtins/array-reverse.tq:108:7
          TNode<Oddball> t501 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_685)), implicit_cast<TNode<Object>>((*upper_144).value())));
          USE(implicit_cast<TNode<Oddball>>(t501));
          TNode<Oddball> upper_exists_689_impl;
          auto upper_exists_689 = &upper_exists_689_impl;
          USE(upper_exists_689);
          *upper_exists_689 = implicit_cast<TNode<Oddball>>(t501);
          // ../../src/builtins/array-reverse.tq:111:7
          {
            Label label__True_147_impl(this);
            Label* label__True_147 = &label__True_147_impl;
            USE(label__True_147);
            Label label__False_148_impl(this, {upper_value_146});
            Label* label__False_148 = &label__False_148_impl;
            USE(label__False_148);
            TNode<BoolT> t502 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upper_exists_689)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t502));
            Branch(implicit_cast<TNode<BoolT>>(t502), label__True_147, label__False_148);
            if (label__True_147->is_used())
            {
              BIND(label__True_147);
              // ../../src/builtins/array-reverse.tq:111:33
              {
                // ../../src/builtins/array-reverse.tq:113:9
                TNode<Object> t503 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_685)), implicit_cast<TNode<Object>>((*upper_144).value())));
                USE(implicit_cast<TNode<Object>>(t503));
                *upper_value_146 = implicit_cast<TNode<Object>>(t503);
              }
              Goto(label__False_148);
            }
            BIND(label__False_148);
          }
          // ../../src/builtins/array-reverse.tq:117:7
          {
            Label label__True_149_impl(this);
            Label* label__True_149 = &label__True_149_impl;
            USE(label__True_149);
            Label label__False_150_impl(this);
            Label* label__False_150 = &label__False_150_impl;
            USE(label__False_150);
            Label label_if_done_label_690_1169_impl(this, {});
            Label* label_if_done_label_690_1169 = &label_if_done_label_690_1169_impl;
            USE(label_if_done_label_690_1169);
            Label label__True_151_impl(this);
            Label* label__True_151 = &label__True_151_impl;
            USE(label__True_151);
            TNode<BoolT> t504 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lower_exists_688)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t504));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t504), label__False_150);
            TNode<BoolT> t505 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upper_exists_689)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t505));
            Branch(implicit_cast<TNode<BoolT>>(t505), label__True_149, label__False_150);
            if (label__True_149->is_used())
            {
              BIND(label__True_149);
              // ../../src/builtins/array-reverse.tq:117:57
              {
                // ../../src/builtins/array-reverse.tq:119:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_685)), implicit_cast<TNode<Object>>((*lower_143).value()), implicit_cast<TNode<Object>>((*upper_value_146).value()));
                // ../../src/builtins/array-reverse.tq:122:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_685)), implicit_cast<TNode<Object>>((*upper_144).value()), implicit_cast<TNode<Object>>((*lower_value_145).value()));
              }
              Goto(label_if_done_label_690_1169);
            }
            if (label__False_150->is_used())
            {
              BIND(label__False_150);
              // ../../src/builtins/array-reverse.tq:123:14
              {
                Label label__True_152_impl(this);
                Label* label__True_152 = &label__True_152_impl;
                USE(label__True_152);
                Label label__False_153_impl(this);
                Label* label__False_153 = &label__False_153_impl;
                USE(label__False_153);
                Label label_if_done_label_691_1170_impl(this, {});
                Label* label_if_done_label_691_1170 = &label_if_done_label_691_1170_impl;
                USE(label_if_done_label_691_1170);
                Label label__True_154_impl(this);
                Label* label__True_154 = &label__True_154_impl;
                USE(label__True_154);
                TNode<BoolT> t506 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lower_exists_688)), implicit_cast<TNode<Object>>(False())));
                USE(implicit_cast<TNode<BoolT>>(t506));
                GotoIfNot(implicit_cast<TNode<BoolT>>(t506), label__False_153);
                TNode<BoolT> t507 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upper_exists_689)), implicit_cast<TNode<Object>>(True())));
                USE(implicit_cast<TNode<BoolT>>(t507));
                Branch(implicit_cast<TNode<BoolT>>(t507), label__True_152, label__False_153);
                if (label__True_152->is_used())
                {
                  BIND(label__True_152);
                  // ../../src/builtins/array-reverse.tq:123:65
                  {
                    // ../../src/builtins/array-reverse.tq:125:9
                    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_685)), implicit_cast<TNode<Object>>((*lower_143).value()), implicit_cast<TNode<Object>>((*upper_value_146).value()));
                    // ../../src/builtins/array-reverse.tq:128:9
                    TNode<Smi> t508 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                    CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_685)), implicit_cast<TNode<Object>>((*upper_144).value()), implicit_cast<TNode<Smi>>(t508));
                  }
                  Goto(label_if_done_label_691_1170);
                }
                if (label__False_153->is_used())
                {
                  BIND(label__False_153);
                  // ../../src/builtins/array-reverse.tq:129:14
                  {
                    Label label__True_155_impl(this);
                    Label* label__True_155 = &label__True_155_impl;
                    USE(label__True_155);
                    Label label__False_156_impl(this, {});
                    Label* label__False_156 = &label__False_156_impl;
                    USE(label__False_156);
                    Label label__True_157_impl(this);
                    Label* label__True_157 = &label__True_157_impl;
                    USE(label__True_157);
                    TNode<BoolT> t509 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lower_exists_688)), implicit_cast<TNode<Object>>(True())));
                    USE(implicit_cast<TNode<BoolT>>(t509));
                    GotoIfNot(implicit_cast<TNode<BoolT>>(t509), label__False_156);
                    TNode<BoolT> t510 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upper_exists_689)), implicit_cast<TNode<Object>>(False())));
                    USE(implicit_cast<TNode<BoolT>>(t510));
                    Branch(implicit_cast<TNode<BoolT>>(t510), label__True_155, label__False_156);
                    if (label__True_155->is_used())
                    {
                      BIND(label__True_155);
                      // ../../src/builtins/array-reverse.tq:129:65
                      {
                        // ../../src/builtins/array-reverse.tq:131:9
                        TNode<Smi> t511 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                        CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_685)), implicit_cast<TNode<Object>>((*lower_143).value()), implicit_cast<TNode<Smi>>(t511));
                        // ../../src/builtins/array-reverse.tq:134:9
                        CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_685)), implicit_cast<TNode<Object>>((*upper_144).value()), implicit_cast<TNode<Object>>((*lower_value_145).value()));
                      }
                      Goto(label__False_156);
                    }
                    BIND(label__False_156);
                  }
                  Goto(label_if_done_label_691_1170);
                }
                BIND(label_if_done_label_691_1170);
              }
              Goto(label_if_done_label_690_1169);
            }
            BIND(label_if_done_label_690_1169);
          }
          // ../../src/builtins/array-reverse.tq:138:7
          TNode<Number> t512 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t513 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*lower_143).value()), implicit_cast<TNode<Number>>(t512)));
          *lower_143 = implicit_cast<TNode<Number>>(t513);
          // ../../src/builtins/array-reverse.tq:139:7
          TNode<Number> t514 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t515 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*upper_144).value()), implicit_cast<TNode<Number>>(t514)));
          *upper_144 = implicit_cast<TNode<Number>>(t515);
        }
        Goto(label_header_687_1168);
      }
      BIND(label__False_144);
    }
    // ../../src/builtins/array-reverse.tq:143:5
    *_return_142 = implicit_cast<TNode<Object>>((*object_685));
    Goto(label_macro_end_1167);
  }
  BIND(label_macro_end_1167);
  return implicit_cast<TNode<Object>>((*_return_142).value());
}

void ArrayBuiltinsFromDSLAssembler::EnsureWriteableFastElements(TNode<JSArray> p_array) {
  Label label_macro_end_1171_impl(this, {});
  Label* label_macro_end_1171 = &label_macro_end_1171_impl;
  USE(label_macro_end_1171);
  // ../../src/builtins/array-reverse.tq:146:53
  {
    // ../../src/builtins/array-reverse.tq:147:5
    TNode<FixedArrayBase> t516 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedArrayBase> elements_692_impl;
    auto elements_692 = &elements_692_impl;
    USE(elements_692);
    *elements_692 = implicit_cast<TNode<FixedArrayBase>>(t516);
    // ../../src/builtins/array-reverse.tq:148:5
    {
      Label label__True_158_impl(this);
      Label* label__True_158 = &label__True_158_impl;
      USE(label__True_158);
      Label label__False_159_impl(this, {});
      Label* label__False_159 = &label__False_159_impl;
      USE(label__False_159);
      TNode<Map> t517 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*elements_692))));
      TNode<BoolT> t518 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t517), implicit_cast<TNode<Object>>(kCOWMap())));
      USE(implicit_cast<TNode<BoolT>>(t518));
      Branch(implicit_cast<TNode<BoolT>>(t518), label__True_158, label__False_159);
      if (label__True_158->is_used())
      {
        BIND(label__True_158);
        // ../../src/builtins/array-reverse.tq:148:34
        Goto(label_macro_end_1171);
      }
      BIND(label__False_159);
    }
    // ../../src/builtins/array-reverse.tq:152:5
    // ../../src/builtins/array-reverse.tq:154:5
    TNode<Smi> t519 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>(p_array)));
    TNode<Smi> length_693_impl;
    auto length_693 = &length_693_impl;
    USE(length_693);
    *length_693 = implicit_cast<TNode<Smi>>(t519);
    // ../../src/builtins/array-reverse.tq:155:5
    TNode<FixedArray> t520 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>((*elements_692))));
    USE(implicit_cast<TNode<FixedArray>>(t520));
    int31_t t521 = 0;
    TNode<Smi> t522 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t521)));
    TNode<FixedArray> t523 = UncheckedCast<FixedArray>(ExtractFixedArray(implicit_cast<TNode<FixedArray>>(t520), implicit_cast<TNode<Smi>>(t522), implicit_cast<TNode<Smi>>((*length_693)), implicit_cast<TNode<Smi>>((*length_693)), implicit_cast<ExtractFixedArrayFlags>(ExtractFixedArrayFlag::kFixedArrays)));
    USE(implicit_cast<TNode<FixedArray>>(t523));
    StoreElements(implicit_cast<TNode<JSObject>>(p_array), implicit_cast<TNode<FixedArrayBase>>(t523));
  }
  Goto(label_macro_end_1171);
  BIND(label_macro_end_1171);
}

void ArrayBuiltinsFromDSLAssembler::TryFastPackedArrayReverse(TNode<Object> p_receiver, Label* label_Slow_160) {
  Label label_macro_end_1172_impl(this, {});
  Label* label_macro_end_1172 = &label_macro_end_1172_impl;
  USE(label_macro_end_1172);
  // ../../src/builtins/array-reverse.tq:159:65
  {
    // ../../src/builtins/array-reverse.tq:160:5
    TNode<JSArray> t524 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver), label_Slow_160));
    USE(implicit_cast<TNode<JSArray>>(t524));
    TNode<JSArray> array_694_impl;
    auto array_694 = &array_694_impl;
    USE(array_694);
    *array_694 = implicit_cast<TNode<JSArray>>(t524);
    // ../../src/builtins/array-reverse.tq:161:5
    EnsureWriteableFastElements(implicit_cast<TNode<JSArray>>((*array_694)));
    // ../../src/builtins/array-reverse.tq:162:5
    // ../../src/builtins/array-reverse.tq:164:5
    TNode<Map> t525 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*array_694))));
    TNode<Int32T> t526 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>(t525)));
    TNode<Int32T> kind_695_impl;
    auto kind_695 = &kind_695_impl;
    USE(kind_695);
    *kind_695 = implicit_cast<TNode<Int32T>>(t526);
    // ../../src/builtins/array-reverse.tq:165:5
    {
      Label label__True_161_impl(this);
      Label* label__True_161 = &label__True_161_impl;
      USE(label__True_161);
      Label label__False_162_impl(this);
      Label* label__False_162 = &label__False_162_impl;
      USE(label__False_162);
      Label label_if_done_label_696_1173_impl(this, {});
      Label* label_if_done_label_696_1173 = &label_if_done_label_696_1173_impl;
      USE(label_if_done_label_696_1173);
      TNode<Int32T> t527 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS)));
      TNode<BoolT> t528 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*kind_695)), implicit_cast<TNode<Int32T>>(t527)));
      USE(implicit_cast<TNode<BoolT>>(t528));
      Branch(implicit_cast<TNode<BoolT>>(t528), label__True_161, label__False_162);
      if (label__True_161->is_used())
      {
        BIND(label__True_161);
        // ../../src/builtins/array-reverse.tq:165:38
        {
          // ../../src/builtins/array-reverse.tq:166:7
          TNode<FixedArrayBase> t529 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*array_694))));
          TNode<Smi> t530 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_694))));
          FastPackedArrayReverse23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(t529), implicit_cast<TNode<Smi>>(t530));
        }
        Goto(label_if_done_label_696_1173);
      }
      if (label__False_162->is_used())
      {
        BIND(label__False_162);
        // ../../src/builtins/array-reverse.tq:168:12
        {
          Label label__True_163_impl(this);
          Label* label__True_163 = &label__True_163_impl;
          USE(label__True_163);
          Label label__False_164_impl(this);
          Label* label__False_164 = &label__False_164_impl;
          USE(label__False_164);
          Label label_if_done_label_697_1174_impl(this, {});
          Label* label_if_done_label_697_1174 = &label_if_done_label_697_1174_impl;
          USE(label_if_done_label_697_1174);
          TNode<Int32T> t531 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_ELEMENTS)));
          TNode<BoolT> t532 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*kind_695)), implicit_cast<TNode<Int32T>>(t531)));
          USE(implicit_cast<TNode<BoolT>>(t532));
          Branch(implicit_cast<TNode<BoolT>>(t532), label__True_163, label__False_164);
          if (label__True_163->is_used())
          {
            BIND(label__True_163);
            // ../../src/builtins/array-reverse.tq:168:41
            {
              // ../../src/builtins/array-reverse.tq:169:7
              TNode<FixedArrayBase> t533 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*array_694))));
              TNode<Smi> t534 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_694))));
              FastPackedArrayReverse26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(t533), implicit_cast<TNode<Smi>>(t534));
            }
            Goto(label_if_done_label_697_1174);
          }
          if (label__False_164->is_used())
          {
            BIND(label__False_164);
            // ../../src/builtins/array-reverse.tq:171:12
            {
              Label label__True_165_impl(this);
              Label* label__True_165 = &label__True_165_impl;
              USE(label__True_165);
              Label label__False_166_impl(this);
              Label* label__False_166 = &label__False_166_impl;
              USE(label__False_166);
              Label label_if_done_label_698_1175_impl(this, {});
              Label* label_if_done_label_698_1175 = &label_if_done_label_698_1175_impl;
              USE(label_if_done_label_698_1175);
              TNode<Int32T> t535 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_DOUBLE_ELEMENTS)));
              TNode<BoolT> t536 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*kind_695)), implicit_cast<TNode<Int32T>>(t535)));
              USE(implicit_cast<TNode<BoolT>>(t536));
              Branch(implicit_cast<TNode<BoolT>>(t536), label__True_165, label__False_166);
              if (label__True_165->is_used())
              {
                BIND(label__True_165);
                // ../../src/builtins/array-reverse.tq:171:48
                {
                  // ../../src/builtins/array-reverse.tq:172:7
                  TNode<FixedArrayBase> t537 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*array_694))));
                  TNode<Smi> t538 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_694))));
                  FastPackedArrayReverse26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(t537), implicit_cast<TNode<Smi>>(t538));
                }
                Goto(label_if_done_label_698_1175);
              }
              if (label__False_166->is_used())
              {
                BIND(label__False_166);
                // ../../src/builtins/array-reverse.tq:174:12
                {
                  // ../../src/builtins/array-reverse.tq:175:7
                  Goto(label_Slow_160);
                }
              }
              BIND(label_if_done_label_698_1175);
            }
            Goto(label_if_done_label_697_1174);
          }
          BIND(label_if_done_label_697_1174);
        }
        Goto(label_if_done_label_696_1173);
      }
      BIND(label_if_done_label_696_1173);
    }
  }
}

TF_BUILTIN(ArrayPrototypeReverse, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-reverse.tq:181:65
  {
    // ../../src/builtins/array-reverse.tq:182:5
    {
      Label label_try_done_699_1176_impl(this);
      Label* label_try_done_699_1176 = &label_try_done_699_1176_impl;
      USE(label_try_done_699_1176);
      Label label_Baseline_167_impl(this);
      Label* label_Baseline_167 = &label_Baseline_167_impl;
      USE(label_Baseline_167);
      Label label_try_begin_700_1177_impl(this);
      Label* label_try_begin_700_1177 = &label_try_begin_700_1177_impl;
      USE(label_try_begin_700_1177);
      Goto(label_try_begin_700_1177);
      if (label_try_begin_700_1177->is_used())
      {
        BIND(label_try_begin_700_1177);
        // ../../src/builtins/array-reverse.tq:182:9
        {
          // ../../src/builtins/array-reverse.tq:183:7
          TryFastPackedArrayReverse(implicit_cast<TNode<Object>>(p_receiver), label_Baseline_167);
          // ../../src/builtins/array-reverse.tq:184:7
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
        }
      }
      if (label_Baseline_167->is_used())
      {
        BIND(label_Baseline_167);
        // ../../src/builtins/array-reverse.tq:186:20
        {
          // ../../src/builtins/array-reverse.tq:187:7
          TNode<Object> t539 = UncheckedCast<Object>(GenericArrayReverse(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
          USE(implicit_cast<TNode<Object>>(t539));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t539));
        }
      }
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kGenericElementsAccessorId() {
  int31_t t2312 = 0;
  TNode<Smi> t2313 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2312)));
  return implicit_cast<TNode<Smi>>(t2313);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kFastElementsAccessorId() {
  int31_t t2314 = 1;
  TNode<Smi> t2315 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2314)));
  return implicit_cast<TNode<Smi>>(t2315);
}

int31_t ArrayBuiltinsFromDSLAssembler::kReceiverIdx() {
  int31_t t2316 = 0;
  return implicit_cast<int31_t>(t2316);
}

int31_t ArrayBuiltinsFromDSLAssembler::kInitialReceiverMapIdx() {
  int31_t t2317 = 1;
  return implicit_cast<int31_t>(t2317);
}

int31_t ArrayBuiltinsFromDSLAssembler::kInitialReceiverLengthIdx() {
  int31_t t2318 = 2;
  return implicit_cast<int31_t>(t2318);
}

int31_t ArrayBuiltinsFromDSLAssembler::kUserCmpFnIdx() {
  int31_t t2319 = 3;
  return implicit_cast<int31_t>(t2319);
}

int31_t ArrayBuiltinsFromDSLAssembler::kSortComparePtrIdx() {
  int31_t t2320 = 4;
  return implicit_cast<int31_t>(t2320);
}

int31_t ArrayBuiltinsFromDSLAssembler::kLoadFnIdx() {
  int31_t t2321 = 5;
  return implicit_cast<int31_t>(t2321);
}

int31_t ArrayBuiltinsFromDSLAssembler::kStoreFnIdx() {
  int31_t t2322 = 6;
  return implicit_cast<int31_t>(t2322);
}

int31_t ArrayBuiltinsFromDSLAssembler::kCanUseSameAccessorFnIdx() {
  int31_t t2323 = 7;
  return implicit_cast<int31_t>(t2323);
}

int31_t ArrayBuiltinsFromDSLAssembler::kBailoutStatusIdx() {
  int31_t t2324 = 8;
  return implicit_cast<int31_t>(t2324);
}

int31_t ArrayBuiltinsFromDSLAssembler::kMinGallopIdx() {
  int31_t t2325 = 9;
  return implicit_cast<int31_t>(t2325);
}

int31_t ArrayBuiltinsFromDSLAssembler::kPendingRunsSizeIdx() {
  int31_t t2326 = 10;
  return implicit_cast<int31_t>(t2326);
}

int31_t ArrayBuiltinsFromDSLAssembler::kPendingRunsIdx() {
  int31_t t2327 = 11;
  return implicit_cast<int31_t>(t2327);
}

int31_t ArrayBuiltinsFromDSLAssembler::kTempArraySizeIdx() {
  int31_t t2328 = 12;
  return implicit_cast<int31_t>(t2328);
}

int31_t ArrayBuiltinsFromDSLAssembler::kTempArrayIdx() {
  int31_t t2329 = 13;
  return implicit_cast<int31_t>(t2329);
}

int31_t ArrayBuiltinsFromDSLAssembler::kAccessorIdx() {
  int31_t t2330 = 14;
  return implicit_cast<int31_t>(t2330);
}

compiler::TNode<IntPtrT> ArrayBuiltinsFromDSLAssembler::kSortStateSize() {
  int31_t t2331 = 15;
  TNode<IntPtrT> t2332 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t2331)));
  return implicit_cast<TNode<IntPtrT>>(t2332);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kFailure() {
  int31_t t2333 = -1;
  TNode<Smi> t2334 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2333)));
  return implicit_cast<TNode<Smi>>(t2334);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kSuccess() {
  int31_t t2335 = 0;
  TNode<Smi> t2336 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2335)));
  return implicit_cast<TNode<Smi>>(t2336);
}

int31_t ArrayBuiltinsFromDSLAssembler::kMaxMergePending() {
  int31_t t2337 = 85;
  return implicit_cast<int31_t>(t2337);
}

int31_t ArrayBuiltinsFromDSLAssembler::kMinGallopWins() {
  int31_t t2338 = 7;
  return implicit_cast<int31_t>(t2338);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kSortStateTempSize() {
  int31_t t2339 = 32;
  TNode<Smi> t2340 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2339)));
  return implicit_cast<TNode<Smi>>(t2340);
}

TF_BUILTIN(Load23ATFastPackedSmiElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:135:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:136:5
    TNode<FixedArray> t2341 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2341));
    TNode<FixedArray> elems_913_impl;
    auto elems_913 = &elems_913_impl;
    USE(elems_913);
    *elems_913 = implicit_cast<TNode<FixedArray>>(t2341);
    // ../../third_party/v8/builtins/array-sort.tq:137:5
    TNode<Object> t2342 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_913)), implicit_cast<TNode<Smi>>(p_index)));
    Return(implicit_cast<TNode<Object>>(t2342));
  }
}

TF_BUILTIN(Load25ATFastSmiOrObjectElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:142:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:143:5
    TNode<FixedArray> t2343 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2343));
    TNode<FixedArray> elems_914_impl;
    auto elems_914 = &elems_914_impl;
    USE(elems_914);
    *elems_914 = implicit_cast<TNode<FixedArray>>(t2343);
    // ../../third_party/v8/builtins/array-sort.tq:144:5
    TNode<Object> t2344 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_914)), implicit_cast<TNode<Smi>>(p_index)));
    TNode<Object> result_915_impl;
    auto result_915 = &result_915_impl;
    USE(result_915);
    *result_915 = implicit_cast<TNode<Object>>(t2344);
    // ../../third_party/v8/builtins/array-sort.tq:145:5
    {
      Label label__True_680_impl(this);
      Label* label__True_680 = &label__True_680_impl;
      USE(label__True_680);
      Label label__False_681_impl(this, {});
      Label* label__False_681 = &label__False_681_impl;
      USE(label__False_681);
      TNode<BoolT> t2345 = UncheckedCast<BoolT>(IsTheHole(implicit_cast<TNode<Object>>((*result_915))));
      USE(implicit_cast<TNode<BoolT>>(t2345));
      Branch(implicit_cast<TNode<BoolT>>(t2345), label__True_680, label__False_681);
      if (label__True_680->is_used())
      {
        BIND(label__True_680);
        // ../../third_party/v8/builtins/array-sort.tq:145:28
        {
          // ../../third_party/v8/builtins/array-sort.tq:149:7
          TNode<Smi> t2346 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2346));
          Return(implicit_cast<TNode<Object>>(t2346));
        }
      }
      BIND(label__False_681);
    }
    // ../../third_party/v8/builtins/array-sort.tq:151:5
    Return(implicit_cast<TNode<Object>>((*result_915)));
  }
}

TF_BUILTIN(Load20ATFastDoubleElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:156:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:157:5
    {
      Label label_try_done_916_1380_impl(this);
      Label* label_try_done_916_1380 = &label_try_done_916_1380_impl;
      USE(label_try_done_916_1380);
      Label label_Bailout_682_impl(this);
      Label* label_Bailout_682 = &label_Bailout_682_impl;
      USE(label_Bailout_682);
      Label label_try_begin_917_1381_impl(this);
      Label* label_try_begin_917_1381 = &label_try_begin_917_1381_impl;
      USE(label_try_begin_917_1381);
      Goto(label_try_begin_917_1381);
      if (label_try_begin_917_1381->is_used())
      {
        BIND(label_try_begin_917_1381);
        // ../../third_party/v8/builtins/array-sort.tq:157:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:158:7
          TNode<FixedDoubleArray> t2347 = UncheckedCast<FixedDoubleArray>(unsafe_cast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t2347));
          TNode<FixedDoubleArray> elems_918_impl;
          auto elems_918 = &elems_918_impl;
          USE(elems_918);
          *elems_918 = implicit_cast<TNode<FixedDoubleArray>>(t2347);
          // ../../third_party/v8/builtins/array-sort.tq:159:7
          TNode<Float64T> t2348 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elems_918)), implicit_cast<TNode<Smi>>(p_index), label_Bailout_682));
          USE(implicit_cast<TNode<Float64T>>(t2348));
          TNode<Float64T> value_919_impl;
          auto value_919 = &value_919_impl;
          USE(value_919);
          *value_919 = implicit_cast<TNode<Float64T>>(t2348);
          // ../../third_party/v8/builtins/array-sort.tq:161:7
          TNode<HeapNumber> t2349 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>((*value_919))));
          USE(implicit_cast<TNode<HeapNumber>>(t2349));
          Return(implicit_cast<TNode<Object>>(t2349));
        }
      }
      if (label_Bailout_682->is_used())
      {
        BIND(label_Bailout_682);
        // ../../third_party/v8/builtins/array-sort.tq:163:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:167:7
          TNode<Smi> t2350 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2350));
          Return(implicit_cast<TNode<Object>>(t2350));
        }
      }
    }
  }
}

TF_BUILTIN(Load20ATDictionaryElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:173:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:174:5
    {
      Label label_try_done_920_1382_impl(this);
      Label* label_try_done_920_1382 = &label_try_done_920_1382_impl;
      USE(label_try_done_920_1382);
      Label label_Bailout_683_impl(this);
      Label* label_Bailout_683 = &label_Bailout_683_impl;
      USE(label_Bailout_683);
      Label label_try_begin_921_1383_impl(this);
      Label* label_try_begin_921_1383 = &label_try_begin_921_1383_impl;
      USE(label_try_begin_921_1383);
      Goto(label_try_begin_921_1383);
      if (label_try_begin_921_1383->is_used())
      {
        BIND(label_try_begin_921_1383);
        // ../../third_party/v8/builtins/array-sort.tq:174:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:175:7
          TNode<NumberDictionary> t2351 = UncheckedCast<NumberDictionary>(unsafe_cast18ATNumberDictionary(implicit_cast<TNode<Object>>(p_elements)));
          USE(implicit_cast<TNode<NumberDictionary>>(t2351));
          TNode<NumberDictionary> dictionary_922_impl;
          auto dictionary_922 = &dictionary_922_impl;
          USE(dictionary_922);
          *dictionary_922 = implicit_cast<TNode<NumberDictionary>>(t2351);
          // ../../third_party/v8/builtins/array-sort.tq:177:7
          TNode<IntPtrT> t2352 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Smi>>(p_index)));
          USE(implicit_cast<TNode<IntPtrT>>(t2352));
          TNode<IntPtrT> intptr_index_923_impl;
          auto intptr_index_923 = &intptr_index_923_impl;
          USE(intptr_index_923);
          *intptr_index_923 = implicit_cast<TNode<IntPtrT>>(t2352);
          // ../../third_party/v8/builtins/array-sort.tq:178:7
          TNode<Object> t2353 = UncheckedCast<Object>(BasicLoadNumberDictionaryElement(implicit_cast<TNode<NumberDictionary>>((*dictionary_922)), implicit_cast<TNode<IntPtrT>>((*intptr_index_923)), label_Bailout_683, label_Bailout_683));
          USE(implicit_cast<TNode<Object>>(t2353));
          TNode<Object> value_924_impl;
          auto value_924 = &value_924_impl;
          USE(value_924);
          *value_924 = implicit_cast<TNode<Object>>(t2353);
          // ../../third_party/v8/builtins/array-sort.tq:181:7
          Return(implicit_cast<TNode<Object>>((*value_924)));
        }
      }
      if (label_Bailout_683->is_used())
      {
        BIND(label_Bailout_683);
        // ../../third_party/v8/builtins/array-sort.tq:183:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:184:7
          TNode<Smi> t2354 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2354));
          Return(implicit_cast<TNode<Object>>(t2354));
        }
      }
    }
  }
}

TF_BUILTIN(Load19ATTempArrayElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:190:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:191:5
    // ../../third_party/v8/builtins/array-sort.tq:192:5
    TNode<FixedArray> t2355 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2355));
    TNode<FixedArray> elems_925_impl;
    auto elems_925 = &elems_925_impl;
    USE(elems_925);
    *elems_925 = implicit_cast<TNode<FixedArray>>(t2355);
    // ../../third_party/v8/builtins/array-sort.tq:193:5
    TNode<Object> t2356 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_925)), implicit_cast<TNode<Smi>>(p_index)));
    Return(implicit_cast<TNode<Object>>(t2356));
  }
}

TF_BUILTIN(Store23ATFastPackedSmiElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:205:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:206:5
    TNode<FixedArray> t2357 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2357));
    TNode<FixedArray> elems_926_impl;
    auto elems_926 = &elems_926_impl;
    USE(elems_926);
    *elems_926 = implicit_cast<TNode<FixedArray>>(t2357);
    // ../../third_party/v8/builtins/array-sort.tq:207:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_926)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<WriteBarrierMode>(SKIP_WRITE_BARRIER));
    // ../../third_party/v8/builtins/array-sort.tq:208:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(Store25ATFastSmiOrObjectElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:213:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:214:5
    TNode<FixedArray> t2358 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2358));
    TNode<FixedArray> elems_927_impl;
    auto elems_927 = &elems_927_impl;
    USE(elems_927);
    *elems_927 = implicit_cast<TNode<FixedArray>>(t2358);
    // ../../third_party/v8/builtins/array-sort.tq:215:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_927)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value));
    // ../../third_party/v8/builtins/array-sort.tq:216:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(Store20ATFastDoubleElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:221:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:222:5
    TNode<FixedDoubleArray> t2359 = UncheckedCast<FixedDoubleArray>(unsafe_cast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t2359));
    TNode<FixedDoubleArray> elems_928_impl;
    auto elems_928 = &elems_928_impl;
    USE(elems_928);
    *elems_928 = implicit_cast<TNode<FixedDoubleArray>>(t2359);
    // ../../third_party/v8/builtins/array-sort.tq:223:5
    TNode<HeapNumber> t2360 = UncheckedCast<HeapNumber>(unsafe_cast12ATHeapNumber(implicit_cast<TNode<Object>>(p_value)));
    USE(implicit_cast<TNode<HeapNumber>>(t2360));
    TNode<HeapNumber> heap_val_929_impl;
    auto heap_val_929 = &heap_val_929_impl;
    USE(heap_val_929);
    *heap_val_929 = implicit_cast<TNode<HeapNumber>>(t2360);
    // ../../third_party/v8/builtins/array-sort.tq:225:5
    TNode<Float64T> t2361 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<HeapNumber>>((*heap_val_929))));
    USE(implicit_cast<TNode<Float64T>>(t2361));
    TNode<Float64T> t2362 = UncheckedCast<Float64T>(Float64SilenceNaN(implicit_cast<TNode<Float64T>>(t2361)));
    USE(implicit_cast<TNode<Float64T>>(t2362));
    TNode<Float64T> val_930_impl;
    auto val_930 = &val_930_impl;
    USE(val_930);
    *val_930 = implicit_cast<TNode<Float64T>>(t2362);
    // ../../third_party/v8/builtins/array-sort.tq:226:5
    StoreFixedDoubleArrayElementWithSmiIndex(implicit_cast<TNode<FixedDoubleArray>>((*elems_928)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Float64T>>((*val_930)));
    // ../../third_party/v8/builtins/array-sort.tq:227:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(Store20ATDictionaryElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:232:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:233:5
    TNode<NumberDictionary> t2363 = UncheckedCast<NumberDictionary>(unsafe_cast18ATNumberDictionary(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<NumberDictionary>>(t2363));
    TNode<NumberDictionary> dictionary_931_impl;
    auto dictionary_931 = &dictionary_931_impl;
    USE(dictionary_931);
    *dictionary_931 = implicit_cast<TNode<NumberDictionary>>(t2363);
    // ../../third_party/v8/builtins/array-sort.tq:235:5
    TNode<IntPtrT> t2364 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Smi>>(p_index)));
    USE(implicit_cast<TNode<IntPtrT>>(t2364));
    TNode<IntPtrT> intptr_index_932_impl;
    auto intptr_index_932 = &intptr_index_932_impl;
    USE(intptr_index_932);
    *intptr_index_932 = implicit_cast<TNode<IntPtrT>>(t2364);
    // ../../third_party/v8/builtins/array-sort.tq:236:5
    {
      Label label_try_done_933_1384_impl(this);
      Label* label_try_done_933_1384 = &label_try_done_933_1384_impl;
      USE(label_try_done_933_1384);
      Label label_ReadOnly_684_impl(this);
      Label* label_ReadOnly_684 = &label_ReadOnly_684_impl;
      USE(label_ReadOnly_684);
      Label label_Fail_685_impl(this);
      Label* label_Fail_685 = &label_Fail_685_impl;
      USE(label_Fail_685);
      Label label_try_begin_934_1385_impl(this);
      Label* label_try_begin_934_1385 = &label_try_begin_934_1385_impl;
      USE(label_try_begin_934_1385);
      Goto(label_try_begin_934_1385);
      if (label_try_begin_934_1385->is_used())
      {
        BIND(label_try_begin_934_1385);
        // ../../third_party/v8/builtins/array-sort.tq:236:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:237:7
          BasicStoreNumberDictionaryElement(implicit_cast<TNode<NumberDictionary>>((*dictionary_931)), implicit_cast<TNode<IntPtrT>>((*intptr_index_932)), implicit_cast<TNode<Object>>(p_value), label_Fail_685, label_Fail_685, label_ReadOnly_684);
          // ../../third_party/v8/builtins/array-sort.tq:239:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_ReadOnly_684->is_used())
      {
        BIND(label_ReadOnly_684);
        // ../../third_party/v8/builtins/array-sort.tq:241:20
        {
          // ../../third_party/v8/builtins/array-sort.tq:244:7
          TNode<JSReceiver> t2365 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<JSReceiver>>(t2365));
          TNode<JSReceiver> receiver_935_impl;
          auto receiver_935 = &receiver_935_impl;
          USE(receiver_935);
          *receiver_935 = implicit_cast<TNode<JSReceiver>>(t2365);
          // ../../third_party/v8/builtins/array-sort.tq:245:7
          TNode<Object> t2366 = UncheckedCast<Object>(Typeof(implicit_cast<TNode<Object>>((*receiver_935))));
          USE(implicit_cast<TNode<Object>>(t2366));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kStrictReadOnlyProperty), implicit_cast<TNode<Object>>(p_index), implicit_cast<TNode<Object>>(t2366), implicit_cast<TNode<Object>>((*receiver_935)));
        }
      }
      if (label_Fail_685->is_used())
      {
        BIND(label_Fail_685);
        // ../../third_party/v8/builtins/array-sort.tq:248:16
        {
          // ../../third_party/v8/builtins/array-sort.tq:249:7
          TNode<Smi> t2367 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2367));
          Return(implicit_cast<TNode<Smi>>(t2367));
        }
      }
    }
  }
}

TF_BUILTIN(Store19ATTempArrayElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:255:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:256:5
    TNode<FixedArray> t2368 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2368));
    TNode<FixedArray> elems_936_impl;
    auto elems_936 = &elems_936_impl;
    USE(elems_936);
    *elems_936 = implicit_cast<TNode<FixedArray>>(t2368);
    // ../../third_party/v8/builtins/array-sort.tq:257:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_936)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value));
    // ../../third_party/v8/builtins/array-sort.tq:258:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(SortCompareDefault, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_comparefn = UncheckedCast<Object>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Object> p_x = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(p_x);
  TNode<Object> p_y = UncheckedCast<Object>(Parameter(Descriptor::kY));
  USE(p_y);
  // ../../third_party/v8/builtins/array-sort.tq:283:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:284:5
    // ../../third_party/v8/builtins/array-sort.tq:286:5
    {
      Label label__True_686_impl(this);
      Label* label__True_686 = &label__True_686_impl;
      USE(label__True_686);
      Label label__False_687_impl(this, {});
      Label* label__False_687 = &label__False_687_impl;
      USE(label__False_687);
      Label label__True_688_impl(this);
      Label* label__True_688 = &label__True_688_impl;
      USE(label__True_688);
      TNode<BoolT> t2373 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_x)));
      USE(implicit_cast<TNode<BoolT>>(t2373));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t2373), label__False_687);
      TNode<BoolT> t2374 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_y)));
      USE(implicit_cast<TNode<BoolT>>(t2374));
      Branch(implicit_cast<TNode<BoolT>>(t2374), label__True_686, label__False_687);
      if (label__True_686->is_used())
      {
        BIND(label__True_686);
        // ../../third_party/v8/builtins/array-sort.tq:286:43
        {
          // ../../third_party/v8/builtins/array-sort.tq:288:7
          TNode<Number> t2375 = UncheckedCast<Number>(CallRuntime(Runtime::kSmiLexicographicCompare, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_x), implicit_cast<TNode<Object>>(p_y)));
          USE(implicit_cast<TNode<Number>>(t2375));
          Return(implicit_cast<TNode<Number>>(t2375));
        }
      }
      BIND(label__False_687);
    }
    // ../../third_party/v8/builtins/array-sort.tq:292:5
    TNode<String> t2376 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_x)));
    USE(implicit_cast<TNode<String>>(t2376));
    TNode<String> xString_937_impl;
    auto xString_937 = &xString_937_impl;
    USE(xString_937);
    *xString_937 = implicit_cast<TNode<String>>(t2376);
    // ../../third_party/v8/builtins/array-sort.tq:295:5
    TNode<String> t2377 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_y)));
    USE(implicit_cast<TNode<String>>(t2377));
    TNode<String> yString_938_impl;
    auto yString_938 = &yString_938_impl;
    USE(yString_938);
    *yString_938 = implicit_cast<TNode<String>>(t2377);
    // ../../third_party/v8/builtins/array-sort.tq:300:5
    {
      Label label__True_689_impl(this);
      Label* label__True_689 = &label__True_689_impl;
      USE(label__True_689);
      Label label__False_690_impl(this, {});
      Label* label__False_690 = &label__False_690_impl;
      USE(label__False_690);
      TNode<Oddball> t2378 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kStringLessThan, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<String>>((*xString_937)), implicit_cast<TNode<String>>((*yString_938))));
      USE(implicit_cast<TNode<Oddball>>(t2378));
      TNode<BoolT> t2379 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2378), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t2379));
      Branch(implicit_cast<TNode<BoolT>>(t2379), label__True_689, label__False_690);
      if (label__True_689->is_used())
      {
        BIND(label__True_689);
        // ../../third_party/v8/builtins/array-sort.tq:300:60
        int31_t t2380 = -1;
        TNode<Number> t2381 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2380)));
        Return(implicit_cast<TNode<Number>>(t2381));
      }
      BIND(label__False_690);
    }
    // ../../third_party/v8/builtins/array-sort.tq:305:5
    {
      Label label__True_691_impl(this);
      Label* label__True_691 = &label__True_691_impl;
      USE(label__True_691);
      Label label__False_692_impl(this, {});
      Label* label__False_692 = &label__False_692_impl;
      USE(label__False_692);
      TNode<Oddball> t2382 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kStringLessThan, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<String>>((*yString_938)), implicit_cast<TNode<String>>((*xString_937))));
      USE(implicit_cast<TNode<Oddball>>(t2382));
      TNode<BoolT> t2383 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2382), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t2383));
      Branch(implicit_cast<TNode<BoolT>>(t2383), label__True_691, label__False_692);
      if (label__True_691->is_used())
      {
        BIND(label__True_691);
        // ../../third_party/v8/builtins/array-sort.tq:305:60
        int31_t t2384 = 1;
        TNode<Number> t2385 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2384)));
        Return(implicit_cast<TNode<Number>>(t2385));
      }
      BIND(label__False_692);
    }
    // ../../third_party/v8/builtins/array-sort.tq:308:5
    int31_t t2386 = 0;
    TNode<Number> t2387 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2386)));
    Return(implicit_cast<TNode<Number>>(t2387));
  }
}

TF_BUILTIN(SortCompareUserFn, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_comparefn = UncheckedCast<Object>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Object> p_x = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(p_x);
  TNode<Object> p_y = UncheckedCast<Object>(Parameter(Descriptor::kY));
  USE(p_y);
  // ../../third_party/v8/builtins/array-sort.tq:312:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:313:5
    // ../../third_party/v8/builtins/array-sort.tq:314:5
    TNode<JSReceiver> t2388 = UncheckedCast<JSReceiver>(unsafe_cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(p_comparefn)));
    USE(implicit_cast<TNode<JSReceiver>>(t2388));
    TNode<JSReceiver> cmpfn_939_impl;
    auto cmpfn_939 = &cmpfn_939_impl;
    USE(cmpfn_939);
    *cmpfn_939 = implicit_cast<TNode<JSReceiver>>(t2388);
    // ../../third_party/v8/builtins/array-sort.tq:317:5
    TNode<Object> t2389 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*cmpfn_939)), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>(p_x), implicit_cast<TNode<Object>>(p_y)));
    USE(implicit_cast<TNode<Object>>(t2389));
    TNode<Number> t2390 = UncheckedCast<Number>(ToNumber_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t2389)));
    USE(implicit_cast<TNode<Number>>(t2390));
    TNode<Number> v_940_impl;
    auto v_940 = &v_940_impl;
    USE(v_940);
    *v_940 = implicit_cast<TNode<Number>>(t2390);
    // ../../third_party/v8/builtins/array-sort.tq:321:5
    {
      Label label__True_693_impl(this);
      Label* label__True_693 = &label__True_693_impl;
      USE(label__True_693);
      Label label__False_694_impl(this, {});
      Label* label__False_694 = &label__False_694_impl;
      USE(label__False_694);
      TNode<BoolT> t2391 = UncheckedCast<BoolT>(NumberIsNaN(implicit_cast<TNode<Number>>((*v_940))));
      USE(implicit_cast<TNode<BoolT>>(t2391));
      Branch(implicit_cast<TNode<BoolT>>(t2391), label__True_693, label__False_694);
      if (label__True_693->is_used())
      {
        BIND(label__True_693);
        // ../../third_party/v8/builtins/array-sort.tq:321:25
        int31_t t2392 = 0;
        TNode<Number> t2393 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2392)));
        Return(implicit_cast<TNode<Number>>(t2393));
      }
      BIND(label__False_694);
    }
    // ../../third_party/v8/builtins/array-sort.tq:324:5
    Return(implicit_cast<TNode<Number>>((*v_940)));
  }
}

TF_BUILTIN(CanUseSameAccessor25ATGenericElementsAccessor, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:344:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:346:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

TF_BUILTIN(CanUseSameAccessor20ATDictionaryElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:351:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:352:5
    TNode<JSReceiver> t2394 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t2394));
    TVARIABLE(JSReceiver, obj_426_impl);
    auto obj_426 = &obj_426_impl;
    USE(obj_426);
    *obj_426 = implicit_cast<TNode<JSReceiver>>(t2394);
    // ../../third_party/v8/builtins/array-sort.tq:353:5
    TNode<Map> t2395 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*obj_426).value())));
    TNode<BoolT> t2396 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2395), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
    USE(implicit_cast<TNode<BoolT>>(t2396));
    TNode<Oddball> t2397 = UncheckedCast<Oddball>(SelectBooleanConstant(implicit_cast<TNode<BoolT>>(t2396)));
    USE(implicit_cast<TNode<Oddball>>(t2397));
    Return(implicit_cast<TNode<Oddball>>(t2397));
  }
}

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::CallCompareFn(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Object> p_x, TNode<Object> p_y, Label* label_Bailout_695) {
  TVARIABLE(Number, _return_427_impl);
  auto _return_427 = &_return_427_impl;
  USE(_return_427);
  Label label_macro_end_1390_impl(this, {_return_427});
  Label* label_macro_end_1390 = &label_macro_end_1390_impl;
  USE(label_macro_end_1390);
  // ../../third_party/v8/builtins/array-sort.tq:358:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:359:5
    TNode<Object> t2398 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kUserCmpFnIdx())));
    TNode<Object> userCmpFn_941_impl;
    auto userCmpFn_941 = &userCmpFn_941_impl;
    USE(userCmpFn_941);
    *userCmpFn_941 = implicit_cast<TNode<Object>>(t2398);
    // ../../third_party/v8/builtins/array-sort.tq:360:5
    TNode<Object> t2399 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kSortComparePtrIdx())));
    TNode<Code> t2400 = UncheckedCast<Code>(unsafe_cast108FT9ATContext22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(t2399)));
    USE(implicit_cast<TNode<Code>>(t2400));
    TNode<Code> sortCompare_942_impl;
    auto sortCompare_942 = &sortCompare_942_impl;
    USE(sortCompare_942);
    *sortCompare_942 = implicit_cast<TNode<Code>>(t2400);
    // ../../third_party/v8/builtins/array-sort.tq:363:5
    TNode<Number> t2401 = UncheckedCast<Number>(CallStub(Builtins::CallableFor(isolate(), Builtins::kSortCompareDefault).descriptor(), implicit_cast<TNode<Code>>((*sortCompare_942)), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*userCmpFn_941)), implicit_cast<TNode<Object>>(p_x), implicit_cast<TNode<Object>>(p_y)));
    USE(implicit_cast<TNode<Number>>(t2401));
    TNode<Number> result_943_impl;
    auto result_943 = &result_943_impl;
    USE(result_943);
    *result_943 = implicit_cast<TNode<Number>>(t2401);
    // ../../third_party/v8/builtins/array-sort.tq:365:5
    TNode<JSReceiver> t2402 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<JSReceiver>>(t2402));
    TNode<JSReceiver> receiver_944_impl;
    auto receiver_944 = &receiver_944_impl;
    USE(receiver_944);
    *receiver_944 = implicit_cast<TNode<JSReceiver>>(t2402);
    // ../../third_party/v8/builtins/array-sort.tq:366:5
    TNode<Object> t2403 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kInitialReceiverMapIdx())));
    TNode<Object> initialReceiverMap_945_impl;
    auto initialReceiverMap_945 = &initialReceiverMap_945_impl;
    USE(initialReceiverMap_945);
    *initialReceiverMap_945 = implicit_cast<TNode<Object>>(t2403);
    // ../../third_party/v8/builtins/array-sort.tq:367:5
    TNode<Object> t2404 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kInitialReceiverLengthIdx())));
    TNode<Number> t2405 = UncheckedCast<Number>(unsafe_cast22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(t2404)));
    USE(implicit_cast<TNode<Number>>(t2405));
    TNode<Number> initialReceiverLength_946_impl;
    auto initialReceiverLength_946 = &initialReceiverLength_946_impl;
    USE(initialReceiverLength_946);
    *initialReceiverLength_946 = implicit_cast<TNode<Number>>(t2405);
    // ../../third_party/v8/builtins/array-sort.tq:369:5
    TNode<Code> t2406 = UncheckedCast<Code>(GetCanUseSameAccessorFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2406));
    TNode<Code> CanUseSameAccessor_947_impl;
    auto CanUseSameAccessor_947 = &CanUseSameAccessor_947_impl;
    USE(CanUseSameAccessor_947);
    *CanUseSameAccessor_947 = implicit_cast<TNode<Code>>(t2406);
    // ../../third_party/v8/builtins/array-sort.tq:372:5
    {
      Label label__True_696_impl(this);
      Label* label__True_696 = &label__True_696_impl;
      USE(label__True_696);
      Label label__False_697_impl(this, {});
      Label* label__False_697 = &label__False_697_impl;
      USE(label__False_697);
      TNode<Oddball> t2407 = UncheckedCast<Oddball>(CallStub(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor25ATGenericElementsAccessor).descriptor(), implicit_cast<TNode<Code>>((*CanUseSameAccessor_947)), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*receiver_944)), implicit_cast<TNode<Object>>((*initialReceiverMap_945)), implicit_cast<TNode<Number>>((*initialReceiverLength_946))));
      USE(implicit_cast<TNode<Oddball>>(t2407));
      TNode<BoolT> t2408 = UncheckedCast<BoolT>(IsFalse(implicit_cast<TNode<Oddball>>(t2407)));
      USE(implicit_cast<TNode<BoolT>>(t2408));
      Branch(implicit_cast<TNode<BoolT>>(t2408), label__True_696, label__False_697);
      if (label__True_696->is_used())
      {
        BIND(label__True_696);
        // ../../third_party/v8/builtins/array-sort.tq:373:76
        {
          // ../../third_party/v8/builtins/array-sort.tq:374:7
          Goto(label_Bailout_695);
        }
      }
      BIND(label__False_697);
    }
    // ../../third_party/v8/builtins/array-sort.tq:376:5
    *_return_427 = implicit_cast<TNode<Number>>((*result_943));
    Goto(label_macro_end_1390);
  }
  BIND(label_macro_end_1390);
  return implicit_cast<TNode<Number>>((*_return_427).value());
}

compiler::TNode<HeapObject> ArrayBuiltinsFromDSLAssembler::ReloadElements(TNode<FixedArray> p_sortState) {
  TVARIABLE(HeapObject, _return_428_impl);
  auto _return_428 = &_return_428_impl;
  USE(_return_428);
  Label label_macro_end_1391_impl(this, {_return_428});
  Label* label_macro_end_1391 = &label_macro_end_1391_impl;
  USE(label_macro_end_1391);
  // ../../third_party/v8/builtins/array-sort.tq:383:59
  {
    // ../../third_party/v8/builtins/array-sort.tq:384:5
    TNode<JSReceiver> t2409 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<JSReceiver>>(t2409));
    TNode<JSReceiver> receiver_948_impl;
    auto receiver_948 = &receiver_948_impl;
    USE(receiver_948);
    *receiver_948 = implicit_cast<TNode<JSReceiver>>(t2409);
    // ../../third_party/v8/builtins/array-sort.tq:385:5
    {
      Label label__True_698_impl(this);
      Label* label__True_698 = &label__True_698_impl;
      USE(label__True_698);
      Label label__False_699_impl(this, {});
      Label* label__False_699 = &label__False_699_impl;
      USE(label__False_699);
      TNode<Object> t2410 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx())));
      TNode<BoolT> t2411 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2410), implicit_cast<TNode<Object>>(kGenericElementsAccessorId())));
      USE(implicit_cast<TNode<BoolT>>(t2411));
      Branch(implicit_cast<TNode<BoolT>>(t2411), label__True_698, label__False_699);
      if (label__True_698->is_used())
      {
        BIND(label__True_698);
        // ../../third_party/v8/builtins/array-sort.tq:385:64
        *_return_428 = implicit_cast<TNode<HeapObject>>((*receiver_948));
        Goto(label_macro_end_1391);
      }
      BIND(label__False_699);
    }
    // ../../third_party/v8/builtins/array-sort.tq:387:5
    TNode<JSObject> t2412 = UncheckedCast<JSObject>(unsafe_cast10ATJSObject(implicit_cast<TNode<Object>>((*receiver_948))));
    USE(implicit_cast<TNode<JSObject>>(t2412));
    TNode<JSObject> object_949_impl;
    auto object_949 = &object_949_impl;
    USE(object_949);
    *object_949 = implicit_cast<TNode<JSObject>>(t2412);
    // ../../third_party/v8/builtins/array-sort.tq:388:5
    TNode<FixedArrayBase> t2413 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*object_949))));
    *_return_428 = implicit_cast<TNode<HeapObject>>(t2413);
    Goto(label_macro_end_1391);
  }
  BIND(label_macro_end_1391);
  return implicit_cast<TNode<HeapObject>>((*_return_428).value());
}

compiler::TNode<Code> ArrayBuiltinsFromDSLAssembler::GetLoadFn(TNode<FixedArray> p_sortState) {
  TVARIABLE(Code, _return_429_impl);
  auto _return_429 = &_return_429_impl;
  USE(_return_429);
  Label label_macro_end_1392_impl(this, {_return_429});
  Label* label_macro_end_1392 = &label_macro_end_1392_impl;
  USE(label_macro_end_1392);
  // ../../third_party/v8/builtins/array-sort.tq:391:50
  {
    // ../../third_party/v8/builtins/array-sort.tq:392:5
    TNode<Object> t2414 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx())));
    TNode<Code> t2415 = UncheckedCast<Code>(unsafe_cast70FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(t2414)));
    USE(implicit_cast<TNode<Code>>(t2415));
    *_return_429 = implicit_cast<TNode<Code>>(t2415);
    Goto(label_macro_end_1392);
  }
  BIND(label_macro_end_1392);
  return implicit_cast<TNode<Code>>((*_return_429).value());
}

compiler::TNode<Code> ArrayBuiltinsFromDSLAssembler::GetStoreFn(TNode<FixedArray> p_sortState) {
  TVARIABLE(Code, _return_430_impl);
  auto _return_430 = &_return_430_impl;
  USE(_return_430);
  Label label_macro_end_1393_impl(this, {_return_430});
  Label* label_macro_end_1393 = &label_macro_end_1393_impl;
  USE(label_macro_end_1393);
  // ../../third_party/v8/builtins/array-sort.tq:395:52
  {
    // ../../third_party/v8/builtins/array-sort.tq:396:5
    TNode<Object> t2416 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx())));
    TNode<Code> t2417 = UncheckedCast<Code>(unsafe_cast76FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi5ATSmi(implicit_cast<TNode<Object>>(t2416)));
    USE(implicit_cast<TNode<Code>>(t2417));
    *_return_430 = implicit_cast<TNode<Code>>(t2417);
    Goto(label_macro_end_1393);
  }
  BIND(label_macro_end_1393);
  return implicit_cast<TNode<Code>>((*_return_430).value());
}

compiler::TNode<Code> ArrayBuiltinsFromDSLAssembler::GetCanUseSameAccessorFn(TNode<FixedArray> p_sortState) {
  TVARIABLE(Code, _return_431_impl);
  auto _return_431 = &_return_431_impl;
  USE(_return_431);
  Label label_macro_end_1394_impl(this, {_return_431});
  Label* label_macro_end_1394 = &label_macro_end_1394_impl;
  USE(label_macro_end_1394);
  // ../../third_party/v8/builtins/array-sort.tq:399:78
  {
    // ../../third_party/v8/builtins/array-sort.tq:400:5
    TNode<Object> t2418 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx())));
    TNode<Code> t2419 = UncheckedCast<Code>(unsafe_cast84FT9ATContext12ATJSReceiver22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi9ATBoolean(implicit_cast<TNode<Object>>(t2418)));
    USE(implicit_cast<TNode<Code>>(t2419));
    *_return_431 = implicit_cast<TNode<Code>>(t2419);
    Goto(label_macro_end_1394);
  }
  BIND(label_macro_end_1394);
  return implicit_cast<TNode<Code>>((*_return_431).value());
}

compiler::TNode<JSReceiver> ArrayBuiltinsFromDSLAssembler::GetReceiver(TNode<FixedArray> p_sortState) {
  TVARIABLE(JSReceiver, _return_432_impl);
  auto _return_432 = &_return_432_impl;
  USE(_return_432);
  Label label_macro_end_1395_impl(this, {_return_432});
  Label* label_macro_end_1395 = &label_macro_end_1395_impl;
  USE(label_macro_end_1395);
  // ../../third_party/v8/builtins/array-sort.tq:404:56
  {
    // ../../third_party/v8/builtins/array-sort.tq:405:5
    TNode<Object> t2420 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kReceiverIdx())));
    TNode<JSReceiver> t2421 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(t2420)));
    USE(implicit_cast<TNode<JSReceiver>>(t2421));
    *_return_432 = implicit_cast<TNode<JSReceiver>>(t2421);
    Goto(label_macro_end_1395);
  }
  BIND(label_macro_end_1395);
  return implicit_cast<TNode<JSReceiver>>((*_return_432).value());
}

compiler::TNode<FixedArray> ArrayBuiltinsFromDSLAssembler::GetTempArray(TNode<FixedArray> p_sortState) {
  TVARIABLE(FixedArray, _return_433_impl);
  auto _return_433 = &_return_433_impl;
  USE(_return_433);
  Label label_macro_end_1396_impl(this, {_return_433});
  Label* label_macro_end_1396 = &label_macro_end_1396_impl;
  USE(label_macro_end_1396);
  // ../../third_party/v8/builtins/array-sort.tq:409:57
  {
    // ../../third_party/v8/builtins/array-sort.tq:410:5
    TNode<Object> t2422 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArrayIdx())));
    TNode<FixedArray> t2423 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t2422)));
    USE(implicit_cast<TNode<FixedArray>>(t2423));
    *_return_433 = implicit_cast<TNode<FixedArray>>(t2423);
    Goto(label_macro_end_1396);
  }
  BIND(label_macro_end_1396);
  return implicit_cast<TNode<FixedArray>>((*_return_433).value());
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetPendingRunsSize(TNode<FixedArray> p_sortState) {
  TVARIABLE(Smi, _return_434_impl);
  auto _return_434 = &_return_434_impl;
  USE(_return_434);
  Label label_macro_end_1397_impl(this, {_return_434});
  Label* label_macro_end_1397 = &label_macro_end_1397_impl;
  USE(label_macro_end_1397);
  // ../../third_party/v8/builtins/array-sort.tq:415:56
  {
    // ../../third_party/v8/builtins/array-sort.tq:416:5
    // ../../third_party/v8/builtins/array-sort.tq:417:5
    TNode<Object> t2424 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsSizeIdx())));
    TNode<Smi> t2425 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2424)));
    USE(implicit_cast<TNode<Smi>>(t2425));
    TNode<Smi> stack_size_950_impl;
    auto stack_size_950 = &stack_size_950_impl;
    USE(stack_size_950);
    *stack_size_950 = implicit_cast<TNode<Smi>>(t2425);
    // ../../third_party/v8/builtins/array-sort.tq:419:5
    // ../../third_party/v8/builtins/array-sort.tq:420:5
    *_return_434 = implicit_cast<TNode<Smi>>((*stack_size_950));
    Goto(label_macro_end_1397);
  }
  BIND(label_macro_end_1397);
  return implicit_cast<TNode<Smi>>((*_return_434).value());
}

void ArrayBuiltinsFromDSLAssembler::SetPendingRunsSize(TNode<FixedArray> p_sortState, TNode<Smi> p_value) {
  Label label_macro_end_1398_impl(this, {});
  Label* label_macro_end_1398 = &label_macro_end_1398_impl;
  USE(label_macro_end_1398);
  // ../../third_party/v8/builtins/array-sort.tq:423:63
  {
    // ../../third_party/v8/builtins/array-sort.tq:424:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsSizeIdx()), implicit_cast<TNode<Object>>(p_value));
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetPendingRunBase(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run) {
  TVARIABLE(Smi, _return_435_impl);
  auto _return_435 = &_return_435_impl;
  USE(_return_435);
  Label label_macro_end_1399_impl(this, {_return_435});
  Label* label_macro_end_1399 = &label_macro_end_1399_impl;
  USE(label_macro_end_1399);
  // ../../third_party/v8/builtins/array-sort.tq:427:67
  {
    // ../../third_party/v8/builtins/array-sort.tq:428:5
    int31_t t2426 = 1;
    TNode<Smi> t2427 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2426)));
    USE(implicit_cast<TNode<Smi>>(t2427));
    TNode<Object> t2428 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2427)));
    TNode<Smi> t2429 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2428)));
    USE(implicit_cast<TNode<Smi>>(t2429));
    *_return_435 = implicit_cast<TNode<Smi>>(t2429);
    Goto(label_macro_end_1399);
  }
  BIND(label_macro_end_1399);
  return implicit_cast<TNode<Smi>>((*_return_435).value());
}

void ArrayBuiltinsFromDSLAssembler::SetPendingRunBase(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value) {
  Label label_macro_end_1400_impl(this, {});
  Label* label_macro_end_1400 = &label_macro_end_1400_impl;
  USE(label_macro_end_1400);
  // ../../third_party/v8/builtins/array-sort.tq:431:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:432:5
    int31_t t2430 = 1;
    TNode<Smi> t2431 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2430)));
    USE(implicit_cast<TNode<Smi>>(t2431));
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2431), implicit_cast<TNode<Object>>(p_value));
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetPendingRunLength(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run) {
  TVARIABLE(Smi, _return_436_impl);
  auto _return_436 = &_return_436_impl;
  USE(_return_436);
  Label label_macro_end_1401_impl(this, {_return_436});
  Label* label_macro_end_1401 = &label_macro_end_1401_impl;
  USE(label_macro_end_1401);
  // ../../third_party/v8/builtins/array-sort.tq:435:69
  {
    // ../../third_party/v8/builtins/array-sort.tq:436:5
    int31_t t2432 = 1;
    TNode<Smi> t2433 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2432)));
    USE(implicit_cast<TNode<Smi>>(t2433));
    int31_t t2434 = 1;
    TNode<Smi> t2435 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2434)));
    TNode<Smi> t2436 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2433), implicit_cast<TNode<Smi>>(t2435)));
    USE(implicit_cast<TNode<Smi>>(t2436));
    TNode<Object> t2437 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2436)));
    TNode<Smi> t2438 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2437)));
    USE(implicit_cast<TNode<Smi>>(t2438));
    *_return_436 = implicit_cast<TNode<Smi>>(t2438);
    Goto(label_macro_end_1401);
  }
  BIND(label_macro_end_1401);
  return implicit_cast<TNode<Smi>>((*_return_436).value());
}

void ArrayBuiltinsFromDSLAssembler::SetPendingRunLength(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value) {
  Label label_macro_end_1402_impl(this, {});
  Label* label_macro_end_1402 = &label_macro_end_1402_impl;
  USE(label_macro_end_1402);
  // ../../third_party/v8/builtins/array-sort.tq:439:76
  {
    // ../../third_party/v8/builtins/array-sort.tq:440:5
    int31_t t2439 = 1;
    TNode<Smi> t2440 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2439)));
    USE(implicit_cast<TNode<Smi>>(t2440));
    int31_t t2441 = 1;
    TNode<Smi> t2442 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2441)));
    TNode<Smi> t2443 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2440), implicit_cast<TNode<Smi>>(t2442)));
    USE(implicit_cast<TNode<Smi>>(t2443));
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2443), implicit_cast<TNode<Object>>(p_value));
  }
}

void ArrayBuiltinsFromDSLAssembler::PushRun(TNode<FixedArray> p_sortState, TNode<Smi> p_base, TNode<Smi> p_length) {
  Label label_macro_end_1403_impl(this, {});
  Label* label_macro_end_1403 = &label_macro_end_1403_impl;
  USE(label_macro_end_1403);
  // ../../third_party/v8/builtins/array-sort.tq:443:64
  {
    // ../../third_party/v8/builtins/array-sort.tq:444:5
    // ../../third_party/v8/builtins/array-sort.tq:446:5
    TNode<Smi> t2444 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2444));
    TNode<Smi> stack_size_951_impl;
    auto stack_size_951 = &stack_size_951_impl;
    USE(stack_size_951);
    *stack_size_951 = implicit_cast<TNode<Smi>>(t2444);
    // ../../third_party/v8/builtins/array-sort.tq:447:5
    TNode<Object> t2445 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t2446 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t2445)));
    USE(implicit_cast<TNode<FixedArray>>(t2446));
    TNode<FixedArray> pending_runs_952_impl;
    auto pending_runs_952 = &pending_runs_952_impl;
    USE(pending_runs_952);
    *pending_runs_952 = implicit_cast<TNode<FixedArray>>(t2446);
    // ../../third_party/v8/builtins/array-sort.tq:450:5
    SetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_952)), implicit_cast<TNode<Smi>>((*stack_size_951)), implicit_cast<TNode<Smi>>(p_base));
    // ../../third_party/v8/builtins/array-sort.tq:451:5
    SetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_952)), implicit_cast<TNode<Smi>>((*stack_size_951)), implicit_cast<TNode<Smi>>(p_length));
    // ../../third_party/v8/builtins/array-sort.tq:453:5
    int31_t t2447 = 1;
    TNode<Smi> t2448 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2447)));
    TNode<Smi> t2449 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*stack_size_951)), implicit_cast<TNode<Smi>>(t2448)));
    USE(implicit_cast<TNode<Smi>>(t2449));
    SetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(t2449));
  }
}

compiler::TNode<FixedArray> ArrayBuiltinsFromDSLAssembler::GetTempArray(TNode<FixedArray> p_sortState, TNode<Smi> p_requestedSize) {
  TVARIABLE(FixedArray, _return_437_impl);
  auto _return_437 = &_return_437_impl;
  USE(_return_437);
  Label label_macro_end_1404_impl(this, {_return_437});
  Label* label_macro_end_1404 = &label_macro_end_1404_impl;
  USE(label_macro_end_1404);
  // ../../third_party/v8/builtins/array-sort.tq:458:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:459:5
    TNode<Smi> t2450 = UncheckedCast<Smi>(SmiMax(implicit_cast<TNode<Smi>>(kSortStateTempSize()), implicit_cast<TNode<Smi>>(p_requestedSize)));
    USE(implicit_cast<TNode<Smi>>(t2450));
    TNode<Smi> min_size_953_impl;
    auto min_size_953 = &min_size_953_impl;
    USE(min_size_953);
    *min_size_953 = implicit_cast<TNode<Smi>>(t2450);
    // ../../third_party/v8/builtins/array-sort.tq:461:5
    TNode<Object> t2451 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArraySizeIdx())));
    TNode<Smi> t2452 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2451)));
    USE(implicit_cast<TNode<Smi>>(t2452));
    TNode<Smi> current_size_954_impl;
    auto current_size_954 = &current_size_954_impl;
    USE(current_size_954);
    *current_size_954 = implicit_cast<TNode<Smi>>(t2452);
    // ../../third_party/v8/builtins/array-sort.tq:462:5
    {
      Label label__True_700_impl(this);
      Label* label__True_700 = &label__True_700_impl;
      USE(label__True_700);
      Label label__False_701_impl(this, {});
      Label* label__False_701 = &label__False_701_impl;
      USE(label__False_701);
      TNode<BoolT> t2453 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*current_size_954)), implicit_cast<TNode<Smi>>((*min_size_953))));
      USE(implicit_cast<TNode<BoolT>>(t2453));
      Branch(implicit_cast<TNode<BoolT>>(t2453), label__True_700, label__False_701);
      if (label__True_700->is_used())
      {
        BIND(label__True_700);
        // ../../third_party/v8/builtins/array-sort.tq:462:35
        {
          // ../../third_party/v8/builtins/array-sort.tq:463:7
          TNode<FixedArray> t2454 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<FixedArray>>(t2454));
          *_return_437 = implicit_cast<TNode<FixedArray>>(t2454);
          Goto(label_macro_end_1404);
        }
      }
      BIND(label__False_701);
    }
    // ../../third_party/v8/builtins/array-sort.tq:466:5
    TNode<IntPtrT> t2455 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Smi>>((*min_size_953))));
    USE(implicit_cast<TNode<IntPtrT>>(t2455));
    TNode<FixedArray> t2456 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(t2455)));
    USE(implicit_cast<TNode<FixedArray>>(t2456));
    TNode<FixedArray> temp_array_955_impl;
    auto temp_array_955 = &temp_array_955_impl;
    USE(temp_array_955);
    *temp_array_955 = implicit_cast<TNode<FixedArray>>(t2456);
    // ../../third_party/v8/builtins/array-sort.tq:468:5
    FillFixedArrayWithSmiZero(implicit_cast<TNode<FixedArray>>((*temp_array_955)), implicit_cast<TNode<Smi>>((*min_size_953)));
    // ../../third_party/v8/builtins/array-sort.tq:470:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArraySizeIdx()), implicit_cast<TNode<Object>>((*min_size_953)));
    // ../../third_party/v8/builtins/array-sort.tq:471:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArrayIdx()), implicit_cast<TNode<Object>>((*temp_array_955)));
    // ../../third_party/v8/builtins/array-sort.tq:472:5
    *_return_437 = implicit_cast<TNode<FixedArray>>((*temp_array_955));
    Goto(label_macro_end_1404);
  }
  BIND(label_macro_end_1404);
  return implicit_cast<TNode<FixedArray>>((*_return_437).value());
}

void ArrayBuiltinsFromDSLAssembler::EnsureSuccess(TNode<FixedArray> p_sortState, Label* label_Bailout_702) {
  Label label_macro_end_1405_impl(this, {});
  Label* label_macro_end_1405 = &label_macro_end_1405_impl;
  USE(label_macro_end_1405);
  // ../../third_party/v8/builtins/array-sort.tq:476:61
  {
    // ../../third_party/v8/builtins/array-sort.tq:477:5
    TNode<Object> t2457 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kBailoutStatusIdx())));
    TNode<Smi> t2458 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2457)));
    USE(implicit_cast<TNode<Smi>>(t2458));
    TNode<Smi> status_956_impl;
    auto status_956 = &status_956_impl;
    USE(status_956);
    *status_956 = implicit_cast<TNode<Smi>>(t2458);
    // ../../third_party/v8/builtins/array-sort.tq:478:5
    {
      Label label__True_703_impl(this);
      Label* label__True_703 = &label__True_703_impl;
      USE(label__True_703);
      Label label__False_704_impl(this, {});
      Label* label__False_704 = &label__False_704_impl;
      USE(label__False_704);
      TNode<BoolT> t2459 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*status_956)), implicit_cast<TNode<Smi>>(kFailure())));
      USE(implicit_cast<TNode<BoolT>>(t2459));
      Branch(implicit_cast<TNode<BoolT>>(t2459), label__True_703, label__False_704);
      if (label__True_703->is_used())
      {
        BIND(label__True_703);
        // ../../third_party/v8/builtins/array-sort.tq:478:29
        Goto(label_Bailout_702);
      }
      BIND(label__False_704);
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::Failure(TNode<FixedArray> p_sortState) {
  TVARIABLE(Smi, _return_438_impl);
  auto _return_438 = &_return_438_impl;
  USE(_return_438);
  Label label_macro_end_1406_impl(this, {_return_438});
  Label* label_macro_end_1406 = &label_macro_end_1406_impl;
  USE(label_macro_end_1406);
  // ../../third_party/v8/builtins/array-sort.tq:482:45
  {
    // ../../third_party/v8/builtins/array-sort.tq:483:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kBailoutStatusIdx()), implicit_cast<TNode<Object>>(kFailure()));
    // ../../third_party/v8/builtins/array-sort.tq:484:5
    *_return_438 = implicit_cast<TNode<Smi>>(kFailure());
    Goto(label_macro_end_1406);
  }
  BIND(label_macro_end_1406);
  return implicit_cast<TNode<Smi>>((*_return_438).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::CallLoad(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<HeapObject> p_elements, TNode<Smi> p_index, Label* label_Bailout_705) {
  TVARIABLE(Object, _return_439_impl);
  auto _return_439 = &_return_439_impl;
  USE(_return_439);
  Label label_macro_end_1407_impl(this, {_return_439});
  Label* label_macro_end_1407 = &label_macro_end_1407_impl;
  USE(label_macro_end_1407);
  // ../../third_party/v8/builtins/array-sort.tq:493:64
  {
    // ../../third_party/v8/builtins/array-sort.tq:494:5
    TNode<Object> t2460 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoad23ATFastPackedSmiElements).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_index)));
    USE(implicit_cast<TNode<Object>>(t2460));
    TNode<Object> result_957_impl;
    auto result_957 = &result_957_impl;
    USE(result_957);
    *result_957 = implicit_cast<TNode<Object>>(t2460);
    // ../../third_party/v8/builtins/array-sort.tq:495:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_705);
    // ../../third_party/v8/builtins/array-sort.tq:496:5
    *_return_439 = implicit_cast<TNode<Object>>((*result_957));
    Goto(label_macro_end_1407);
  }
  BIND(label_macro_end_1407);
  return implicit_cast<TNode<Object>>((*_return_439).value());
}

void ArrayBuiltinsFromDSLAssembler::CallStore(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Store, TNode<HeapObject> p_elements, TNode<Smi> p_index, TNode<Object> p_value, Label* label_Bailout_706) {
  Label label_macro_end_1408_impl(this, {});
  Label* label_macro_end_1408 = &label_macro_end_1408_impl;
  USE(label_macro_end_1408);
  // ../../third_party/v8/builtins/array-sort.tq:501:71
  {
    // ../../third_party/v8/builtins/array-sort.tq:502:5
    TNode<Smi> t2461 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStore23ATFastPackedSmiElements).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value)));
    USE(implicit_cast<TNode<Smi>>(t2461));
    // ../../third_party/v8/builtins/array-sort.tq:503:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_706);
  }
}

void ArrayBuiltinsFromDSLAssembler::CallCopyFromTempArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<HeapObject> p_dstElements, TNode<Smi> p_dstPos, TNode<FixedArray> p_tempArray, TNode<Smi> p_srcPos, TNode<Smi> p_length, Label* label_Bailout_707) {
  Label label_macro_end_1409_impl(this, {});
  Label* label_macro_end_1409 = &label_macro_end_1409_impl;
  USE(label_macro_end_1409);
  // ../../third_party/v8/builtins/array-sort.tq:509:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:510:5
    TNode<Smi> t2462 = UncheckedCast<Smi>(CallBuiltin(Builtins::kCopyFromTempArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_dstElements), implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<FixedArray>>(p_tempArray), implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2462));
    // ../../third_party/v8/builtins/array-sort.tq:512:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_707);
  }
}

void ArrayBuiltinsFromDSLAssembler::CallCopyWithinSortArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<HeapObject> p_elements, TNode<Smi> p_srcPos, TNode<Smi> p_dstPos, TNode<Smi> p_length, Label* label_Bailout_708) {
  Label label_macro_end_1410_impl(this, {});
  Label* label_macro_end_1410 = &label_macro_end_1410_impl;
  USE(label_macro_end_1410);
  // ../../third_party/v8/builtins/array-sort.tq:518:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:519:5
    TNode<Smi> t2463 = UncheckedCast<Smi>(CallBuiltin(Builtins::kCopyWithinSortArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2463));
    // ../../third_party/v8/builtins/array-sort.tq:520:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_708);
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::CallGallopRight(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Object> p_key, TNode<Smi> p_base, TNode<Smi> p_length, TNode<Smi> p_hint, TNode<Oddball> p_useTempArray, Label* label_Bailout_709) {
  TVARIABLE(Smi, _return_440_impl);
  auto _return_440 = &_return_440_impl;
  USE(_return_440);
  Label label_macro_end_1411_impl(this, {_return_440});
  Label* label_macro_end_1411 = &label_macro_end_1411_impl;
  USE(label_macro_end_1411);
  // ../../third_party/v8/builtins/array-sort.tq:526:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:527:5
    TNode<Smi> t2464 = UncheckedCast<Smi>(CallBuiltin(Builtins::kGallopRight, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Oddball>>(p_useTempArray)));
    USE(implicit_cast<TNode<Smi>>(t2464));
    TNode<Smi> result_958_impl;
    auto result_958 = &result_958_impl;
    USE(result_958);
    *result_958 = implicit_cast<TNode<Smi>>(t2464);
    // ../../third_party/v8/builtins/array-sort.tq:529:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_709);
    // ../../third_party/v8/builtins/array-sort.tq:530:5
    *_return_440 = implicit_cast<TNode<Smi>>((*result_958));
    Goto(label_macro_end_1411);
  }
  BIND(label_macro_end_1411);
  return implicit_cast<TNode<Smi>>((*_return_440).value());
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::CallGallopLeft(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Object> p_key, TNode<Smi> p_base, TNode<Smi> p_length, TNode<Smi> p_hint, TNode<Oddball> p_useTempArray, Label* label_Bailout_710) {
  TVARIABLE(Smi, _return_441_impl);
  auto _return_441 = &_return_441_impl;
  USE(_return_441);
  Label label_macro_end_1412_impl(this, {_return_441});
  Label* label_macro_end_1412 = &label_macro_end_1412_impl;
  USE(label_macro_end_1412);
  // ../../third_party/v8/builtins/array-sort.tq:536:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:537:5
    TNode<Smi> t2465 = UncheckedCast<Smi>(CallBuiltin(Builtins::kGallopLeft, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Oddball>>(p_useTempArray)));
    USE(implicit_cast<TNode<Smi>>(t2465));
    TNode<Smi> result_959_impl;
    auto result_959 = &result_959_impl;
    USE(result_959);
    *result_959 = implicit_cast<TNode<Smi>>(t2465);
    // ../../third_party/v8/builtins/array-sort.tq:539:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_710);
    // ../../third_party/v8/builtins/array-sort.tq:540:5
    *_return_441 = implicit_cast<TNode<Smi>>((*result_959));
    Goto(label_macro_end_1412);
  }
  BIND(label_macro_end_1412);
  return implicit_cast<TNode<Smi>>((*_return_441).value());
}

void ArrayBuiltinsFromDSLAssembler::CallMergeAt(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_i, Label* label_Bailout_711) {
  Label label_macro_end_1413_impl(this, {});
  Label* label_macro_end_1413 = &label_macro_end_1413_impl;
  USE(label_macro_end_1413);
  // ../../third_party/v8/builtins/array-sort.tq:544:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:545:5
    TNode<Smi> t2466 = UncheckedCast<Smi>(CallBuiltin(Builtins::kMergeAt, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t2466));
    // ../../third_party/v8/builtins/array-sort.tq:546:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_711);
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetReceiverLengthProperty(TNode<Context> p_context, TNode<FixedArray> p_sortState) {
  TVARIABLE(Smi, _return_442_impl);
  auto _return_442 = &_return_442_impl;
  USE(_return_442);
  Label label_macro_end_1414_impl(this, {_return_442});
  Label* label_macro_end_1414 = &label_macro_end_1414_impl;
  USE(label_macro_end_1414);
  // ../../third_party/v8/builtins/array-sort.tq:551:53
  {
    // ../../third_party/v8/builtins/array-sort.tq:552:5
    TNode<JSReceiver> t2467 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<JSReceiver>>(t2467));
    TNode<JSReceiver> receiver_960_impl;
    auto receiver_960 = &receiver_960_impl;
    USE(receiver_960);
    *receiver_960 = implicit_cast<TNode<JSReceiver>>(t2467);
    // ../../third_party/v8/builtins/array-sort.tq:554:5
    {
      Label label__True_712_impl(this);
      Label* label__True_712 = &label__True_712_impl;
      USE(label__True_712);
      Label label__False_713_impl(this, {});
      Label* label__False_713 = &label__False_713_impl;
      USE(label__False_713);
      TNode<BoolT> t2468 = UncheckedCast<BoolT>(IsJSArray(implicit_cast<TNode<HeapObject>>((*receiver_960))));
      USE(implicit_cast<TNode<BoolT>>(t2468));
      Branch(implicit_cast<TNode<BoolT>>(t2468), label__True_712, label__False_713);
      if (label__True_712->is_used())
      {
        BIND(label__True_712);
        // ../../third_party/v8/builtins/array-sort.tq:554:30
        TNode<JSArray> t2469 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>((*receiver_960))));
        USE(implicit_cast<TNode<JSArray>>(t2469));
        TNode<Smi> t2470 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>(t2469)));
        *_return_442 = implicit_cast<TNode<Smi>>(t2470);
        Goto(label_macro_end_1414);
      }
      BIND(label__False_713);
    }
    // ../../third_party/v8/builtins/array-sort.tq:556:5
    const char* t2471 = "length";
    TNode<Object> t2472 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t2471)));
    TNode<Object> t2473 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*receiver_960)), implicit_cast<TNode<Object>>(t2472)));
    USE(implicit_cast<TNode<Object>>(t2473));
    TNode<Number> t2474 = UncheckedCast<Number>(ToLength_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t2473)));
    USE(implicit_cast<TNode<Number>>(t2474));
    TNode<Number> len_961_impl;
    auto len_961 = &len_961_impl;
    USE(len_961);
    *len_961 = implicit_cast<TNode<Number>>(t2474);
    // ../../third_party/v8/builtins/array-sort.tq:558:5
    TNode<Smi> t2475 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>((*len_961))));
    USE(implicit_cast<TNode<Smi>>(t2475));
    *_return_442 = implicit_cast<TNode<Smi>>(t2475);
    Goto(label_macro_end_1414);
  }
  BIND(label_macro_end_1414);
  return implicit_cast<TNode<Smi>>((*_return_442).value());
}

void ArrayBuiltinsFromDSLAssembler::CopyToTempArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<HeapObject> p_srcElements, TNode<Smi> p_srcPos, TNode<FixedArray> p_tempArray, TNode<Smi> p_dstPos, TNode<Smi> p_length, Label* label_Bailout_714) {
  Label label_macro_end_1415_impl(this, {});
  Label* label_macro_end_1415 = &label_macro_end_1415_impl;
  USE(label_macro_end_1415);
  // ../../third_party/v8/builtins/array-sort.tq:565:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:566:5
    // ../../third_party/v8/builtins/array-sort.tq:567:5
    // ../../third_party/v8/builtins/array-sort.tq:568:5
    // ../../third_party/v8/builtins/array-sort.tq:569:5
    // ../../third_party/v8/builtins/array-sort.tq:571:5
    TVARIABLE(Smi, src_idx_443_impl);
    auto src_idx_443 = &src_idx_443_impl;
    USE(src_idx_443);
    *src_idx_443 = implicit_cast<TNode<Smi>>(p_srcPos);
    // ../../third_party/v8/builtins/array-sort.tq:572:5
    TVARIABLE(Smi, dst_idx_444_impl);
    auto dst_idx_444 = &dst_idx_444_impl;
    USE(dst_idx_444);
    *dst_idx_444 = implicit_cast<TNode<Smi>>(p_dstPos);
    // ../../third_party/v8/builtins/array-sort.tq:573:5
    TNode<Smi> t2476 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2476));
    TVARIABLE(Smi, to_445_impl);
    auto to_445 = &to_445_impl;
    USE(to_445);
    *to_445 = implicit_cast<TNode<Smi>>(t2476);
    // ../../third_party/v8/builtins/array-sort.tq:575:5
    {
      Label label__True_715_impl(this);
      Label* label__True_715 = &label__True_715_impl;
      USE(label__True_715);
      Label label__False_716_impl(this);
      Label* label__False_716 = &label__False_716_impl;
      USE(label__False_716);
      Label label_header_962_1416_impl(this, {dst_idx_444, src_idx_443});
      Label* label_header_962_1416 = &label_header_962_1416_impl;
      USE(label_header_962_1416);
      Goto(label_header_962_1416);
      BIND(label_header_962_1416);
      TNode<BoolT> t2477 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*src_idx_443).value()), implicit_cast<TNode<Smi>>((*to_445).value())));
      USE(implicit_cast<TNode<BoolT>>(t2477));
      Branch(implicit_cast<TNode<BoolT>>(t2477), label__True_715, label__False_716);
      if (label__True_715->is_used())
      {
        BIND(label__True_715);
        // ../../third_party/v8/builtins/array-sort.tq:575:26
        {
          // ../../third_party/v8/builtins/array-sort.tq:576:7
          TNode<Smi> t2478 = implicit_cast<TNode<Smi>>((*src_idx_443).value());
          USE(t2478);
          TNode<Smi> t2479 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2480 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*src_idx_443).value()), implicit_cast<TNode<Smi>>(t2479)));
          *src_idx_443 = implicit_cast<TNode<Smi>>(t2480);
          TNode<Object> t2481 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(p_srcElements), implicit_cast<TNode<Smi>>(t2478), label_Bailout_714));
          USE(implicit_cast<TNode<Object>>(t2481));
          TVARIABLE(Object, element_446_impl);
          auto element_446 = &element_446_impl;
          USE(element_446);
          *element_446 = implicit_cast<TNode<Object>>(t2481);
          // ../../third_party/v8/builtins/array-sort.tq:579:7
          TNode<Smi> t2482 = implicit_cast<TNode<Smi>>((*dst_idx_444).value());
          USE(t2482);
          TNode<Smi> t2483 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2484 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dst_idx_444).value()), implicit_cast<TNode<Smi>>(t2483)));
          *dst_idx_444 = implicit_cast<TNode<Smi>>(t2484);
          StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_tempArray), implicit_cast<TNode<Smi>>(t2482), implicit_cast<TNode<Object>>((*element_446).value()));
        }
        Goto(label_header_962_1416);
      }
      BIND(label__False_716);
    }
  }
}

TF_BUILTIN(CopyFromTempArray, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_dstElements = UncheckedCast<HeapObject>(Parameter(Descriptor::kDstElements));
  USE(p_dstElements);
  TNode<Smi> p_dstPos = UncheckedCast<Smi>(Parameter(Descriptor::kDstPos));
  USE(p_dstPos);
  TNode<FixedArray> p_tempArray = UncheckedCast<FixedArray>(Parameter(Descriptor::kTempArray));
  USE(p_tempArray);
  TNode<Smi> p_srcPos = UncheckedCast<Smi>(Parameter(Descriptor::kSrcPos));
  USE(p_srcPos);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../third_party/v8/builtins/array-sort.tq:585:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:586:5
    // ../../third_party/v8/builtins/array-sort.tq:587:5
    // ../../third_party/v8/builtins/array-sort.tq:588:5
    // ../../third_party/v8/builtins/array-sort.tq:589:5
    // ../../third_party/v8/builtins/array-sort.tq:591:5
    TNode<Code> t2485 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2485));
    TVARIABLE(Code, Store_447_impl);
    auto Store_447 = &Store_447_impl;
    USE(Store_447);
    *Store_447 = implicit_cast<TNode<Code>>(t2485);
    // ../../third_party/v8/builtins/array-sort.tq:593:5
    TVARIABLE(Smi, src_idx_448_impl);
    auto src_idx_448 = &src_idx_448_impl;
    USE(src_idx_448);
    *src_idx_448 = implicit_cast<TNode<Smi>>(p_srcPos);
    // ../../third_party/v8/builtins/array-sort.tq:594:5
    TVARIABLE(Smi, dst_idx_449_impl);
    auto dst_idx_449 = &dst_idx_449_impl;
    USE(dst_idx_449);
    *dst_idx_449 = implicit_cast<TNode<Smi>>(p_dstPos);
    // ../../third_party/v8/builtins/array-sort.tq:595:5
    TNode<Smi> t2486 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2486));
    TVARIABLE(Smi, to_450_impl);
    auto to_450 = &to_450_impl;
    USE(to_450);
    *to_450 = implicit_cast<TNode<Smi>>(t2486);
    // ../../third_party/v8/builtins/array-sort.tq:596:5
    {
      Label label_try_done_963_1417_impl(this);
      Label* label_try_done_963_1417 = &label_try_done_963_1417_impl;
      USE(label_try_done_963_1417);
      Label label_Bailout_717_impl(this);
      Label* label_Bailout_717 = &label_Bailout_717_impl;
      USE(label_Bailout_717);
      Label label_try_begin_964_1418_impl(this);
      Label* label_try_begin_964_1418 = &label_try_begin_964_1418_impl;
      USE(label_try_begin_964_1418);
      Goto(label_try_begin_964_1418);
      if (label_try_begin_964_1418->is_used())
      {
        BIND(label_try_begin_964_1418);
        // ../../third_party/v8/builtins/array-sort.tq:596:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:597:7
          {
            Label label__True_718_impl(this);
            Label* label__True_718 = &label__True_718_impl;
            USE(label__True_718);
            Label label__False_719_impl(this);
            Label* label__False_719 = &label__False_719_impl;
            USE(label__False_719);
            Label label_header_965_1419_impl(this, {dst_idx_449, src_idx_448});
            Label* label_header_965_1419 = &label_header_965_1419_impl;
            USE(label_header_965_1419);
            Goto(label_header_965_1419);
            BIND(label_header_965_1419);
            TNode<BoolT> t2487 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*src_idx_448).value()), implicit_cast<TNode<Smi>>((*to_450).value())));
            USE(implicit_cast<TNode<BoolT>>(t2487));
            Branch(implicit_cast<TNode<BoolT>>(t2487), label__True_718, label__False_719);
            if (label__True_718->is_used())
            {
              BIND(label__True_718);
              // ../../third_party/v8/builtins/array-sort.tq:597:28
              {
                // ../../third_party/v8/builtins/array-sort.tq:598:9
                TNode<Smi> t2488 = implicit_cast<TNode<Smi>>((*dst_idx_449).value());
                USE(t2488);
                TNode<Smi> t2489 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2490 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dst_idx_449).value()), implicit_cast<TNode<Smi>>(t2489)));
                *dst_idx_449 = implicit_cast<TNode<Smi>>(t2490);
                TNode<Smi> t2491 = implicit_cast<TNode<Smi>>((*src_idx_448).value());
                USE(t2491);
                TNode<Smi> t2492 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2493 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*src_idx_448).value()), implicit_cast<TNode<Smi>>(t2492)));
                *src_idx_448 = implicit_cast<TNode<Smi>>(t2493);
                TNode<Object> t2494 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_tempArray), implicit_cast<TNode<Smi>>(t2491)));
                CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_447).value()), implicit_cast<TNode<HeapObject>>(p_dstElements), implicit_cast<TNode<Smi>>(t2488), implicit_cast<TNode<Object>>(t2494), label_Bailout_717);
              }
              Goto(label_header_965_1419);
            }
            BIND(label__False_719);
          }
          // ../../third_party/v8/builtins/array-sort.tq:603:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_717->is_used())
      {
        BIND(label_Bailout_717);
        // ../../third_party/v8/builtins/array-sort.tq:605:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:606:7
          TNode<Smi> t2495 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2495));
          Return(implicit_cast<TNode<Smi>>(t2495));
        }
      }
    }
  }
}

TF_BUILTIN(CopyWithinSortArray, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_srcPos = UncheckedCast<Smi>(Parameter(Descriptor::kSrcPos));
  USE(p_srcPos);
  TNode<Smi> p_dstPos = UncheckedCast<Smi>(Parameter(Descriptor::kDstPos));
  USE(p_dstPos);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../third_party/v8/builtins/array-sort.tq:612:51
  {
    // ../../third_party/v8/builtins/array-sort.tq:613:5
    // ../../third_party/v8/builtins/array-sort.tq:614:5
    // ../../third_party/v8/builtins/array-sort.tq:615:5
    // ../../third_party/v8/builtins/array-sort.tq:616:5
    // ../../third_party/v8/builtins/array-sort.tq:618:5
    {
      Label label_try_done_966_1420_impl(this);
      Label* label_try_done_966_1420 = &label_try_done_966_1420_impl;
      USE(label_try_done_966_1420);
      Label label_Bailout_720_impl(this);
      Label* label_Bailout_720 = &label_Bailout_720_impl;
      USE(label_Bailout_720);
      Label label_try_begin_967_1421_impl(this);
      Label* label_try_begin_967_1421 = &label_try_begin_967_1421_impl;
      USE(label_try_begin_967_1421);
      Goto(label_try_begin_967_1421);
      if (label_try_begin_967_1421->is_used())
      {
        BIND(label_try_begin_967_1421);
        // ../../third_party/v8/builtins/array-sort.tq:618:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:619:7
          TNode<Code> t2496 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2496));
          TVARIABLE(Code, Load_451_impl);
          auto Load_451 = &Load_451_impl;
          USE(Load_451);
          *Load_451 = implicit_cast<TNode<Code>>(t2496);
          // ../../third_party/v8/builtins/array-sort.tq:620:7
          TNode<Code> t2497 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2497));
          TVARIABLE(Code, Store_452_impl);
          auto Store_452 = &Store_452_impl;
          USE(Store_452);
          *Store_452 = implicit_cast<TNode<Code>>(t2497);
          // ../../third_party/v8/builtins/array-sort.tq:622:7
          {
            Label label__True_721_impl(this);
            Label* label__True_721 = &label__True_721_impl;
            USE(label__True_721);
            Label label__False_722_impl(this);
            Label* label__False_722 = &label__False_722_impl;
            USE(label__False_722);
            Label label_if_done_label_968_1422_impl(this, {});
            Label* label_if_done_label_968_1422 = &label_if_done_label_968_1422_impl;
            USE(label_if_done_label_968_1422);
            TNode<BoolT> t2498 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_dstPos)));
            USE(implicit_cast<TNode<BoolT>>(t2498));
            Branch(implicit_cast<TNode<BoolT>>(t2498), label__True_721, label__False_722);
            if (label__True_721->is_used())
            {
              BIND(label__True_721);
              // ../../third_party/v8/builtins/array-sort.tq:622:28
              {
                // ../../third_party/v8/builtins/array-sort.tq:623:9
                TNode<Smi> t2499 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
                USE(implicit_cast<TNode<Smi>>(t2499));
                int31_t t2500 = 1;
                TNode<Smi> t2501 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2500)));
                TNode<Smi> t2502 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2499), implicit_cast<TNode<Smi>>(t2501)));
                USE(implicit_cast<TNode<Smi>>(t2502));
                TVARIABLE(Smi, src_idx_453_impl);
                auto src_idx_453 = &src_idx_453_impl;
                USE(src_idx_453);
                *src_idx_453 = implicit_cast<TNode<Smi>>(t2502);
                // ../../third_party/v8/builtins/array-sort.tq:624:9
                TNode<Smi> t2503 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(p_length)));
                USE(implicit_cast<TNode<Smi>>(t2503));
                int31_t t2504 = 1;
                TNode<Smi> t2505 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2504)));
                TNode<Smi> t2506 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2503), implicit_cast<TNode<Smi>>(t2505)));
                USE(implicit_cast<TNode<Smi>>(t2506));
                TVARIABLE(Smi, dst_idx_454_impl);
                auto dst_idx_454 = &dst_idx_454_impl;
                USE(dst_idx_454);
                *dst_idx_454 = implicit_cast<TNode<Smi>>(t2506);
                // ../../third_party/v8/builtins/array-sort.tq:625:9
                {
                  Label label__True_723_impl(this);
                  Label* label__True_723 = &label__True_723_impl;
                  USE(label__True_723);
                  Label label__False_724_impl(this);
                  Label* label__False_724 = &label__False_724_impl;
                  USE(label__False_724);
                  Label label_header_969_1423_impl(this, {dst_idx_454, src_idx_453});
                  Label* label_header_969_1423 = &label_header_969_1423_impl;
                  USE(label_header_969_1423);
                  Goto(label_header_969_1423);
                  BIND(label_header_969_1423);
                  TNode<BoolT> t2507 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*src_idx_453).value()), implicit_cast<TNode<Smi>>(p_srcPos)));
                  USE(implicit_cast<TNode<BoolT>>(t2507));
                  Branch(implicit_cast<TNode<BoolT>>(t2507), label__True_723, label__False_724);
                  if (label__True_723->is_used())
                  {
                    BIND(label__True_723);
                    // ../../third_party/v8/builtins/array-sort.tq:625:35
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:626:11
                      TNode<Smi> t2508 = implicit_cast<TNode<Smi>>((*src_idx_453).value());
                      USE(t2508);
                      TNode<Smi> t2509 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2510 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*src_idx_453).value()), implicit_cast<TNode<Smi>>(t2509)));
                      *src_idx_453 = implicit_cast<TNode<Smi>>(t2510);
                      TNode<Smi> t2511 = implicit_cast<TNode<Smi>>((*dst_idx_454).value());
                      USE(t2511);
                      TNode<Smi> t2512 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2513 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dst_idx_454).value()), implicit_cast<TNode<Smi>>(t2512)));
                      *dst_idx_454 = implicit_cast<TNode<Smi>>(t2513);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_451).value()), implicit_cast<TNode<Code>>((*Store_452).value()), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2508), implicit_cast<TNode<Smi>>(t2511), label_Bailout_720);
                    }
                    Goto(label_header_969_1423);
                  }
                  BIND(label__False_724);
                }
              }
              Goto(label_if_done_label_968_1422);
            }
            if (label__False_722->is_used())
            {
              BIND(label__False_722);
              // ../../third_party/v8/builtins/array-sort.tq:630:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:631:9
                TVARIABLE(Smi, src_idx_455_impl);
                auto src_idx_455 = &src_idx_455_impl;
                USE(src_idx_455);
                *src_idx_455 = implicit_cast<TNode<Smi>>(p_srcPos);
                // ../../third_party/v8/builtins/array-sort.tq:632:9
                TVARIABLE(Smi, dst_idx_456_impl);
                auto dst_idx_456 = &dst_idx_456_impl;
                USE(dst_idx_456);
                *dst_idx_456 = implicit_cast<TNode<Smi>>(p_dstPos);
                // ../../third_party/v8/builtins/array-sort.tq:633:9
                TNode<Smi> t2514 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
                USE(implicit_cast<TNode<Smi>>(t2514));
                TVARIABLE(Smi, to_457_impl);
                auto to_457 = &to_457_impl;
                USE(to_457);
                *to_457 = implicit_cast<TNode<Smi>>(t2514);
                // ../../third_party/v8/builtins/array-sort.tq:634:9
                {
                  Label label__True_725_impl(this);
                  Label* label__True_725 = &label__True_725_impl;
                  USE(label__True_725);
                  Label label__False_726_impl(this);
                  Label* label__False_726 = &label__False_726_impl;
                  USE(label__False_726);
                  Label label_header_970_1424_impl(this, {dst_idx_456, src_idx_455});
                  Label* label_header_970_1424 = &label_header_970_1424_impl;
                  USE(label_header_970_1424);
                  Goto(label_header_970_1424);
                  BIND(label_header_970_1424);
                  TNode<BoolT> t2515 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*src_idx_455).value()), implicit_cast<TNode<Smi>>((*to_457).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2515));
                  Branch(implicit_cast<TNode<BoolT>>(t2515), label__True_725, label__False_726);
                  if (label__True_725->is_used())
                  {
                    BIND(label__True_725);
                    // ../../third_party/v8/builtins/array-sort.tq:634:30
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:635:11
                      TNode<Smi> t2516 = implicit_cast<TNode<Smi>>((*src_idx_455).value());
                      USE(t2516);
                      TNode<Smi> t2517 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2518 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*src_idx_455).value()), implicit_cast<TNode<Smi>>(t2517)));
                      *src_idx_455 = implicit_cast<TNode<Smi>>(t2518);
                      TNode<Smi> t2519 = implicit_cast<TNode<Smi>>((*dst_idx_456).value());
                      USE(t2519);
                      TNode<Smi> t2520 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2521 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dst_idx_456).value()), implicit_cast<TNode<Smi>>(t2520)));
                      *dst_idx_456 = implicit_cast<TNode<Smi>>(t2521);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_451).value()), implicit_cast<TNode<Code>>((*Store_452).value()), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2516), implicit_cast<TNode<Smi>>(t2519), label_Bailout_720);
                    }
                    Goto(label_header_970_1424);
                  }
                  BIND(label__False_726);
                }
              }
              Goto(label_if_done_label_968_1422);
            }
            BIND(label_if_done_label_968_1422);
          }
          // ../../third_party/v8/builtins/array-sort.tq:640:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_720->is_used())
      {
        BIND(label_Bailout_720);
        // ../../third_party/v8/builtins/array-sort.tq:642:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:643:7
          TNode<Smi> t2522 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2522));
          Return(implicit_cast<TNode<Smi>>(t2522));
        }
      }
    }
  }
}

TF_BUILTIN(BinaryInsertionSort, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Smi> p_low = UncheckedCast<Smi>(Parameter(Descriptor::kLow));
  USE(p_low);
  TNode<Smi> p_startArg = UncheckedCast<Smi>(Parameter(Descriptor::kStartArg));
  USE(p_startArg);
  TNode<Smi> p_high = UncheckedCast<Smi>(Parameter(Descriptor::kHigh));
  USE(p_high);
  // ../../third_party/v8/builtins/array-sort.tq:659:23
  {
    // ../../third_party/v8/builtins/array-sort.tq:660:5
    // ../../third_party/v8/builtins/array-sort.tq:662:5
    {
      Label label_try_done_971_1425_impl(this);
      Label* label_try_done_971_1425 = &label_try_done_971_1425_impl;
      USE(label_try_done_971_1425);
      Label label_Bailout_727_impl(this);
      Label* label_Bailout_727 = &label_Bailout_727_impl;
      USE(label_Bailout_727);
      Label label_try_begin_972_1426_impl(this);
      Label* label_try_begin_972_1426 = &label_try_begin_972_1426_impl;
      USE(label_try_begin_972_1426);
      Goto(label_try_begin_972_1426);
      if (label_try_begin_972_1426->is_used())
      {
        BIND(label_try_begin_972_1426);
        // ../../third_party/v8/builtins/array-sort.tq:662:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:663:7
          TNode<HeapObject> t2523 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<HeapObject>>(t2523));
          TVARIABLE(HeapObject, elements_458_impl);
          auto elements_458 = &elements_458_impl;
          USE(elements_458);
          *elements_458 = implicit_cast<TNode<HeapObject>>(t2523);
          // ../../third_party/v8/builtins/array-sort.tq:665:7
          TNode<Code> t2524 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2524));
          TNode<Code> Load_973_impl;
          auto Load_973 = &Load_973_impl;
          USE(Load_973);
          *Load_973 = implicit_cast<TNode<Code>>(t2524);
          // ../../third_party/v8/builtins/array-sort.tq:666:7
          TNode<Code> t2525 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2525));
          TNode<Code> Store_974_impl;
          auto Store_974 = &Store_974_impl;
          USE(Store_974);
          *Store_974 = implicit_cast<TNode<Code>>(t2525);
          // ../../third_party/v8/builtins/array-sort.tq:668:7
          auto t2526 = [=]() {
            int31_t t2528 = 1;
            TNode<Smi> t2529 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2528)));
            TNode<Smi> t2530 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_startArg), implicit_cast<TNode<Smi>>(t2529)));
            USE(implicit_cast<TNode<Smi>>(t2530));
            return implicit_cast<TNode<Smi>>(t2530);
          };
          auto t2527 = [=]() {
            return implicit_cast<TNode<Smi>>(p_startArg);
          };
          TVARIABLE(Smi, t2531_975_impl);
          auto t2531_975 = &t2531_975_impl;
          USE(t2531_975);
          {
            Label label__True_728_impl(this);
            Label* label__True_728 = &label__True_728_impl;
            USE(label__True_728);
            Label label__False_729_impl(this);
            Label* label__False_729 = &label__False_729_impl;
            USE(label__False_729);
            Label label__done_976_1427_impl(this, {t2531_975});
            Label* label__done_976_1427 = &label__done_976_1427_impl;
            USE(label__done_976_1427);
            TNode<BoolT> t2532 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(p_low), implicit_cast<TNode<Smi>>(p_startArg)));
            USE(implicit_cast<TNode<BoolT>>(t2532));
            Branch(implicit_cast<TNode<BoolT>>(t2532), label__True_728, label__False_729);
            BIND(label__True_728);
                        *t2531_975 = implicit_cast<TNode<Smi>>(t2526());
            Goto(label__done_976_1427);
            BIND(label__False_729);
                        *t2531_975 = implicit_cast<TNode<Smi>>(t2527());
            Goto(label__done_976_1427);
            BIND(label__done_976_1427);
          }
          TVARIABLE(Smi, start_459_impl);
          auto start_459 = &start_459_impl;
          USE(start_459);
          *start_459 = implicit_cast<TNode<Smi>>((*t2531_975).value());
          // ../../third_party/v8/builtins/array-sort.tq:670:7
          Label label__True_730_impl(this);
          Label* label__True_730 = &label__True_730_impl;
          USE(label__True_730);
          Label label__False_731_impl(this);
          Label* label__False_731 = &label__False_731_impl;
          USE(label__False_731);
          Label label_header_977_1428_impl(this, {elements_458, start_459});
          Label* label_header_977_1428 = &label_header_977_1428_impl;
          USE(label_header_977_1428);
          Goto(label_header_977_1428);
          BIND(label_header_977_1428);
          Label label_action_978_1429_impl(this);
          Label* label_action_978_1429 = &label_action_978_1429_impl;
          USE(label_action_978_1429);
          TNode<BoolT> t2533 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*start_459).value()), implicit_cast<TNode<Smi>>(p_high)));
          USE(implicit_cast<TNode<BoolT>>(t2533));
          Branch(implicit_cast<TNode<BoolT>>(t2533), label__True_730, label__False_731);
          if (label__True_730->is_used())
          {
            BIND(label__True_730);
            // ../../third_party/v8/builtins/array-sort.tq:670:37
            {
              // ../../third_party/v8/builtins/array-sort.tq:672:9
              TVARIABLE(Smi, left_460_impl);
              auto left_460 = &left_460_impl;
              USE(left_460);
              *left_460 = implicit_cast<TNode<Smi>>(p_low);
              // ../../third_party/v8/builtins/array-sort.tq:673:9
              TVARIABLE(Smi, right_461_impl);
              auto right_461 = &right_461_impl;
              USE(right_461);
              *right_461 = implicit_cast<TNode<Smi>>((*start_459).value());
              // ../../third_party/v8/builtins/array-sort.tq:675:9
              TNode<Object> t2534 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_973)), implicit_cast<TNode<HeapObject>>((*elements_458).value()), implicit_cast<TNode<Smi>>((*right_461).value()), label_Bailout_727));
              USE(implicit_cast<TNode<Object>>(t2534));
              TNode<Object> pivot_979_impl;
              auto pivot_979 = &pivot_979_impl;
              USE(pivot_979);
              *pivot_979 = implicit_cast<TNode<Object>>(t2534);
              // ../../third_party/v8/builtins/array-sort.tq:682:9
              // ../../third_party/v8/builtins/array-sort.tq:685:9
              {
                Label label__True_732_impl(this);
                Label* label__True_732 = &label__True_732_impl;
                USE(label__True_732);
                Label label__False_733_impl(this);
                Label* label__False_733 = &label__False_733_impl;
                USE(label__False_733);
                Label label_header_980_1430_impl(this, {elements_458, left_460, right_461});
                Label* label_header_980_1430 = &label_header_980_1430_impl;
                USE(label_header_980_1430);
                Goto(label_header_980_1430);
                BIND(label_header_980_1430);
                TNode<BoolT> t2535 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*left_460).value()), implicit_cast<TNode<Smi>>((*right_461).value())));
                USE(implicit_cast<TNode<BoolT>>(t2535));
                Branch(implicit_cast<TNode<BoolT>>(t2535), label__True_732, label__False_733);
                if (label__True_732->is_used())
                {
                  BIND(label__True_732);
                  // ../../third_party/v8/builtins/array-sort.tq:685:30
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:686:11
                    TNode<Smi> t2536 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*right_461).value()), implicit_cast<TNode<Smi>>((*left_460).value())));
                    USE(implicit_cast<TNode<Smi>>(t2536));
                    int31_t t2537 = 1;
                    TNode<Smi> t2538 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t2536), implicit_cast<int31_t>(t2537)));
                    USE(implicit_cast<TNode<Smi>>(t2538));
                    TNode<Smi> t2539 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*left_460).value()), implicit_cast<TNode<Smi>>(t2538)));
                    USE(implicit_cast<TNode<Smi>>(t2539));
                    TNode<Smi> mid_981_impl;
                    auto mid_981 = &mid_981_impl;
                    USE(mid_981);
                    *mid_981 = implicit_cast<TNode<Smi>>(t2539);
                    // ../../third_party/v8/builtins/array-sort.tq:687:11
                    TNode<Object> t2540 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_973)), implicit_cast<TNode<HeapObject>>((*elements_458).value()), implicit_cast<TNode<Smi>>((*mid_981)), label_Bailout_727));
                    USE(implicit_cast<TNode<Object>>(t2540));
                    TNode<Object> mid_element_982_impl;
                    auto mid_element_982 = &mid_element_982_impl;
                    USE(mid_element_982);
                    *mid_element_982 = implicit_cast<TNode<Object>>(t2540);
                    // ../../third_party/v8/builtins/array-sort.tq:690:11
                    TNode<Number> t2541 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*pivot_979)), implicit_cast<TNode<Object>>((*mid_element_982)), label_Bailout_727));
                    USE(implicit_cast<TNode<Number>>(t2541));
                    TNode<Number> order_983_impl;
                    auto order_983 = &order_983_impl;
                    USE(order_983);
                    *order_983 = implicit_cast<TNode<Number>>(t2541);
                    // ../../third_party/v8/builtins/array-sort.tq:693:11
                    TNode<HeapObject> t2542 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                    USE(implicit_cast<TNode<HeapObject>>(t2542));
                    *elements_458 = implicit_cast<TNode<HeapObject>>(t2542);
                    // ../../third_party/v8/builtins/array-sort.tq:695:11
                    {
                      Label label__True_734_impl(this);
                      Label* label__True_734 = &label__True_734_impl;
                      USE(label__True_734);
                      Label label__False_735_impl(this);
                      Label* label__False_735 = &label__False_735_impl;
                      USE(label__False_735);
                      Label label_if_done_label_984_1431_impl(this, {left_460, right_461});
                      Label* label_if_done_label_984_1431 = &label_if_done_label_984_1431_impl;
                      USE(label_if_done_label_984_1431);
                      int31_t t2543 = 0;
                      TNode<Number> t2544 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2543)));
                      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_983)), implicit_cast<TNode<Number>>(t2544), label__True_734, label__False_735);
                      if (label__True_734->is_used())
                      {
                        BIND(label__True_734);
                        // ../../third_party/v8/builtins/array-sort.tq:695:26
                        {
                          // ../../third_party/v8/builtins/array-sort.tq:696:13
                          *right_461 = implicit_cast<TNode<Smi>>((*mid_981));
                        }
                        Goto(label_if_done_label_984_1431);
                      }
                      if (label__False_735->is_used())
                      {
                        BIND(label__False_735);
                        // ../../third_party/v8/builtins/array-sort.tq:697:18
                        {
                          // ../../third_party/v8/builtins/array-sort.tq:698:13
                          int31_t t2545 = 1;
                          TNode<Smi> t2546 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2545)));
                          TNode<Smi> t2547 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*mid_981)), implicit_cast<TNode<Smi>>(t2546)));
                          USE(implicit_cast<TNode<Smi>>(t2547));
                          *left_460 = implicit_cast<TNode<Smi>>(t2547);
                        }
                        Goto(label_if_done_label_984_1431);
                      }
                      BIND(label_if_done_label_984_1431);
                    }
                  }
                  Goto(label_header_980_1430);
                }
                BIND(label__False_733);
              }
              // ../../third_party/v8/builtins/array-sort.tq:701:9
              // ../../third_party/v8/builtins/array-sort.tq:711:9
              TVARIABLE(Smi, p_462_impl);
              auto p_462 = &p_462_impl;
              USE(p_462);
              *p_462 = implicit_cast<TNode<Smi>>((*start_459).value());
              Label label__True_736_impl(this);
              Label* label__True_736 = &label__True_736_impl;
              USE(label__True_736);
              Label label__False_737_impl(this);
              Label* label__False_737 = &label__False_737_impl;
              USE(label__False_737);
              Label label_header_985_1432_impl(this, {p_462});
              Label* label_header_985_1432 = &label_header_985_1432_impl;
              USE(label_header_985_1432);
              Goto(label_header_985_1432);
              BIND(label_header_985_1432);
              Label label_action_986_1433_impl(this);
              Label* label_action_986_1433 = &label_action_986_1433_impl;
              USE(label_action_986_1433);
              TNode<BoolT> t2548 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*p_462).value()), implicit_cast<TNode<Smi>>((*left_460).value())));
              USE(implicit_cast<TNode<BoolT>>(t2548));
              Branch(implicit_cast<TNode<BoolT>>(t2548), label__True_736, label__False_737);
              if (label__True_736->is_used())
              {
                BIND(label__True_736);
                // ../../third_party/v8/builtins/array-sort.tq:711:49
                {
                  // ../../third_party/v8/builtins/array-sort.tq:712:11
                  int31_t t2549 = 1;
                  TNode<Smi> t2550 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2549)));
                  TNode<Smi> t2551 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*p_462).value()), implicit_cast<TNode<Smi>>(t2550)));
                  USE(implicit_cast<TNode<Smi>>(t2551));
                  CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_973)), implicit_cast<TNode<Code>>((*Store_974)), implicit_cast<TNode<HeapObject>>((*elements_458).value()), implicit_cast<TNode<Smi>>(t2551), implicit_cast<TNode<Smi>>((*p_462).value()), label_Bailout_727);
                }
                Goto(label_action_986_1433);
              }
              {
                BIND(label_action_986_1433);
                TNode<Smi> t2552 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2553 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*p_462).value()), implicit_cast<TNode<Smi>>(t2552)));
                *p_462 = implicit_cast<TNode<Smi>>(t2553);
                Goto(label_header_985_1432);
              }
              BIND(label__False_737);
              // ../../third_party/v8/builtins/array-sort.tq:715:9
              CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_974)), implicit_cast<TNode<HeapObject>>((*elements_458).value()), implicit_cast<TNode<Smi>>((*left_460).value()), implicit_cast<TNode<Object>>((*pivot_979)), label_Bailout_727);
            }
            Goto(label_action_978_1429);
          }
          {
            BIND(label_action_978_1429);
            TNode<Smi> t2554 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t2555 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*start_459).value()), implicit_cast<TNode<Smi>>(t2554)));
            *start_459 = implicit_cast<TNode<Smi>>(t2555);
            Goto(label_header_977_1428);
          }
          BIND(label__False_731);
          // ../../third_party/v8/builtins/array-sort.tq:718:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_727->is_used())
      {
        BIND(label_Bailout_727);
        // ../../third_party/v8/builtins/array-sort.tq:720:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:721:7
          TNode<Smi> t2556 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2556));
          Return(implicit_cast<TNode<Smi>>(t2556));
        }
      }
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::CountAndMakeRun(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_lowArg, TNode<Smi> p_high, Label* label_Bailout_738) {
  TVARIABLE(Smi, _return_463_impl);
  auto _return_463 = &_return_463_impl;
  USE(_return_463);
  Label label_macro_end_1434_impl(this, {_return_463});
  Label* label_macro_end_1434 = &label_macro_end_1434_impl;
  USE(label_macro_end_1434);
  // ../../third_party/v8/builtins/array-sort.tq:744:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:745:5
    // ../../third_party/v8/builtins/array-sort.tq:747:5
    TNode<HeapObject> t2557 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2557));
    TVARIABLE(HeapObject, elements_464_impl);
    auto elements_464 = &elements_464_impl;
    USE(elements_464);
    *elements_464 = implicit_cast<TNode<HeapObject>>(t2557);
    // ../../third_party/v8/builtins/array-sort.tq:748:5
    TNode<Code> t2558 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2558));
    TNode<Code> Load_987_impl;
    auto Load_987 = &Load_987_impl;
    USE(Load_987);
    *Load_987 = implicit_cast<TNode<Code>>(t2558);
    // ../../third_party/v8/builtins/array-sort.tq:749:5
    TNode<Code> t2559 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2559));
    TNode<Code> Store_988_impl;
    auto Store_988 = &Store_988_impl;
    USE(Store_988);
    *Store_988 = implicit_cast<TNode<Code>>(t2559);
    // ../../third_party/v8/builtins/array-sort.tq:751:5
    int31_t t2560 = 1;
    TNode<Smi> t2561 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2560)));
    TNode<Smi> t2562 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>(t2561)));
    USE(implicit_cast<TNode<Smi>>(t2562));
    TVARIABLE(Smi, low_465_impl);
    auto low_465 = &low_465_impl;
    USE(low_465);
    *low_465 = implicit_cast<TNode<Smi>>(t2562);
    // ../../third_party/v8/builtins/array-sort.tq:752:5
    {
      Label label__True_739_impl(this);
      Label* label__True_739 = &label__True_739_impl;
      USE(label__True_739);
      Label label__False_740_impl(this, {});
      Label* label__False_740 = &label__False_740_impl;
      USE(label__False_740);
      TNode<BoolT> t2563 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*low_465).value()), implicit_cast<TNode<Smi>>(p_high)));
      USE(implicit_cast<TNode<BoolT>>(t2563));
      Branch(implicit_cast<TNode<BoolT>>(t2563), label__True_739, label__False_740);
      if (label__True_739->is_used())
      {
        BIND(label__True_739);
        // ../../third_party/v8/builtins/array-sort.tq:752:22
        int31_t t2564 = 1;
        TNode<Smi> t2565 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2564)));
        *_return_463 = implicit_cast<TNode<Smi>>(t2565);
        Goto(label_macro_end_1434);
      }
      BIND(label__False_740);
    }
    // ../../third_party/v8/builtins/array-sort.tq:754:5
    int31_t t2566 = 2;
    TVARIABLE(Smi, run_length_466_impl);
    auto run_length_466 = &run_length_466_impl;
    USE(run_length_466);
    TNode<Smi> t2567 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2566)));
    *run_length_466 = implicit_cast<TNode<Smi>>(t2567);
    // ../../third_party/v8/builtins/array-sort.tq:756:5
    TNode<Object> t2568 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_987)), implicit_cast<TNode<HeapObject>>((*elements_464).value()), implicit_cast<TNode<Smi>>((*low_465).value()), label_Bailout_738));
    USE(implicit_cast<TNode<Object>>(t2568));
    TNode<Object> element_low_989_impl;
    auto element_low_989 = &element_low_989_impl;
    USE(element_low_989);
    *element_low_989 = implicit_cast<TNode<Object>>(t2568);
    // ../../third_party/v8/builtins/array-sort.tq:758:5
    int31_t t2569 = 1;
    TNode<Smi> t2570 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2569)));
    TNode<Smi> t2571 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*low_465).value()), implicit_cast<TNode<Smi>>(t2570)));
    USE(implicit_cast<TNode<Smi>>(t2571));
    TNode<Object> t2572 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_987)), implicit_cast<TNode<HeapObject>>((*elements_464).value()), implicit_cast<TNode<Smi>>(t2571), label_Bailout_738));
    USE(implicit_cast<TNode<Object>>(t2572));
    TNode<Object> element_low_pred_990_impl;
    auto element_low_pred_990 = &element_low_pred_990_impl;
    USE(element_low_pred_990);
    *element_low_pred_990 = implicit_cast<TNode<Object>>(t2572);
    // ../../third_party/v8/builtins/array-sort.tq:760:5
    TNode<Number> t2573 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*element_low_989)), implicit_cast<TNode<Object>>((*element_low_pred_990)), label_Bailout_738));
    USE(implicit_cast<TNode<Number>>(t2573));
    TVARIABLE(Number, order_467_impl);
    auto order_467 = &order_467_impl;
    USE(order_467);
    *order_467 = implicit_cast<TNode<Number>>(t2573);
    // ../../third_party/v8/builtins/array-sort.tq:763:5
    TNode<HeapObject> t2574 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2574));
    *elements_464 = implicit_cast<TNode<HeapObject>>(t2574);
    // ../../third_party/v8/builtins/array-sort.tq:768:5
    auto t2575 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2576 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2577_991_impl);
    auto t2577_991 = &t2577_991_impl;
    USE(t2577_991);
    {
      Label label__True_741_impl(this);
      Label* label__True_741 = &label__True_741_impl;
      USE(label__True_741);
      Label label__False_742_impl(this);
      Label* label__False_742 = &label__False_742_impl;
      USE(label__False_742);
      Label label__done_992_1435_impl(this, {t2577_991});
      Label* label__done_992_1435 = &label__done_992_1435_impl;
      USE(label__done_992_1435);
      int31_t t2578 = 0;
      TNode<Number> t2579 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2578)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_467).value()), implicit_cast<TNode<Number>>(t2579), label__True_741, label__False_742);
      BIND(label__True_741);
            TNode<BoolT> t2580 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t2575())));
      *t2577_991 = implicit_cast<TNode<BoolT>>(t2580);
      Goto(label__done_992_1435);
      BIND(label__False_742);
            TNode<BoolT> t2581 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t2576())));
      *t2577_991 = implicit_cast<TNode<BoolT>>(t2581);
      Goto(label__done_992_1435);
      BIND(label__done_992_1435);
    }
    TNode<BoolT> is_descending_993_impl;
    auto is_descending_993 = &is_descending_993_impl;
    USE(is_descending_993);
    *is_descending_993 = implicit_cast<TNode<BoolT>>((*t2577_991).value());
    // ../../third_party/v8/builtins/array-sort.tq:770:5
    TVARIABLE(Object, previous_element_468_impl);
    auto previous_element_468 = &previous_element_468_impl;
    USE(previous_element_468);
    *previous_element_468 = implicit_cast<TNode<Object>>((*element_low_989));
    // ../../third_party/v8/builtins/array-sort.tq:771:5
    int31_t t2582 = 1;
    TNode<Smi> t2583 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2582)));
    TNode<Smi> t2584 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_465).value()), implicit_cast<TNode<Smi>>(t2583)));
    USE(implicit_cast<TNode<Smi>>(t2584));
    TVARIABLE(Smi, idx_469_impl);
    auto idx_469 = &idx_469_impl;
    USE(idx_469);
    *idx_469 = implicit_cast<TNode<Smi>>(t2584);
    Label label__True_743_impl(this);
    Label* label__True_743 = &label__True_743_impl;
    USE(label__True_743);
    Label label__False_744_impl(this);
    Label* label__False_744 = &label__False_744_impl;
    USE(label__False_744);
    Label label_header_994_1436_impl(this, {elements_464, idx_469, order_467, previous_element_468, run_length_466});
    Label* label_header_994_1436 = &label_header_994_1436_impl;
    USE(label_header_994_1436);
    Goto(label_header_994_1436);
    BIND(label_header_994_1436);
    Label label_action_995_1437_impl(this);
    Label* label_action_995_1437 = &label_action_995_1437_impl;
    USE(label_action_995_1437);
    TNode<BoolT> t2585 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*idx_469).value()), implicit_cast<TNode<Smi>>(p_high)));
    USE(implicit_cast<TNode<BoolT>>(t2585));
    Branch(implicit_cast<TNode<BoolT>>(t2585), label__True_743, label__False_744);
    if (label__True_743->is_used())
    {
      BIND(label__True_743);
      // ../../third_party/v8/builtins/array-sort.tq:771:53
      {
        // ../../third_party/v8/builtins/array-sort.tq:772:7
        TNode<Object> t2586 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_987)), implicit_cast<TNode<HeapObject>>((*elements_464).value()), implicit_cast<TNode<Smi>>((*idx_469).value()), label_Bailout_738));
        USE(implicit_cast<TNode<Object>>(t2586));
        TNode<Object> current_element_996_impl;
        auto current_element_996 = &current_element_996_impl;
        USE(current_element_996);
        *current_element_996 = implicit_cast<TNode<Object>>(t2586);
        // ../../third_party/v8/builtins/array-sort.tq:774:7
        TNode<Number> t2587 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*current_element_996)), implicit_cast<TNode<Object>>((*previous_element_468).value()), label_Bailout_738));
        USE(implicit_cast<TNode<Number>>(t2587));
        *order_467 = implicit_cast<TNode<Number>>(t2587);
        // ../../third_party/v8/builtins/array-sort.tq:777:7
        TNode<HeapObject> t2588 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
        USE(implicit_cast<TNode<HeapObject>>(t2588));
        *elements_464 = implicit_cast<TNode<HeapObject>>(t2588);
        // ../../third_party/v8/builtins/array-sort.tq:779:7
        {
          Label label__True_745_impl(this);
          Label* label__True_745 = &label__True_745_impl;
          USE(label__True_745);
          Label label__False_746_impl(this);
          Label* label__False_746 = &label__False_746_impl;
          USE(label__False_746);
          Label label_if_done_label_997_1438_impl(this, {});
          Label* label_if_done_label_997_1438 = &label_if_done_label_997_1438_impl;
          USE(label_if_done_label_997_1438);
          Branch(implicit_cast<TNode<BoolT>>((*is_descending_993)), label__True_745, label__False_746);
          if (label__True_745->is_used())
          {
            BIND(label__True_745);
            // ../../third_party/v8/builtins/array-sort.tq:779:26
            {
              // ../../third_party/v8/builtins/array-sort.tq:780:9
              {
                Label label__True_747_impl(this);
                Label* label__True_747 = &label__True_747_impl;
                USE(label__True_747);
                Label label__False_748_impl(this, {});
                Label* label__False_748 = &label__False_748_impl;
                USE(label__False_748);
                int31_t t2589 = 0;
                TNode<Number> t2590 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2589)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_467).value()), implicit_cast<TNode<Number>>(t2590), label__True_747, label__False_748);
                if (label__True_747->is_used())
                {
                  BIND(label__True_747);
                  // ../../third_party/v8/builtins/array-sort.tq:780:25
                  Goto(label__False_744);
                }
                BIND(label__False_748);
              }
            }
            Goto(label_if_done_label_997_1438);
          }
          if (label__False_746->is_used())
          {
            BIND(label__False_746);
            // ../../third_party/v8/builtins/array-sort.tq:781:14
            {
              // ../../third_party/v8/builtins/array-sort.tq:782:9
              {
                Label label__True_749_impl(this);
                Label* label__True_749 = &label__True_749_impl;
                USE(label__True_749);
                Label label__False_750_impl(this, {});
                Label* label__False_750 = &label__False_750_impl;
                USE(label__False_750);
                int31_t t2591 = 0;
                TNode<Number> t2592 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2591)));
                BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_467).value()), implicit_cast<TNode<Number>>(t2592), label__True_749, label__False_750);
                if (label__True_749->is_used())
                {
                  BIND(label__True_749);
                  // ../../third_party/v8/builtins/array-sort.tq:782:24
                  Goto(label__False_744);
                }
                BIND(label__False_750);
              }
            }
            Goto(label_if_done_label_997_1438);
          }
          BIND(label_if_done_label_997_1438);
        }
        // ../../third_party/v8/builtins/array-sort.tq:785:7
        *previous_element_468 = implicit_cast<TNode<Object>>((*current_element_996));
        // ../../third_party/v8/builtins/array-sort.tq:786:7
        TNode<Smi> t2593 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2594 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*run_length_466).value()), implicit_cast<TNode<Smi>>(t2593)));
        *run_length_466 = implicit_cast<TNode<Smi>>(t2594);
      }
      Goto(label_action_995_1437);
    }
    {
      BIND(label_action_995_1437);
      TNode<Smi> t2595 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2596 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*idx_469).value()), implicit_cast<TNode<Smi>>(t2595)));
      *idx_469 = implicit_cast<TNode<Smi>>(t2596);
      Goto(label_header_994_1436);
    }
    BIND(label__False_744);
    // ../../third_party/v8/builtins/array-sort.tq:789:5
    {
      Label label__True_751_impl(this);
      Label* label__True_751 = &label__True_751_impl;
      USE(label__True_751);
      Label label__False_752_impl(this, {});
      Label* label__False_752 = &label__False_752_impl;
      USE(label__False_752);
      Branch(implicit_cast<TNode<BoolT>>((*is_descending_993)), label__True_751, label__False_752);
      if (label__True_751->is_used())
      {
        BIND(label__True_751);
        // ../../third_party/v8/builtins/array-sort.tq:789:24
        {
          // ../../third_party/v8/builtins/array-sort.tq:790:7
          TNode<Smi> t2597 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>((*run_length_466).value())));
          USE(implicit_cast<TNode<Smi>>(t2597));
          ReverseRange(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_987)), implicit_cast<TNode<Code>>((*Store_988)), implicit_cast<TNode<HeapObject>>((*elements_464).value()), implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>(t2597), label_Bailout_738);
        }
        Goto(label__False_752);
      }
      BIND(label__False_752);
    }
    // ../../third_party/v8/builtins/array-sort.tq:796:5
    *_return_463 = implicit_cast<TNode<Smi>>((*run_length_466).value());
    Goto(label_macro_end_1434);
  }
  BIND(label_macro_end_1434);
  return implicit_cast<TNode<Smi>>((*_return_463).value());
}

void ArrayBuiltinsFromDSLAssembler::ReverseRange(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Code> p_Store, TNode<HeapObject> p_elements, TNode<Smi> p_from, TNode<Smi> p_to, Label* label_Bailout_753) {
  Label label_macro_end_1439_impl(this, {});
  Label* label_macro_end_1439 = &label_macro_end_1439_impl;
  USE(label_macro_end_1439);
  // ../../third_party/v8/builtins/array-sort.tq:802:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:803:5
    TVARIABLE(Smi, low_470_impl);
    auto low_470 = &low_470_impl;
    USE(low_470);
    *low_470 = implicit_cast<TNode<Smi>>(p_from);
    // ../../third_party/v8/builtins/array-sort.tq:804:5
    int31_t t2598 = 1;
    TNode<Smi> t2599 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2598)));
    TNode<Smi> t2600 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<Smi>>(t2599)));
    USE(implicit_cast<TNode<Smi>>(t2600));
    TVARIABLE(Smi, high_471_impl);
    auto high_471 = &high_471_impl;
    USE(high_471);
    *high_471 = implicit_cast<TNode<Smi>>(t2600);
    // ../../third_party/v8/builtins/array-sort.tq:806:5
    {
      Label label__True_754_impl(this);
      Label* label__True_754 = &label__True_754_impl;
      USE(label__True_754);
      Label label__False_755_impl(this);
      Label* label__False_755 = &label__False_755_impl;
      USE(label__False_755);
      Label label_header_998_1440_impl(this, {high_471, low_470});
      Label* label_header_998_1440 = &label_header_998_1440_impl;
      USE(label_header_998_1440);
      Goto(label_header_998_1440);
      BIND(label_header_998_1440);
      TNode<BoolT> t2601 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*low_470).value()), implicit_cast<TNode<Smi>>((*high_471).value())));
      USE(implicit_cast<TNode<BoolT>>(t2601));
      Branch(implicit_cast<TNode<BoolT>>(t2601), label__True_754, label__False_755);
      if (label__True_754->is_used())
      {
        BIND(label__True_754);
        // ../../third_party/v8/builtins/array-sort.tq:806:24
        {
          // ../../third_party/v8/builtins/array-sort.tq:807:7
          TNode<Object> t2602 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>((*low_470).value()), label_Bailout_753));
          USE(implicit_cast<TNode<Object>>(t2602));
          TNode<Object> element_low_999_impl;
          auto element_low_999 = &element_low_999_impl;
          USE(element_low_999);
          *element_low_999 = implicit_cast<TNode<Object>>(t2602);
          // ../../third_party/v8/builtins/array-sort.tq:809:7
          TNode<Object> t2603 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>((*high_471).value()), label_Bailout_753));
          USE(implicit_cast<TNode<Object>>(t2603));
          TNode<Object> element_high_1000_impl;
          auto element_high_1000 = &element_high_1000_impl;
          USE(element_high_1000);
          *element_high_1000 = implicit_cast<TNode<Object>>(t2603);
          // ../../third_party/v8/builtins/array-sort.tq:811:7
          TNode<Smi> t2604 = implicit_cast<TNode<Smi>>((*low_470).value());
          USE(t2604);
          TNode<Smi> t2605 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2606 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_470).value()), implicit_cast<TNode<Smi>>(t2605)));
          *low_470 = implicit_cast<TNode<Smi>>(t2606);
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2604), implicit_cast<TNode<Object>>((*element_high_1000)), label_Bailout_753);
          // ../../third_party/v8/builtins/array-sort.tq:813:7
          TNode<Smi> t2607 = implicit_cast<TNode<Smi>>((*high_471).value());
          USE(t2607);
          TNode<Smi> t2608 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2609 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*high_471).value()), implicit_cast<TNode<Smi>>(t2608)));
          *high_471 = implicit_cast<TNode<Smi>>(t2609);
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2607), implicit_cast<TNode<Object>>((*element_low_999)), label_Bailout_753);
        }
        Goto(label_header_998_1440);
      }
      BIND(label__False_755);
    }
  }
}

TF_BUILTIN(MergeAt, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Smi> p_i = UncheckedCast<Smi>(Parameter(Descriptor::kI));
  USE(p_i);
  // ../../third_party/v8/builtins/array-sort.tq:820:73
  {
    // ../../third_party/v8/builtins/array-sort.tq:821:5
    TNode<Smi> t2610 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2610));
    TNode<Smi> stack_size_1001_impl;
    auto stack_size_1001 = &stack_size_1001_impl;
    USE(stack_size_1001);
    *stack_size_1001 = implicit_cast<TNode<Smi>>(t2610);
    // ../../third_party/v8/builtins/array-sort.tq:825:5
    // ../../third_party/v8/builtins/array-sort.tq:826:5
    // ../../third_party/v8/builtins/array-sort.tq:827:5
    // ../../third_party/v8/builtins/array-sort.tq:829:5
    TNode<HeapObject> t2611 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2611));
    TNode<HeapObject> elements_1002_impl;
    auto elements_1002 = &elements_1002_impl;
    USE(elements_1002);
    *elements_1002 = implicit_cast<TNode<HeapObject>>(t2611);
    // ../../third_party/v8/builtins/array-sort.tq:830:5
    TNode<Code> t2612 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2612));
    TNode<Code> Load_1003_impl;
    auto Load_1003 = &Load_1003_impl;
    USE(Load_1003);
    *Load_1003 = implicit_cast<TNode<Code>>(t2612);
    // ../../third_party/v8/builtins/array-sort.tq:832:5
    TNode<Object> t2613 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t2614 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t2613)));
    USE(implicit_cast<TNode<FixedArray>>(t2614));
    TNode<FixedArray> pending_runs_1004_impl;
    auto pending_runs_1004 = &pending_runs_1004_impl;
    USE(pending_runs_1004);
    *pending_runs_1004 = implicit_cast<TNode<FixedArray>>(t2614);
    // ../../third_party/v8/builtins/array-sort.tq:834:5
    TNode<Smi> t2615 = UncheckedCast<Smi>(GetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_1004)), implicit_cast<TNode<Smi>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t2615));
    TVARIABLE(Smi, base_a_472_impl);
    auto base_a_472 = &base_a_472_impl;
    USE(base_a_472);
    *base_a_472 = implicit_cast<TNode<Smi>>(t2615);
    // ../../third_party/v8/builtins/array-sort.tq:835:5
    TNode<Smi> t2616 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1004)), implicit_cast<TNode<Smi>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t2616));
    TVARIABLE(Smi, length_a_473_impl);
    auto length_a_473 = &length_a_473_impl;
    USE(length_a_473);
    *length_a_473 = implicit_cast<TNode<Smi>>(t2616);
    // ../../third_party/v8/builtins/array-sort.tq:836:5
    int31_t t2617 = 1;
    TNode<Smi> t2618 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2617)));
    TNode<Smi> t2619 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2618)));
    USE(implicit_cast<TNode<Smi>>(t2619));
    TNode<Smi> t2620 = UncheckedCast<Smi>(GetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_1004)), implicit_cast<TNode<Smi>>(t2619)));
    USE(implicit_cast<TNode<Smi>>(t2620));
    TVARIABLE(Smi, base_b_474_impl);
    auto base_b_474 = &base_b_474_impl;
    USE(base_b_474);
    *base_b_474 = implicit_cast<TNode<Smi>>(t2620);
    // ../../third_party/v8/builtins/array-sort.tq:837:5
    int31_t t2621 = 1;
    TNode<Smi> t2622 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2621)));
    TNode<Smi> t2623 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2622)));
    USE(implicit_cast<TNode<Smi>>(t2623));
    TNode<Smi> t2624 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1004)), implicit_cast<TNode<Smi>>(t2623)));
    USE(implicit_cast<TNode<Smi>>(t2624));
    TVARIABLE(Smi, length_b_475_impl);
    auto length_b_475 = &length_b_475_impl;
    USE(length_b_475);
    *length_b_475 = implicit_cast<TNode<Smi>>(t2624);
    // ../../third_party/v8/builtins/array-sort.tq:838:5
    // ../../third_party/v8/builtins/array-sort.tq:839:5
    // ../../third_party/v8/builtins/array-sort.tq:844:5
    TNode<Smi> t2625 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*length_a_473).value()), implicit_cast<TNode<Smi>>((*length_b_475).value())));
    USE(implicit_cast<TNode<Smi>>(t2625));
    SetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1004)), implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2625));
    // ../../third_party/v8/builtins/array-sort.tq:845:5
    {
      Label label__True_756_impl(this);
      Label* label__True_756 = &label__True_756_impl;
      USE(label__True_756);
      Label label__False_757_impl(this, {});
      Label* label__False_757 = &label__False_757_impl;
      USE(label__False_757);
      int31_t t2626 = 3;
      TNode<Smi> t2627 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2626)));
      TNode<Smi> t2628 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*stack_size_1001)), implicit_cast<TNode<Smi>>(t2627)));
      USE(implicit_cast<TNode<Smi>>(t2628));
      TNode<BoolT> t2629 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2628)));
      USE(implicit_cast<TNode<BoolT>>(t2629));
      Branch(implicit_cast<TNode<BoolT>>(t2629), label__True_756, label__False_757);
      if (label__True_756->is_used())
      {
        BIND(label__True_756);
        // ../../third_party/v8/builtins/array-sort.tq:845:30
        {
          // ../../third_party/v8/builtins/array-sort.tq:846:7
          int31_t t2630 = 2;
          TNode<Smi> t2631 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2630)));
          TNode<Smi> t2632 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2631)));
          USE(implicit_cast<TNode<Smi>>(t2632));
          TNode<Smi> t2633 = UncheckedCast<Smi>(GetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_1004)), implicit_cast<TNode<Smi>>(t2632)));
          USE(implicit_cast<TNode<Smi>>(t2633));
          TNode<Smi> base_1005_impl;
          auto base_1005 = &base_1005_impl;
          USE(base_1005);
          *base_1005 = implicit_cast<TNode<Smi>>(t2633);
          // ../../third_party/v8/builtins/array-sort.tq:847:7
          int31_t t2634 = 2;
          TNode<Smi> t2635 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2634)));
          TNode<Smi> t2636 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2635)));
          USE(implicit_cast<TNode<Smi>>(t2636));
          TNode<Smi> t2637 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1004)), implicit_cast<TNode<Smi>>(t2636)));
          USE(implicit_cast<TNode<Smi>>(t2637));
          TNode<Smi> length_1006_impl;
          auto length_1006 = &length_1006_impl;
          USE(length_1006);
          *length_1006 = implicit_cast<TNode<Smi>>(t2637);
          // ../../third_party/v8/builtins/array-sort.tq:848:7
          int31_t t2638 = 1;
          TNode<Smi> t2639 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2638)));
          TNode<Smi> t2640 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2639)));
          USE(implicit_cast<TNode<Smi>>(t2640));
          SetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_1004)), implicit_cast<TNode<Smi>>(t2640), implicit_cast<TNode<Smi>>((*base_1005)));
          // ../../third_party/v8/builtins/array-sort.tq:849:7
          int31_t t2641 = 1;
          TNode<Smi> t2642 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2641)));
          TNode<Smi> t2643 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2642)));
          USE(implicit_cast<TNode<Smi>>(t2643));
          SetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1004)), implicit_cast<TNode<Smi>>(t2643), implicit_cast<TNode<Smi>>((*length_1006)));
        }
        Goto(label__False_757);
      }
      BIND(label__False_757);
    }
    // ../../third_party/v8/builtins/array-sort.tq:851:5
    int31_t t2644 = 1;
    TNode<Smi> t2645 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2644)));
    TNode<Smi> t2646 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*stack_size_1001)), implicit_cast<TNode<Smi>>(t2645)));
    USE(implicit_cast<TNode<Smi>>(t2646));
    SetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(t2646));
    // ../../third_party/v8/builtins/array-sort.tq:853:5
    {
      Label label_try_done_1007_1441_impl(this);
      Label* label_try_done_1007_1441 = &label_try_done_1007_1441_impl;
      USE(label_try_done_1007_1441);
      Label label_Bailout_758_impl(this);
      Label* label_Bailout_758 = &label_Bailout_758_impl;
      USE(label_Bailout_758);
      Label label_try_begin_1008_1442_impl(this);
      Label* label_try_begin_1008_1442 = &label_try_begin_1008_1442_impl;
      USE(label_try_begin_1008_1442);
      Goto(label_try_begin_1008_1442);
      if (label_try_begin_1008_1442->is_used())
      {
        BIND(label_try_begin_1008_1442);
        // ../../third_party/v8/builtins/array-sort.tq:853:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:856:7
          TNode<Object> t2647 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_1003)), implicit_cast<TNode<HeapObject>>((*elements_1002)), implicit_cast<TNode<Smi>>((*base_b_474).value()), label_Bailout_758));
          USE(implicit_cast<TNode<Object>>(t2647));
          TNode<Object> key_right_1009_impl;
          auto key_right_1009 = &key_right_1009_impl;
          USE(key_right_1009);
          *key_right_1009 = implicit_cast<TNode<Object>>(t2647);
          // ../../third_party/v8/builtins/array-sort.tq:859:7
          int31_t t2648 = 0;
          TNode<Smi> t2649 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2648)));
          TNode<Smi> t2650 = UncheckedCast<Smi>(CallGallopRight(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_1003)), implicit_cast<TNode<Object>>((*key_right_1009)), implicit_cast<TNode<Smi>>((*base_a_472).value()), implicit_cast<TNode<Smi>>((*length_a_473).value()), implicit_cast<TNode<Smi>>(t2649), implicit_cast<TNode<Oddball>>(False()), label_Bailout_758));
          USE(implicit_cast<TNode<Smi>>(t2650));
          TNode<Smi> k_1010_impl;
          auto k_1010 = &k_1010_impl;
          USE(k_1010);
          *k_1010 = implicit_cast<TNode<Smi>>(t2650);
          // ../../third_party/v8/builtins/array-sort.tq:862:7
          // ../../third_party/v8/builtins/array-sort.tq:864:7
          TNode<Smi> t2651 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*base_a_472).value()), implicit_cast<TNode<Smi>>((*k_1010))));
          USE(implicit_cast<TNode<Smi>>(t2651));
          *base_a_472 = implicit_cast<TNode<Smi>>(t2651);
          // ../../third_party/v8/builtins/array-sort.tq:865:7
          TNode<Smi> t2652 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_473).value()), implicit_cast<TNode<Smi>>((*k_1010))));
          USE(implicit_cast<TNode<Smi>>(t2652));
          *length_a_473 = implicit_cast<TNode<Smi>>(t2652);
          // ../../third_party/v8/builtins/array-sort.tq:866:7
          {
            Label label__True_759_impl(this);
            Label* label__True_759 = &label__True_759_impl;
            USE(label__True_759);
            Label label__False_760_impl(this, {});
            Label* label__False_760 = &label__False_760_impl;
            USE(label__False_760);
            int31_t t2653 = 0;
            TNode<Smi> t2654 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2653)));
            TNode<BoolT> t2655 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_473).value()), implicit_cast<TNode<Smi>>(t2654)));
            USE(implicit_cast<TNode<BoolT>>(t2655));
            Branch(implicit_cast<TNode<BoolT>>(t2655), label__True_759, label__False_760);
            if (label__True_759->is_used())
            {
              BIND(label__True_759);
              // ../../third_party/v8/builtins/array-sort.tq:866:26
              Return(implicit_cast<TNode<Smi>>(kSuccess()));
            }
            BIND(label__False_760);
          }
          // ../../third_party/v8/builtins/array-sort.tq:867:7
          // ../../third_party/v8/builtins/array-sort.tq:871:7
          TNode<Smi> t2656 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*base_a_472).value()), implicit_cast<TNode<Smi>>((*length_a_473).value())));
          USE(implicit_cast<TNode<Smi>>(t2656));
          int31_t t2657 = 1;
          TNode<Smi> t2658 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2657)));
          TNode<Smi> t2659 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2656), implicit_cast<TNode<Smi>>(t2658)));
          USE(implicit_cast<TNode<Smi>>(t2659));
          TNode<Object> t2660 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_1003)), implicit_cast<TNode<HeapObject>>((*elements_1002)), implicit_cast<TNode<Smi>>(t2659), label_Bailout_758));
          USE(implicit_cast<TNode<Object>>(t2660));
          TVARIABLE(Object, key_left_476_impl);
          auto key_left_476 = &key_left_476_impl;
          USE(key_left_476);
          *key_left_476 = implicit_cast<TNode<Object>>(t2660);
          // ../../third_party/v8/builtins/array-sort.tq:874:7
          int31_t t2661 = 1;
          TNode<Smi> t2662 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2661)));
          TNode<Smi> t2663 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_475).value()), implicit_cast<TNode<Smi>>(t2662)));
          USE(implicit_cast<TNode<Smi>>(t2663));
          TNode<Smi> t2664 = UncheckedCast<Smi>(CallGallopLeft(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_1003)), implicit_cast<TNode<Object>>((*key_left_476).value()), implicit_cast<TNode<Smi>>((*base_b_474).value()), implicit_cast<TNode<Smi>>((*length_b_475).value()), implicit_cast<TNode<Smi>>(t2663), implicit_cast<TNode<Oddball>>(False()), label_Bailout_758));
          USE(implicit_cast<TNode<Smi>>(t2664));
          *length_b_475 = implicit_cast<TNode<Smi>>(t2664);
          // ../../third_party/v8/builtins/array-sort.tq:877:7
          // ../../third_party/v8/builtins/array-sort.tq:878:7
          {
            Label label__True_761_impl(this);
            Label* label__True_761 = &label__True_761_impl;
            USE(label__True_761);
            Label label__False_762_impl(this, {});
            Label* label__False_762 = &label__False_762_impl;
            USE(label__False_762);
            int31_t t2665 = 0;
            TNode<Smi> t2666 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2665)));
            TNode<BoolT> t2667 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_475).value()), implicit_cast<TNode<Smi>>(t2666)));
            USE(implicit_cast<TNode<BoolT>>(t2667));
            Branch(implicit_cast<TNode<BoolT>>(t2667), label__True_761, label__False_762);
            if (label__True_761->is_used())
            {
              BIND(label__True_761);
              // ../../third_party/v8/builtins/array-sort.tq:878:26
              Return(implicit_cast<TNode<Smi>>(kSuccess()));
            }
            BIND(label__False_762);
          }
          // ../../third_party/v8/builtins/array-sort.tq:882:7
          {
            Label label__True_763_impl(this);
            Label* label__True_763 = &label__True_763_impl;
            USE(label__True_763);
            Label label__False_764_impl(this);
            Label* label__False_764 = &label__False_764_impl;
            USE(label__False_764);
            Label label_if_done_label_1011_1443_impl(this, {});
            Label* label_if_done_label_1011_1443 = &label_if_done_label_1011_1443_impl;
            USE(label_if_done_label_1011_1443);
            TNode<BoolT> t2668 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*length_a_473).value()), implicit_cast<TNode<Smi>>((*length_b_475).value())));
            USE(implicit_cast<TNode<BoolT>>(t2668));
            Branch(implicit_cast<TNode<BoolT>>(t2668), label__True_763, label__False_764);
            if (label__True_763->is_used())
            {
              BIND(label__True_763);
              // ../../third_party/v8/builtins/array-sort.tq:882:33
              {
                // ../../third_party/v8/builtins/array-sort.tq:883:9
                MergeLow(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*base_a_472).value()), implicit_cast<TNode<Smi>>((*length_a_473).value()), implicit_cast<TNode<Smi>>((*base_b_474).value()), implicit_cast<TNode<Smi>>((*length_b_475).value()), label_Bailout_758);
              }
              Goto(label_if_done_label_1011_1443);
            }
            if (label__False_764->is_used())
            {
              BIND(label__False_764);
              // ../../third_party/v8/builtins/array-sort.tq:885:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:886:9
                MergeHigh(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*base_a_472).value()), implicit_cast<TNode<Smi>>((*length_a_473).value()), implicit_cast<TNode<Smi>>((*base_b_474).value()), implicit_cast<TNode<Smi>>((*length_b_475).value()), label_Bailout_758);
              }
              Goto(label_if_done_label_1011_1443);
            }
            BIND(label_if_done_label_1011_1443);
          }
          // ../../third_party/v8/builtins/array-sort.tq:889:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_758->is_used())
      {
        BIND(label_Bailout_758);
        // ../../third_party/v8/builtins/array-sort.tq:891:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:892:7
          TNode<Smi> t2669 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2669));
          Return(implicit_cast<TNode<Smi>>(t2669));
        }
      }
    }
  }
}

TF_BUILTIN(GallopLeft, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Code> p_Load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_Load);
  TNode<Object> p_key = UncheckedCast<Object>(Parameter(Descriptor::kKey));
  USE(p_key);
  TNode<Smi> p_base = UncheckedCast<Smi>(Parameter(Descriptor::kBase));
  USE(p_base);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Smi> p_hint = UncheckedCast<Smi>(Parameter(Descriptor::kHint));
  USE(p_hint);
  TNode<Oddball> p_useTempArray = UncheckedCast<Oddball>(Parameter(Descriptor::kUseTempArray));
  USE(p_useTempArray);
  // ../../third_party/v8/builtins/array-sort.tq:915:70
  {
    // ../../third_party/v8/builtins/array-sort.tq:916:5
    // ../../third_party/v8/builtins/array-sort.tq:917:5
    // ../../third_party/v8/builtins/array-sort.tq:922:5
    auto t2670 = [=]() {
      TNode<FixedArray> t2672 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<FixedArray>>(t2672));
      return implicit_cast<TNode<FixedArray>>(t2672);
    };
    auto t2671 = [=]() {
      TNode<HeapObject> t2673 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<HeapObject>>(t2673));
      return implicit_cast<TNode<HeapObject>>(t2673);
    };
    TVARIABLE(HeapObject, t2674_1012_impl);
    auto t2674_1012 = &t2674_1012_impl;
    USE(t2674_1012);
    {
      Label label__True_765_impl(this);
      Label* label__True_765 = &label__True_765_impl;
      USE(label__True_765);
      Label label__False_766_impl(this);
      Label* label__False_766 = &label__False_766_impl;
      USE(label__False_766);
      Label label__done_1013_1444_impl(this, {t2674_1012});
      Label* label__done_1013_1444 = &label__done_1013_1444_impl;
      USE(label__done_1013_1444);
      TNode<BoolT> t2675 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t2675));
      Branch(implicit_cast<TNode<BoolT>>(t2675), label__True_765, label__False_766);
      BIND(label__True_765);
            *t2674_1012 = implicit_cast<TNode<HeapObject>>(t2670());
      Goto(label__done_1013_1444);
      BIND(label__False_766);
            *t2674_1012 = implicit_cast<TNode<HeapObject>>(t2671());
      Goto(label__done_1013_1444);
      BIND(label__done_1013_1444);
    }
    TVARIABLE(HeapObject, elements_477_impl);
    auto elements_477 = &elements_477_impl;
    USE(elements_477);
    *elements_477 = implicit_cast<TNode<HeapObject>>((*t2674_1012).value());
    // ../../third_party/v8/builtins/array-sort.tq:925:5
    int31_t t2676 = 0;
    TVARIABLE(Smi, last_ofs_478_impl);
    auto last_ofs_478 = &last_ofs_478_impl;
    USE(last_ofs_478);
    TNode<Smi> t2677 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2676)));
    *last_ofs_478 = implicit_cast<TNode<Smi>>(t2677);
    // ../../third_party/v8/builtins/array-sort.tq:926:5
    int31_t t2678 = 1;
    TVARIABLE(Smi, offset_479_impl);
    auto offset_479 = &offset_479_impl;
    USE(offset_479);
    TNode<Smi> t2679 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2678)));
    *offset_479 = implicit_cast<TNode<Smi>>(t2679);
    // ../../third_party/v8/builtins/array-sort.tq:928:5
    {
      Label label_try_done_1014_1445_impl(this);
      Label* label_try_done_1014_1445 = &label_try_done_1014_1445_impl;
      USE(label_try_done_1014_1445);
      Label label_Bailout_767_impl(this);
      Label* label_Bailout_767 = &label_Bailout_767_impl;
      USE(label_Bailout_767);
      Label label_try_begin_1015_1446_impl(this);
      Label* label_try_begin_1015_1446 = &label_try_begin_1015_1446_impl;
      USE(label_try_begin_1015_1446);
      Goto(label_try_begin_1015_1446);
      if (label_try_begin_1015_1446->is_used())
      {
        BIND(label_try_begin_1015_1446);
        // ../../third_party/v8/builtins/array-sort.tq:928:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:929:7
          TNode<Smi> t2680 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
          USE(implicit_cast<TNode<Smi>>(t2680));
          TNode<Object> t2681 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>((*elements_477).value()), implicit_cast<TNode<Smi>>(t2680), label_Bailout_767));
          USE(implicit_cast<TNode<Object>>(t2681));
          TNode<Object> base_hint_element_1016_impl;
          auto base_hint_element_1016 = &base_hint_element_1016_impl;
          USE(base_hint_element_1016);
          *base_hint_element_1016 = implicit_cast<TNode<Object>>(t2681);
          // ../../third_party/v8/builtins/array-sort.tq:932:7
          TNode<Number> t2682 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*base_hint_element_1016)), implicit_cast<TNode<Object>>(p_key), label_Bailout_767));
          USE(implicit_cast<TNode<Number>>(t2682));
          TVARIABLE(Number, order_480_impl);
          auto order_480 = &order_480_impl;
          USE(order_480);
          *order_480 = implicit_cast<TNode<Number>>(t2682);
          // ../../third_party/v8/builtins/array-sort.tq:935:7
          {
            Label label__True_768_impl(this);
            Label* label__True_768 = &label__True_768_impl;
            USE(label__True_768);
            Label label__False_769_impl(this, {elements_477});
            Label* label__False_769 = &label__False_769_impl;
            USE(label__False_769);
            TNode<BoolT> t2683 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
            USE(implicit_cast<TNode<BoolT>>(t2683));
            Branch(implicit_cast<TNode<BoolT>>(t2683), label__True_768, label__False_769);
            if (label__True_768->is_used())
            {
              BIND(label__True_768);
              // ../../third_party/v8/builtins/array-sort.tq:935:34
              {
                // ../../third_party/v8/builtins/array-sort.tq:936:9
                TNode<HeapObject> t2684 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                USE(implicit_cast<TNode<HeapObject>>(t2684));
                *elements_477 = implicit_cast<TNode<HeapObject>>(t2684);
              }
              Goto(label__False_769);
            }
            BIND(label__False_769);
          }
          // ../../third_party/v8/builtins/array-sort.tq:939:7
          {
            Label label__True_770_impl(this);
            Label* label__True_770 = &label__True_770_impl;
            USE(label__True_770);
            Label label__False_771_impl(this);
            Label* label__False_771 = &label__False_771_impl;
            USE(label__False_771);
            Label label_if_done_label_1017_1447_impl(this, {elements_477, last_ofs_478, offset_479, order_480});
            Label* label_if_done_label_1017_1447 = &label_if_done_label_1017_1447_impl;
            USE(label_if_done_label_1017_1447);
            int31_t t2685 = 0;
            TNode<Number> t2686 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2685)));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_480).value()), implicit_cast<TNode<Number>>(t2686), label__True_770, label__False_771);
            if (label__True_770->is_used())
            {
              BIND(label__True_770);
              // ../../third_party/v8/builtins/array-sort.tq:939:22
              {
                // ../../third_party/v8/builtins/array-sort.tq:944:9
                TNode<Smi> t2687 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2687));
                TVARIABLE(Smi, max_ofs_481_impl);
                auto max_ofs_481 = &max_ofs_481_impl;
                USE(max_ofs_481);
                *max_ofs_481 = implicit_cast<TNode<Smi>>(t2687);
                // ../../third_party/v8/builtins/array-sort.tq:945:9
                {
                  Label label__True_772_impl(this);
                  Label* label__True_772 = &label__True_772_impl;
                  USE(label__True_772);
                  Label label__False_773_impl(this);
                  Label* label__False_773 = &label__False_773_impl;
                  USE(label__False_773);
                  Label label_header_1018_1448_impl(this, {elements_477, last_ofs_478, offset_479, order_480});
                  Label* label_header_1018_1448 = &label_header_1018_1448_impl;
                  USE(label_header_1018_1448);
                  Goto(label_header_1018_1448);
                  BIND(label_header_1018_1448);
                  TNode<BoolT> t2688 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<TNode<Smi>>((*max_ofs_481).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2688));
                  Branch(implicit_cast<TNode<BoolT>>(t2688), label__True_772, label__False_773);
                  if (label__True_772->is_used())
                  {
                    BIND(label__True_772);
                    // ../../third_party/v8/builtins/array-sort.tq:945:34
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:946:11
                      TNode<Smi> t2689 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t2689));
                      TNode<Smi> t2690 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2689), implicit_cast<TNode<Smi>>((*offset_479).value())));
                      USE(implicit_cast<TNode<Smi>>(t2690));
                      TNode<Object> t2691 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>((*elements_477).value()), implicit_cast<TNode<Smi>>(t2690), label_Bailout_767));
                      USE(implicit_cast<TNode<Object>>(t2691));
                      TNode<Object> offset_element_1019_impl;
                      auto offset_element_1019 = &offset_element_1019_impl;
                      USE(offset_element_1019);
                      *offset_element_1019 = implicit_cast<TNode<Object>>(t2691);
                      // ../../third_party/v8/builtins/array-sort.tq:949:11
                      TNode<Number> t2692 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*offset_element_1019)), implicit_cast<TNode<Object>>(p_key), label_Bailout_767));
                      USE(implicit_cast<TNode<Number>>(t2692));
                      *order_480 = implicit_cast<TNode<Number>>(t2692);
                      // ../../third_party/v8/builtins/array-sort.tq:951:11
                      {
                        Label label__True_774_impl(this);
                        Label* label__True_774 = &label__True_774_impl;
                        USE(label__True_774);
                        Label label__False_775_impl(this, {elements_477});
                        Label* label__False_775 = &label__False_775_impl;
                        USE(label__False_775);
                        TNode<BoolT> t2693 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                        USE(implicit_cast<TNode<BoolT>>(t2693));
                        Branch(implicit_cast<TNode<BoolT>>(t2693), label__True_774, label__False_775);
                        if (label__True_774->is_used())
                        {
                          BIND(label__True_774);
                          // ../../third_party/v8/builtins/array-sort.tq:951:38
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:952:13
                            TNode<HeapObject> t2694 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                            USE(implicit_cast<TNode<HeapObject>>(t2694));
                            *elements_477 = implicit_cast<TNode<HeapObject>>(t2694);
                          }
                          Goto(label__False_775);
                        }
                        BIND(label__False_775);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:956:11
                      {
                        Label label__True_776_impl(this);
                        Label* label__True_776 = &label__True_776_impl;
                        USE(label__True_776);
                        Label label__False_777_impl(this, {});
                        Label* label__False_777 = &label__False_777_impl;
                        USE(label__False_777);
                        int31_t t2695 = 0;
                        TNode<Number> t2696 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2695)));
                        BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_480).value()), implicit_cast<TNode<Number>>(t2696), label__True_776, label__False_777);
                        if (label__True_776->is_used())
                        {
                          BIND(label__True_776);
                          // ../../third_party/v8/builtins/array-sort.tq:956:27
                          Goto(label__False_773);
                        }
                        BIND(label__False_777);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:958:11
                      *last_ofs_478 = implicit_cast<TNode<Smi>>((*offset_479).value());
                      // ../../third_party/v8/builtins/array-sort.tq:959:11
                      int31_t t2697 = 1;
                      TNode<Smi> t2698 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<int31_t>(t2697)));
                      USE(implicit_cast<TNode<Smi>>(t2698));
                      int31_t t2699 = 1;
                      TNode<Smi> t2700 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2699)));
                      TNode<Smi> t2701 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2698), implicit_cast<TNode<Smi>>(t2700)));
                      USE(implicit_cast<TNode<Smi>>(t2701));
                      *offset_479 = implicit_cast<TNode<Smi>>(t2701);
                      // ../../third_party/v8/builtins/array-sort.tq:962:11
                      {
                        Label label__True_778_impl(this);
                        Label* label__True_778 = &label__True_778_impl;
                        USE(label__True_778);
                        Label label__False_779_impl(this, {offset_479});
                        Label* label__False_779 = &label__False_779_impl;
                        USE(label__False_779);
                        int31_t t2702 = 0;
                        TNode<Smi> t2703 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2702)));
                        TNode<BoolT> t2704 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<TNode<Smi>>(t2703)));
                        USE(implicit_cast<TNode<BoolT>>(t2704));
                        Branch(implicit_cast<TNode<BoolT>>(t2704), label__True_778, label__False_779);
                        if (label__True_778->is_used())
                        {
                          BIND(label__True_778);
                          // ../../third_party/v8/builtins/array-sort.tq:962:28
                          *offset_479 = implicit_cast<TNode<Smi>>((*max_ofs_481).value());
                          Goto(label__False_779);
                        }
                        BIND(label__False_779);
                      }
                    }
                    Goto(label_header_1018_1448);
                  }
                  BIND(label__False_773);
                }
                // ../../third_party/v8/builtins/array-sort.tq:965:9
                {
                  Label label__True_780_impl(this);
                  Label* label__True_780 = &label__True_780_impl;
                  USE(label__True_780);
                  Label label__False_781_impl(this, {offset_479});
                  Label* label__False_781 = &label__False_781_impl;
                  USE(label__False_781);
                  TNode<BoolT> t2705 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<TNode<Smi>>((*max_ofs_481).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2705));
                  Branch(implicit_cast<TNode<BoolT>>(t2705), label__True_780, label__False_781);
                  if (label__True_780->is_used())
                  {
                    BIND(label__True_780);
                    // ../../third_party/v8/builtins/array-sort.tq:965:31
                    *offset_479 = implicit_cast<TNode<Smi>>((*max_ofs_481).value());
                    Goto(label__False_781);
                  }
                  BIND(label__False_781);
                }
                // ../../third_party/v8/builtins/array-sort.tq:968:9
                TNode<Smi> t2706 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_478).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2706));
                *last_ofs_478 = implicit_cast<TNode<Smi>>(t2706);
                // ../../third_party/v8/builtins/array-sort.tq:969:9
                TNode<Smi> t2707 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2707));
                *offset_479 = implicit_cast<TNode<Smi>>(t2707);
              }
              Goto(label_if_done_label_1017_1447);
            }
            if (label__False_771->is_used())
            {
              BIND(label__False_771);
              // ../../third_party/v8/builtins/array-sort.tq:970:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:973:9
                // ../../third_party/v8/builtins/array-sort.tq:976:9
                int31_t t2708 = 1;
                TNode<Smi> t2709 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2708)));
                TNode<Smi> t2710 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>(t2709)));
                USE(implicit_cast<TNode<Smi>>(t2710));
                TVARIABLE(Smi, max_ofs_482_impl);
                auto max_ofs_482 = &max_ofs_482_impl;
                USE(max_ofs_482);
                *max_ofs_482 = implicit_cast<TNode<Smi>>(t2710);
                // ../../third_party/v8/builtins/array-sort.tq:977:9
                {
                  Label label__True_782_impl(this);
                  Label* label__True_782 = &label__True_782_impl;
                  USE(label__True_782);
                  Label label__False_783_impl(this);
                  Label* label__False_783 = &label__False_783_impl;
                  USE(label__False_783);
                  Label label_header_1020_1449_impl(this, {elements_477, last_ofs_478, offset_479, order_480});
                  Label* label_header_1020_1449 = &label_header_1020_1449_impl;
                  USE(label_header_1020_1449);
                  Goto(label_header_1020_1449);
                  BIND(label_header_1020_1449);
                  TNode<BoolT> t2711 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<TNode<Smi>>((*max_ofs_482).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2711));
                  Branch(implicit_cast<TNode<BoolT>>(t2711), label__True_782, label__False_783);
                  if (label__True_782->is_used())
                  {
                    BIND(label__True_782);
                    // ../../third_party/v8/builtins/array-sort.tq:977:34
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:978:11
                      TNode<Smi> t2712 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t2712));
                      TNode<Smi> t2713 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2712), implicit_cast<TNode<Smi>>((*offset_479).value())));
                      USE(implicit_cast<TNode<Smi>>(t2713));
                      TNode<Object> t2714 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>((*elements_477).value()), implicit_cast<TNode<Smi>>(t2713), label_Bailout_767));
                      USE(implicit_cast<TNode<Object>>(t2714));
                      TNode<Object> offset_element_1021_impl;
                      auto offset_element_1021 = &offset_element_1021_impl;
                      USE(offset_element_1021);
                      *offset_element_1021 = implicit_cast<TNode<Object>>(t2714);
                      // ../../third_party/v8/builtins/array-sort.tq:981:11
                      TNode<Number> t2715 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*offset_element_1021)), implicit_cast<TNode<Object>>(p_key), label_Bailout_767));
                      USE(implicit_cast<TNode<Number>>(t2715));
                      *order_480 = implicit_cast<TNode<Number>>(t2715);
                      // ../../third_party/v8/builtins/array-sort.tq:983:11
                      {
                        Label label__True_784_impl(this);
                        Label* label__True_784 = &label__True_784_impl;
                        USE(label__True_784);
                        Label label__False_785_impl(this, {elements_477});
                        Label* label__False_785 = &label__False_785_impl;
                        USE(label__False_785);
                        TNode<BoolT> t2716 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                        USE(implicit_cast<TNode<BoolT>>(t2716));
                        Branch(implicit_cast<TNode<BoolT>>(t2716), label__True_784, label__False_785);
                        if (label__True_784->is_used())
                        {
                          BIND(label__True_784);
                          // ../../third_party/v8/builtins/array-sort.tq:983:38
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:984:13
                            TNode<HeapObject> t2717 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                            USE(implicit_cast<TNode<HeapObject>>(t2717));
                            *elements_477 = implicit_cast<TNode<HeapObject>>(t2717);
                          }
                          Goto(label__False_785);
                        }
                        BIND(label__False_785);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:987:11
                      {
                        Label label__True_786_impl(this);
                        Label* label__True_786 = &label__True_786_impl;
                        USE(label__True_786);
                        Label label__False_787_impl(this, {});
                        Label* label__False_787 = &label__False_787_impl;
                        USE(label__False_787);
                        int31_t t2718 = 0;
                        TNode<Number> t2719 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2718)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_480).value()), implicit_cast<TNode<Number>>(t2719), label__True_786, label__False_787);
                        if (label__True_786->is_used())
                        {
                          BIND(label__True_786);
                          // ../../third_party/v8/builtins/array-sort.tq:987:26
                          Goto(label__False_783);
                        }
                        BIND(label__False_787);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:989:11
                      *last_ofs_478 = implicit_cast<TNode<Smi>>((*offset_479).value());
                      // ../../third_party/v8/builtins/array-sort.tq:990:11
                      int31_t t2720 = 1;
                      TNode<Smi> t2721 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<int31_t>(t2720)));
                      USE(implicit_cast<TNode<Smi>>(t2721));
                      int31_t t2722 = 1;
                      TNode<Smi> t2723 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2722)));
                      TNode<Smi> t2724 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2721), implicit_cast<TNode<Smi>>(t2723)));
                      USE(implicit_cast<TNode<Smi>>(t2724));
                      *offset_479 = implicit_cast<TNode<Smi>>(t2724);
                      // ../../third_party/v8/builtins/array-sort.tq:993:11
                      {
                        Label label__True_788_impl(this);
                        Label* label__True_788 = &label__True_788_impl;
                        USE(label__True_788);
                        Label label__False_789_impl(this, {offset_479});
                        Label* label__False_789 = &label__False_789_impl;
                        USE(label__False_789);
                        int31_t t2725 = 0;
                        TNode<Smi> t2726 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2725)));
                        TNode<BoolT> t2727 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<TNode<Smi>>(t2726)));
                        USE(implicit_cast<TNode<BoolT>>(t2727));
                        Branch(implicit_cast<TNode<BoolT>>(t2727), label__True_788, label__False_789);
                        if (label__True_788->is_used())
                        {
                          BIND(label__True_788);
                          // ../../third_party/v8/builtins/array-sort.tq:993:28
                          *offset_479 = implicit_cast<TNode<Smi>>((*max_ofs_482).value());
                          Goto(label__False_789);
                        }
                        BIND(label__False_789);
                      }
                    }
                    Goto(label_header_1020_1449);
                  }
                  BIND(label__False_783);
                }
                // ../../third_party/v8/builtins/array-sort.tq:996:9
                {
                  Label label__True_790_impl(this);
                  Label* label__True_790 = &label__True_790_impl;
                  USE(label__True_790);
                  Label label__False_791_impl(this, {offset_479});
                  Label* label__False_791 = &label__False_791_impl;
                  USE(label__False_791);
                  TNode<BoolT> t2728 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<TNode<Smi>>((*max_ofs_482).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2728));
                  Branch(implicit_cast<TNode<BoolT>>(t2728), label__True_790, label__False_791);
                  if (label__True_790->is_used())
                  {
                    BIND(label__True_790);
                    // ../../third_party/v8/builtins/array-sort.tq:996:31
                    *offset_479 = implicit_cast<TNode<Smi>>((*max_ofs_482).value());
                    Goto(label__False_791);
                  }
                  BIND(label__False_791);
                }
                // ../../third_party/v8/builtins/array-sort.tq:999:9
                TNode<Smi> tmp_1022_impl;
                auto tmp_1022 = &tmp_1022_impl;
                USE(tmp_1022);
                *tmp_1022 = implicit_cast<TNode<Smi>>((*last_ofs_478).value());
                // ../../third_party/v8/builtins/array-sort.tq:1000:9
                TNode<Smi> t2729 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*offset_479).value())));
                USE(implicit_cast<TNode<Smi>>(t2729));
                *last_ofs_478 = implicit_cast<TNode<Smi>>(t2729);
                // ../../third_party/v8/builtins/array-sort.tq:1001:9
                TNode<Smi> t2730 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*tmp_1022))));
                USE(implicit_cast<TNode<Smi>>(t2730));
                *offset_479 = implicit_cast<TNode<Smi>>(t2730);
              }
              Goto(label_if_done_label_1017_1447);
            }
            BIND(label_if_done_label_1017_1447);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1004:7
          // ../../third_party/v8/builtins/array-sort.tq:1010:7
          TNode<Smi> t2731 = implicit_cast<TNode<Smi>>((*last_ofs_478).value());
          USE(t2731);
          TNode<Smi> t2732 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2733 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_478).value()), implicit_cast<TNode<Smi>>(t2732)));
          *last_ofs_478 = implicit_cast<TNode<Smi>>(t2733);
          // ../../third_party/v8/builtins/array-sort.tq:1011:7
          {
            Label label__True_792_impl(this);
            Label* label__True_792 = &label__True_792_impl;
            USE(label__True_792);
            Label label__False_793_impl(this);
            Label* label__False_793 = &label__False_793_impl;
            USE(label__False_793);
            Label label_header_1023_1450_impl(this, {elements_477, last_ofs_478, offset_479, order_480});
            Label* label_header_1023_1450 = &label_header_1023_1450_impl;
            USE(label_header_1023_1450);
            Goto(label_header_1023_1450);
            BIND(label_header_1023_1450);
            TNode<BoolT> t2734 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*last_ofs_478).value()), implicit_cast<TNode<Smi>>((*offset_479).value())));
            USE(implicit_cast<TNode<BoolT>>(t2734));
            Branch(implicit_cast<TNode<BoolT>>(t2734), label__True_792, label__False_793);
            if (label__True_792->is_used())
            {
              BIND(label__True_792);
              // ../../third_party/v8/builtins/array-sort.tq:1011:33
              {
                // ../../third_party/v8/builtins/array-sort.tq:1012:9
                TNode<Smi> t2735 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*offset_479).value()), implicit_cast<TNode<Smi>>((*last_ofs_478).value())));
                USE(implicit_cast<TNode<Smi>>(t2735));
                int31_t t2736 = 1;
                TNode<Smi> t2737 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t2735), implicit_cast<int31_t>(t2736)));
                USE(implicit_cast<TNode<Smi>>(t2737));
                TNode<Smi> t2738 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_478).value()), implicit_cast<TNode<Smi>>(t2737)));
                USE(implicit_cast<TNode<Smi>>(t2738));
                TNode<Smi> m_1024_impl;
                auto m_1024 = &m_1024_impl;
                USE(m_1024);
                *m_1024 = implicit_cast<TNode<Smi>>(t2738);
                // ../../third_party/v8/builtins/array-sort.tq:1014:9
                TNode<Smi> t2739 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>((*m_1024))));
                USE(implicit_cast<TNode<Smi>>(t2739));
                TNode<Object> t2740 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>((*elements_477).value()), implicit_cast<TNode<Smi>>(t2739), label_Bailout_767));
                USE(implicit_cast<TNode<Object>>(t2740));
                TNode<Object> base_m_element_1025_impl;
                auto base_m_element_1025 = &base_m_element_1025_impl;
                USE(base_m_element_1025);
                *base_m_element_1025 = implicit_cast<TNode<Object>>(t2740);
                // ../../third_party/v8/builtins/array-sort.tq:1017:9
                TNode<Number> t2741 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*base_m_element_1025)), implicit_cast<TNode<Object>>(p_key), label_Bailout_767));
                USE(implicit_cast<TNode<Number>>(t2741));
                *order_480 = implicit_cast<TNode<Number>>(t2741);
                // ../../third_party/v8/builtins/array-sort.tq:1019:9
                {
                  Label label__True_794_impl(this);
                  Label* label__True_794 = &label__True_794_impl;
                  USE(label__True_794);
                  Label label__False_795_impl(this, {elements_477});
                  Label* label__False_795 = &label__False_795_impl;
                  USE(label__False_795);
                  TNode<BoolT> t2742 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                  USE(implicit_cast<TNode<BoolT>>(t2742));
                  Branch(implicit_cast<TNode<BoolT>>(t2742), label__True_794, label__False_795);
                  if (label__True_794->is_used())
                  {
                    BIND(label__True_794);
                    // ../../third_party/v8/builtins/array-sort.tq:1019:36
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1020:11
                      TNode<HeapObject> t2743 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2743));
                      *elements_477 = implicit_cast<TNode<HeapObject>>(t2743);
                    }
                    Goto(label__False_795);
                  }
                  BIND(label__False_795);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1023:9
                {
                  Label label__True_796_impl(this);
                  Label* label__True_796 = &label__True_796_impl;
                  USE(label__True_796);
                  Label label__False_797_impl(this);
                  Label* label__False_797 = &label__False_797_impl;
                  USE(label__False_797);
                  Label label_if_done_label_1026_1451_impl(this, {last_ofs_478, offset_479});
                  Label* label_if_done_label_1026_1451 = &label_if_done_label_1026_1451_impl;
                  USE(label_if_done_label_1026_1451);
                  int31_t t2744 = 0;
                  TNode<Number> t2745 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2744)));
                  BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_480).value()), implicit_cast<TNode<Number>>(t2745), label__True_796, label__False_797);
                  if (label__True_796->is_used())
                  {
                    BIND(label__True_796);
                    // ../../third_party/v8/builtins/array-sort.tq:1023:24
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1024:11
                      int31_t t2746 = 1;
                      TNode<Smi> t2747 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2746)));
                      TNode<Smi> t2748 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*m_1024)), implicit_cast<TNode<Smi>>(t2747)));
                      USE(implicit_cast<TNode<Smi>>(t2748));
                      *last_ofs_478 = implicit_cast<TNode<Smi>>(t2748);
                    }
                    Goto(label_if_done_label_1026_1451);
                  }
                  if (label__False_797->is_used())
                  {
                    BIND(label__False_797);
                    // ../../third_party/v8/builtins/array-sort.tq:1025:16
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1026:11
                      *offset_479 = implicit_cast<TNode<Smi>>((*m_1024));
                    }
                    Goto(label_if_done_label_1026_1451);
                  }
                  BIND(label_if_done_label_1026_1451);
                }
              }
              Goto(label_header_1023_1450);
            }
            BIND(label__False_793);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1030:7
          // ../../third_party/v8/builtins/array-sort.tq:1031:7
          // ../../third_party/v8/builtins/array-sort.tq:1032:7
          Return(implicit_cast<TNode<Smi>>((*offset_479).value()));
        }
      }
      if (label_Bailout_767->is_used())
      {
        BIND(label_Bailout_767);
        // ../../third_party/v8/builtins/array-sort.tq:1034:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1035:7
          TNode<Smi> t2749 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2749));
          Return(implicit_cast<TNode<Smi>>(t2749));
        }
      }
    }
  }
}

TF_BUILTIN(GallopRight, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Code> p_Load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_Load);
  TNode<Object> p_key = UncheckedCast<Object>(Parameter(Descriptor::kKey));
  USE(p_key);
  TNode<Smi> p_base = UncheckedCast<Smi>(Parameter(Descriptor::kBase));
  USE(p_base);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Smi> p_hint = UncheckedCast<Smi>(Parameter(Descriptor::kHint));
  USE(p_hint);
  TNode<Oddball> p_useTempArray = UncheckedCast<Oddball>(Parameter(Descriptor::kUseTempArray));
  USE(p_useTempArray);
  // ../../third_party/v8/builtins/array-sort.tq:1050:70
  {
    // ../../third_party/v8/builtins/array-sort.tq:1051:5
    // ../../third_party/v8/builtins/array-sort.tq:1052:5
    // ../../third_party/v8/builtins/array-sort.tq:1057:5
    auto t2750 = [=]() {
      TNode<FixedArray> t2752 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<FixedArray>>(t2752));
      return implicit_cast<TNode<FixedArray>>(t2752);
    };
    auto t2751 = [=]() {
      TNode<HeapObject> t2753 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<HeapObject>>(t2753));
      return implicit_cast<TNode<HeapObject>>(t2753);
    };
    TVARIABLE(HeapObject, t2754_1027_impl);
    auto t2754_1027 = &t2754_1027_impl;
    USE(t2754_1027);
    {
      Label label__True_798_impl(this);
      Label* label__True_798 = &label__True_798_impl;
      USE(label__True_798);
      Label label__False_799_impl(this);
      Label* label__False_799 = &label__False_799_impl;
      USE(label__False_799);
      Label label__done_1028_1452_impl(this, {t2754_1027});
      Label* label__done_1028_1452 = &label__done_1028_1452_impl;
      USE(label__done_1028_1452);
      TNode<BoolT> t2755 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t2755));
      Branch(implicit_cast<TNode<BoolT>>(t2755), label__True_798, label__False_799);
      BIND(label__True_798);
            *t2754_1027 = implicit_cast<TNode<HeapObject>>(t2750());
      Goto(label__done_1028_1452);
      BIND(label__False_799);
            *t2754_1027 = implicit_cast<TNode<HeapObject>>(t2751());
      Goto(label__done_1028_1452);
      BIND(label__done_1028_1452);
    }
    TVARIABLE(HeapObject, elements_483_impl);
    auto elements_483 = &elements_483_impl;
    USE(elements_483);
    *elements_483 = implicit_cast<TNode<HeapObject>>((*t2754_1027).value());
    // ../../third_party/v8/builtins/array-sort.tq:1060:5
    int31_t t2756 = 0;
    TVARIABLE(Smi, last_ofs_484_impl);
    auto last_ofs_484 = &last_ofs_484_impl;
    USE(last_ofs_484);
    TNode<Smi> t2757 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2756)));
    *last_ofs_484 = implicit_cast<TNode<Smi>>(t2757);
    // ../../third_party/v8/builtins/array-sort.tq:1061:5
    int31_t t2758 = 1;
    TVARIABLE(Smi, offset_485_impl);
    auto offset_485 = &offset_485_impl;
    USE(offset_485);
    TNode<Smi> t2759 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2758)));
    *offset_485 = implicit_cast<TNode<Smi>>(t2759);
    // ../../third_party/v8/builtins/array-sort.tq:1063:5
    {
      Label label_try_done_1029_1453_impl(this);
      Label* label_try_done_1029_1453 = &label_try_done_1029_1453_impl;
      USE(label_try_done_1029_1453);
      Label label_Bailout_800_impl(this);
      Label* label_Bailout_800 = &label_Bailout_800_impl;
      USE(label_Bailout_800);
      Label label_try_begin_1030_1454_impl(this);
      Label* label_try_begin_1030_1454 = &label_try_begin_1030_1454_impl;
      USE(label_try_begin_1030_1454);
      Goto(label_try_begin_1030_1454);
      if (label_try_begin_1030_1454->is_used())
      {
        BIND(label_try_begin_1030_1454);
        // ../../third_party/v8/builtins/array-sort.tq:1063:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1064:7
          TNode<Smi> t2760 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
          USE(implicit_cast<TNode<Smi>>(t2760));
          TNode<Object> t2761 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t2760), label_Bailout_800));
          USE(implicit_cast<TNode<Object>>(t2761));
          TNode<Object> base_hint_element_1031_impl;
          auto base_hint_element_1031 = &base_hint_element_1031_impl;
          USE(base_hint_element_1031);
          *base_hint_element_1031 = implicit_cast<TNode<Object>>(t2761);
          // ../../third_party/v8/builtins/array-sort.tq:1067:7
          TNode<Number> t2762 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*base_hint_element_1031)), label_Bailout_800));
          USE(implicit_cast<TNode<Number>>(t2762));
          TVARIABLE(Number, order_486_impl);
          auto order_486 = &order_486_impl;
          USE(order_486);
          *order_486 = implicit_cast<TNode<Number>>(t2762);
          // ../../third_party/v8/builtins/array-sort.tq:1070:7
          {
            Label label__True_801_impl(this);
            Label* label__True_801 = &label__True_801_impl;
            USE(label__True_801);
            Label label__False_802_impl(this, {elements_483});
            Label* label__False_802 = &label__False_802_impl;
            USE(label__False_802);
            TNode<BoolT> t2763 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
            USE(implicit_cast<TNode<BoolT>>(t2763));
            Branch(implicit_cast<TNode<BoolT>>(t2763), label__True_801, label__False_802);
            if (label__True_801->is_used())
            {
              BIND(label__True_801);
              // ../../third_party/v8/builtins/array-sort.tq:1070:34
              {
                // ../../third_party/v8/builtins/array-sort.tq:1071:9
                TNode<HeapObject> t2764 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                USE(implicit_cast<TNode<HeapObject>>(t2764));
                *elements_483 = implicit_cast<TNode<HeapObject>>(t2764);
              }
              Goto(label__False_802);
            }
            BIND(label__False_802);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1074:7
          {
            Label label__True_803_impl(this);
            Label* label__True_803 = &label__True_803_impl;
            USE(label__True_803);
            Label label__False_804_impl(this);
            Label* label__False_804 = &label__False_804_impl;
            USE(label__False_804);
            Label label_if_done_label_1032_1455_impl(this, {elements_483, last_ofs_484, offset_485, order_486});
            Label* label_if_done_label_1032_1455 = &label_if_done_label_1032_1455_impl;
            USE(label_if_done_label_1032_1455);
            int31_t t2765 = 0;
            TNode<Number> t2766 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2765)));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_486).value()), implicit_cast<TNode<Number>>(t2766), label__True_803, label__False_804);
            if (label__True_803->is_used())
            {
              BIND(label__True_803);
              // ../../third_party/v8/builtins/array-sort.tq:1074:22
              {
                // ../../third_party/v8/builtins/array-sort.tq:1079:9
                int31_t t2767 = 1;
                TNode<Smi> t2768 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2767)));
                TNode<Smi> t2769 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>(t2768)));
                USE(implicit_cast<TNode<Smi>>(t2769));
                TVARIABLE(Smi, max_ofs_487_impl);
                auto max_ofs_487 = &max_ofs_487_impl;
                USE(max_ofs_487);
                *max_ofs_487 = implicit_cast<TNode<Smi>>(t2769);
                // ../../third_party/v8/builtins/array-sort.tq:1080:9
                {
                  Label label__True_805_impl(this);
                  Label* label__True_805 = &label__True_805_impl;
                  USE(label__True_805);
                  Label label__False_806_impl(this);
                  Label* label__False_806 = &label__False_806_impl;
                  USE(label__False_806);
                  Label label_header_1033_1456_impl(this, {elements_483, last_ofs_484, offset_485, order_486});
                  Label* label_header_1033_1456 = &label_header_1033_1456_impl;
                  USE(label_header_1033_1456);
                  Goto(label_header_1033_1456);
                  BIND(label_header_1033_1456);
                  TNode<BoolT> t2770 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<TNode<Smi>>((*max_ofs_487).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2770));
                  Branch(implicit_cast<TNode<BoolT>>(t2770), label__True_805, label__False_806);
                  if (label__True_805->is_used())
                  {
                    BIND(label__True_805);
                    // ../../third_party/v8/builtins/array-sort.tq:1080:34
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1081:11
                      TNode<Smi> t2771 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t2771));
                      TNode<Smi> t2772 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2771), implicit_cast<TNode<Smi>>((*offset_485).value())));
                      USE(implicit_cast<TNode<Smi>>(t2772));
                      TNode<Object> t2773 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t2772), label_Bailout_800));
                      USE(implicit_cast<TNode<Object>>(t2773));
                      TNode<Object> offset_element_1034_impl;
                      auto offset_element_1034 = &offset_element_1034_impl;
                      USE(offset_element_1034);
                      *offset_element_1034 = implicit_cast<TNode<Object>>(t2773);
                      // ../../third_party/v8/builtins/array-sort.tq:1084:11
                      TNode<Number> t2774 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*offset_element_1034)), label_Bailout_800));
                      USE(implicit_cast<TNode<Number>>(t2774));
                      *order_486 = implicit_cast<TNode<Number>>(t2774);
                      // ../../third_party/v8/builtins/array-sort.tq:1086:11
                      {
                        Label label__True_807_impl(this);
                        Label* label__True_807 = &label__True_807_impl;
                        USE(label__True_807);
                        Label label__False_808_impl(this, {elements_483});
                        Label* label__False_808 = &label__False_808_impl;
                        USE(label__False_808);
                        TNode<BoolT> t2775 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                        USE(implicit_cast<TNode<BoolT>>(t2775));
                        Branch(implicit_cast<TNode<BoolT>>(t2775), label__True_807, label__False_808);
                        if (label__True_807->is_used())
                        {
                          BIND(label__True_807);
                          // ../../third_party/v8/builtins/array-sort.tq:1086:38
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1087:13
                            TNode<HeapObject> t2776 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                            USE(implicit_cast<TNode<HeapObject>>(t2776));
                            *elements_483 = implicit_cast<TNode<HeapObject>>(t2776);
                          }
                          Goto(label__False_808);
                        }
                        BIND(label__False_808);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1090:11
                      {
                        Label label__True_809_impl(this);
                        Label* label__True_809 = &label__True_809_impl;
                        USE(label__True_809);
                        Label label__False_810_impl(this, {});
                        Label* label__False_810 = &label__False_810_impl;
                        USE(label__False_810);
                        int31_t t2777 = 0;
                        TNode<Number> t2778 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2777)));
                        BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_486).value()), implicit_cast<TNode<Number>>(t2778), label__True_809, label__False_810);
                        if (label__True_809->is_used())
                        {
                          BIND(label__True_809);
                          // ../../third_party/v8/builtins/array-sort.tq:1090:27
                          Goto(label__False_806);
                        }
                        BIND(label__False_810);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1092:11
                      *last_ofs_484 = implicit_cast<TNode<Smi>>((*offset_485).value());
                      // ../../third_party/v8/builtins/array-sort.tq:1093:11
                      int31_t t2779 = 1;
                      TNode<Smi> t2780 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<int31_t>(t2779)));
                      USE(implicit_cast<TNode<Smi>>(t2780));
                      int31_t t2781 = 1;
                      TNode<Smi> t2782 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2781)));
                      TNode<Smi> t2783 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2780), implicit_cast<TNode<Smi>>(t2782)));
                      USE(implicit_cast<TNode<Smi>>(t2783));
                      *offset_485 = implicit_cast<TNode<Smi>>(t2783);
                      // ../../third_party/v8/builtins/array-sort.tq:1096:11
                      {
                        Label label__True_811_impl(this);
                        Label* label__True_811 = &label__True_811_impl;
                        USE(label__True_811);
                        Label label__False_812_impl(this, {offset_485});
                        Label* label__False_812 = &label__False_812_impl;
                        USE(label__False_812);
                        int31_t t2784 = 0;
                        TNode<Smi> t2785 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2784)));
                        TNode<BoolT> t2786 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<TNode<Smi>>(t2785)));
                        USE(implicit_cast<TNode<BoolT>>(t2786));
                        Branch(implicit_cast<TNode<BoolT>>(t2786), label__True_811, label__False_812);
                        if (label__True_811->is_used())
                        {
                          BIND(label__True_811);
                          // ../../third_party/v8/builtins/array-sort.tq:1096:28
                          *offset_485 = implicit_cast<TNode<Smi>>((*max_ofs_487).value());
                          Goto(label__False_812);
                        }
                        BIND(label__False_812);
                      }
                    }
                    Goto(label_header_1033_1456);
                  }
                  BIND(label__False_806);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1099:9
                {
                  Label label__True_813_impl(this);
                  Label* label__True_813 = &label__True_813_impl;
                  USE(label__True_813);
                  Label label__False_814_impl(this, {offset_485});
                  Label* label__False_814 = &label__False_814_impl;
                  USE(label__False_814);
                  TNode<BoolT> t2787 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<TNode<Smi>>((*max_ofs_487).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2787));
                  Branch(implicit_cast<TNode<BoolT>>(t2787), label__True_813, label__False_814);
                  if (label__True_813->is_used())
                  {
                    BIND(label__True_813);
                    // ../../third_party/v8/builtins/array-sort.tq:1099:31
                    *offset_485 = implicit_cast<TNode<Smi>>((*max_ofs_487).value());
                    Goto(label__False_814);
                  }
                  BIND(label__False_814);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1102:9
                TNode<Smi> tmp_1035_impl;
                auto tmp_1035 = &tmp_1035_impl;
                USE(tmp_1035);
                *tmp_1035 = implicit_cast<TNode<Smi>>((*last_ofs_484).value());
                // ../../third_party/v8/builtins/array-sort.tq:1103:9
                TNode<Smi> t2788 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*offset_485).value())));
                USE(implicit_cast<TNode<Smi>>(t2788));
                *last_ofs_484 = implicit_cast<TNode<Smi>>(t2788);
                // ../../third_party/v8/builtins/array-sort.tq:1104:9
                TNode<Smi> t2789 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*tmp_1035))));
                USE(implicit_cast<TNode<Smi>>(t2789));
                *offset_485 = implicit_cast<TNode<Smi>>(t2789);
              }
              Goto(label_if_done_label_1032_1455);
            }
            if (label__False_804->is_used())
            {
              BIND(label__False_804);
              // ../../third_party/v8/builtins/array-sort.tq:1105:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:1110:9
                TNode<Smi> t2790 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2790));
                TVARIABLE(Smi, max_ofs_488_impl);
                auto max_ofs_488 = &max_ofs_488_impl;
                USE(max_ofs_488);
                *max_ofs_488 = implicit_cast<TNode<Smi>>(t2790);
                // ../../third_party/v8/builtins/array-sort.tq:1111:9
                {
                  Label label__True_815_impl(this);
                  Label* label__True_815 = &label__True_815_impl;
                  USE(label__True_815);
                  Label label__False_816_impl(this);
                  Label* label__False_816 = &label__False_816_impl;
                  USE(label__False_816);
                  Label label_header_1036_1457_impl(this, {elements_483, last_ofs_484, offset_485, order_486});
                  Label* label_header_1036_1457 = &label_header_1036_1457_impl;
                  USE(label_header_1036_1457);
                  Goto(label_header_1036_1457);
                  BIND(label_header_1036_1457);
                  TNode<BoolT> t2791 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<TNode<Smi>>((*max_ofs_488).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2791));
                  Branch(implicit_cast<TNode<BoolT>>(t2791), label__True_815, label__False_816);
                  if (label__True_815->is_used())
                  {
                    BIND(label__True_815);
                    // ../../third_party/v8/builtins/array-sort.tq:1111:34
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1112:11
                      TNode<Smi> t2792 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t2792));
                      TNode<Smi> t2793 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2792), implicit_cast<TNode<Smi>>((*offset_485).value())));
                      USE(implicit_cast<TNode<Smi>>(t2793));
                      TNode<Object> t2794 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t2793), label_Bailout_800));
                      USE(implicit_cast<TNode<Object>>(t2794));
                      TNode<Object> offset_element_1037_impl;
                      auto offset_element_1037 = &offset_element_1037_impl;
                      USE(offset_element_1037);
                      *offset_element_1037 = implicit_cast<TNode<Object>>(t2794);
                      // ../../third_party/v8/builtins/array-sort.tq:1115:11
                      TNode<Number> t2795 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*offset_element_1037)), label_Bailout_800));
                      USE(implicit_cast<TNode<Number>>(t2795));
                      *order_486 = implicit_cast<TNode<Number>>(t2795);
                      // ../../third_party/v8/builtins/array-sort.tq:1117:11
                      {
                        Label label__True_817_impl(this);
                        Label* label__True_817 = &label__True_817_impl;
                        USE(label__True_817);
                        Label label__False_818_impl(this, {elements_483});
                        Label* label__False_818 = &label__False_818_impl;
                        USE(label__False_818);
                        TNode<BoolT> t2796 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                        USE(implicit_cast<TNode<BoolT>>(t2796));
                        Branch(implicit_cast<TNode<BoolT>>(t2796), label__True_817, label__False_818);
                        if (label__True_817->is_used())
                        {
                          BIND(label__True_817);
                          // ../../third_party/v8/builtins/array-sort.tq:1117:38
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1118:13
                            TNode<HeapObject> t2797 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                            USE(implicit_cast<TNode<HeapObject>>(t2797));
                            *elements_483 = implicit_cast<TNode<HeapObject>>(t2797);
                          }
                          Goto(label__False_818);
                        }
                        BIND(label__False_818);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1122:11
                      {
                        Label label__True_819_impl(this);
                        Label* label__True_819 = &label__True_819_impl;
                        USE(label__True_819);
                        Label label__False_820_impl(this, {});
                        Label* label__False_820 = &label__False_820_impl;
                        USE(label__False_820);
                        int31_t t2798 = 0;
                        TNode<Number> t2799 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2798)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_486).value()), implicit_cast<TNode<Number>>(t2799), label__True_819, label__False_820);
                        if (label__True_819->is_used())
                        {
                          BIND(label__True_819);
                          // ../../third_party/v8/builtins/array-sort.tq:1122:26
                          Goto(label__False_816);
                        }
                        BIND(label__False_820);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1124:11
                      *last_ofs_484 = implicit_cast<TNode<Smi>>((*offset_485).value());
                      // ../../third_party/v8/builtins/array-sort.tq:1125:11
                      int31_t t2800 = 1;
                      TNode<Smi> t2801 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<int31_t>(t2800)));
                      USE(implicit_cast<TNode<Smi>>(t2801));
                      int31_t t2802 = 1;
                      TNode<Smi> t2803 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2802)));
                      TNode<Smi> t2804 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2801), implicit_cast<TNode<Smi>>(t2803)));
                      USE(implicit_cast<TNode<Smi>>(t2804));
                      *offset_485 = implicit_cast<TNode<Smi>>(t2804);
                      // ../../third_party/v8/builtins/array-sort.tq:1128:11
                      {
                        Label label__True_821_impl(this);
                        Label* label__True_821 = &label__True_821_impl;
                        USE(label__True_821);
                        Label label__False_822_impl(this, {offset_485});
                        Label* label__False_822 = &label__False_822_impl;
                        USE(label__False_822);
                        int31_t t2805 = 0;
                        TNode<Smi> t2806 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2805)));
                        TNode<BoolT> t2807 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<TNode<Smi>>(t2806)));
                        USE(implicit_cast<TNode<BoolT>>(t2807));
                        Branch(implicit_cast<TNode<BoolT>>(t2807), label__True_821, label__False_822);
                        if (label__True_821->is_used())
                        {
                          BIND(label__True_821);
                          // ../../third_party/v8/builtins/array-sort.tq:1128:28
                          *offset_485 = implicit_cast<TNode<Smi>>((*max_ofs_488).value());
                          Goto(label__False_822);
                        }
                        BIND(label__False_822);
                      }
                    }
                    Goto(label_header_1036_1457);
                  }
                  BIND(label__False_816);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1131:9
                {
                  Label label__True_823_impl(this);
                  Label* label__True_823 = &label__True_823_impl;
                  USE(label__True_823);
                  Label label__False_824_impl(this, {offset_485});
                  Label* label__False_824 = &label__False_824_impl;
                  USE(label__False_824);
                  TNode<BoolT> t2808 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<TNode<Smi>>((*max_ofs_488).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2808));
                  Branch(implicit_cast<TNode<BoolT>>(t2808), label__True_823, label__False_824);
                  if (label__True_823->is_used())
                  {
                    BIND(label__True_823);
                    // ../../third_party/v8/builtins/array-sort.tq:1131:31
                    *offset_485 = implicit_cast<TNode<Smi>>((*max_ofs_488).value());
                    Goto(label__False_824);
                  }
                  BIND(label__False_824);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1134:9
                TNode<Smi> t2809 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_484).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2809));
                *last_ofs_484 = implicit_cast<TNode<Smi>>(t2809);
                // ../../third_party/v8/builtins/array-sort.tq:1135:9
                TNode<Smi> t2810 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2810));
                *offset_485 = implicit_cast<TNode<Smi>>(t2810);
              }
              Goto(label_if_done_label_1032_1455);
            }
            BIND(label_if_done_label_1032_1455);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1137:7
          // ../../third_party/v8/builtins/array-sort.tq:1143:7
          TNode<Smi> t2811 = implicit_cast<TNode<Smi>>((*last_ofs_484).value());
          USE(t2811);
          TNode<Smi> t2812 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2813 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_484).value()), implicit_cast<TNode<Smi>>(t2812)));
          *last_ofs_484 = implicit_cast<TNode<Smi>>(t2813);
          // ../../third_party/v8/builtins/array-sort.tq:1144:7
          {
            Label label__True_825_impl(this);
            Label* label__True_825 = &label__True_825_impl;
            USE(label__True_825);
            Label label__False_826_impl(this);
            Label* label__False_826 = &label__False_826_impl;
            USE(label__False_826);
            Label label_header_1038_1458_impl(this, {elements_483, last_ofs_484, offset_485, order_486});
            Label* label_header_1038_1458 = &label_header_1038_1458_impl;
            USE(label_header_1038_1458);
            Goto(label_header_1038_1458);
            BIND(label_header_1038_1458);
            TNode<BoolT> t2814 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*last_ofs_484).value()), implicit_cast<TNode<Smi>>((*offset_485).value())));
            USE(implicit_cast<TNode<BoolT>>(t2814));
            Branch(implicit_cast<TNode<BoolT>>(t2814), label__True_825, label__False_826);
            if (label__True_825->is_used())
            {
              BIND(label__True_825);
              // ../../third_party/v8/builtins/array-sort.tq:1144:33
              {
                // ../../third_party/v8/builtins/array-sort.tq:1145:9
                TNode<Smi> t2815 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*offset_485).value()), implicit_cast<TNode<Smi>>((*last_ofs_484).value())));
                USE(implicit_cast<TNode<Smi>>(t2815));
                int31_t t2816 = 1;
                TNode<Smi> t2817 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t2815), implicit_cast<int31_t>(t2816)));
                USE(implicit_cast<TNode<Smi>>(t2817));
                TNode<Smi> t2818 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_484).value()), implicit_cast<TNode<Smi>>(t2817)));
                USE(implicit_cast<TNode<Smi>>(t2818));
                TNode<Smi> m_1039_impl;
                auto m_1039 = &m_1039_impl;
                USE(m_1039);
                *m_1039 = implicit_cast<TNode<Smi>>(t2818);
                // ../../third_party/v8/builtins/array-sort.tq:1147:9
                TNode<Smi> t2819 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>((*m_1039))));
                USE(implicit_cast<TNode<Smi>>(t2819));
                TNode<Object> t2820 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t2819), label_Bailout_800));
                USE(implicit_cast<TNode<Object>>(t2820));
                TNode<Object> base_m_element_1040_impl;
                auto base_m_element_1040 = &base_m_element_1040_impl;
                USE(base_m_element_1040);
                *base_m_element_1040 = implicit_cast<TNode<Object>>(t2820);
                // ../../third_party/v8/builtins/array-sort.tq:1150:9
                TNode<Number> t2821 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*base_m_element_1040)), label_Bailout_800));
                USE(implicit_cast<TNode<Number>>(t2821));
                *order_486 = implicit_cast<TNode<Number>>(t2821);
                // ../../third_party/v8/builtins/array-sort.tq:1152:9
                {
                  Label label__True_827_impl(this);
                  Label* label__True_827 = &label__True_827_impl;
                  USE(label__True_827);
                  Label label__False_828_impl(this, {elements_483});
                  Label* label__False_828 = &label__False_828_impl;
                  USE(label__False_828);
                  TNode<BoolT> t2822 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                  USE(implicit_cast<TNode<BoolT>>(t2822));
                  Branch(implicit_cast<TNode<BoolT>>(t2822), label__True_827, label__False_828);
                  if (label__True_827->is_used())
                  {
                    BIND(label__True_827);
                    // ../../third_party/v8/builtins/array-sort.tq:1152:36
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1153:11
                      TNode<HeapObject> t2823 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2823));
                      *elements_483 = implicit_cast<TNode<HeapObject>>(t2823);
                    }
                    Goto(label__False_828);
                  }
                  BIND(label__False_828);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1156:9
                {
                  Label label__True_829_impl(this);
                  Label* label__True_829 = &label__True_829_impl;
                  USE(label__True_829);
                  Label label__False_830_impl(this);
                  Label* label__False_830 = &label__False_830_impl;
                  USE(label__False_830);
                  Label label_if_done_label_1041_1459_impl(this, {last_ofs_484, offset_485});
                  Label* label_if_done_label_1041_1459 = &label_if_done_label_1041_1459_impl;
                  USE(label_if_done_label_1041_1459);
                  int31_t t2824 = 0;
                  TNode<Number> t2825 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2824)));
                  BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_486).value()), implicit_cast<TNode<Number>>(t2825), label__True_829, label__False_830);
                  if (label__True_829->is_used())
                  {
                    BIND(label__True_829);
                    // ../../third_party/v8/builtins/array-sort.tq:1156:24
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1157:11
                      *offset_485 = implicit_cast<TNode<Smi>>((*m_1039));
                    }
                    Goto(label_if_done_label_1041_1459);
                  }
                  if (label__False_830->is_used())
                  {
                    BIND(label__False_830);
                    // ../../third_party/v8/builtins/array-sort.tq:1158:16
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1159:11
                      int31_t t2826 = 1;
                      TNode<Smi> t2827 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2826)));
                      TNode<Smi> t2828 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*m_1039)), implicit_cast<TNode<Smi>>(t2827)));
                      USE(implicit_cast<TNode<Smi>>(t2828));
                      *last_ofs_484 = implicit_cast<TNode<Smi>>(t2828);
                    }
                    Goto(label_if_done_label_1041_1459);
                  }
                  BIND(label_if_done_label_1041_1459);
                }
              }
              Goto(label_header_1038_1458);
            }
            BIND(label__False_826);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1163:7
          // ../../third_party/v8/builtins/array-sort.tq:1164:7
          // ../../third_party/v8/builtins/array-sort.tq:1165:7
          Return(implicit_cast<TNode<Smi>>((*offset_485).value()));
        }
      }
      if (label_Bailout_800->is_used())
      {
        BIND(label_Bailout_800);
        // ../../third_party/v8/builtins/array-sort.tq:1167:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1168:7
          TNode<Smi> t2829 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2829));
          Return(implicit_cast<TNode<Smi>>(t2829));
        }
      }
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::CopyElement(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Code> p_Store, TNode<HeapObject> p_elements, TNode<Smi> p_from, TNode<Smi> p_to, Label* label_Bailout_831) {
  Label label_macro_end_1460_impl(this, {});
  Label* label_macro_end_1460 = &label_macro_end_1460_impl;
  USE(label_macro_end_1460);
  // ../../third_party/v8/builtins/array-sort.tq:1176:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1177:5
    TNode<Object> t2830 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_from), label_Bailout_831));
    USE(implicit_cast<TNode<Object>>(t2830));
    TNode<Object> element_1042_impl;
    auto element_1042 = &element_1042_impl;
    USE(element_1042);
    *element_1042 = implicit_cast<TNode<Object>>(t2830);
    // ../../third_party/v8/builtins/array-sort.tq:1179:5
    CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<Object>>((*element_1042)), label_Bailout_831);
  }
}

void ArrayBuiltinsFromDSLAssembler::MergeLow(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthA, TNode<Smi> p_baseB, TNode<Smi> p_lengthB, Label* label_Bailout_832) {
  Label label_macro_end_1461_impl(this, {});
  Label* label_macro_end_1461 = &label_macro_end_1461_impl;
  USE(label_macro_end_1461);
  // ../../third_party/v8/builtins/array-sort.tq:1192:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1193:5
    // ../../third_party/v8/builtins/array-sort.tq:1194:5
    // ../../third_party/v8/builtins/array-sort.tq:1195:5
    // ../../third_party/v8/builtins/array-sort.tq:1197:5
    TVARIABLE(Smi, length_a_489_impl);
    auto length_a_489 = &length_a_489_impl;
    USE(length_a_489);
    *length_a_489 = implicit_cast<TNode<Smi>>(p_lengthA);
    // ../../third_party/v8/builtins/array-sort.tq:1198:5
    TVARIABLE(Smi, length_b_490_impl);
    auto length_b_490 = &length_b_490_impl;
    USE(length_b_490);
    *length_b_490 = implicit_cast<TNode<Smi>>(p_lengthB);
    // ../../third_party/v8/builtins/array-sort.tq:1200:5
    TNode<HeapObject> t2831 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2831));
    TVARIABLE(HeapObject, elements_491_impl);
    auto elements_491 = &elements_491_impl;
    USE(elements_491);
    *elements_491 = implicit_cast<TNode<HeapObject>>(t2831);
    // ../../third_party/v8/builtins/array-sort.tq:1201:5
    TNode<Code> t2832 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2832));
    TNode<Code> LoadF_1043_impl;
    auto LoadF_1043 = &LoadF_1043_impl;
    USE(LoadF_1043);
    *LoadF_1043 = implicit_cast<TNode<Code>>(t2832);
    // ../../third_party/v8/builtins/array-sort.tq:1202:5
    TNode<Code> t2833 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2833));
    TNode<Code> Store_1044_impl;
    auto Store_1044 = &Store_1044_impl;
    USE(Store_1044);
    *Store_1044 = implicit_cast<TNode<Code>>(t2833);
    // ../../third_party/v8/builtins/array-sort.tq:1204:5
    TNode<FixedArray> t2834 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*length_a_489).value())));
    USE(implicit_cast<TNode<FixedArray>>(t2834));
    TNode<FixedArray> temp_array_1045_impl;
    auto temp_array_1045 = &temp_array_1045_impl;
    USE(temp_array_1045);
    *temp_array_1045 = implicit_cast<TNode<FixedArray>>(t2834);
    // ../../third_party/v8/builtins/array-sort.tq:1205:5
    int31_t t2835 = 0;
    TNode<Smi> t2836 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2835)));
    CopyToTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1043)), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<FixedArray>>((*temp_array_1045)), implicit_cast<TNode<Smi>>(t2836), implicit_cast<TNode<Smi>>((*length_a_489).value()), label_Bailout_832);
    // ../../third_party/v8/builtins/array-sort.tq:1209:5
    TVARIABLE(Smi, dest_492_impl);
    auto dest_492 = &dest_492_impl;
    USE(dest_492);
    *dest_492 = implicit_cast<TNode<Smi>>(p_baseA);
    // ../../third_party/v8/builtins/array-sort.tq:1210:5
    int31_t t2837 = 0;
    TVARIABLE(Smi, cursor_temp_493_impl);
    auto cursor_temp_493 = &cursor_temp_493_impl;
    USE(cursor_temp_493);
    TNode<Smi> t2838 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2837)));
    *cursor_temp_493 = implicit_cast<TNode<Smi>>(t2838);
    // ../../third_party/v8/builtins/array-sort.tq:1211:5
    TVARIABLE(Smi, cursor_b_494_impl);
    auto cursor_b_494 = &cursor_b_494_impl;
    USE(cursor_b_494);
    *cursor_b_494 = implicit_cast<TNode<Smi>>(p_baseB);
    // ../../third_party/v8/builtins/array-sort.tq:1213:5
    TNode<Smi> t2839 = implicit_cast<TNode<Smi>>((*cursor_b_494).value());
    USE(t2839);
    TNode<Smi> t2840 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t2841 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_b_494).value()), implicit_cast<TNode<Smi>>(t2840)));
    *cursor_b_494 = implicit_cast<TNode<Smi>>(t2841);
    TNode<Smi> t2842 = implicit_cast<TNode<Smi>>((*dest_492).value());
    USE(t2842);
    TNode<Smi> t2843 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t2844 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>(t2843)));
    *dest_492 = implicit_cast<TNode<Smi>>(t2844);
    CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1043)), implicit_cast<TNode<Code>>((*Store_1044)), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>(t2839), implicit_cast<TNode<Smi>>(t2842), label_Bailout_832);
    // ../../third_party/v8/builtins/array-sort.tq:1216:5
    {
      Label label_try_done_1046_1462_impl(this);
      Label* label_try_done_1046_1462 = &label_try_done_1046_1462_impl;
      USE(label_try_done_1046_1462);
      Label label_Succeed_833_impl(this);
      Label* label_Succeed_833 = &label_Succeed_833_impl;
      USE(label_Succeed_833);
      Label label_CopyB_834_impl(this);
      Label* label_CopyB_834 = &label_CopyB_834_impl;
      USE(label_CopyB_834);
      Label label_try_begin_1047_1463_impl(this);
      Label* label_try_begin_1047_1463 = &label_try_begin_1047_1463_impl;
      USE(label_try_begin_1047_1463);
      Goto(label_try_begin_1047_1463);
      if (label_try_begin_1047_1463->is_used())
      {
        BIND(label_try_begin_1047_1463);
        // ../../third_party/v8/builtins/array-sort.tq:1216:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1217:7
          {
            Label label__True_835_impl(this);
            Label* label__True_835 = &label__True_835_impl;
            USE(label__True_835);
            Label label__False_836_impl(this, {length_b_490});
            Label* label__False_836 = &label__False_836_impl;
            USE(label__False_836);
            TNode<Smi> t2845 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t2846 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_490).value()), implicit_cast<TNode<Smi>>(t2845)));
            *length_b_490 = implicit_cast<TNode<Smi>>(t2846);
            int31_t t2847 = 0;
            TNode<Smi> t2848 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2847)));
            TNode<BoolT> t2849 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2846), implicit_cast<TNode<Smi>>(t2848)));
            USE(implicit_cast<TNode<BoolT>>(t2849));
            Branch(implicit_cast<TNode<BoolT>>(t2849), label__True_835, label__False_836);
            if (label__True_835->is_used())
            {
              BIND(label__True_835);
              // ../../third_party/v8/builtins/array-sort.tq:1217:28
              Goto(label_Succeed_833);
            }
            BIND(label__False_836);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1218:7
          {
            Label label__True_837_impl(this);
            Label* label__True_837 = &label__True_837_impl;
            USE(label__True_837);
            Label label__False_838_impl(this, {});
            Label* label__False_838 = &label__False_838_impl;
            USE(label__False_838);
            int31_t t2850 = 1;
            TNode<Smi> t2851 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2850)));
            TNode<BoolT> t2852 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_489).value()), implicit_cast<TNode<Smi>>(t2851)));
            USE(implicit_cast<TNode<BoolT>>(t2852));
            Branch(implicit_cast<TNode<BoolT>>(t2852), label__True_837, label__False_838);
            if (label__True_837->is_used())
            {
              BIND(label__True_837);
              // ../../third_party/v8/builtins/array-sort.tq:1218:26
              Goto(label_CopyB_834);
            }
            BIND(label__False_838);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1220:7
          TNode<Object> t2853 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx())));
          TNode<Smi> t2854 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2853)));
          USE(implicit_cast<TNode<Smi>>(t2854));
          TVARIABLE(Smi, min_gallop_495_impl);
          auto min_gallop_495 = &min_gallop_495_impl;
          USE(min_gallop_495);
          *min_gallop_495 = implicit_cast<TNode<Smi>>(t2854);
          // ../../third_party/v8/builtins/array-sort.tq:1223:7
          {
            Label label__True_839_impl(this);
            Label* label__True_839 = &label__True_839_impl;
            USE(label__True_839);
            Label label__False_840_impl(this);
            Label* label__False_840 = &label__False_840_impl;
            USE(label__False_840);
            Label label_header_1048_1464_impl(this, {cursor_b_494, cursor_temp_493, dest_492, elements_491, length_a_489, length_b_490, min_gallop_495});
            Label* label_header_1048_1464 = &label_header_1048_1464_impl;
            USE(label_header_1048_1464);
            Goto(label_header_1048_1464);
            BIND(label_header_1048_1464);
            TNode<BoolT> t2855 = UncheckedCast<BoolT>(Int32TrueConstant());
            USE(implicit_cast<TNode<BoolT>>(t2855));
            Branch(implicit_cast<TNode<BoolT>>(t2855), label__True_839, label__False_840);
            if (label__True_839->is_used())
            {
              BIND(label__True_839);
              // ../../third_party/v8/builtins/array-sort.tq:1223:35
              {
                // ../../third_party/v8/builtins/array-sort.tq:1224:9
                int31_t t2856 = 0;
                TVARIABLE(Smi, nof_wins_a_496_impl);
                auto nof_wins_a_496 = &nof_wins_a_496_impl;
                USE(nof_wins_a_496);
                TNode<Smi> t2857 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2856)));
                *nof_wins_a_496 = implicit_cast<TNode<Smi>>(t2857);
                // ../../third_party/v8/builtins/array-sort.tq:1225:9
                int31_t t2858 = 0;
                TVARIABLE(Smi, nof_wins_b_497_impl);
                auto nof_wins_b_497 = &nof_wins_b_497_impl;
                USE(nof_wins_b_497);
                TNode<Smi> t2859 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2858)));
                *nof_wins_b_497 = implicit_cast<TNode<Smi>>(t2859);
                // ../../third_party/v8/builtins/array-sort.tq:1231:9
                {
                  Label label__True_841_impl(this);
                  Label* label__True_841 = &label__True_841_impl;
                  USE(label__True_841);
                  Label label__False_842_impl(this);
                  Label* label__False_842 = &label__False_842_impl;
                  USE(label__False_842);
                  Label label_header_1049_1465_impl(this, {cursor_b_494, cursor_temp_493, dest_492, elements_491, length_a_489, length_b_490, nof_wins_a_496, nof_wins_b_497});
                  Label* label_header_1049_1465 = &label_header_1049_1465_impl;
                  USE(label_header_1049_1465);
                  Goto(label_header_1049_1465);
                  BIND(label_header_1049_1465);
                  TNode<BoolT> t2860 = UncheckedCast<BoolT>(Int32TrueConstant());
                  USE(implicit_cast<TNode<BoolT>>(t2860));
                  Branch(implicit_cast<TNode<BoolT>>(t2860), label__True_841, label__False_842);
                  if (label__True_841->is_used())
                  {
                    BIND(label__True_841);
                    // ../../third_party/v8/builtins/array-sort.tq:1231:37
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1232:11
                      // ../../third_party/v8/builtins/array-sort.tq:1234:11
                      TNode<Object> t2861 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1043)), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>((*cursor_b_494).value()), label_Bailout_832));
                      USE(implicit_cast<TNode<Object>>(t2861));
                      TVARIABLE(Object, element_b_498_impl);
                      auto element_b_498 = &element_b_498_impl;
                      USE(element_b_498);
                      *element_b_498 = implicit_cast<TNode<Object>>(t2861);
                      // ../../third_party/v8/builtins/array-sort.tq:1237:11
                      TNode<Object> t2862 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1045)), implicit_cast<TNode<Smi>>((*cursor_temp_493).value())));
                      TNode<Number> t2863 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*element_b_498).value()), implicit_cast<TNode<Object>>(t2862), label_Bailout_832));
                      USE(implicit_cast<TNode<Number>>(t2863));
                      TVARIABLE(Number, order_499_impl);
                      auto order_499 = &order_499_impl;
                      USE(order_499);
                      *order_499 = implicit_cast<TNode<Number>>(t2863);
                      // ../../third_party/v8/builtins/array-sort.tq:1240:11
                      TNode<HeapObject> t2864 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2864));
                      *elements_491 = implicit_cast<TNode<HeapObject>>(t2864);
                      // ../../third_party/v8/builtins/array-sort.tq:1242:11
                      {
                        Label label__True_843_impl(this);
                        Label* label__True_843 = &label__True_843_impl;
                        USE(label__True_843);
                        Label label__False_844_impl(this);
                        Label* label__False_844 = &label__False_844_impl;
                        USE(label__False_844);
                        Label label_if_done_label_1050_1466_impl(this, {cursor_b_494, cursor_temp_493, dest_492, length_a_489, length_b_490, nof_wins_a_496, nof_wins_b_497});
                        Label* label_if_done_label_1050_1466 = &label_if_done_label_1050_1466_impl;
                        USE(label_if_done_label_1050_1466);
                        int31_t t2865 = 0;
                        TNode<Number> t2866 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2865)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_499).value()), implicit_cast<TNode<Number>>(t2866), label__True_843, label__False_844);
                        if (label__True_843->is_used())
                        {
                          BIND(label__True_843);
                          // ../../third_party/v8/builtins/array-sort.tq:1242:26
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1243:13
                            CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1043)), implicit_cast<TNode<Code>>((*Store_1044)), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>((*cursor_b_494).value()), implicit_cast<TNode<Smi>>((*dest_492).value()), label_Bailout_832);
                            // ../../third_party/v8/builtins/array-sort.tq:1247:13
                            TNode<Smi> t2867 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2868 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_b_494).value()), implicit_cast<TNode<Smi>>(t2867)));
                            *cursor_b_494 = implicit_cast<TNode<Smi>>(t2868);
                            // ../../third_party/v8/builtins/array-sort.tq:1248:13
                            TNode<Smi> t2869 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2870 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>(t2869)));
                            *dest_492 = implicit_cast<TNode<Smi>>(t2870);
                            // ../../third_party/v8/builtins/array-sort.tq:1249:13
                            TNode<Smi> t2871 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2872 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nof_wins_b_497).value()), implicit_cast<TNode<Smi>>(t2871)));
                            *nof_wins_b_497 = implicit_cast<TNode<Smi>>(t2872);
                            // ../../third_party/v8/builtins/array-sort.tq:1250:13
                            TNode<Smi> t2873 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2874 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_490).value()), implicit_cast<TNode<Smi>>(t2873)));
                            *length_b_490 = implicit_cast<TNode<Smi>>(t2874);
                            // ../../third_party/v8/builtins/array-sort.tq:1251:13
                            int31_t t2875 = 0;
                            TNode<Smi> t2876 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2875)));
                            *nof_wins_a_496 = implicit_cast<TNode<Smi>>(t2876);
                            // ../../third_party/v8/builtins/array-sort.tq:1253:13
                            {
                              Label label__True_845_impl(this);
                              Label* label__True_845 = &label__True_845_impl;
                              USE(label__True_845);
                              Label label__False_846_impl(this, {});
                              Label* label__False_846 = &label__False_846_impl;
                              USE(label__False_846);
                              int31_t t2877 = 0;
                              TNode<Smi> t2878 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2877)));
                              TNode<BoolT> t2879 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_490).value()), implicit_cast<TNode<Smi>>(t2878)));
                              USE(implicit_cast<TNode<BoolT>>(t2879));
                              Branch(implicit_cast<TNode<BoolT>>(t2879), label__True_845, label__False_846);
                              if (label__True_845->is_used())
                              {
                                BIND(label__True_845);
                                // ../../third_party/v8/builtins/array-sort.tq:1253:32
                                Goto(label_Succeed_833);
                              }
                              BIND(label__False_846);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1254:13
                            {
                              Label label__True_847_impl(this);
                              Label* label__True_847 = &label__True_847_impl;
                              USE(label__True_847);
                              Label label__False_848_impl(this, {});
                              Label* label__False_848 = &label__False_848_impl;
                              USE(label__False_848);
                              TNode<BoolT> t2880 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_b_497).value()), implicit_cast<TNode<Smi>>((*min_gallop_495).value())));
                              USE(implicit_cast<TNode<BoolT>>(t2880));
                              Branch(implicit_cast<TNode<BoolT>>(t2880), label__True_847, label__False_848);
                              if (label__True_847->is_used())
                              {
                                BIND(label__True_847);
                                // ../../third_party/v8/builtins/array-sort.tq:1254:43
                                Goto(label__False_842);
                              }
                              BIND(label__False_848);
                            }
                          }
                          Goto(label_if_done_label_1050_1466);
                        }
                        if (label__False_844->is_used())
                        {
                          BIND(label__False_844);
                          // ../../third_party/v8/builtins/array-sort.tq:1255:18
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1256:13
                            TNode<Object> t2881 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1045)), implicit_cast<TNode<Smi>>((*cursor_temp_493).value())));
                            CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1044)), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Object>>(t2881), label_Bailout_832);
                            // ../../third_party/v8/builtins/array-sort.tq:1261:13
                            TNode<Smi> t2882 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2883 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_temp_493).value()), implicit_cast<TNode<Smi>>(t2882)));
                            *cursor_temp_493 = implicit_cast<TNode<Smi>>(t2883);
                            // ../../third_party/v8/builtins/array-sort.tq:1262:13
                            TNode<Smi> t2884 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2885 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>(t2884)));
                            *dest_492 = implicit_cast<TNode<Smi>>(t2885);
                            // ../../third_party/v8/builtins/array-sort.tq:1263:13
                            TNode<Smi> t2886 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2887 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nof_wins_a_496).value()), implicit_cast<TNode<Smi>>(t2886)));
                            *nof_wins_a_496 = implicit_cast<TNode<Smi>>(t2887);
                            // ../../third_party/v8/builtins/array-sort.tq:1264:13
                            TNode<Smi> t2888 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2889 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_489).value()), implicit_cast<TNode<Smi>>(t2888)));
                            *length_a_489 = implicit_cast<TNode<Smi>>(t2889);
                            // ../../third_party/v8/builtins/array-sort.tq:1265:13
                            int31_t t2890 = 0;
                            TNode<Smi> t2891 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2890)));
                            *nof_wins_b_497 = implicit_cast<TNode<Smi>>(t2891);
                            // ../../third_party/v8/builtins/array-sort.tq:1267:13
                            {
                              Label label__True_849_impl(this);
                              Label* label__True_849 = &label__True_849_impl;
                              USE(label__True_849);
                              Label label__False_850_impl(this, {});
                              Label* label__False_850 = &label__False_850_impl;
                              USE(label__False_850);
                              int31_t t2892 = 1;
                              TNode<Smi> t2893 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2892)));
                              TNode<BoolT> t2894 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_489).value()), implicit_cast<TNode<Smi>>(t2893)));
                              USE(implicit_cast<TNode<BoolT>>(t2894));
                              Branch(implicit_cast<TNode<BoolT>>(t2894), label__True_849, label__False_850);
                              if (label__True_849->is_used())
                              {
                                BIND(label__True_849);
                                // ../../third_party/v8/builtins/array-sort.tq:1267:32
                                Goto(label_CopyB_834);
                              }
                              BIND(label__False_850);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1268:13
                            {
                              Label label__True_851_impl(this);
                              Label* label__True_851 = &label__True_851_impl;
                              USE(label__True_851);
                              Label label__False_852_impl(this, {});
                              Label* label__False_852 = &label__False_852_impl;
                              USE(label__False_852);
                              TNode<BoolT> t2895 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_a_496).value()), implicit_cast<TNode<Smi>>((*min_gallop_495).value())));
                              USE(implicit_cast<TNode<BoolT>>(t2895));
                              Branch(implicit_cast<TNode<BoolT>>(t2895), label__True_851, label__False_852);
                              if (label__True_851->is_used())
                              {
                                BIND(label__True_851);
                                // ../../third_party/v8/builtins/array-sort.tq:1268:43
                                Goto(label__False_842);
                              }
                              BIND(label__False_852);
                            }
                          }
                          Goto(label_if_done_label_1050_1466);
                        }
                        BIND(label_if_done_label_1050_1466);
                      }
                    }
                    Goto(label_header_1049_1465);
                  }
                  BIND(label__False_842);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1275:9
                TNode<Smi> t2896 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2897 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*min_gallop_495).value()), implicit_cast<TNode<Smi>>(t2896)));
                *min_gallop_495 = implicit_cast<TNode<Smi>>(t2897);
                // ../../third_party/v8/builtins/array-sort.tq:1276:9
                TVARIABLE(BoolT, first_iteration_500_impl);
                auto first_iteration_500 = &first_iteration_500_impl;
                USE(first_iteration_500);
                TNode<BoolT> t2898 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                *first_iteration_500 = implicit_cast<TNode<BoolT>>(t2898);
                // ../../third_party/v8/builtins/array-sort.tq:1277:9
                {
                  Label label__True_853_impl(this);
                  Label* label__True_853 = &label__True_853_impl;
                  USE(label__True_853);
                  Label label__False_854_impl(this);
                  Label* label__False_854 = &label__False_854_impl;
                  USE(label__False_854);
                  Label label_header_1051_1467_impl(this, {cursor_b_494, cursor_temp_493, dest_492, first_iteration_500, length_a_489, length_b_490, min_gallop_495, nof_wins_a_496, nof_wins_b_497});
                  Label* label_header_1051_1467 = &label_header_1051_1467_impl;
                  USE(label_header_1051_1467);
                  Goto(label_header_1051_1467);
                  BIND(label_header_1051_1467);
                  Label label__False_855_impl(this);
                  Label* label__False_855 = &label__False_855_impl;
                  USE(label__False_855);
                  Label label__False_856_impl(this);
                  Label* label__False_856 = &label__False_856_impl;
                  USE(label__False_856);
                  TNode<Smi> t2899 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t2900 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_a_496).value()), implicit_cast<TNode<Smi>>(t2899)));
                  USE(implicit_cast<TNode<BoolT>>(t2900));
                  GotoIf(implicit_cast<TNode<BoolT>>(t2900), label__True_853);
                  TNode<Smi> t2901 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t2902 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_b_497).value()), implicit_cast<TNode<Smi>>(t2901)));
                  USE(implicit_cast<TNode<BoolT>>(t2902));
                  GotoIf(implicit_cast<TNode<BoolT>>(t2902), label__True_853);
                  Branch(implicit_cast<TNode<BoolT>>((*first_iteration_500).value()), label__True_853, label__False_854);
                  if (label__True_853->is_used())
                  {
                    BIND(label__True_853);
                    // ../../third_party/v8/builtins/array-sort.tq:1278:33
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1279:11
                      TNode<BoolT> t2903 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                      *first_iteration_500 = implicit_cast<TNode<BoolT>>(t2903);
                      // ../../third_party/v8/builtins/array-sort.tq:1280:11
                      // ../../third_party/v8/builtins/array-sort.tq:1282:11
                      int31_t t2904 = 1;
                      int31_t t2905 = 1;
                      TNode<Smi> t2906 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2905)));
                      TNode<Smi> t2907 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*min_gallop_495).value()), implicit_cast<TNode<Smi>>(t2906)));
                      USE(implicit_cast<TNode<Smi>>(t2907));
                      TNode<Smi> t2908 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2904)));
                      TNode<Smi> t2909 = UncheckedCast<Smi>(SmiMax(implicit_cast<TNode<Smi>>(t2908), implicit_cast<TNode<Smi>>(t2907)));
                      USE(implicit_cast<TNode<Smi>>(t2909));
                      *min_gallop_495 = implicit_cast<TNode<Smi>>(t2909);
                      // ../../third_party/v8/builtins/array-sort.tq:1283:11
                      StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*min_gallop_495).value()));
                      // ../../third_party/v8/builtins/array-sort.tq:1285:11
                      TNode<Object> t2910 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1043)), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>((*cursor_b_494).value()), label_Bailout_832));
                      USE(implicit_cast<TNode<Object>>(t2910));
                      TVARIABLE(Object, key_right_501_impl);
                      auto key_right_501 = &key_right_501_impl;
                      USE(key_right_501);
                      *key_right_501 = implicit_cast<TNode<Object>>(t2910);
                      // ../../third_party/v8/builtins/array-sort.tq:1288:11
                      int31_t t2911 = 0;
                      TNode<Smi> t2912 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2911)));
                      TNode<Smi> t2913 = UncheckedCast<Smi>(CallGallopRight(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad19ATTempArrayElements).code())), implicit_cast<TNode<Object>>((*key_right_501).value()), implicit_cast<TNode<Smi>>((*cursor_temp_493).value()), implicit_cast<TNode<Smi>>((*length_a_489).value()), implicit_cast<TNode<Smi>>(t2912), implicit_cast<TNode<Oddball>>(True()), label_Bailout_832));
                      USE(implicit_cast<TNode<Smi>>(t2913));
                      *nof_wins_a_496 = implicit_cast<TNode<Smi>>(t2913);
                      // ../../third_party/v8/builtins/array-sort.tq:1291:11
                      // ../../third_party/v8/builtins/array-sort.tq:1293:11
                      {
                        Label label__True_857_impl(this);
                        Label* label__True_857 = &label__True_857_impl;
                        USE(label__True_857);
                        Label label__False_858_impl(this, {cursor_temp_493, dest_492, length_a_489});
                        Label* label__False_858 = &label__False_858_impl;
                        USE(label__False_858);
                        int31_t t2914 = 0;
                        TNode<Smi> t2915 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2914)));
                        TNode<BoolT> t2916 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nof_wins_a_496).value()), implicit_cast<TNode<Smi>>(t2915)));
                        USE(implicit_cast<TNode<BoolT>>(t2916));
                        Branch(implicit_cast<TNode<BoolT>>(t2916), label__True_857, label__False_858);
                        if (label__True_857->is_used())
                        {
                          BIND(label__True_857);
                          // ../../third_party/v8/builtins/array-sort.tq:1293:31
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1294:13
                            CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<FixedArray>>((*temp_array_1045)), implicit_cast<TNode<Smi>>((*cursor_temp_493).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_496).value()), label_Bailout_832);
                            // ../../third_party/v8/builtins/array-sort.tq:1297:13
                            TNode<Smi> t2917 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_496).value())));
                            USE(implicit_cast<TNode<Smi>>(t2917));
                            *dest_492 = implicit_cast<TNode<Smi>>(t2917);
                            // ../../third_party/v8/builtins/array-sort.tq:1298:13
                            TNode<Smi> t2918 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_temp_493).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_496).value())));
                            USE(implicit_cast<TNode<Smi>>(t2918));
                            *cursor_temp_493 = implicit_cast<TNode<Smi>>(t2918);
                            // ../../third_party/v8/builtins/array-sort.tq:1299:13
                            TNode<Smi> t2919 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_489).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_496).value())));
                            USE(implicit_cast<TNode<Smi>>(t2919));
                            *length_a_489 = implicit_cast<TNode<Smi>>(t2919);
                            // ../../third_party/v8/builtins/array-sort.tq:1301:13
                            {
                              Label label__True_859_impl(this);
                              Label* label__True_859 = &label__True_859_impl;
                              USE(label__True_859);
                              Label label__False_860_impl(this, {});
                              Label* label__False_860 = &label__False_860_impl;
                              USE(label__False_860);
                              int31_t t2920 = 1;
                              TNode<Smi> t2921 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2920)));
                              TNode<BoolT> t2922 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_489).value()), implicit_cast<TNode<Smi>>(t2921)));
                              USE(implicit_cast<TNode<BoolT>>(t2922));
                              Branch(implicit_cast<TNode<BoolT>>(t2922), label__True_859, label__False_860);
                              if (label__True_859->is_used())
                              {
                                BIND(label__True_859);
                                // ../../third_party/v8/builtins/array-sort.tq:1301:32
                                Goto(label_CopyB_834);
                              }
                              BIND(label__False_860);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1305:13
                            {
                              Label label__True_861_impl(this);
                              Label* label__True_861 = &label__True_861_impl;
                              USE(label__True_861);
                              Label label__False_862_impl(this, {});
                              Label* label__False_862 = &label__False_862_impl;
                              USE(label__False_862);
                              int31_t t2923 = 0;
                              TNode<Smi> t2924 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2923)));
                              TNode<BoolT> t2925 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_489).value()), implicit_cast<TNode<Smi>>(t2924)));
                              USE(implicit_cast<TNode<BoolT>>(t2925));
                              Branch(implicit_cast<TNode<BoolT>>(t2925), label__True_861, label__False_862);
                              if (label__True_861->is_used())
                              {
                                BIND(label__True_861);
                                // ../../third_party/v8/builtins/array-sort.tq:1305:32
                                Goto(label_Succeed_833);
                              }
                              BIND(label__False_862);
                            }
                          }
                          Goto(label__False_858);
                        }
                        BIND(label__False_858);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1307:11
                      TNode<Smi> t2926 = implicit_cast<TNode<Smi>>((*cursor_b_494).value());
                      USE(t2926);
                      TNode<Smi> t2927 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2928 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_b_494).value()), implicit_cast<TNode<Smi>>(t2927)));
                      *cursor_b_494 = implicit_cast<TNode<Smi>>(t2928);
                      TNode<Smi> t2929 = implicit_cast<TNode<Smi>>((*dest_492).value());
                      USE(t2929);
                      TNode<Smi> t2930 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2931 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>(t2930)));
                      *dest_492 = implicit_cast<TNode<Smi>>(t2931);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1043)), implicit_cast<TNode<Code>>((*Store_1044)), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>(t2926), implicit_cast<TNode<Smi>>(t2929), label_Bailout_832);
                      // ../../third_party/v8/builtins/array-sort.tq:1310:11
                      {
                        Label label__True_863_impl(this);
                        Label* label__True_863 = &label__True_863_impl;
                        USE(label__True_863);
                        Label label__False_864_impl(this, {length_b_490});
                        Label* label__False_864 = &label__False_864_impl;
                        USE(label__False_864);
                        TNode<Smi> t2932 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t2933 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_490).value()), implicit_cast<TNode<Smi>>(t2932)));
                        *length_b_490 = implicit_cast<TNode<Smi>>(t2933);
                        int31_t t2934 = 0;
                        TNode<Smi> t2935 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2934)));
                        TNode<BoolT> t2936 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2933), implicit_cast<TNode<Smi>>(t2935)));
                        USE(implicit_cast<TNode<BoolT>>(t2936));
                        Branch(implicit_cast<TNode<BoolT>>(t2936), label__True_863, label__False_864);
                        if (label__True_863->is_used())
                        {
                          BIND(label__True_863);
                          // ../../third_party/v8/builtins/array-sort.tq:1310:32
                          Goto(label_Succeed_833);
                        }
                        BIND(label__False_864);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1312:11
                      TNode<Object> t2937 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1045)), implicit_cast<TNode<Smi>>((*cursor_temp_493).value())));
                      int31_t t2938 = 0;
                      TNode<Smi> t2939 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2938)));
                      TNode<Smi> t2940 = UncheckedCast<Smi>(CallGallopLeft(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1043)), implicit_cast<TNode<Object>>(t2937), implicit_cast<TNode<Smi>>((*cursor_b_494).value()), implicit_cast<TNode<Smi>>((*length_b_490).value()), implicit_cast<TNode<Smi>>(t2939), implicit_cast<TNode<Oddball>>(False()), label_Bailout_832));
                      USE(implicit_cast<TNode<Smi>>(t2940));
                      *nof_wins_b_497 = implicit_cast<TNode<Smi>>(t2940);
                      // ../../third_party/v8/builtins/array-sort.tq:1316:11
                      // ../../third_party/v8/builtins/array-sort.tq:1317:11
                      {
                        Label label__True_865_impl(this);
                        Label* label__True_865 = &label__True_865_impl;
                        USE(label__True_865);
                        Label label__False_866_impl(this, {cursor_b_494, dest_492, length_b_490});
                        Label* label__False_866 = &label__False_866_impl;
                        USE(label__False_866);
                        int31_t t2941 = 0;
                        TNode<Smi> t2942 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2941)));
                        TNode<BoolT> t2943 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nof_wins_b_497).value()), implicit_cast<TNode<Smi>>(t2942)));
                        USE(implicit_cast<TNode<BoolT>>(t2943));
                        Branch(implicit_cast<TNode<BoolT>>(t2943), label__True_865, label__False_866);
                        if (label__True_865->is_used())
                        {
                          BIND(label__True_865);
                          // ../../third_party/v8/builtins/array-sort.tq:1317:31
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1318:13
                            CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>((*cursor_b_494).value()), implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_497).value()), label_Bailout_832);
                            // ../../third_party/v8/builtins/array-sort.tq:1322:13
                            TNode<Smi> t2944 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_497).value())));
                            USE(implicit_cast<TNode<Smi>>(t2944));
                            *dest_492 = implicit_cast<TNode<Smi>>(t2944);
                            // ../../third_party/v8/builtins/array-sort.tq:1323:13
                            TNode<Smi> t2945 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_b_494).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_497).value())));
                            USE(implicit_cast<TNode<Smi>>(t2945));
                            *cursor_b_494 = implicit_cast<TNode<Smi>>(t2945);
                            // ../../third_party/v8/builtins/array-sort.tq:1324:13
                            TNode<Smi> t2946 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_490).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_497).value())));
                            USE(implicit_cast<TNode<Smi>>(t2946));
                            *length_b_490 = implicit_cast<TNode<Smi>>(t2946);
                            // ../../third_party/v8/builtins/array-sort.tq:1326:13
                            {
                              Label label__True_867_impl(this);
                              Label* label__True_867 = &label__True_867_impl;
                              USE(label__True_867);
                              Label label__False_868_impl(this, {});
                              Label* label__False_868 = &label__False_868_impl;
                              USE(label__False_868);
                              int31_t t2947 = 0;
                              TNode<Smi> t2948 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2947)));
                              TNode<BoolT> t2949 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_490).value()), implicit_cast<TNode<Smi>>(t2948)));
                              USE(implicit_cast<TNode<BoolT>>(t2949));
                              Branch(implicit_cast<TNode<BoolT>>(t2949), label__True_867, label__False_868);
                              if (label__True_867->is_used())
                              {
                                BIND(label__True_867);
                                // ../../third_party/v8/builtins/array-sort.tq:1326:32
                                Goto(label_Succeed_833);
                              }
                              BIND(label__False_868);
                            }
                          }
                          Goto(label__False_866);
                        }
                        BIND(label__False_866);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1328:11
                      TNode<Smi> t2950 = implicit_cast<TNode<Smi>>((*dest_492).value());
                      USE(t2950);
                      TNode<Smi> t2951 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2952 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>(t2951)));
                      *dest_492 = implicit_cast<TNode<Smi>>(t2952);
                      TNode<Smi> t2953 = implicit_cast<TNode<Smi>>((*cursor_temp_493).value());
                      USE(t2953);
                      TNode<Smi> t2954 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2955 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_temp_493).value()), implicit_cast<TNode<Smi>>(t2954)));
                      *cursor_temp_493 = implicit_cast<TNode<Smi>>(t2955);
                      TNode<Object> t2956 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1045)), implicit_cast<TNode<Smi>>(t2953)));
                      CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1044)), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>(t2950), implicit_cast<TNode<Object>>(t2956), label_Bailout_832);
                      // ../../third_party/v8/builtins/array-sort.tq:1332:11
                      {
                        Label label__True_869_impl(this);
                        Label* label__True_869 = &label__True_869_impl;
                        USE(label__True_869);
                        Label label__False_870_impl(this, {length_a_489});
                        Label* label__False_870 = &label__False_870_impl;
                        USE(label__False_870);
                        TNode<Smi> t2957 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t2958 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_489).value()), implicit_cast<TNode<Smi>>(t2957)));
                        *length_a_489 = implicit_cast<TNode<Smi>>(t2958);
                        int31_t t2959 = 1;
                        TNode<Smi> t2960 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2959)));
                        TNode<BoolT> t2961 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2958), implicit_cast<TNode<Smi>>(t2960)));
                        USE(implicit_cast<TNode<BoolT>>(t2961));
                        Branch(implicit_cast<TNode<BoolT>>(t2961), label__True_869, label__False_870);
                        if (label__True_869->is_used())
                        {
                          BIND(label__True_869);
                          // ../../third_party/v8/builtins/array-sort.tq:1332:32
                          Goto(label_CopyB_834);
                        }
                        BIND(label__False_870);
                      }
                    }
                    Goto(label_header_1051_1467);
                  }
                  BIND(label__False_854);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1334:9
                TNode<Smi> t2962 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2963 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*min_gallop_495).value()), implicit_cast<TNode<Smi>>(t2962)));
                *min_gallop_495 = implicit_cast<TNode<Smi>>(t2963);
                // ../../third_party/v8/builtins/array-sort.tq:1335:9
                StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*min_gallop_495).value()));
              }
              Goto(label_header_1048_1464);
            }
            BIND(label__False_840);
          }
        }
        Goto(label_try_done_1046_1462);
      }
      if (label_Succeed_833->is_used())
      {
        BIND(label_Succeed_833);
        // ../../third_party/v8/builtins/array-sort.tq:1338:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1339:7
          {
            Label label__True_871_impl(this);
            Label* label__True_871 = &label__True_871_impl;
            USE(label__True_871);
            Label label__False_872_impl(this, {});
            Label* label__False_872 = &label__False_872_impl;
            USE(label__False_872);
            int31_t t2964 = 0;
            TNode<Smi> t2965 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2964)));
            TNode<BoolT> t2966 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*length_a_489).value()), implicit_cast<TNode<Smi>>(t2965)));
            USE(implicit_cast<TNode<BoolT>>(t2966));
            Branch(implicit_cast<TNode<BoolT>>(t2966), label__True_871, label__False_872);
            if (label__True_871->is_used())
            {
              BIND(label__True_871);
              // ../../third_party/v8/builtins/array-sort.tq:1339:25
              {
                // ../../third_party/v8/builtins/array-sort.tq:1340:9
                CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<FixedArray>>((*temp_array_1045)), implicit_cast<TNode<Smi>>((*cursor_temp_493).value()), implicit_cast<TNode<Smi>>((*length_a_489).value()), label_Bailout_832);
              }
              Goto(label__False_872);
            }
            BIND(label__False_872);
          }
        }
        Goto(label_try_done_1046_1462);
      }
      if (label_CopyB_834->is_used())
      {
        BIND(label_CopyB_834);
        // ../../third_party/v8/builtins/array-sort.tq:1345:17
        {
          // ../../third_party/v8/builtins/array-sort.tq:1346:7
          // ../../third_party/v8/builtins/array-sort.tq:1348:7
          CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>((*cursor_b_494).value()), implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>((*length_b_490).value()), label_Bailout_832);
          // ../../third_party/v8/builtins/array-sort.tq:1351:7
          TNode<Smi> t2967 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_492).value()), implicit_cast<TNode<Smi>>((*length_b_490).value())));
          USE(implicit_cast<TNode<Smi>>(t2967));
          TNode<Object> t2968 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1045)), implicit_cast<TNode<Smi>>((*cursor_temp_493).value())));
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1044)), implicit_cast<TNode<HeapObject>>((*elements_491).value()), implicit_cast<TNode<Smi>>(t2967), implicit_cast<TNode<Object>>(t2968), label_Bailout_832);
        }
        Goto(label_try_done_1046_1462);
      }
      BIND(label_try_done_1046_1462);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::MergeHigh(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthA, TNode<Smi> p_baseB, TNode<Smi> p_lengthB, Label* label_Bailout_873) {
  Label label_macro_end_1468_impl(this, {});
  Label* label_macro_end_1468 = &label_macro_end_1468_impl;
  USE(label_macro_end_1468);
  // ../../third_party/v8/builtins/array-sort.tq:1365:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1366:5
    // ../../third_party/v8/builtins/array-sort.tq:1367:5
    // ../../third_party/v8/builtins/array-sort.tq:1368:5
    // ../../third_party/v8/builtins/array-sort.tq:1370:5
    TVARIABLE(Smi, length_a_502_impl);
    auto length_a_502 = &length_a_502_impl;
    USE(length_a_502);
    *length_a_502 = implicit_cast<TNode<Smi>>(p_lengthA);
    // ../../third_party/v8/builtins/array-sort.tq:1371:5
    TVARIABLE(Smi, length_b_503_impl);
    auto length_b_503 = &length_b_503_impl;
    USE(length_b_503);
    *length_b_503 = implicit_cast<TNode<Smi>>(p_lengthB);
    // ../../third_party/v8/builtins/array-sort.tq:1373:5
    TNode<HeapObject> t2969 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2969));
    TVARIABLE(HeapObject, elements_504_impl);
    auto elements_504 = &elements_504_impl;
    USE(elements_504);
    *elements_504 = implicit_cast<TNode<HeapObject>>(t2969);
    // ../../third_party/v8/builtins/array-sort.tq:1374:5
    TNode<Code> t2970 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2970));
    TNode<Code> LoadF_1052_impl;
    auto LoadF_1052 = &LoadF_1052_impl;
    USE(LoadF_1052);
    *LoadF_1052 = implicit_cast<TNode<Code>>(t2970);
    // ../../third_party/v8/builtins/array-sort.tq:1375:5
    TNode<Code> t2971 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2971));
    TNode<Code> Store_1053_impl;
    auto Store_1053 = &Store_1053_impl;
    USE(Store_1053);
    *Store_1053 = implicit_cast<TNode<Code>>(t2971);
    // ../../third_party/v8/builtins/array-sort.tq:1377:5
    TNode<FixedArray> t2972 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*length_b_503).value())));
    USE(implicit_cast<TNode<FixedArray>>(t2972));
    TNode<FixedArray> temp_array_1054_impl;
    auto temp_array_1054 = &temp_array_1054_impl;
    USE(temp_array_1054);
    *temp_array_1054 = implicit_cast<TNode<FixedArray>>(t2972);
    // ../../third_party/v8/builtins/array-sort.tq:1378:5
    int31_t t2973 = 0;
    TNode<Smi> t2974 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2973)));
    CopyToTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1052)), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>(p_baseB), implicit_cast<TNode<FixedArray>>((*temp_array_1054)), implicit_cast<TNode<Smi>>(t2974), implicit_cast<TNode<Smi>>((*length_b_503).value()), label_Bailout_873);
    // ../../third_party/v8/builtins/array-sort.tq:1383:5
    TNode<Smi> t2975 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_baseB), implicit_cast<TNode<Smi>>((*length_b_503).value())));
    USE(implicit_cast<TNode<Smi>>(t2975));
    int31_t t2976 = 1;
    TNode<Smi> t2977 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2976)));
    TNode<Smi> t2978 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2975), implicit_cast<TNode<Smi>>(t2977)));
    USE(implicit_cast<TNode<Smi>>(t2978));
    TVARIABLE(Smi, dest_505_impl);
    auto dest_505 = &dest_505_impl;
    USE(dest_505);
    *dest_505 = implicit_cast<TNode<Smi>>(t2978);
    // ../../third_party/v8/builtins/array-sort.tq:1384:5
    int31_t t2979 = 1;
    TNode<Smi> t2980 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2979)));
    TNode<Smi> t2981 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t2980)));
    USE(implicit_cast<TNode<Smi>>(t2981));
    TVARIABLE(Smi, cursor_temp_506_impl);
    auto cursor_temp_506 = &cursor_temp_506_impl;
    USE(cursor_temp_506);
    *cursor_temp_506 = implicit_cast<TNode<Smi>>(t2981);
    // ../../third_party/v8/builtins/array-sort.tq:1385:5
    TNode<Smi> t2982 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<Smi>>((*length_a_502).value())));
    USE(implicit_cast<TNode<Smi>>(t2982));
    int31_t t2983 = 1;
    TNode<Smi> t2984 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2983)));
    TNode<Smi> t2985 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2982), implicit_cast<TNode<Smi>>(t2984)));
    USE(implicit_cast<TNode<Smi>>(t2985));
    TVARIABLE(Smi, cursor_a_507_impl);
    auto cursor_a_507 = &cursor_a_507_impl;
    USE(cursor_a_507);
    *cursor_a_507 = implicit_cast<TNode<Smi>>(t2985);
    // ../../third_party/v8/builtins/array-sort.tq:1387:5
    TNode<Smi> t2986 = implicit_cast<TNode<Smi>>((*cursor_a_507).value());
    USE(t2986);
    TNode<Smi> t2987 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t2988 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_507).value()), implicit_cast<TNode<Smi>>(t2987)));
    *cursor_a_507 = implicit_cast<TNode<Smi>>(t2988);
    TNode<Smi> t2989 = implicit_cast<TNode<Smi>>((*dest_505).value());
    USE(t2989);
    TNode<Smi> t2990 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t2991 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>(t2990)));
    *dest_505 = implicit_cast<TNode<Smi>>(t2991);
    CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1052)), implicit_cast<TNode<Code>>((*Store_1053)), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>(t2986), implicit_cast<TNode<Smi>>(t2989), label_Bailout_873);
    // ../../third_party/v8/builtins/array-sort.tq:1390:5
    {
      Label label_try_done_1055_1469_impl(this);
      Label* label_try_done_1055_1469 = &label_try_done_1055_1469_impl;
      USE(label_try_done_1055_1469);
      Label label_Succeed_874_impl(this);
      Label* label_Succeed_874 = &label_Succeed_874_impl;
      USE(label_Succeed_874);
      Label label_CopyA_875_impl(this);
      Label* label_CopyA_875 = &label_CopyA_875_impl;
      USE(label_CopyA_875);
      Label label_try_begin_1056_1470_impl(this);
      Label* label_try_begin_1056_1470 = &label_try_begin_1056_1470_impl;
      USE(label_try_begin_1056_1470);
      Goto(label_try_begin_1056_1470);
      if (label_try_begin_1056_1470->is_used())
      {
        BIND(label_try_begin_1056_1470);
        // ../../third_party/v8/builtins/array-sort.tq:1390:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1391:7
          {
            Label label__True_876_impl(this);
            Label* label__True_876 = &label__True_876_impl;
            USE(label__True_876);
            Label label__False_877_impl(this, {length_a_502});
            Label* label__False_877 = &label__False_877_impl;
            USE(label__False_877);
            TNode<Smi> t2992 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t2993 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_502).value()), implicit_cast<TNode<Smi>>(t2992)));
            *length_a_502 = implicit_cast<TNode<Smi>>(t2993);
            int31_t t2994 = 0;
            TNode<Smi> t2995 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2994)));
            TNode<BoolT> t2996 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2993), implicit_cast<TNode<Smi>>(t2995)));
            USE(implicit_cast<TNode<BoolT>>(t2996));
            Branch(implicit_cast<TNode<BoolT>>(t2996), label__True_876, label__False_877);
            if (label__True_876->is_used())
            {
              BIND(label__True_876);
              // ../../third_party/v8/builtins/array-sort.tq:1391:28
              Goto(label_Succeed_874);
            }
            BIND(label__False_877);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1392:7
          {
            Label label__True_878_impl(this);
            Label* label__True_878 = &label__True_878_impl;
            USE(label__True_878);
            Label label__False_879_impl(this, {});
            Label* label__False_879 = &label__False_879_impl;
            USE(label__False_879);
            int31_t t2997 = 1;
            TNode<Smi> t2998 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2997)));
            TNode<BoolT> t2999 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t2998)));
            USE(implicit_cast<TNode<BoolT>>(t2999));
            Branch(implicit_cast<TNode<BoolT>>(t2999), label__True_878, label__False_879);
            if (label__True_878->is_used())
            {
              BIND(label__True_878);
              // ../../third_party/v8/builtins/array-sort.tq:1392:26
              Goto(label_CopyA_875);
            }
            BIND(label__False_879);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1394:7
          TNode<Object> t3000 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx())));
          TNode<Smi> t3001 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t3000)));
          USE(implicit_cast<TNode<Smi>>(t3001));
          TVARIABLE(Smi, min_gallop_508_impl);
          auto min_gallop_508 = &min_gallop_508_impl;
          USE(min_gallop_508);
          *min_gallop_508 = implicit_cast<TNode<Smi>>(t3001);
          // ../../third_party/v8/builtins/array-sort.tq:1397:7
          {
            Label label__True_880_impl(this);
            Label* label__True_880 = &label__True_880_impl;
            USE(label__True_880);
            Label label__False_881_impl(this);
            Label* label__False_881 = &label__False_881_impl;
            USE(label__False_881);
            Label label_header_1057_1471_impl(this, {cursor_a_507, cursor_temp_506, dest_505, elements_504, length_a_502, length_b_503, min_gallop_508});
            Label* label_header_1057_1471 = &label_header_1057_1471_impl;
            USE(label_header_1057_1471);
            Goto(label_header_1057_1471);
            BIND(label_header_1057_1471);
            TNode<BoolT> t3002 = UncheckedCast<BoolT>(Int32TrueConstant());
            USE(implicit_cast<TNode<BoolT>>(t3002));
            Branch(implicit_cast<TNode<BoolT>>(t3002), label__True_880, label__False_881);
            if (label__True_880->is_used())
            {
              BIND(label__True_880);
              // ../../third_party/v8/builtins/array-sort.tq:1397:35
              {
                // ../../third_party/v8/builtins/array-sort.tq:1398:9
                int31_t t3003 = 0;
                TVARIABLE(Smi, nof_wins_a_509_impl);
                auto nof_wins_a_509 = &nof_wins_a_509_impl;
                USE(nof_wins_a_509);
                TNode<Smi> t3004 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3003)));
                *nof_wins_a_509 = implicit_cast<TNode<Smi>>(t3004);
                // ../../third_party/v8/builtins/array-sort.tq:1399:9
                int31_t t3005 = 0;
                TVARIABLE(Smi, nof_wins_b_510_impl);
                auto nof_wins_b_510 = &nof_wins_b_510_impl;
                USE(nof_wins_b_510);
                TNode<Smi> t3006 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3005)));
                *nof_wins_b_510 = implicit_cast<TNode<Smi>>(t3006);
                // ../../third_party/v8/builtins/array-sort.tq:1405:9
                {
                  Label label__True_882_impl(this);
                  Label* label__True_882 = &label__True_882_impl;
                  USE(label__True_882);
                  Label label__False_883_impl(this);
                  Label* label__False_883 = &label__False_883_impl;
                  USE(label__False_883);
                  Label label_header_1058_1472_impl(this, {cursor_a_507, cursor_temp_506, dest_505, elements_504, length_a_502, length_b_503, nof_wins_a_509, nof_wins_b_510});
                  Label* label_header_1058_1472 = &label_header_1058_1472_impl;
                  USE(label_header_1058_1472);
                  Goto(label_header_1058_1472);
                  BIND(label_header_1058_1472);
                  TNode<BoolT> t3007 = UncheckedCast<BoolT>(Int32TrueConstant());
                  USE(implicit_cast<TNode<BoolT>>(t3007));
                  Branch(implicit_cast<TNode<BoolT>>(t3007), label__True_882, label__False_883);
                  if (label__True_882->is_used())
                  {
                    BIND(label__True_882);
                    // ../../third_party/v8/builtins/array-sort.tq:1405:37
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1406:11
                      // ../../third_party/v8/builtins/array-sort.tq:1408:11
                      TNode<Object> t3008 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1052)), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>((*cursor_a_507).value()), label_Bailout_873));
                      USE(implicit_cast<TNode<Object>>(t3008));
                      TVARIABLE(Object, element_a_511_impl);
                      auto element_a_511 = &element_a_511_impl;
                      USE(element_a_511);
                      *element_a_511 = implicit_cast<TNode<Object>>(t3008);
                      // ../../third_party/v8/builtins/array-sort.tq:1411:11
                      TNode<Object> t3009 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1054)), implicit_cast<TNode<Smi>>((*cursor_temp_506).value())));
                      TNode<Number> t3010 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(t3009), implicit_cast<TNode<Object>>((*element_a_511).value()), label_Bailout_873));
                      USE(implicit_cast<TNode<Number>>(t3010));
                      TVARIABLE(Number, order_512_impl);
                      auto order_512 = &order_512_impl;
                      USE(order_512);
                      *order_512 = implicit_cast<TNode<Number>>(t3010);
                      // ../../third_party/v8/builtins/array-sort.tq:1414:11
                      TNode<HeapObject> t3011 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t3011));
                      *elements_504 = implicit_cast<TNode<HeapObject>>(t3011);
                      // ../../third_party/v8/builtins/array-sort.tq:1416:11
                      {
                        Label label__True_884_impl(this);
                        Label* label__True_884 = &label__True_884_impl;
                        USE(label__True_884);
                        Label label__False_885_impl(this);
                        Label* label__False_885 = &label__False_885_impl;
                        USE(label__False_885);
                        Label label_if_done_label_1059_1473_impl(this, {cursor_a_507, cursor_temp_506, dest_505, length_a_502, length_b_503, nof_wins_a_509, nof_wins_b_510});
                        Label* label_if_done_label_1059_1473 = &label_if_done_label_1059_1473_impl;
                        USE(label_if_done_label_1059_1473);
                        int31_t t3012 = 0;
                        TNode<Number> t3013 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3012)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_512).value()), implicit_cast<TNode<Number>>(t3013), label__True_884, label__False_885);
                        if (label__True_884->is_used())
                        {
                          BIND(label__True_884);
                          // ../../third_party/v8/builtins/array-sort.tq:1416:26
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1417:13
                            CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1052)), implicit_cast<TNode<Code>>((*Store_1053)), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>((*cursor_a_507).value()), implicit_cast<TNode<Smi>>((*dest_505).value()), label_Bailout_873);
                            // ../../third_party/v8/builtins/array-sort.tq:1421:13
                            TNode<Smi> t3014 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3015 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_507).value()), implicit_cast<TNode<Smi>>(t3014)));
                            *cursor_a_507 = implicit_cast<TNode<Smi>>(t3015);
                            // ../../third_party/v8/builtins/array-sort.tq:1422:13
                            TNode<Smi> t3016 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3017 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>(t3016)));
                            *dest_505 = implicit_cast<TNode<Smi>>(t3017);
                            // ../../third_party/v8/builtins/array-sort.tq:1423:13
                            TNode<Smi> t3018 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3019 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nof_wins_a_509).value()), implicit_cast<TNode<Smi>>(t3018)));
                            *nof_wins_a_509 = implicit_cast<TNode<Smi>>(t3019);
                            // ../../third_party/v8/builtins/array-sort.tq:1424:13
                            TNode<Smi> t3020 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3021 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_502).value()), implicit_cast<TNode<Smi>>(t3020)));
                            *length_a_502 = implicit_cast<TNode<Smi>>(t3021);
                            // ../../third_party/v8/builtins/array-sort.tq:1425:13
                            int31_t t3022 = 0;
                            TNode<Smi> t3023 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3022)));
                            *nof_wins_b_510 = implicit_cast<TNode<Smi>>(t3023);
                            // ../../third_party/v8/builtins/array-sort.tq:1427:13
                            {
                              Label label__True_886_impl(this);
                              Label* label__True_886 = &label__True_886_impl;
                              USE(label__True_886);
                              Label label__False_887_impl(this, {});
                              Label* label__False_887 = &label__False_887_impl;
                              USE(label__False_887);
                              int31_t t3024 = 0;
                              TNode<Smi> t3025 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3024)));
                              TNode<BoolT> t3026 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_502).value()), implicit_cast<TNode<Smi>>(t3025)));
                              USE(implicit_cast<TNode<BoolT>>(t3026));
                              Branch(implicit_cast<TNode<BoolT>>(t3026), label__True_886, label__False_887);
                              if (label__True_886->is_used())
                              {
                                BIND(label__True_886);
                                // ../../third_party/v8/builtins/array-sort.tq:1427:32
                                Goto(label_Succeed_874);
                              }
                              BIND(label__False_887);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1428:13
                            {
                              Label label__True_888_impl(this);
                              Label* label__True_888 = &label__True_888_impl;
                              USE(label__True_888);
                              Label label__False_889_impl(this, {});
                              Label* label__False_889 = &label__False_889_impl;
                              USE(label__False_889);
                              TNode<BoolT> t3027 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_a_509).value()), implicit_cast<TNode<Smi>>((*min_gallop_508).value())));
                              USE(implicit_cast<TNode<BoolT>>(t3027));
                              Branch(implicit_cast<TNode<BoolT>>(t3027), label__True_888, label__False_889);
                              if (label__True_888->is_used())
                              {
                                BIND(label__True_888);
                                // ../../third_party/v8/builtins/array-sort.tq:1428:43
                                Goto(label__False_883);
                              }
                              BIND(label__False_889);
                            }
                          }
                          Goto(label_if_done_label_1059_1473);
                        }
                        if (label__False_885->is_used())
                        {
                          BIND(label__False_885);
                          // ../../third_party/v8/builtins/array-sort.tq:1429:18
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1430:13
                            TNode<Object> t3028 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1054)), implicit_cast<TNode<Smi>>((*cursor_temp_506).value())));
                            CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1053)), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Object>>(t3028), label_Bailout_873);
                            // ../../third_party/v8/builtins/array-sort.tq:1435:13
                            TNode<Smi> t3029 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3030 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_temp_506).value()), implicit_cast<TNode<Smi>>(t3029)));
                            *cursor_temp_506 = implicit_cast<TNode<Smi>>(t3030);
                            // ../../third_party/v8/builtins/array-sort.tq:1436:13
                            TNode<Smi> t3031 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3032 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>(t3031)));
                            *dest_505 = implicit_cast<TNode<Smi>>(t3032);
                            // ../../third_party/v8/builtins/array-sort.tq:1437:13
                            TNode<Smi> t3033 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3034 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nof_wins_b_510).value()), implicit_cast<TNode<Smi>>(t3033)));
                            *nof_wins_b_510 = implicit_cast<TNode<Smi>>(t3034);
                            // ../../third_party/v8/builtins/array-sort.tq:1438:13
                            TNode<Smi> t3035 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3036 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t3035)));
                            *length_b_503 = implicit_cast<TNode<Smi>>(t3036);
                            // ../../third_party/v8/builtins/array-sort.tq:1439:13
                            int31_t t3037 = 0;
                            TNode<Smi> t3038 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3037)));
                            *nof_wins_a_509 = implicit_cast<TNode<Smi>>(t3038);
                            // ../../third_party/v8/builtins/array-sort.tq:1441:13
                            {
                              Label label__True_890_impl(this);
                              Label* label__True_890 = &label__True_890_impl;
                              USE(label__True_890);
                              Label label__False_891_impl(this, {});
                              Label* label__False_891 = &label__False_891_impl;
                              USE(label__False_891);
                              int31_t t3039 = 1;
                              TNode<Smi> t3040 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3039)));
                              TNode<BoolT> t3041 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t3040)));
                              USE(implicit_cast<TNode<BoolT>>(t3041));
                              Branch(implicit_cast<TNode<BoolT>>(t3041), label__True_890, label__False_891);
                              if (label__True_890->is_used())
                              {
                                BIND(label__True_890);
                                // ../../third_party/v8/builtins/array-sort.tq:1441:32
                                Goto(label_CopyA_875);
                              }
                              BIND(label__False_891);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1442:13
                            {
                              Label label__True_892_impl(this);
                              Label* label__True_892 = &label__True_892_impl;
                              USE(label__True_892);
                              Label label__False_893_impl(this, {});
                              Label* label__False_893 = &label__False_893_impl;
                              USE(label__False_893);
                              TNode<BoolT> t3042 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_b_510).value()), implicit_cast<TNode<Smi>>((*min_gallop_508).value())));
                              USE(implicit_cast<TNode<BoolT>>(t3042));
                              Branch(implicit_cast<TNode<BoolT>>(t3042), label__True_892, label__False_893);
                              if (label__True_892->is_used())
                              {
                                BIND(label__True_892);
                                // ../../third_party/v8/builtins/array-sort.tq:1442:43
                                Goto(label__False_883);
                              }
                              BIND(label__False_893);
                            }
                          }
                          Goto(label_if_done_label_1059_1473);
                        }
                        BIND(label_if_done_label_1059_1473);
                      }
                    }
                    Goto(label_header_1058_1472);
                  }
                  BIND(label__False_883);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1449:9
                TNode<Smi> t3043 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3044 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*min_gallop_508).value()), implicit_cast<TNode<Smi>>(t3043)));
                *min_gallop_508 = implicit_cast<TNode<Smi>>(t3044);
                // ../../third_party/v8/builtins/array-sort.tq:1450:9
                TVARIABLE(BoolT, first_iteration_513_impl);
                auto first_iteration_513 = &first_iteration_513_impl;
                USE(first_iteration_513);
                TNode<BoolT> t3045 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                *first_iteration_513 = implicit_cast<TNode<BoolT>>(t3045);
                // ../../third_party/v8/builtins/array-sort.tq:1451:9
                {
                  Label label__True_894_impl(this);
                  Label* label__True_894 = &label__True_894_impl;
                  USE(label__True_894);
                  Label label__False_895_impl(this);
                  Label* label__False_895 = &label__False_895_impl;
                  USE(label__False_895);
                  Label label_header_1060_1474_impl(this, {cursor_a_507, cursor_temp_506, dest_505, first_iteration_513, length_a_502, length_b_503, min_gallop_508, nof_wins_a_509, nof_wins_b_510});
                  Label* label_header_1060_1474 = &label_header_1060_1474_impl;
                  USE(label_header_1060_1474);
                  Goto(label_header_1060_1474);
                  BIND(label_header_1060_1474);
                  Label label__False_896_impl(this);
                  Label* label__False_896 = &label__False_896_impl;
                  USE(label__False_896);
                  Label label__False_897_impl(this);
                  Label* label__False_897 = &label__False_897_impl;
                  USE(label__False_897);
                  TNode<Smi> t3046 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t3047 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_a_509).value()), implicit_cast<TNode<Smi>>(t3046)));
                  USE(implicit_cast<TNode<BoolT>>(t3047));
                  GotoIf(implicit_cast<TNode<BoolT>>(t3047), label__True_894);
                  TNode<Smi> t3048 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t3049 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_b_510).value()), implicit_cast<TNode<Smi>>(t3048)));
                  USE(implicit_cast<TNode<BoolT>>(t3049));
                  GotoIf(implicit_cast<TNode<BoolT>>(t3049), label__True_894);
                  Branch(implicit_cast<TNode<BoolT>>((*first_iteration_513).value()), label__True_894, label__False_895);
                  if (label__True_894->is_used())
                  {
                    BIND(label__True_894);
                    // ../../third_party/v8/builtins/array-sort.tq:1452:33
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1453:11
                      TNode<BoolT> t3050 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                      *first_iteration_513 = implicit_cast<TNode<BoolT>>(t3050);
                      // ../../third_party/v8/builtins/array-sort.tq:1455:11
                      // ../../third_party/v8/builtins/array-sort.tq:1457:11
                      int31_t t3051 = 1;
                      int31_t t3052 = 1;
                      TNode<Smi> t3053 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3052)));
                      TNode<Smi> t3054 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*min_gallop_508).value()), implicit_cast<TNode<Smi>>(t3053)));
                      USE(implicit_cast<TNode<Smi>>(t3054));
                      TNode<Smi> t3055 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3051)));
                      TNode<Smi> t3056 = UncheckedCast<Smi>(SmiMax(implicit_cast<TNode<Smi>>(t3055), implicit_cast<TNode<Smi>>(t3054)));
                      USE(implicit_cast<TNode<Smi>>(t3056));
                      *min_gallop_508 = implicit_cast<TNode<Smi>>(t3056);
                      // ../../third_party/v8/builtins/array-sort.tq:1458:11
                      StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*min_gallop_508).value()));
                      // ../../third_party/v8/builtins/array-sort.tq:1460:11
                      TNode<Object> t3057 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1054)), implicit_cast<TNode<Smi>>((*cursor_temp_506).value())));
                      int31_t t3058 = 1;
                      TNode<Smi> t3059 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3058)));
                      TNode<Smi> t3060 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_502).value()), implicit_cast<TNode<Smi>>(t3059)));
                      USE(implicit_cast<TNode<Smi>>(t3060));
                      TNode<Smi> t3061 = UncheckedCast<Smi>(CallGallopRight(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1052)), implicit_cast<TNode<Object>>(t3057), implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<Smi>>((*length_a_502).value()), implicit_cast<TNode<Smi>>(t3060), implicit_cast<TNode<Oddball>>(False()), label_Bailout_873));
                      USE(implicit_cast<TNode<Smi>>(t3061));
                      TVARIABLE(Smi, k_514_impl);
                      auto k_514 = &k_514_impl;
                      USE(k_514);
                      *k_514 = implicit_cast<TNode<Smi>>(t3061);
                      // ../../third_party/v8/builtins/array-sort.tq:1464:11
                      // ../../third_party/v8/builtins/array-sort.tq:1465:11
                      TNode<Smi> t3062 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_502).value()), implicit_cast<TNode<Smi>>((*k_514).value())));
                      USE(implicit_cast<TNode<Smi>>(t3062));
                      *nof_wins_a_509 = implicit_cast<TNode<Smi>>(t3062);
                      // ../../third_party/v8/builtins/array-sort.tq:1467:11
                      {
                        Label label__True_898_impl(this);
                        Label* label__True_898 = &label__True_898_impl;
                        USE(label__True_898);
                        Label label__False_899_impl(this, {cursor_a_507, dest_505, length_a_502});
                        Label* label__False_899 = &label__False_899_impl;
                        USE(label__False_899);
                        int31_t t3063 = 0;
                        TNode<Smi> t3064 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3063)));
                        TNode<BoolT> t3065 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nof_wins_a_509).value()), implicit_cast<TNode<Smi>>(t3064)));
                        USE(implicit_cast<TNode<BoolT>>(t3065));
                        Branch(implicit_cast<TNode<BoolT>>(t3065), label__True_898, label__False_899);
                        if (label__True_898->is_used())
                        {
                          BIND(label__True_898);
                          // ../../third_party/v8/builtins/array-sort.tq:1467:31
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1468:13
                            TNode<Smi> t3066 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_509).value())));
                            USE(implicit_cast<TNode<Smi>>(t3066));
                            *dest_505 = implicit_cast<TNode<Smi>>(t3066);
                            // ../../third_party/v8/builtins/array-sort.tq:1469:13
                            TNode<Smi> t3067 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_507).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_509).value())));
                            USE(implicit_cast<TNode<Smi>>(t3067));
                            *cursor_a_507 = implicit_cast<TNode<Smi>>(t3067);
                            // ../../third_party/v8/builtins/array-sort.tq:1470:13
                            int31_t t3068 = 1;
                            TNode<Smi> t3069 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3068)));
                            TNode<Smi> t3070 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_a_507).value()), implicit_cast<TNode<Smi>>(t3069)));
                            USE(implicit_cast<TNode<Smi>>(t3070));
                            int31_t t3071 = 1;
                            TNode<Smi> t3072 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3071)));
                            TNode<Smi> t3073 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>(t3072)));
                            USE(implicit_cast<TNode<Smi>>(t3073));
                            CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>(t3070), implicit_cast<TNode<Smi>>(t3073), implicit_cast<TNode<Smi>>((*nof_wins_a_509).value()), label_Bailout_873);
                            // ../../third_party/v8/builtins/array-sort.tq:1475:13
                            TNode<Smi> t3074 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_502).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_509).value())));
                            USE(implicit_cast<TNode<Smi>>(t3074));
                            *length_a_502 = implicit_cast<TNode<Smi>>(t3074);
                            // ../../third_party/v8/builtins/array-sort.tq:1476:13
                            {
                              Label label__True_900_impl(this);
                              Label* label__True_900 = &label__True_900_impl;
                              USE(label__True_900);
                              Label label__False_901_impl(this, {});
                              Label* label__False_901 = &label__False_901_impl;
                              USE(label__False_901);
                              int31_t t3075 = 0;
                              TNode<Smi> t3076 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3075)));
                              TNode<BoolT> t3077 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_502).value()), implicit_cast<TNode<Smi>>(t3076)));
                              USE(implicit_cast<TNode<BoolT>>(t3077));
                              Branch(implicit_cast<TNode<BoolT>>(t3077), label__True_900, label__False_901);
                              if (label__True_900->is_used())
                              {
                                BIND(label__True_900);
                                // ../../third_party/v8/builtins/array-sort.tq:1476:32
                                Goto(label_Succeed_874);
                              }
                              BIND(label__False_901);
                            }
                          }
                          Goto(label__False_899);
                        }
                        BIND(label__False_899);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1478:11
                      TNode<Smi> t3078 = implicit_cast<TNode<Smi>>((*dest_505).value());
                      USE(t3078);
                      TNode<Smi> t3079 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3080 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>(t3079)));
                      *dest_505 = implicit_cast<TNode<Smi>>(t3080);
                      TNode<Smi> t3081 = implicit_cast<TNode<Smi>>((*cursor_temp_506).value());
                      USE(t3081);
                      TNode<Smi> t3082 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3083 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_temp_506).value()), implicit_cast<TNode<Smi>>(t3082)));
                      *cursor_temp_506 = implicit_cast<TNode<Smi>>(t3083);
                      TNode<Object> t3084 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1054)), implicit_cast<TNode<Smi>>(t3081)));
                      CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1053)), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>(t3078), implicit_cast<TNode<Object>>(t3084), label_Bailout_873);
                      // ../../third_party/v8/builtins/array-sort.tq:1482:11
                      {
                        Label label__True_902_impl(this);
                        Label* label__True_902 = &label__True_902_impl;
                        USE(label__True_902);
                        Label label__False_903_impl(this, {length_b_503});
                        Label* label__False_903 = &label__False_903_impl;
                        USE(label__False_903);
                        TNode<Smi> t3085 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t3086 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t3085)));
                        *length_b_503 = implicit_cast<TNode<Smi>>(t3086);
                        int31_t t3087 = 1;
                        TNode<Smi> t3088 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3087)));
                        TNode<BoolT> t3089 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3086), implicit_cast<TNode<Smi>>(t3088)));
                        USE(implicit_cast<TNode<BoolT>>(t3089));
                        Branch(implicit_cast<TNode<BoolT>>(t3089), label__True_902, label__False_903);
                        if (label__True_902->is_used())
                        {
                          BIND(label__True_902);
                          // ../../third_party/v8/builtins/array-sort.tq:1482:32
                          Goto(label_CopyA_875);
                        }
                        BIND(label__False_903);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1484:11
                      TNode<Object> t3090 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1052)), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>((*cursor_a_507).value()), label_Bailout_873));
                      USE(implicit_cast<TNode<Object>>(t3090));
                      TVARIABLE(Object, key_515_impl);
                      auto key_515 = &key_515_impl;
                      USE(key_515);
                      *key_515 = implicit_cast<TNode<Object>>(t3090);
                      // ../../third_party/v8/builtins/array-sort.tq:1487:11
                      int31_t t3091 = 0;
                      int31_t t3092 = 1;
                      TNode<Smi> t3093 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3092)));
                      TNode<Smi> t3094 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t3093)));
                      USE(implicit_cast<TNode<Smi>>(t3094));
                      TNode<Smi> t3095 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3091)));
                      TNode<Smi> t3096 = UncheckedCast<Smi>(CallGallopLeft(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad19ATTempArrayElements).code())), implicit_cast<TNode<Object>>((*key_515).value()), implicit_cast<TNode<Smi>>(t3095), implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t3094), implicit_cast<TNode<Oddball>>(True()), label_Bailout_873));
                      USE(implicit_cast<TNode<Smi>>(t3096));
                      *k_514 = implicit_cast<TNode<Smi>>(t3096);
                      // ../../third_party/v8/builtins/array-sort.tq:1490:11
                      // ../../third_party/v8/builtins/array-sort.tq:1491:11
                      TNode<Smi> t3097 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>((*k_514).value())));
                      USE(implicit_cast<TNode<Smi>>(t3097));
                      *nof_wins_b_510 = implicit_cast<TNode<Smi>>(t3097);
                      // ../../third_party/v8/builtins/array-sort.tq:1493:11
                      {
                        Label label__True_904_impl(this);
                        Label* label__True_904 = &label__True_904_impl;
                        USE(label__True_904);
                        Label label__False_905_impl(this, {cursor_temp_506, dest_505, length_b_503});
                        Label* label__False_905 = &label__False_905_impl;
                        USE(label__False_905);
                        int31_t t3098 = 0;
                        TNode<Smi> t3099 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3098)));
                        TNode<BoolT> t3100 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nof_wins_b_510).value()), implicit_cast<TNode<Smi>>(t3099)));
                        USE(implicit_cast<TNode<BoolT>>(t3100));
                        Branch(implicit_cast<TNode<BoolT>>(t3100), label__True_904, label__False_905);
                        if (label__True_904->is_used())
                        {
                          BIND(label__True_904);
                          // ../../third_party/v8/builtins/array-sort.tq:1493:31
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1494:13
                            TNode<Smi> t3101 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_510).value())));
                            USE(implicit_cast<TNode<Smi>>(t3101));
                            *dest_505 = implicit_cast<TNode<Smi>>(t3101);
                            // ../../third_party/v8/builtins/array-sort.tq:1495:13
                            TNode<Smi> t3102 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_temp_506).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_510).value())));
                            USE(implicit_cast<TNode<Smi>>(t3102));
                            *cursor_temp_506 = implicit_cast<TNode<Smi>>(t3102);
                            // ../../third_party/v8/builtins/array-sort.tq:1496:13
                            int31_t t3103 = 1;
                            TNode<Smi> t3104 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3103)));
                            TNode<Smi> t3105 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>(t3104)));
                            USE(implicit_cast<TNode<Smi>>(t3105));
                            int31_t t3106 = 1;
                            TNode<Smi> t3107 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3106)));
                            TNode<Smi> t3108 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_temp_506).value()), implicit_cast<TNode<Smi>>(t3107)));
                            USE(implicit_cast<TNode<Smi>>(t3108));
                            CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>(t3105), implicit_cast<TNode<FixedArray>>((*temp_array_1054)), implicit_cast<TNode<Smi>>(t3108), implicit_cast<TNode<Smi>>((*nof_wins_b_510).value()), label_Bailout_873);
                            // ../../third_party/v8/builtins/array-sort.tq:1500:13
                            TNode<Smi> t3109 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_510).value())));
                            USE(implicit_cast<TNode<Smi>>(t3109));
                            *length_b_503 = implicit_cast<TNode<Smi>>(t3109);
                            // ../../third_party/v8/builtins/array-sort.tq:1501:13
                            {
                              Label label__True_906_impl(this);
                              Label* label__True_906 = &label__True_906_impl;
                              USE(label__True_906);
                              Label label__False_907_impl(this, {});
                              Label* label__False_907 = &label__False_907_impl;
                              USE(label__False_907);
                              int31_t t3110 = 1;
                              TNode<Smi> t3111 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3110)));
                              TNode<BoolT> t3112 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t3111)));
                              USE(implicit_cast<TNode<BoolT>>(t3112));
                              Branch(implicit_cast<TNode<BoolT>>(t3112), label__True_906, label__False_907);
                              if (label__True_906->is_used())
                              {
                                BIND(label__True_906);
                                // ../../third_party/v8/builtins/array-sort.tq:1501:32
                                Goto(label_CopyA_875);
                              }
                              BIND(label__False_907);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1505:13
                            {
                              Label label__True_908_impl(this);
                              Label* label__True_908 = &label__True_908_impl;
                              USE(label__True_908);
                              Label label__False_909_impl(this, {});
                              Label* label__False_909 = &label__False_909_impl;
                              USE(label__False_909);
                              int31_t t3113 = 0;
                              TNode<Smi> t3114 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3113)));
                              TNode<BoolT> t3115 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t3114)));
                              USE(implicit_cast<TNode<BoolT>>(t3115));
                              Branch(implicit_cast<TNode<BoolT>>(t3115), label__True_908, label__False_909);
                              if (label__True_908->is_used())
                              {
                                BIND(label__True_908);
                                // ../../third_party/v8/builtins/array-sort.tq:1505:32
                                Goto(label_Succeed_874);
                              }
                              BIND(label__False_909);
                            }
                          }
                          Goto(label__False_905);
                        }
                        BIND(label__False_905);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1507:11
                      TNode<Smi> t3116 = implicit_cast<TNode<Smi>>((*cursor_a_507).value());
                      USE(t3116);
                      TNode<Smi> t3117 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3118 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_507).value()), implicit_cast<TNode<Smi>>(t3117)));
                      *cursor_a_507 = implicit_cast<TNode<Smi>>(t3118);
                      TNode<Smi> t3119 = implicit_cast<TNode<Smi>>((*dest_505).value());
                      USE(t3119);
                      TNode<Smi> t3120 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3121 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>(t3120)));
                      *dest_505 = implicit_cast<TNode<Smi>>(t3121);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1052)), implicit_cast<TNode<Code>>((*Store_1053)), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>(t3116), implicit_cast<TNode<Smi>>(t3119), label_Bailout_873);
                      // ../../third_party/v8/builtins/array-sort.tq:1510:11
                      {
                        Label label__True_910_impl(this);
                        Label* label__True_910 = &label__True_910_impl;
                        USE(label__True_910);
                        Label label__False_911_impl(this, {length_a_502});
                        Label* label__False_911 = &label__False_911_impl;
                        USE(label__False_911);
                        TNode<Smi> t3122 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t3123 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_502).value()), implicit_cast<TNode<Smi>>(t3122)));
                        *length_a_502 = implicit_cast<TNode<Smi>>(t3123);
                        int31_t t3124 = 0;
                        TNode<Smi> t3125 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3124)));
                        TNode<BoolT> t3126 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3123), implicit_cast<TNode<Smi>>(t3125)));
                        USE(implicit_cast<TNode<BoolT>>(t3126));
                        Branch(implicit_cast<TNode<BoolT>>(t3126), label__True_910, label__False_911);
                        if (label__True_910->is_used())
                        {
                          BIND(label__True_910);
                          // ../../third_party/v8/builtins/array-sort.tq:1510:32
                          Goto(label_Succeed_874);
                        }
                        BIND(label__False_911);
                      }
                    }
                    Goto(label_header_1060_1474);
                  }
                  BIND(label__False_895);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1512:9
                TNode<Smi> t3127 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3128 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*min_gallop_508).value()), implicit_cast<TNode<Smi>>(t3127)));
                *min_gallop_508 = implicit_cast<TNode<Smi>>(t3128);
                // ../../third_party/v8/builtins/array-sort.tq:1513:9
                StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*min_gallop_508).value()));
              }
              Goto(label_header_1057_1471);
            }
            BIND(label__False_881);
          }
        }
        Goto(label_try_done_1055_1469);
      }
      if (label_Succeed_874->is_used())
      {
        BIND(label_Succeed_874);
        // ../../third_party/v8/builtins/array-sort.tq:1516:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1517:7
          {
            Label label__True_912_impl(this);
            Label* label__True_912 = &label__True_912_impl;
            USE(label__True_912);
            Label label__False_913_impl(this, {});
            Label* label__False_913 = &label__False_913_impl;
            USE(label__False_913);
            int31_t t3129 = 0;
            TNode<Smi> t3130 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3129)));
            TNode<BoolT> t3131 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t3130)));
            USE(implicit_cast<TNode<BoolT>>(t3131));
            Branch(implicit_cast<TNode<BoolT>>(t3131), label__True_912, label__False_913);
            if (label__True_912->is_used())
            {
              BIND(label__True_912);
              // ../../third_party/v8/builtins/array-sort.tq:1517:25
              {
                // ../../third_party/v8/builtins/array-sort.tq:1518:9
                // ../../third_party/v8/builtins/array-sort.tq:1519:9
                int31_t t3132 = 1;
                TNode<Smi> t3133 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3132)));
                TNode<Smi> t3134 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_503).value()), implicit_cast<TNode<Smi>>(t3133)));
                USE(implicit_cast<TNode<Smi>>(t3134));
                TNode<Smi> t3135 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>(t3134)));
                USE(implicit_cast<TNode<Smi>>(t3135));
                int31_t t3136 = 0;
                TNode<Smi> t3137 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3136)));
                CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>(t3135), implicit_cast<TNode<FixedArray>>((*temp_array_1054)), implicit_cast<TNode<Smi>>(t3137), implicit_cast<TNode<Smi>>((*length_b_503).value()), label_Bailout_873);
              }
              Goto(label__False_913);
            }
            BIND(label__False_913);
          }
        }
        Goto(label_try_done_1055_1469);
      }
      if (label_CopyA_875->is_used())
      {
        BIND(label_CopyA_875);
        // ../../third_party/v8/builtins/array-sort.tq:1524:17
        {
          // ../../third_party/v8/builtins/array-sort.tq:1525:7
          // ../../third_party/v8/builtins/array-sort.tq:1528:7
          TNode<Smi> t3138 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>((*length_a_502).value())));
          USE(implicit_cast<TNode<Smi>>(t3138));
          *dest_505 = implicit_cast<TNode<Smi>>(t3138);
          // ../../third_party/v8/builtins/array-sort.tq:1529:7
          TNode<Smi> t3139 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_507).value()), implicit_cast<TNode<Smi>>((*length_a_502).value())));
          USE(implicit_cast<TNode<Smi>>(t3139));
          *cursor_a_507 = implicit_cast<TNode<Smi>>(t3139);
          // ../../third_party/v8/builtins/array-sort.tq:1530:7
          int31_t t3140 = 1;
          TNode<Smi> t3141 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3140)));
          TNode<Smi> t3142 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_a_507).value()), implicit_cast<TNode<Smi>>(t3141)));
          USE(implicit_cast<TNode<Smi>>(t3142));
          int31_t t3143 = 1;
          TNode<Smi> t3144 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3143)));
          TNode<Smi> t3145 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Smi>>(t3144)));
          USE(implicit_cast<TNode<Smi>>(t3145));
          CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>(t3142), implicit_cast<TNode<Smi>>(t3145), implicit_cast<TNode<Smi>>((*length_a_502).value()), label_Bailout_873);
          // ../../third_party/v8/builtins/array-sort.tq:1533:7
          TNode<Object> t3146 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1054)), implicit_cast<TNode<Smi>>((*cursor_temp_506).value())));
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1053)), implicit_cast<TNode<HeapObject>>((*elements_504).value()), implicit_cast<TNode<Smi>>((*dest_505).value()), implicit_cast<TNode<Object>>(t3146), label_Bailout_873);
        }
        Goto(label_try_done_1055_1469);
      }
      BIND(label_try_done_1055_1469);
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::ComputeMinRunLength(TNode<Smi> p_nArg) {
  TVARIABLE(Smi, _return_516_impl);
  auto _return_516 = &_return_516_impl;
  USE(_return_516);
  Label label_macro_end_1475_impl(this, {_return_516});
  Label* label_macro_end_1475 = &label_macro_end_1475_impl;
  USE(label_macro_end_1475);
  // ../../third_party/v8/builtins/array-sort.tq:1548:45
  {
    // ../../third_party/v8/builtins/array-sort.tq:1549:5
    TVARIABLE(Smi, n_517_impl);
    auto n_517 = &n_517_impl;
    USE(n_517);
    *n_517 = implicit_cast<TNode<Smi>>(p_nArg);
    // ../../third_party/v8/builtins/array-sort.tq:1550:5
    int31_t t3147 = 0;
    TVARIABLE(Smi, r_518_impl);
    auto r_518 = &r_518_impl;
    USE(r_518);
    TNode<Smi> t3148 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3147)));
    *r_518 = implicit_cast<TNode<Smi>>(t3148);
    // ../../third_party/v8/builtins/array-sort.tq:1552:5
    // ../../third_party/v8/builtins/array-sort.tq:1553:5
    {
      Label label__True_914_impl(this);
      Label* label__True_914 = &label__True_914_impl;
      USE(label__True_914);
      Label label__False_915_impl(this);
      Label* label__False_915 = &label__False_915_impl;
      USE(label__False_915);
      Label label_header_1061_1476_impl(this, {n_517, r_518});
      Label* label_header_1061_1476 = &label_header_1061_1476_impl;
      USE(label_header_1061_1476);
      Goto(label_header_1061_1476);
      BIND(label_header_1061_1476);
      int31_t t3149 = 64;
      TNode<Smi> t3150 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3149)));
      TNode<BoolT> t3151 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*n_517).value()), implicit_cast<TNode<Smi>>(t3150)));
      USE(implicit_cast<TNode<BoolT>>(t3151));
      Branch(implicit_cast<TNode<BoolT>>(t3151), label__True_914, label__False_915);
      if (label__True_914->is_used())
      {
        BIND(label__True_914);
        // ../../third_party/v8/builtins/array-sort.tq:1553:21
        {
          // ../../third_party/v8/builtins/array-sort.tq:1554:7
          int31_t t3152 = 1;
          TNode<Smi> t3153 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3152)));
          TNode<Smi> t3154 = UncheckedCast<Smi>(SmiAnd(implicit_cast<TNode<Smi>>((*n_517).value()), implicit_cast<TNode<Smi>>(t3153)));
          USE(implicit_cast<TNode<Smi>>(t3154));
          TNode<Smi> t3155 = UncheckedCast<Smi>(SmiOr(implicit_cast<TNode<Smi>>((*r_518).value()), implicit_cast<TNode<Smi>>(t3154)));
          USE(implicit_cast<TNode<Smi>>(t3155));
          *r_518 = implicit_cast<TNode<Smi>>(t3155);
          // ../../third_party/v8/builtins/array-sort.tq:1555:7
          int31_t t3156 = 1;
          TNode<Smi> t3157 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>((*n_517).value()), implicit_cast<int31_t>(t3156)));
          USE(implicit_cast<TNode<Smi>>(t3157));
          *n_517 = implicit_cast<TNode<Smi>>(t3157);
        }
        Goto(label_header_1061_1476);
      }
      BIND(label__False_915);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1558:5
    TNode<Smi> t3158 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_517).value()), implicit_cast<TNode<Smi>>((*r_518).value())));
    USE(implicit_cast<TNode<Smi>>(t3158));
    TNode<Smi> min_run_length_1062_impl;
    auto min_run_length_1062 = &min_run_length_1062_impl;
    USE(min_run_length_1062);
    *min_run_length_1062 = implicit_cast<TNode<Smi>>(t3158);
    // ../../third_party/v8/builtins/array-sort.tq:1559:5
    // ../../third_party/v8/builtins/array-sort.tq:1560:5
    *_return_516 = implicit_cast<TNode<Smi>>((*min_run_length_1062));
    Goto(label_macro_end_1475);
  }
  BIND(label_macro_end_1475);
  return implicit_cast<TNode<Smi>>((*_return_516).value());
}

compiler::TNode<BoolT> ArrayBuiltinsFromDSLAssembler::RunInvariantEstablished(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_n) {
  TVARIABLE(BoolT, _return_519_impl);
  auto _return_519 = &_return_519_impl;
  USE(_return_519);
  Label label_macro_end_1477_impl(this, {_return_519});
  Label* label_macro_end_1477 = &label_macro_end_1477_impl;
  USE(label_macro_end_1477);
  // ../../third_party/v8/builtins/array-sort.tq:1564:72
  {
    // ../../third_party/v8/builtins/array-sort.tq:1565:5
    {
      Label label__True_916_impl(this);
      Label* label__True_916 = &label__True_916_impl;
      USE(label__True_916);
      Label label__False_917_impl(this, {});
      Label* label__False_917 = &label__False_917_impl;
      USE(label__False_917);
      int31_t t3159 = 2;
      TNode<Smi> t3160 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3159)));
      TNode<BoolT> t3161 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_n), implicit_cast<TNode<Smi>>(t3160)));
      USE(implicit_cast<TNode<BoolT>>(t3161));
      Branch(implicit_cast<TNode<BoolT>>(t3161), label__True_916, label__False_917);
      if (label__True_916->is_used())
      {
        BIND(label__True_916);
        // ../../third_party/v8/builtins/array-sort.tq:1565:16
        TNode<BoolT> t3162 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
        *_return_519 = implicit_cast<TNode<BoolT>>(t3162);
        Goto(label_macro_end_1477);
      }
      BIND(label__False_917);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1567:5
    TNode<Smi> t3163 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(p_n)));
    USE(implicit_cast<TNode<Smi>>(t3163));
    TNode<Smi> run_length_n_1063_impl;
    auto run_length_n_1063 = &run_length_n_1063_impl;
    USE(run_length_n_1063);
    *run_length_n_1063 = implicit_cast<TNode<Smi>>(t3163);
    // ../../third_party/v8/builtins/array-sort.tq:1568:5
    int31_t t3164 = 1;
    TNode<Smi> t3165 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3164)));
    TNode<Smi> t3166 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_n), implicit_cast<TNode<Smi>>(t3165)));
    USE(implicit_cast<TNode<Smi>>(t3166));
    TNode<Smi> t3167 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t3166)));
    USE(implicit_cast<TNode<Smi>>(t3167));
    TNode<Smi> run_length_nm_1064_impl;
    auto run_length_nm_1064 = &run_length_nm_1064_impl;
    USE(run_length_nm_1064);
    *run_length_nm_1064 = implicit_cast<TNode<Smi>>(t3167);
    // ../../third_party/v8/builtins/array-sort.tq:1569:5
    int31_t t3168 = 2;
    TNode<Smi> t3169 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3168)));
    TNode<Smi> t3170 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_n), implicit_cast<TNode<Smi>>(t3169)));
    USE(implicit_cast<TNode<Smi>>(t3170));
    TNode<Smi> t3171 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t3170)));
    USE(implicit_cast<TNode<Smi>>(t3171));
    TNode<Smi> run_length_nmm_1065_impl;
    auto run_length_nmm_1065 = &run_length_nmm_1065_impl;
    USE(run_length_nmm_1065);
    *run_length_nmm_1065 = implicit_cast<TNode<Smi>>(t3171);
    // ../../third_party/v8/builtins/array-sort.tq:1571:5
    TNode<Smi> t3172 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*run_length_nm_1064)), implicit_cast<TNode<Smi>>((*run_length_n_1063))));
    USE(implicit_cast<TNode<Smi>>(t3172));
    TNode<BoolT> t3173 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*run_length_nmm_1065)), implicit_cast<TNode<Smi>>(t3172)));
    USE(implicit_cast<TNode<BoolT>>(t3173));
    *_return_519 = implicit_cast<TNode<BoolT>>(t3173);
    Goto(label_macro_end_1477);
  }
  BIND(label_macro_end_1477);
  return implicit_cast<TNode<BoolT>>((*_return_519).value());
}

void ArrayBuiltinsFromDSLAssembler::MergeCollapse(TNode<Context> p_context, TNode<FixedArray> p_sortState, Label* label_Bailout_918) {
  Label label_macro_end_1478_impl(this, {});
  Label* label_macro_end_1478 = &label_macro_end_1478_impl;
  USE(label_macro_end_1478);
  // ../../third_party/v8/builtins/array-sort.tq:1584:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1585:5
    TNode<Object> t3174 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t3175 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t3174)));
    USE(implicit_cast<TNode<FixedArray>>(t3175));
    TNode<FixedArray> pending_runs_1066_impl;
    auto pending_runs_1066 = &pending_runs_1066_impl;
    USE(pending_runs_1066);
    *pending_runs_1066 = implicit_cast<TNode<FixedArray>>(t3175);
    // ../../third_party/v8/builtins/array-sort.tq:1589:5
    {
      Label label__True_919_impl(this);
      Label* label__True_919 = &label__True_919_impl;
      USE(label__True_919);
      Label label__False_920_impl(this);
      Label* label__False_920 = &label__False_920_impl;
      USE(label__False_920);
      Label label_header_1067_1479_impl(this, {});
      Label* label_header_1067_1479 = &label_header_1067_1479_impl;
      USE(label_header_1067_1479);
      Goto(label_header_1067_1479);
      BIND(label_header_1067_1479);
      TNode<Smi> t3176 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<Smi>>(t3176));
      int31_t t3177 = 1;
      TNode<Smi> t3178 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3177)));
      TNode<BoolT> t3179 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(t3176), implicit_cast<TNode<Smi>>(t3178)));
      USE(implicit_cast<TNode<BoolT>>(t3179));
      Branch(implicit_cast<TNode<BoolT>>(t3179), label__True_919, label__False_920);
      if (label__True_919->is_used())
      {
        BIND(label__True_919);
        // ../../third_party/v8/builtins/array-sort.tq:1589:47
        {
          // ../../third_party/v8/builtins/array-sort.tq:1590:7
          TNode<Smi> t3180 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t3180));
          int31_t t3181 = 2;
          TNode<Smi> t3182 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3181)));
          TNode<Smi> t3183 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3180), implicit_cast<TNode<Smi>>(t3182)));
          USE(implicit_cast<TNode<Smi>>(t3183));
          TVARIABLE(Smi, n_520_impl);
          auto n_520 = &n_520_impl;
          USE(n_520);
          *n_520 = implicit_cast<TNode<Smi>>(t3183);
          // ../../third_party/v8/builtins/array-sort.tq:1592:7
          {
            Label label__True_921_impl(this);
            Label* label__True_921 = &label__True_921_impl;
            USE(label__True_921);
            Label label__False_922_impl(this);
            Label* label__False_922 = &label__False_922_impl;
            USE(label__False_922);
            Label label_if_done_label_1068_1480_impl(this, {n_520});
            Label* label_if_done_label_1068_1480 = &label_if_done_label_1068_1480_impl;
            USE(label_if_done_label_1068_1480);
            Label label__False_923_impl(this);
            Label* label__False_923 = &label__False_923_impl;
            USE(label__False_923);
            int31_t t3184 = 1;
            TNode<Smi> t3185 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3184)));
            TNode<Smi> t3186 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_520).value()), implicit_cast<TNode<Smi>>(t3185)));
            USE(implicit_cast<TNode<Smi>>(t3186));
            TNode<BoolT> t3187 = UncheckedCast<BoolT>(RunInvariantEstablished(implicit_cast<TNode<FixedArray>>((*pending_runs_1066)), implicit_cast<TNode<Smi>>(t3186)));
            USE(implicit_cast<TNode<BoolT>>(t3187));
            TNode<BoolT> t3188 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3187)));
            USE(implicit_cast<TNode<BoolT>>(t3188));
            GotoIf(implicit_cast<TNode<BoolT>>(t3188), label__True_921);
            TNode<BoolT> t3189 = UncheckedCast<BoolT>(RunInvariantEstablished(implicit_cast<TNode<FixedArray>>((*pending_runs_1066)), implicit_cast<TNode<Smi>>((*n_520).value())));
            USE(implicit_cast<TNode<BoolT>>(t3189));
            TNode<BoolT> t3190 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3189)));
            USE(implicit_cast<TNode<BoolT>>(t3190));
            Branch(implicit_cast<TNode<BoolT>>(t3190), label__True_921, label__False_922);
            if (label__True_921->is_used())
            {
              BIND(label__True_921);
              // ../../third_party/v8/builtins/array-sort.tq:1593:54
              {
                // ../../third_party/v8/builtins/array-sort.tq:1594:9
                {
                  Label label__True_924_impl(this);
                  Label* label__True_924 = &label__True_924_impl;
                  USE(label__True_924);
                  Label label__False_925_impl(this, {n_520});
                  Label* label__False_925 = &label__False_925_impl;
                  USE(label__False_925);
                  int31_t t3191 = 1;
                  TNode<Smi> t3192 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3191)));
                  TNode<Smi> t3193 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_520).value()), implicit_cast<TNode<Smi>>(t3192)));
                  USE(implicit_cast<TNode<Smi>>(t3193));
                  TNode<Smi> t3194 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1066)), implicit_cast<TNode<Smi>>(t3193)));
                  USE(implicit_cast<TNode<Smi>>(t3194));
                  int31_t t3195 = 1;
                  TNode<Smi> t3196 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3195)));
                  TNode<Smi> t3197 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_520).value()), implicit_cast<TNode<Smi>>(t3196)));
                  USE(implicit_cast<TNode<Smi>>(t3197));
                  TNode<Smi> t3198 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1066)), implicit_cast<TNode<Smi>>(t3197)));
                  USE(implicit_cast<TNode<Smi>>(t3198));
                  TNode<BoolT> t3199 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3194), implicit_cast<TNode<Smi>>(t3198)));
                  USE(implicit_cast<TNode<BoolT>>(t3199));
                  Branch(implicit_cast<TNode<BoolT>>(t3199), label__True_924, label__False_925);
                  if (label__True_924->is_used())
                  {
                    BIND(label__True_924);
                    // ../../third_party/v8/builtins/array-sort.tq:1595:55
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1596:11
                      TNode<Smi> t3200 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3201 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_520).value()), implicit_cast<TNode<Smi>>(t3200)));
                      *n_520 = implicit_cast<TNode<Smi>>(t3201);
                    }
                    Goto(label__False_925);
                  }
                  BIND(label__False_925);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1599:9
                CallMergeAt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*n_520).value()), label_Bailout_918);
              }
              Goto(label_if_done_label_1068_1480);
            }
            if (label__False_922->is_used())
            {
              BIND(label__False_922);
              // ../../third_party/v8/builtins/array-sort.tq:1600:14
              {
                Label label__True_926_impl(this);
                Label* label__True_926 = &label__True_926_impl;
                USE(label__True_926);
                Label label__False_927_impl(this);
                Label* label__False_927 = &label__False_927_impl;
                USE(label__False_927);
                Label label_if_done_label_1069_1481_impl(this, {});
                Label* label_if_done_label_1069_1481 = &label_if_done_label_1069_1481_impl;
                USE(label_if_done_label_1069_1481);
                TNode<Smi> t3202 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1066)), implicit_cast<TNode<Smi>>((*n_520).value())));
                USE(implicit_cast<TNode<Smi>>(t3202));
                int31_t t3203 = 1;
                TNode<Smi> t3204 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3203)));
                TNode<Smi> t3205 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_520).value()), implicit_cast<TNode<Smi>>(t3204)));
                USE(implicit_cast<TNode<Smi>>(t3205));
                TNode<Smi> t3206 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1066)), implicit_cast<TNode<Smi>>(t3205)));
                USE(implicit_cast<TNode<Smi>>(t3206));
                TNode<BoolT> t3207 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3202), implicit_cast<TNode<Smi>>(t3206)));
                USE(implicit_cast<TNode<BoolT>>(t3207));
                Branch(implicit_cast<TNode<BoolT>>(t3207), label__True_926, label__False_927);
                if (label__True_926->is_used())
                {
                  BIND(label__True_926);
                  // ../../third_party/v8/builtins/array-sort.tq:1602:53
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1603:9
                    CallMergeAt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*n_520).value()), label_Bailout_918);
                  }
                  Goto(label_if_done_label_1069_1481);
                }
                if (label__False_927->is_used())
                {
                  BIND(label__False_927);
                  // ../../third_party/v8/builtins/array-sort.tq:1604:14
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1605:9
                    Goto(label__False_920);
                  }
                }
                BIND(label_if_done_label_1069_1481);
              }
              Goto(label_if_done_label_1068_1480);
            }
            BIND(label_if_done_label_1068_1480);
          }
        }
        Goto(label_header_1067_1479);
      }
      BIND(label__False_920);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::MergeForceCollapse(TNode<Context> p_context, TNode<FixedArray> p_sortState, Label* label_Bailout_928) {
  Label label_macro_end_1482_impl(this, {});
  Label* label_macro_end_1482 = &label_macro_end_1482_impl;
  USE(label_macro_end_1482);
  // ../../third_party/v8/builtins/array-sort.tq:1613:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1614:5
    TNode<Object> t3208 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t3209 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t3208)));
    USE(implicit_cast<TNode<FixedArray>>(t3209));
    TVARIABLE(FixedArray, pending_runs_521_impl);
    auto pending_runs_521 = &pending_runs_521_impl;
    USE(pending_runs_521);
    *pending_runs_521 = implicit_cast<TNode<FixedArray>>(t3209);
    // ../../third_party/v8/builtins/array-sort.tq:1618:5
    {
      Label label__True_929_impl(this);
      Label* label__True_929 = &label__True_929_impl;
      USE(label__True_929);
      Label label__False_930_impl(this);
      Label* label__False_930 = &label__False_930_impl;
      USE(label__False_930);
      Label label_header_1070_1483_impl(this, {});
      Label* label_header_1070_1483 = &label_header_1070_1483_impl;
      USE(label_header_1070_1483);
      Goto(label_header_1070_1483);
      BIND(label_header_1070_1483);
      TNode<Smi> t3210 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<Smi>>(t3210));
      int31_t t3211 = 1;
      TNode<Smi> t3212 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3211)));
      TNode<BoolT> t3213 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(t3210), implicit_cast<TNode<Smi>>(t3212)));
      USE(implicit_cast<TNode<BoolT>>(t3213));
      Branch(implicit_cast<TNode<BoolT>>(t3213), label__True_929, label__False_930);
      if (label__True_929->is_used())
      {
        BIND(label__True_929);
        // ../../third_party/v8/builtins/array-sort.tq:1618:47
        {
          // ../../third_party/v8/builtins/array-sort.tq:1619:7
          TNode<Smi> t3214 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t3214));
          int31_t t3215 = 2;
          TNode<Smi> t3216 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3215)));
          TNode<Smi> t3217 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3214), implicit_cast<TNode<Smi>>(t3216)));
          USE(implicit_cast<TNode<Smi>>(t3217));
          TVARIABLE(Smi, n_522_impl);
          auto n_522 = &n_522_impl;
          USE(n_522);
          *n_522 = implicit_cast<TNode<Smi>>(t3217);
          // ../../third_party/v8/builtins/array-sort.tq:1621:7
          {
            Label label__True_931_impl(this);
            Label* label__True_931 = &label__True_931_impl;
            USE(label__True_931);
            Label label__False_932_impl(this, {n_522});
            Label* label__False_932 = &label__False_932_impl;
            USE(label__False_932);
            Label label__True_933_impl(this);
            Label* label__True_933 = &label__True_933_impl;
            USE(label__True_933);
            int31_t t3218 = 0;
            TNode<Smi> t3219 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3218)));
            TNode<BoolT> t3220 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*n_522).value()), implicit_cast<TNode<Smi>>(t3219)));
            USE(implicit_cast<TNode<BoolT>>(t3220));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t3220), label__False_932);
            int31_t t3221 = 1;
            TNode<Smi> t3222 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3221)));
            TNode<Smi> t3223 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_522).value()), implicit_cast<TNode<Smi>>(t3222)));
            USE(implicit_cast<TNode<Smi>>(t3223));
            TNode<Smi> t3224 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_521).value()), implicit_cast<TNode<Smi>>(t3223)));
            USE(implicit_cast<TNode<Smi>>(t3224));
            int31_t t3225 = 1;
            TNode<Smi> t3226 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3225)));
            TNode<Smi> t3227 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_522).value()), implicit_cast<TNode<Smi>>(t3226)));
            USE(implicit_cast<TNode<Smi>>(t3227));
            TNode<Smi> t3228 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_521).value()), implicit_cast<TNode<Smi>>(t3227)));
            USE(implicit_cast<TNode<Smi>>(t3228));
            TNode<BoolT> t3229 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3224), implicit_cast<TNode<Smi>>(t3228)));
            USE(implicit_cast<TNode<BoolT>>(t3229));
            Branch(implicit_cast<TNode<BoolT>>(t3229), label__True_931, label__False_932);
            if (label__True_931->is_used())
            {
              BIND(label__True_931);
              // ../../third_party/v8/builtins/array-sort.tq:1623:57
              {
                // ../../third_party/v8/builtins/array-sort.tq:1624:9
                TNode<Smi> t3230 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3231 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_522).value()), implicit_cast<TNode<Smi>>(t3230)));
                *n_522 = implicit_cast<TNode<Smi>>(t3231);
              }
              Goto(label__False_932);
            }
            BIND(label__False_932);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1626:7
          CallMergeAt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*n_522).value()), label_Bailout_928);
        }
        Goto(label_header_1070_1483);
      }
      BIND(label__False_930);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortState(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1484_impl(this, {});
  Label* label_macro_end_1484 = &label_macro_end_1484_impl;
  USE(label_macro_end_1484);
  // ../../third_party/v8/builtins/array-sort.tq:1630:52
  {
    // ../../third_party/v8/builtins/array-sort.tq:1631:5
    TNode<Smi> t3232 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(kMinGallopWins())));
    USE(implicit_cast<TNode<Smi>>(t3232));
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>(t3232));
    // ../../third_party/v8/builtins/array-sort.tq:1632:5
    int31_t t3233 = 0;
    TNode<Smi> t3234 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t3233)));
    USE(implicit_cast<TNode<Smi>>(t3234));
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArraySizeIdx()), implicit_cast<TNode<Object>>(t3234));
    // ../../third_party/v8/builtins/array-sort.tq:1634:5
    int31_t t3235 = 0;
    TNode<Smi> t3236 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3235)));
    SetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(t3236));
    // ../../third_party/v8/builtins/array-sort.tq:1635:5
    TNode<IntPtrT> t3237 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<int31_t>(kMaxMergePending())));
    USE(implicit_cast<TNode<IntPtrT>>(t3237));
    TNode<FixedArray> t3238 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(t3237)));
    USE(implicit_cast<TNode<FixedArray>>(t3238));
    TVARIABLE(FixedArray, pending_runs_523_impl);
    auto pending_runs_523 = &pending_runs_523_impl;
    USE(pending_runs_523);
    *pending_runs_523 = implicit_cast<TNode<FixedArray>>(t3238);
    // ../../third_party/v8/builtins/array-sort.tq:1637:5
    TNode<Smi> t3239 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMaxMergePending())));
    FillFixedArrayWithSmiZero(implicit_cast<TNode<FixedArray>>((*pending_runs_523).value()), implicit_cast<TNode<Smi>>(t3239));
    // ../../third_party/v8/builtins/array-sort.tq:1638:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx()), implicit_cast<TNode<Object>>((*pending_runs_523).value()));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor25ATGenericElementsAccessor(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1485_impl(this, {});
  Label* label_macro_end_1485 = &label_macro_end_1485_impl;
  USE(label_macro_end_1485);
  // ../../third_party/v8/builtins/array-sort.tq:1648:79
  {
    // ../../third_party/v8/builtins/array-sort.tq:1649:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kGenericElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1650:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad25ATGenericElementsAccessor).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1651:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore25ATGenericElementsAccessor).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1652:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor25ATGenericElementsAccessor).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::ArrayTimSortImpl(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_length, Label* label_Bailout_934) {
  Label label_macro_end_1486_impl(this, {});
  Label* label_macro_end_1486 = &label_macro_end_1486_impl;
  USE(label_macro_end_1486);
  // ../../third_party/v8/builtins/array-sort.tq:1657:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1658:5
    InitializeSortState(implicit_cast<TNode<FixedArray>>(p_sortState));
    // ../../third_party/v8/builtins/array-sort.tq:1660:5
    {
      Label label__True_935_impl(this);
      Label* label__True_935 = &label__True_935_impl;
      USE(label__True_935);
      Label label__False_936_impl(this, {});
      Label* label__False_936 = &label__False_936_impl;
      USE(label__False_936);
      int31_t t3240 = 2;
      TNode<Smi> t3241 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3240)));
      TNode<BoolT> t3242 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3241)));
      USE(implicit_cast<TNode<BoolT>>(t3242));
      Branch(implicit_cast<TNode<BoolT>>(t3242), label__True_935, label__False_936);
      if (label__True_935->is_used())
      {
        BIND(label__True_935);
        // ../../third_party/v8/builtins/array-sort.tq:1660:21
        Goto(label_macro_end_1486);
      }
      BIND(label__False_936);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1661:5
    TVARIABLE(Smi, remaining_524_impl);
    auto remaining_524 = &remaining_524_impl;
    USE(remaining_524);
    *remaining_524 = implicit_cast<TNode<Smi>>(p_length);
    // ../../third_party/v8/builtins/array-sort.tq:1665:5
    int31_t t3243 = 0;
    TVARIABLE(Smi, low_525_impl);
    auto low_525 = &low_525_impl;
    USE(low_525);
    TNode<Smi> t3244 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3243)));
    *low_525 = implicit_cast<TNode<Smi>>(t3244);
    // ../../third_party/v8/builtins/array-sort.tq:1666:5
    TNode<Smi> t3245 = UncheckedCast<Smi>(ComputeMinRunLength(implicit_cast<TNode<Smi>>((*remaining_524).value())));
    USE(implicit_cast<TNode<Smi>>(t3245));
    TNode<Smi> min_run_length_1071_impl;
    auto min_run_length_1071 = &min_run_length_1071_impl;
    USE(min_run_length_1071);
    *min_run_length_1071 = implicit_cast<TNode<Smi>>(t3245);
    // ../../third_party/v8/builtins/array-sort.tq:1667:5
    {
      Label label__True_937_impl(this);
      Label* label__True_937 = &label__True_937_impl;
      USE(label__True_937);
      Label label__False_938_impl(this);
      Label* label__False_938 = &label__False_938_impl;
      USE(label__False_938);
      Label label_header_1072_1487_impl(this, {low_525, remaining_524});
      Label* label_header_1072_1487 = &label_header_1072_1487_impl;
      USE(label_header_1072_1487);
      Goto(label_header_1072_1487);
      BIND(label_header_1072_1487);
      int31_t t3246 = 0;
      TNode<Smi> t3247 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3246)));
      TNode<BoolT> t3248 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>((*remaining_524).value()), implicit_cast<TNode<Smi>>(t3247)));
      USE(implicit_cast<TNode<BoolT>>(t3248));
      Branch(implicit_cast<TNode<BoolT>>(t3248), label__True_937, label__False_938);
      if (label__True_937->is_used())
      {
        BIND(label__True_937);
        // ../../third_party/v8/builtins/array-sort.tq:1667:28
        {
          // ../../third_party/v8/builtins/array-sort.tq:1668:7
          TNode<Smi> t3249 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_525).value()), implicit_cast<TNode<Smi>>((*remaining_524).value())));
          USE(implicit_cast<TNode<Smi>>(t3249));
          TNode<Smi> t3250 = UncheckedCast<Smi>(CountAndMakeRun(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*low_525).value()), implicit_cast<TNode<Smi>>(t3249), label_Bailout_934));
          USE(implicit_cast<TNode<Smi>>(t3250));
          TVARIABLE(Smi, current_run_length_526_impl);
          auto current_run_length_526 = &current_run_length_526_impl;
          USE(current_run_length_526);
          *current_run_length_526 = implicit_cast<TNode<Smi>>(t3250);
          // ../../third_party/v8/builtins/array-sort.tq:1673:7
          {
            Label label__True_939_impl(this);
            Label* label__True_939 = &label__True_939_impl;
            USE(label__True_939);
            Label label__False_940_impl(this, {current_run_length_526});
            Label* label__False_940 = &label__False_940_impl;
            USE(label__False_940);
            TNode<BoolT> t3251 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*current_run_length_526).value()), implicit_cast<TNode<Smi>>((*min_run_length_1071))));
            USE(implicit_cast<TNode<BoolT>>(t3251));
            Branch(implicit_cast<TNode<BoolT>>(t3251), label__True_939, label__False_940);
            if (label__True_939->is_used())
            {
              BIND(label__True_939);
              // ../../third_party/v8/builtins/array-sort.tq:1673:48
              {
                // ../../third_party/v8/builtins/array-sort.tq:1674:9
                TNode<Smi> t3252 = UncheckedCast<Smi>(SmiMin(implicit_cast<TNode<Smi>>((*min_run_length_1071)), implicit_cast<TNode<Smi>>((*remaining_524).value())));
                USE(implicit_cast<TNode<Smi>>(t3252));
                TNode<Smi> forced_run_length_1073_impl;
                auto forced_run_length_1073 = &forced_run_length_1073_impl;
                USE(forced_run_length_1073);
                *forced_run_length_1073 = implicit_cast<TNode<Smi>>(t3252);
                // ../../third_party/v8/builtins/array-sort.tq:1675:9
                TNode<Smi> t3253 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_525).value()), implicit_cast<TNode<Smi>>((*current_run_length_526).value())));
                USE(implicit_cast<TNode<Smi>>(t3253));
                TNode<Smi> t3254 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_525).value()), implicit_cast<TNode<Smi>>((*forced_run_length_1073))));
                USE(implicit_cast<TNode<Smi>>(t3254));
                TNode<Smi> t3255 = UncheckedCast<Smi>(CallBuiltin(Builtins::kBinaryInsertionSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*low_525).value()), implicit_cast<TNode<Smi>>(t3253), implicit_cast<TNode<Smi>>(t3254)));
                USE(implicit_cast<TNode<Smi>>(t3255));
                // ../../third_party/v8/builtins/array-sort.tq:1678:9
                EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_934);
                // ../../third_party/v8/builtins/array-sort.tq:1679:9
                *current_run_length_526 = implicit_cast<TNode<Smi>>((*forced_run_length_1073));
              }
              Goto(label__False_940);
            }
            BIND(label__False_940);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1683:7
          PushRun(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*low_525).value()), implicit_cast<TNode<Smi>>((*current_run_length_526).value()));
          // ../../third_party/v8/builtins/array-sort.tq:1685:7
          MergeCollapse(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_934);
          // ../../third_party/v8/builtins/array-sort.tq:1688:7
          TNode<Smi> t3256 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_525).value()), implicit_cast<TNode<Smi>>((*current_run_length_526).value())));
          USE(implicit_cast<TNode<Smi>>(t3256));
          *low_525 = implicit_cast<TNode<Smi>>(t3256);
          // ../../third_party/v8/builtins/array-sort.tq:1689:7
          TNode<Smi> t3257 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*remaining_524).value()), implicit_cast<TNode<Smi>>((*current_run_length_526).value())));
          USE(implicit_cast<TNode<Smi>>(t3257));
          *remaining_524 = implicit_cast<TNode<Smi>>(t3257);
        }
        Goto(label_header_1072_1487);
      }
      BIND(label__False_938);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1692:5
    MergeForceCollapse(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_934);
    // ../../third_party/v8/builtins/array-sort.tq:1693:5
    // ../../third_party/v8/builtins/array-sort.tq:1694:5
  }
  Goto(label_macro_end_1486);
  BIND(label_macro_end_1486);
}

TF_BUILTIN(ArrayTimSort, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../third_party/v8/builtins/array-sort.tq:1700:69
  {
    // ../../third_party/v8/builtins/array-sort.tq:1701:5
    {
      Label label_try_done_1074_1488_impl(this);
      Label* label_try_done_1074_1488 = &label_try_done_1074_1488_impl;
      USE(label_try_done_1074_1488);
      Label label_Slow_941_impl(this);
      Label* label_Slow_941 = &label_Slow_941_impl;
      USE(label_Slow_941);
      Label label_try_begin_1075_1489_impl(this);
      Label* label_try_begin_1075_1489 = &label_try_begin_1075_1489_impl;
      USE(label_try_begin_1075_1489);
      Goto(label_try_begin_1075_1489);
      if (label_try_begin_1075_1489->is_used())
      {
        BIND(label_try_begin_1075_1489);
        // ../../third_party/v8/builtins/array-sort.tq:1701:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1702:7
          ArrayTimSortImpl(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(p_length), label_Slow_941);
        }
        Goto(label_try_done_1074_1488);
      }
      if (label_Slow_941->is_used())
      {
        BIND(label_Slow_941);
        // ../../third_party/v8/builtins/array-sort.tq:1705:16
        {
          // ../../third_party/v8/builtins/array-sort.tq:1706:7
          {
            Label label__True_942_impl(this);
            Label* label__True_942 = &label__True_942_impl;
            USE(label__True_942);
            Label label__False_943_impl(this, {});
            Label* label__False_943 = &label__False_943_impl;
            USE(label__False_943);
            TNode<Object> t3258 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx())));
            TNode<BoolT> t3259 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t3258), implicit_cast<TNode<Object>>(kGenericElementsAccessorId())));
            USE(implicit_cast<TNode<BoolT>>(t3259));
            Branch(implicit_cast<TNode<BoolT>>(t3259), label__True_942, label__False_943);
            if (label__True_942->is_used())
            {
              BIND(label__True_942);
              // ../../third_party/v8/builtins/array-sort.tq:1706:66
              {
                // ../../third_party/v8/builtins/array-sort.tq:1708:9
                Unreachable();
              }
            }
            BIND(label__False_943);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1710:7
          StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kBailoutStatusIdx()), implicit_cast<TNode<Object>>(kSuccess()));
          // ../../third_party/v8/builtins/array-sort.tq:1712:7
          InitializeSortStateAccessor25ATGenericElementsAccessor(implicit_cast<TNode<FixedArray>>(p_sortState));
          // ../../third_party/v8/builtins/array-sort.tq:1713:7
          TNode<Object> t3260 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayTimSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(p_length)));
          USE(implicit_cast<TNode<Object>>(t3260));
        }
        Goto(label_try_done_1074_1488);
      }
      BIND(label_try_done_1074_1488);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1715:5
    Return(implicit_cast<TNode<Object>>(kSuccess()));
  }
}

TF_BUILTIN(ArrayPrototypeSort, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../third_party/v8/builtins/array-sort.tq:1735:65
  {
    // ../../third_party/v8/builtins/array-sort.tq:1738:5
    int31_t t3261 = 0;
    TNode<IntPtrT> t3262 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t3261)));
    TNode<Object> t3263 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t3262)));
    TNode<Object> comparefnObj_1076_impl;
    auto comparefnObj_1076 = &comparefnObj_1076_impl;
    USE(comparefnObj_1076);
    *comparefnObj_1076 = implicit_cast<TNode<Object>>(t3263);
    // ../../third_party/v8/builtins/array-sort.tq:1739:5
    {
      Label label__True_944_impl(this);
      Label* label__True_944 = &label__True_944_impl;
      USE(label__True_944);
      Label label__False_945_impl(this, {});
      Label* label__False_945 = &label__False_945_impl;
      USE(label__False_945);
      Label label__True_946_impl(this);
      Label* label__True_946 = &label__True_946_impl;
      USE(label__True_946);
      TNode<BoolT> t3264 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*comparefnObj_1076)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t3264));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t3264), label__False_945);
      TNode<BoolT> t3265 = UncheckedCast<BoolT>(TaggedIsCallable(implicit_cast<TNode<Object>>((*comparefnObj_1076))));
      USE(implicit_cast<TNode<BoolT>>(t3265));
      TNode<BoolT> t3266 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3265)));
      USE(implicit_cast<TNode<BoolT>>(t3266));
      Branch(implicit_cast<TNode<BoolT>>(t3266), label__True_944, label__False_945);
      if (label__True_944->is_used())
      {
        BIND(label__True_944);
        // ../../third_party/v8/builtins/array-sort.tq:1739:71
        {
          // ../../third_party/v8/builtins/array-sort.tq:1740:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kBadSortComparisonFunction), implicit_cast<TNode<Object>>((*comparefnObj_1076)));
        }
      }
      BIND(label__False_945);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1744:5
    TNode<JSReceiver> t3267 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t3267));
    TNode<JSReceiver> obj_1077_impl;
    auto obj_1077 = &obj_1077_impl;
    USE(obj_1077);
    *obj_1077 = implicit_cast<TNode<JSReceiver>>(t3267);
    // ../../third_party/v8/builtins/array-sort.tq:1745:5
    TNode<Map> t3268 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*obj_1077))));
    TVARIABLE(Map, map_527_impl);
    auto map_527 = &map_527_impl;
    USE(map_527);
    *map_527 = implicit_cast<TNode<Map>>(t3268);
    // ../../third_party/v8/builtins/array-sort.tq:1747:5
    TNode<FixedArray> t3269 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(kSortStateSize())));
    USE(implicit_cast<TNode<FixedArray>>(t3269));
    TNode<FixedArray> sort_state_1078_impl;
    auto sort_state_1078 = &sort_state_1078_impl;
    USE(sort_state_1078);
    *sort_state_1078 = implicit_cast<TNode<FixedArray>>(t3269);
    // ../../third_party/v8/builtins/array-sort.tq:1749:5
    TNode<Smi> t3270 = UncheckedCast<Smi>(SmiTag(implicit_cast<TNode<IntPtrT>>(kSortStateSize())));
    USE(implicit_cast<TNode<Smi>>(t3270));
    FillFixedArrayWithSmiZero(implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<TNode<Smi>>(t3270));
    // ../../third_party/v8/builtins/array-sort.tq:1751:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<int31_t>(kReceiverIdx()), implicit_cast<TNode<Object>>((*obj_1077)));
    // ../../third_party/v8/builtins/array-sort.tq:1752:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<int31_t>(kUserCmpFnIdx()), implicit_cast<TNode<Object>>((*comparefnObj_1076)));
    // ../../third_party/v8/builtins/array-sort.tq:1753:5
    auto t3271 = [=]() {
      return implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kSortCompareUserFn).code()));
    };
    auto t3272 = [=]() {
      return implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kSortCompareDefault).code()));
    };
    TVARIABLE(Code, t3273_1079_impl);
    auto t3273_1079 = &t3273_1079_impl;
    USE(t3273_1079);
    {
      Label label__True_947_impl(this);
      Label* label__True_947 = &label__True_947_impl;
      USE(label__True_947);
      Label label__False_948_impl(this);
      Label* label__False_948 = &label__False_948_impl;
      USE(label__False_948);
      Label label__done_1080_1490_impl(this, {t3273_1079});
      Label* label__done_1080_1490 = &label__done_1080_1490_impl;
      USE(label__done_1080_1490);
      TNode<BoolT> t3274 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*comparefnObj_1076)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t3274));
      Branch(implicit_cast<TNode<BoolT>>(t3274), label__True_947, label__False_948);
      BIND(label__True_947);
            *t3273_1079 = implicit_cast<TNode<Code>>(t3271());
      Goto(label__done_1080_1490);
      BIND(label__False_948);
            *t3273_1079 = implicit_cast<TNode<Code>>(t3272());
      Goto(label__done_1080_1490);
      BIND(label__done_1080_1490);
    }
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<int31_t>(kSortComparePtrIdx()), implicit_cast<TNode<Object>>((*t3273_1079).value()));
    // ../../third_party/v8/builtins/array-sort.tq:1755:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<int31_t>(kInitialReceiverMapIdx()), implicit_cast<TNode<Object>>((*map_527).value()));
    // ../../third_party/v8/builtins/array-sort.tq:1756:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<int31_t>(kBailoutStatusIdx()), implicit_cast<TNode<Object>>(kSuccess()));
    // ../../third_party/v8/builtins/array-sort.tq:1758:5
    {
      Label label_try_done_1081_1491_impl(this);
      Label* label_try_done_1081_1491 = &label_try_done_1081_1491_impl;
      USE(label_try_done_1081_1491);
      Label label_slow_949_impl(this);
      Label* label_slow_949 = &label_slow_949_impl;
      USE(label_slow_949);
      Label label_try_begin_1082_1492_impl(this);
      Label* label_try_begin_1082_1492 = &label_try_begin_1082_1492_impl;
      USE(label_try_begin_1082_1492);
      Goto(label_try_begin_1082_1492);
      if (label_try_begin_1082_1492->is_used())
      {
        BIND(label_try_begin_1082_1492);
        // ../../third_party/v8/builtins/array-sort.tq:1758:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1759:7
          TNode<JSArray> t3275 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<HeapObject>>((*obj_1077)), label_slow_949));
          USE(implicit_cast<TNode<JSArray>>(t3275));
          TNode<JSArray> a_1083_impl;
          auto a_1083 = &a_1083_impl;
          USE(a_1083);
          *a_1083 = implicit_cast<TNode<JSArray>>(t3275);
          // ../../third_party/v8/builtins/array-sort.tq:1760:7
          TNode<Int32T> t3276 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_527).value())));
          TNode<Int32T> elementsKind_1084_impl;
          auto elementsKind_1084 = &elementsKind_1084_impl;
          USE(elementsKind_1084);
          *elementsKind_1084 = implicit_cast<TNode<Int32T>>(t3276);
          // ../../third_party/v8/builtins/array-sort.tq:1761:7
          {
            Label label__True_950_impl(this);
            Label* label__True_950 = &label__True_950_impl;
            USE(label__True_950);
            Label label__False_951_impl(this, {});
            Label* label__False_951 = &label__False_951_impl;
            USE(label__False_951);
            TNode<BoolT> t3277 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_1084))));
            USE(implicit_cast<TNode<BoolT>>(t3277));
            TNode<BoolT> t3278 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3277)));
            USE(implicit_cast<TNode<BoolT>>(t3278));
            Branch(implicit_cast<TNode<BoolT>>(t3278), label__True_950, label__False_951);
            if (label__True_950->is_used())
            {
              BIND(label__True_950);
              // ../../third_party/v8/builtins/array-sort.tq:1761:46
              Goto(label_slow_949);
            }
            BIND(label__False_951);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1764:7
          TNode<Smi> t3279 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_1083))));
          TNode<Smi> len_1085_impl;
          auto len_1085 = &len_1085_impl;
          USE(len_1085);
          *len_1085 = implicit_cast<TNode<Smi>>(t3279);
          // ../../third_party/v8/builtins/array-sort.tq:1765:7
          {
            Label label__True_952_impl(this);
            Label* label__True_952 = &label__True_952_impl;
            USE(label__True_952);
            Label label__False_953_impl(this, {});
            Label* label__False_953 = &label__False_953_impl;
            USE(label__False_953);
            int31_t t3280 = 2;
            TNode<Smi> t3281 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3280)));
            TNode<BoolT> t3282 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*len_1085)), implicit_cast<TNode<Smi>>(t3281)));
            USE(implicit_cast<TNode<BoolT>>(t3282));
            Branch(implicit_cast<TNode<BoolT>>(t3282), label__True_952, label__False_953);
            if (label__True_952->is_used())
            {
              BIND(label__True_952);
              // ../../third_party/v8/builtins/array-sort.tq:1765:20
              arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
            }
            BIND(label__False_953);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1769:7
          TNode<Smi> t3283 = UncheckedCast<Smi>(CallRuntime(Runtime::kPrepareElementsForSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_1077)), implicit_cast<TNode<Number>>((*len_1085))));
          USE(implicit_cast<TNode<Smi>>(t3283));
          TNode<Smi> nofNonUndefined_1086_impl;
          auto nofNonUndefined_1086 = &nofNonUndefined_1086_impl;
          USE(nofNonUndefined_1086);
          *nofNonUndefined_1086 = implicit_cast<TNode<Smi>>(t3283);
          // ../../third_party/v8/builtins/array-sort.tq:1770:7
          // ../../third_party/v8/builtins/array-sort.tq:1772:7
          StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<int31_t>(kInitialReceiverLengthIdx()), implicit_cast<TNode<Object>>((*len_1085)));
          // ../../third_party/v8/builtins/array-sort.tq:1774:7
          {
            Label label__True_954_impl(this);
            Label* label__True_954 = &label__True_954_impl;
            USE(label__True_954);
            Label label__False_955_impl(this);
            Label* label__False_955 = &label__False_955_impl;
            USE(label__False_955);
            Label label_if_done_label_1087_1493_impl(this, {});
            Label* label_if_done_label_1087_1493 = &label_if_done_label_1087_1493_impl;
            USE(label_if_done_label_1087_1493);
            TNode<BoolT> t3284 = UncheckedCast<BoolT>(IsDoubleElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_1084))));
            USE(implicit_cast<TNode<BoolT>>(t3284));
            Branch(implicit_cast<TNode<BoolT>>(t3284), label__True_954, label__False_955);
            if (label__True_954->is_used())
            {
              BIND(label__True_954);
              // ../../third_party/v8/builtins/array-sort.tq:1774:47
              {
                // ../../third_party/v8/builtins/array-sort.tq:1775:9
                InitializeSortStateAccessor20ATFastDoubleElements(implicit_cast<TNode<FixedArray>>((*sort_state_1078)));
              }
              Goto(label_if_done_label_1087_1493);
            }
            if (label__False_955->is_used())
            {
              BIND(label__False_955);
              // ../../third_party/v8/builtins/array-sort.tq:1776:14
              {
                Label label__True_956_impl(this);
                Label* label__True_956 = &label__True_956_impl;
                USE(label__True_956);
                Label label__False_957_impl(this);
                Label* label__False_957 = &label__False_957_impl;
                USE(label__False_957);
                Label label_if_done_label_1088_1494_impl(this, {});
                Label* label_if_done_label_1088_1494 = &label_if_done_label_1088_1494_impl;
                USE(label_if_done_label_1088_1494);
                TNode<Int32T> t3285 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS)));
                TNode<BoolT> t3286 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_1084)), implicit_cast<TNode<Int32T>>(t3285)));
                USE(implicit_cast<TNode<BoolT>>(t3286));
                Branch(implicit_cast<TNode<BoolT>>(t3286), label__True_956, label__False_957);
                if (label__True_956->is_used())
                {
                  BIND(label__True_956);
                  // ../../third_party/v8/builtins/array-sort.tq:1776:55
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1777:9
                    InitializeSortStateAccessor23ATFastPackedSmiElements(implicit_cast<TNode<FixedArray>>((*sort_state_1078)));
                  }
                  Goto(label_if_done_label_1088_1494);
                }
                if (label__False_957->is_used())
                {
                  BIND(label__False_957);
                  // ../../third_party/v8/builtins/array-sort.tq:1778:14
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1779:9
                    InitializeSortStateAccessor25ATFastSmiOrObjectElements(implicit_cast<TNode<FixedArray>>((*sort_state_1078)));
                  }
                  Goto(label_if_done_label_1088_1494);
                }
                BIND(label_if_done_label_1088_1494);
              }
              Goto(label_if_done_label_1087_1493);
            }
            BIND(label_if_done_label_1087_1493);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1781:7
          TNode<Object> t3287 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayTimSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<TNode<Smi>>((*nofNonUndefined_1086))));
          USE(implicit_cast<TNode<Object>>(t3287));
        }
        Goto(label_try_done_1081_1491);
      }
      if (label_slow_949->is_used())
      {
        BIND(label_slow_949);
        // ../../third_party/v8/builtins/array-sort.tq:1783:16
        {
          // ../../third_party/v8/builtins/array-sort.tq:1785:7
          const char* t3288 = "length";
          TNode<Object> t3289 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t3288)));
          TNode<Object> t3290 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_1077)), implicit_cast<TNode<Object>>(t3289)));
          USE(implicit_cast<TNode<Object>>(t3290));
          TNode<Number> t3291 = UncheckedCast<Number>(ToLength_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t3290)));
          USE(implicit_cast<TNode<Number>>(t3291));
          TNode<Number> len_1089_impl;
          auto len_1089 = &len_1089_impl;
          USE(len_1089);
          *len_1089 = implicit_cast<TNode<Number>>(t3291);
          // ../../third_party/v8/builtins/array-sort.tq:1788:7
          {
            Label label__True_958_impl(this);
            Label* label__True_958 = &label__True_958_impl;
            USE(label__True_958);
            Label label__False_959_impl(this, {});
            Label* label__False_959 = &label__False_959_impl;
            USE(label__False_959);
            int31_t t3292 = 2;
            TNode<Number> t3293 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3292)));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*len_1089)), implicit_cast<TNode<Number>>(t3293), label__True_958, label__False_959);
            if (label__True_958->is_used())
            {
              BIND(label__True_958);
              // ../../third_party/v8/builtins/array-sort.tq:1788:20
              arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
            }
            BIND(label__False_959);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1789:7
          TNode<Smi> t3294 = UncheckedCast<Smi>(CallRuntime(Runtime::kPrepareElementsForSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_1077)), implicit_cast<TNode<Number>>((*len_1089))));
          USE(implicit_cast<TNode<Smi>>(t3294));
          TNode<Smi> nofNonUndefined_1090_impl;
          auto nofNonUndefined_1090 = &nofNonUndefined_1090_impl;
          USE(nofNonUndefined_1090);
          *nofNonUndefined_1090 = implicit_cast<TNode<Smi>>(t3294);
          // ../../third_party/v8/builtins/array-sort.tq:1791:7
          StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<int31_t>(kInitialReceiverLengthIdx()), implicit_cast<TNode<Object>>((*len_1089)));
          // ../../third_party/v8/builtins/array-sort.tq:1795:7
          TNode<Map> t3295 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*obj_1077))));
          *map_527 = implicit_cast<TNode<Map>>(t3295);
          // ../../third_party/v8/builtins/array-sort.tq:1797:7
          {
            Label label__True_960_impl(this);
            Label* label__True_960 = &label__True_960_impl;
            USE(label__True_960);
            Label label__False_961_impl(this);
            Label* label__False_961 = &label__False_961_impl;
            USE(label__False_961);
            Label label_if_done_label_1091_1495_impl(this, {});
            Label* label_if_done_label_1091_1495 = &label_if_done_label_1091_1495_impl;
            USE(label_if_done_label_1091_1495);
            Label label__True_962_impl(this);
            Label* label__True_962 = &label__True_962_impl;
            USE(label__True_962);
            Label label__True_963_impl(this);
            Label* label__True_963 = &label__True_963_impl;
            USE(label__True_963);
            TNode<Int32T> t3296 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_527).value())));
            TNode<Int32T> t3297 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(DICTIONARY_ELEMENTS)));
            TNode<BoolT> t3298 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(t3296), implicit_cast<TNode<Int32T>>(t3297)));
            USE(implicit_cast<TNode<BoolT>>(t3298));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t3298), label__False_961);
            TNode<BoolT> t3299 = UncheckedCast<BoolT>(IsExtensibleMap(implicit_cast<TNode<Map>>((*map_527).value())));
            USE(implicit_cast<TNode<BoolT>>(t3299));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t3299), label__False_961);
            TNode<Int32T> t3300 = UncheckedCast<Int32T>(LoadMapInstanceType(implicit_cast<TNode<Map>>((*map_527).value())));
            TNode<BoolT> t3301 = UncheckedCast<BoolT>(IsCustomElementsReceiverInstanceType(implicit_cast<TNode<Int32T>>(t3300)));
            USE(implicit_cast<TNode<BoolT>>(t3301));
            TNode<BoolT> t3302 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3301)));
            USE(implicit_cast<TNode<BoolT>>(t3302));
            Branch(implicit_cast<TNode<BoolT>>(t3302), label__True_960, label__False_961);
            if (label__True_960->is_used())
            {
              BIND(label__True_960);
              // ../../third_party/v8/builtins/array-sort.tq:1798:69
              {
                // ../../third_party/v8/builtins/array-sort.tq:1799:9
                InitializeSortStateAccessor20ATDictionaryElements(implicit_cast<TNode<FixedArray>>((*sort_state_1078)));
              }
              Goto(label_if_done_label_1091_1495);
            }
            if (label__False_961->is_used())
            {
              BIND(label__False_961);
              // ../../third_party/v8/builtins/array-sort.tq:1800:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:1801:9
                InitializeSortStateAccessor25ATGenericElementsAccessor(implicit_cast<TNode<FixedArray>>((*sort_state_1078)));
              }
              Goto(label_if_done_label_1091_1495);
            }
            BIND(label_if_done_label_1091_1495);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1803:7
          TNode<Object> t3303 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayTimSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>((*sort_state_1078)), implicit_cast<TNode<Smi>>((*nofNonUndefined_1090))));
          USE(implicit_cast<TNode<Object>>(t3303));
        }
        Goto(label_try_done_1081_1491);
      }
      BIND(label_try_done_1081_1491);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1806:5
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_974, TVariable<Smi>* Bailout0_540) {
  Label label_macro_end_1501_impl(this, {});
  Label* label_macro_end_1501 = &label_macro_end_1501_impl;
  USE(label_macro_end_1501);
  // ../../src/builtins/array-foreach.tq:77:16
  {
    // ../../src/builtins/array-foreach.tq:78:5
    int31_t t3311 = 0;
    TVARIABLE(Smi, k_541_impl);
    auto k_541 = &k_541_impl;
    USE(k_541);
    TNode<Smi> t3312 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3311)));
    *k_541 = implicit_cast<TNode<Smi>>(t3312);
    // ../../src/builtins/array-foreach.tq:79:5
    TNode<Map> t3313 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
    TNode<Map> map_1092_impl;
    auto map_1092 = &map_1092_impl;
    USE(map_1092);
    *map_1092 = implicit_cast<TNode<Map>>(t3313);
    // ../../src/builtins/array-foreach.tq:81:5
    {
      Label label_try_done_1093_1502_impl(this);
      Label* label_try_done_1093_1502 = &label_try_done_1093_1502_impl;
      USE(label_try_done_1093_1502);
      Label label_Slow_975_impl(this);
      Label* label_Slow_975 = &label_Slow_975_impl;
      USE(label_Slow_975);
      Label label_try_begin_1094_1503_impl(this);
      Label* label_try_begin_1094_1503 = &label_try_begin_1094_1503_impl;
      USE(label_try_begin_1094_1503);
      Goto(label_try_begin_1094_1503);
      if (label_try_begin_1094_1503->is_used())
      {
        BIND(label_try_begin_1094_1503);
        // ../../src/builtins/array-foreach.tq:81:9
        {
          // ../../src/builtins/array-foreach.tq:83:7
          Label label__True_976_impl(this);
          Label* label__True_976 = &label__True_976_impl;
          USE(label__True_976);
          Label label__False_977_impl(this);
          Label* label__False_977 = &label__False_977_impl;
          USE(label__False_977);
          Label label_header_1095_1504_impl(this, {k_541});
          Label* label_header_1095_1504 = &label_header_1095_1504_impl;
          USE(label_header_1095_1504);
          Goto(label_header_1095_1504);
          BIND(label_header_1095_1504);
          Label label_action_1096_1505_impl(this);
          Label* label_action_1096_1505 = &label_action_1096_1505_impl;
          USE(label_action_1096_1505);
          TNode<BoolT> t3314 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_541).value()), implicit_cast<TNode<Smi>>(p_len)));
          USE(implicit_cast<TNode<BoolT>>(t3314));
          Branch(implicit_cast<TNode<BoolT>>(t3314), label__True_976, label__False_977);
          if (label__True_976->is_used())
          {
            BIND(label__True_976);
            // ../../src/builtins/array-foreach.tq:83:34
            {
              // ../../src/builtins/array-foreach.tq:85:9
              {
                Label label__True_978_impl(this);
                Label* label__True_978 = &label__True_978_impl;
                USE(label__True_978);
                Label label__False_979_impl(this, {});
                Label* label__False_979 = &label__False_979_impl;
                USE(label__False_979);
                TNode<Map> t3315 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
                TNode<BoolT> t3316 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*map_1092)), implicit_cast<TNode<Object>>(t3315)));
                USE(implicit_cast<TNode<BoolT>>(t3316));
                Branch(implicit_cast<TNode<BoolT>>(t3316), label__True_978, label__False_979);
                if (label__True_978->is_used())
                {
                  BIND(label__True_978);
                  // ../../src/builtins/array-foreach.tq:85:27
                  Goto(label_Slow_975);
                }
                BIND(label__False_979);
              }
              // ../../src/builtins/array-foreach.tq:87:9
              {
                Label label__True_980_impl(this);
                Label* label__True_980 = &label__True_980_impl;
                USE(label__True_980);
                Label label__False_981_impl(this, {});
                Label* label__False_981 = &label__False_981_impl;
                USE(label__False_981);
                TNode<Number> t3317 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>(p_a)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_541).value()), implicit_cast<TNode<Number>>(t3317), label__True_980, label__False_981);
                if (label__True_980->is_used())
                {
                  BIND(label__True_980);
                  // ../../src/builtins/array-foreach.tq:87:28
                  Goto(label_Slow_975);
                }
                BIND(label__False_981);
              }
              // ../../src/builtins/array-foreach.tq:89:9
              {
                Label label_try_done_1097_1506_impl(this);
                Label* label_try_done_1097_1506 = &label_try_done_1097_1506_impl;
                USE(label_try_done_1097_1506);
                Label label_FoundHole_982_impl(this);
                Label* label_FoundHole_982 = &label_FoundHole_982_impl;
                USE(label_FoundHole_982);
                Label label_try_begin_1098_1507_impl(this);
                Label* label_try_begin_1098_1507 = &label_try_begin_1098_1507_impl;
                USE(label_try_begin_1098_1507);
                Goto(label_try_begin_1098_1507);
                if (label_try_begin_1098_1507->is_used())
                {
                  BIND(label_try_begin_1098_1507);
                  // ../../src/builtins/array-foreach.tq:89:13
                  {
                    // ../../src/builtins/array-foreach.tq:90:11
                    TNode<Object> t3318 = UncheckedCast<Object>(LoadElementNoHole18ATFixedDoubleArray(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>((*k_541).value()), label_FoundHole_982));
                    USE(implicit_cast<TNode<Object>>(t3318));
                    TNode<Object> value_1099_impl;
                    auto value_1099 = &value_1099_impl;
                    USE(value_1099);
                    *value_1099 = implicit_cast<TNode<Object>>(t3318);
                    // ../../src/builtins/array-foreach.tq:92:11
                    TNode<Object> t3319 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*value_1099)), implicit_cast<TNode<Object>>((*k_541).value()), implicit_cast<TNode<Object>>(p_a)));
                    USE(implicit_cast<TNode<Object>>(t3319));
                  }
                  Goto(label_try_done_1097_1506);
                }
                if (label_FoundHole_982->is_used())
                {
                  BIND(label_FoundHole_982);
                  // ../../src/builtins/array-foreach.tq:94:25
                  {
                    // ../../src/builtins/array-foreach.tq:99:11
                    {
                      Label label__True_983_impl(this);
                      Label* label__True_983 = &label__True_983_impl;
                      USE(label__True_983);
                      Label label__False_984_impl(this, {});
                      Label* label__False_984 = &label__False_984_impl;
                      USE(label__False_984);
                      TNode<BoolT> t3320 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(implicit_cast<TNode<BoolT>>(t3320));
                      Branch(implicit_cast<TNode<BoolT>>(t3320), label__True_983, label__False_984);
                      if (label__True_983->is_used())
                      {
                        BIND(label__True_983);
                        // ../../src/builtins/array-foreach.tq:99:51
                        *Bailout0_540 = implicit_cast<TNode<Smi>>((*k_541).value());
                        Goto(label_Bailout_974);
                      }
                      BIND(label__False_984);
                    }
                  }
                  Goto(label_try_done_1097_1506);
                }
                BIND(label_try_done_1097_1506);
              }
            }
            Goto(label_action_1096_1505);
          }
          {
            BIND(label_action_1096_1505);
            int31_t t3321 = 1;
            TNode<Smi> t3322 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3321)));
            TNode<Smi> t3323 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_541).value()), implicit_cast<TNode<Smi>>(t3322)));
            USE(implicit_cast<TNode<Smi>>(t3323));
            *k_541 = implicit_cast<TNode<Smi>>(t3323);
            Goto(label_header_1095_1504);
          }
          BIND(label__False_977);
        }
        Goto(label_try_done_1093_1502);
      }
      if (label_Slow_975->is_used())
      {
        BIND(label_Slow_975);
        // ../../src/builtins/array-foreach.tq:103:16
        {
          // ../../src/builtins/array-foreach.tq:104:7
          *Bailout0_540 = implicit_cast<TNode<Smi>>((*k_541).value());
          Goto(label_Bailout_974);
        }
      }
      BIND(label_try_done_1093_1502);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_985, TVariable<Smi>* Bailout0_542) {
  Label label_macro_end_1508_impl(this, {});
  Label* label_macro_end_1508 = &label_macro_end_1508_impl;
  USE(label_macro_end_1508);
  // ../../src/builtins/array-foreach.tq:77:16
  {
    // ../../src/builtins/array-foreach.tq:78:5
    int31_t t3324 = 0;
    TVARIABLE(Smi, k_543_impl);
    auto k_543 = &k_543_impl;
    USE(k_543);
    TNode<Smi> t3325 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3324)));
    *k_543 = implicit_cast<TNode<Smi>>(t3325);
    // ../../src/builtins/array-foreach.tq:79:5
    TNode<Map> t3326 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
    TNode<Map> map_1100_impl;
    auto map_1100 = &map_1100_impl;
    USE(map_1100);
    *map_1100 = implicit_cast<TNode<Map>>(t3326);
    // ../../src/builtins/array-foreach.tq:81:5
    {
      Label label_try_done_1101_1509_impl(this);
      Label* label_try_done_1101_1509 = &label_try_done_1101_1509_impl;
      USE(label_try_done_1101_1509);
      Label label_Slow_986_impl(this);
      Label* label_Slow_986 = &label_Slow_986_impl;
      USE(label_Slow_986);
      Label label_try_begin_1102_1510_impl(this);
      Label* label_try_begin_1102_1510 = &label_try_begin_1102_1510_impl;
      USE(label_try_begin_1102_1510);
      Goto(label_try_begin_1102_1510);
      if (label_try_begin_1102_1510->is_used())
      {
        BIND(label_try_begin_1102_1510);
        // ../../src/builtins/array-foreach.tq:81:9
        {
          // ../../src/builtins/array-foreach.tq:83:7
          Label label__True_987_impl(this);
          Label* label__True_987 = &label__True_987_impl;
          USE(label__True_987);
          Label label__False_988_impl(this);
          Label* label__False_988 = &label__False_988_impl;
          USE(label__False_988);
          Label label_header_1103_1511_impl(this, {k_543});
          Label* label_header_1103_1511 = &label_header_1103_1511_impl;
          USE(label_header_1103_1511);
          Goto(label_header_1103_1511);
          BIND(label_header_1103_1511);
          Label label_action_1104_1512_impl(this);
          Label* label_action_1104_1512 = &label_action_1104_1512_impl;
          USE(label_action_1104_1512);
          TNode<BoolT> t3327 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_543).value()), implicit_cast<TNode<Smi>>(p_len)));
          USE(implicit_cast<TNode<BoolT>>(t3327));
          Branch(implicit_cast<TNode<BoolT>>(t3327), label__True_987, label__False_988);
          if (label__True_987->is_used())
          {
            BIND(label__True_987);
            // ../../src/builtins/array-foreach.tq:83:34
            {
              // ../../src/builtins/array-foreach.tq:85:9
              {
                Label label__True_989_impl(this);
                Label* label__True_989 = &label__True_989_impl;
                USE(label__True_989);
                Label label__False_990_impl(this, {});
                Label* label__False_990 = &label__False_990_impl;
                USE(label__False_990);
                TNode<Map> t3328 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
                TNode<BoolT> t3329 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*map_1100)), implicit_cast<TNode<Object>>(t3328)));
                USE(implicit_cast<TNode<BoolT>>(t3329));
                Branch(implicit_cast<TNode<BoolT>>(t3329), label__True_989, label__False_990);
                if (label__True_989->is_used())
                {
                  BIND(label__True_989);
                  // ../../src/builtins/array-foreach.tq:85:27
                  Goto(label_Slow_986);
                }
                BIND(label__False_990);
              }
              // ../../src/builtins/array-foreach.tq:87:9
              {
                Label label__True_991_impl(this);
                Label* label__True_991 = &label__True_991_impl;
                USE(label__True_991);
                Label label__False_992_impl(this, {});
                Label* label__False_992 = &label__False_992_impl;
                USE(label__False_992);
                TNode<Number> t3330 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>(p_a)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_543).value()), implicit_cast<TNode<Number>>(t3330), label__True_991, label__False_992);
                if (label__True_991->is_used())
                {
                  BIND(label__True_991);
                  // ../../src/builtins/array-foreach.tq:87:28
                  Goto(label_Slow_986);
                }
                BIND(label__False_992);
              }
              // ../../src/builtins/array-foreach.tq:89:9
              {
                Label label_try_done_1105_1513_impl(this);
                Label* label_try_done_1105_1513 = &label_try_done_1105_1513_impl;
                USE(label_try_done_1105_1513);
                Label label_FoundHole_993_impl(this);
                Label* label_FoundHole_993 = &label_FoundHole_993_impl;
                USE(label_FoundHole_993);
                Label label_try_begin_1106_1514_impl(this);
                Label* label_try_begin_1106_1514 = &label_try_begin_1106_1514_impl;
                USE(label_try_begin_1106_1514);
                Goto(label_try_begin_1106_1514);
                if (label_try_begin_1106_1514->is_used())
                {
                  BIND(label_try_begin_1106_1514);
                  // ../../src/builtins/array-foreach.tq:89:13
                  {
                    // ../../src/builtins/array-foreach.tq:90:11
                    TNode<Object> t3331 = UncheckedCast<Object>(LoadElementNoHole12ATFixedArray(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>((*k_543).value()), label_FoundHole_993));
                    USE(implicit_cast<TNode<Object>>(t3331));
                    TNode<Object> value_1107_impl;
                    auto value_1107 = &value_1107_impl;
                    USE(value_1107);
                    *value_1107 = implicit_cast<TNode<Object>>(t3331);
                    // ../../src/builtins/array-foreach.tq:92:11
                    TNode<Object> t3332 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*value_1107)), implicit_cast<TNode<Object>>((*k_543).value()), implicit_cast<TNode<Object>>(p_a)));
                    USE(implicit_cast<TNode<Object>>(t3332));
                  }
                  Goto(label_try_done_1105_1513);
                }
                if (label_FoundHole_993->is_used())
                {
                  BIND(label_FoundHole_993);
                  // ../../src/builtins/array-foreach.tq:94:25
                  {
                    // ../../src/builtins/array-foreach.tq:99:11
                    {
                      Label label__True_994_impl(this);
                      Label* label__True_994 = &label__True_994_impl;
                      USE(label__True_994);
                      Label label__False_995_impl(this, {});
                      Label* label__False_995 = &label__False_995_impl;
                      USE(label__False_995);
                      TNode<BoolT> t3333 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(implicit_cast<TNode<BoolT>>(t3333));
                      Branch(implicit_cast<TNode<BoolT>>(t3333), label__True_994, label__False_995);
                      if (label__True_994->is_used())
                      {
                        BIND(label__True_994);
                        // ../../src/builtins/array-foreach.tq:99:51
                        *Bailout0_542 = implicit_cast<TNode<Smi>>((*k_543).value());
                        Goto(label_Bailout_985);
                      }
                      BIND(label__False_995);
                    }
                  }
                  Goto(label_try_done_1105_1513);
                }
                BIND(label_try_done_1105_1513);
              }
            }
            Goto(label_action_1104_1512);
          }
          {
            BIND(label_action_1104_1512);
            int31_t t3334 = 1;
            TNode<Smi> t3335 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3334)));
            TNode<Smi> t3336 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_543).value()), implicit_cast<TNode<Smi>>(t3335)));
            USE(implicit_cast<TNode<Smi>>(t3336));
            *k_543 = implicit_cast<TNode<Smi>>(t3336);
            Goto(label_header_1103_1511);
          }
          BIND(label__False_988);
        }
        Goto(label_try_done_1101_1509);
      }
      if (label_Slow_986->is_used())
      {
        BIND(label_Slow_986);
        // ../../src/builtins/array-foreach.tq:103:16
        {
          // ../../src/builtins/array-foreach.tq:104:7
          *Bailout0_542 = implicit_cast<TNode<Smi>>((*k_543).value());
          Goto(label_Bailout_985);
        }
      }
      BIND(label_try_done_1101_1509);
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::FastArrayLastIndexOf12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_length, TNode<Smi> p_from, TNode<Object> p_searchElement) {
  TVARIABLE(Smi, _return_544_impl);
  auto _return_544 = &_return_544_impl;
  USE(_return_544);
  Label label_macro_end_1515_impl(this, {_return_544});
  Label* label_macro_end_1515 = &label_macro_end_1515_impl;
  USE(label_macro_end_1515);
  // ../../src/builtins/array-lastindexof.tq:29:35
  {
    // ../../src/builtins/array-lastindexof.tq:30:5
    TNode<FixedArrayBase> t3337 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedArrayBase> elements_1108_impl;
    auto elements_1108 = &elements_1108_impl;
    USE(elements_1108);
    *elements_1108 = implicit_cast<TNode<FixedArrayBase>>(t3337);
    // ../../src/builtins/array-lastindexof.tq:31:5
    TVARIABLE(Smi, k_545_impl);
    auto k_545 = &k_545_impl;
    USE(k_545);
    *k_545 = implicit_cast<TNode<Smi>>(p_from);
    // ../../src/builtins/array-lastindexof.tq:32:5
    {
      Label label__True_996_impl(this);
      Label* label__True_996 = &label__True_996_impl;
      USE(label__True_996);
      Label label__False_997_impl(this);
      Label* label__False_997 = &label__False_997_impl;
      USE(label__False_997);
      Label label_header_1109_1516_impl(this, {k_545});
      Label* label_header_1109_1516 = &label_header_1109_1516_impl;
      USE(label_header_1109_1516);
      Goto(label_header_1109_1516);
      BIND(label_header_1109_1516);
      int31_t t3338 = 0;
      TNode<Smi> t3339 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3338)));
      TNode<BoolT> t3340 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*k_545).value()), implicit_cast<TNode<Smi>>(t3339)));
      USE(implicit_cast<TNode<BoolT>>(t3340));
      Branch(implicit_cast<TNode<BoolT>>(t3340), label__True_996, label__False_997);
      if (label__True_996->is_used())
      {
        BIND(label__True_996);
        // ../../src/builtins/array-lastindexof.tq:32:20
        {
          // ../../src/builtins/array-lastindexof.tq:33:7
          {
            Label label_try_done_1110_1517_impl(this);
            Label* label_try_done_1110_1517 = &label_try_done_1110_1517_impl;
            USE(label_try_done_1110_1517);
            Label label_Hole_998_impl(this);
            Label* label_Hole_998 = &label_Hole_998_impl;
            USE(label_Hole_998);
            Label label_try_begin_1111_1518_impl(this);
            Label* label_try_begin_1111_1518 = &label_try_begin_1111_1518_impl;
            USE(label_try_begin_1111_1518);
            Goto(label_try_begin_1111_1518);
            if (label_try_begin_1111_1518->is_used())
            {
              BIND(label_try_begin_1111_1518);
              // ../../src/builtins/array-lastindexof.tq:33:11
              {
                // ../../src/builtins/array-lastindexof.tq:34:9
                TNode<Object> t3341 = UncheckedCast<Object>(LoadWithHoleCheck12ATFixedArray(implicit_cast<TNode<FixedArrayBase>>((*elements_1108)), implicit_cast<TNode<Smi>>((*k_545).value()), label_Hole_998));
                USE(implicit_cast<TNode<Object>>(t3341));
                TNode<Object> element_1112_impl;
                auto element_1112 = &element_1112_impl;
                USE(element_1112);
                *element_1112 = implicit_cast<TNode<Object>>(t3341);
                // ../../src/builtins/array-lastindexof.tq:37:9
                TNode<Oddball> t3342 = UncheckedCast<Oddball>(StrictEqual(implicit_cast<TNode<Object>>(p_searchElement), implicit_cast<TNode<Object>>((*element_1112))));
                USE(implicit_cast<TNode<Oddball>>(t3342));
                TNode<Oddball> same_1113_impl;
                auto same_1113 = &same_1113_impl;
                USE(same_1113);
                *same_1113 = implicit_cast<TNode<Oddball>>(t3342);
                // ../../src/builtins/array-lastindexof.tq:38:9
                {
                  Label label__True_999_impl(this);
                  Label* label__True_999 = &label__True_999_impl;
                  USE(label__True_999);
                  Label label__False_1000_impl(this, {});
                  Label* label__False_1000 = &label__False_1000_impl;
                  USE(label__False_1000);
                  TNode<BoolT> t3343 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*same_1113)), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t3343));
                  Branch(implicit_cast<TNode<BoolT>>(t3343), label__True_999, label__False_1000);
                  if (label__True_999->is_used())
                  {
                    BIND(label__True_999);
                    // ../../src/builtins/array-lastindexof.tq:38:27
                    {
                      // ../../src/builtins/array-lastindexof.tq:39:11
                      // ../../src/builtins/array-lastindexof.tq:40:11
                      *_return_544 = implicit_cast<TNode<Smi>>((*k_545).value());
                      Goto(label_macro_end_1515);
                    }
                  }
                  BIND(label__False_1000);
                }
              }
              Goto(label_try_done_1110_1517);
            }
            if (label_Hole_998->is_used())
            {
              BIND(label_Hole_998);
              // ../../src/builtins/array-lastindexof.tq:43:18
              {
              }
              Goto(label_try_done_1110_1517);
            }
            BIND(label_try_done_1110_1517);
          }
          // ../../src/builtins/array-lastindexof.tq:45:7
          TNode<Smi> t3344 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3345 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*k_545).value()), implicit_cast<TNode<Smi>>(t3344)));
          *k_545 = implicit_cast<TNode<Smi>>(t3345);
        }
        Goto(label_header_1109_1516);
      }
      BIND(label__False_997);
    }
    // ../../src/builtins/array-lastindexof.tq:48:5
    // ../../src/builtins/array-lastindexof.tq:49:5
    int31_t t3346 = -1;
    TNode<Smi> t3347 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3346)));
    *_return_544 = implicit_cast<TNode<Smi>>(t3347);
    Goto(label_macro_end_1515);
  }
  BIND(label_macro_end_1515);
  return implicit_cast<TNode<Smi>>((*_return_544).value());
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::FastArrayLastIndexOf18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_length, TNode<Smi> p_from, TNode<Object> p_searchElement) {
  TVARIABLE(Smi, _return_546_impl);
  auto _return_546 = &_return_546_impl;
  USE(_return_546);
  Label label_macro_end_1519_impl(this, {_return_546});
  Label* label_macro_end_1519 = &label_macro_end_1519_impl;
  USE(label_macro_end_1519);
  // ../../src/builtins/array-lastindexof.tq:29:35
  {
    // ../../src/builtins/array-lastindexof.tq:30:5
    TNode<FixedArrayBase> t3348 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedArrayBase> elements_1114_impl;
    auto elements_1114 = &elements_1114_impl;
    USE(elements_1114);
    *elements_1114 = implicit_cast<TNode<FixedArrayBase>>(t3348);
    // ../../src/builtins/array-lastindexof.tq:31:5
    TVARIABLE(Smi, k_547_impl);
    auto k_547 = &k_547_impl;
    USE(k_547);
    *k_547 = implicit_cast<TNode<Smi>>(p_from);
    // ../../src/builtins/array-lastindexof.tq:32:5
    {
      Label label__True_1001_impl(this);
      Label* label__True_1001 = &label__True_1001_impl;
      USE(label__True_1001);
      Label label__False_1002_impl(this);
      Label* label__False_1002 = &label__False_1002_impl;
      USE(label__False_1002);
      Label label_header_1115_1520_impl(this, {k_547});
      Label* label_header_1115_1520 = &label_header_1115_1520_impl;
      USE(label_header_1115_1520);
      Goto(label_header_1115_1520);
      BIND(label_header_1115_1520);
      int31_t t3349 = 0;
      TNode<Smi> t3350 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3349)));
      TNode<BoolT> t3351 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*k_547).value()), implicit_cast<TNode<Smi>>(t3350)));
      USE(implicit_cast<TNode<BoolT>>(t3351));
      Branch(implicit_cast<TNode<BoolT>>(t3351), label__True_1001, label__False_1002);
      if (label__True_1001->is_used())
      {
        BIND(label__True_1001);
        // ../../src/builtins/array-lastindexof.tq:32:20
        {
          // ../../src/builtins/array-lastindexof.tq:33:7
          {
            Label label_try_done_1116_1521_impl(this);
            Label* label_try_done_1116_1521 = &label_try_done_1116_1521_impl;
            USE(label_try_done_1116_1521);
            Label label_Hole_1003_impl(this);
            Label* label_Hole_1003 = &label_Hole_1003_impl;
            USE(label_Hole_1003);
            Label label_try_begin_1117_1522_impl(this);
            Label* label_try_begin_1117_1522 = &label_try_begin_1117_1522_impl;
            USE(label_try_begin_1117_1522);
            Goto(label_try_begin_1117_1522);
            if (label_try_begin_1117_1522->is_used())
            {
              BIND(label_try_begin_1117_1522);
              // ../../src/builtins/array-lastindexof.tq:33:11
              {
                // ../../src/builtins/array-lastindexof.tq:34:9
                TNode<Object> t3352 = UncheckedCast<Object>(LoadWithHoleCheck18ATFixedDoubleArray(implicit_cast<TNode<FixedArrayBase>>((*elements_1114)), implicit_cast<TNode<Smi>>((*k_547).value()), label_Hole_1003));
                USE(implicit_cast<TNode<Object>>(t3352));
                TNode<Object> element_1118_impl;
                auto element_1118 = &element_1118_impl;
                USE(element_1118);
                *element_1118 = implicit_cast<TNode<Object>>(t3352);
                // ../../src/builtins/array-lastindexof.tq:37:9
                TNode<Oddball> t3353 = UncheckedCast<Oddball>(StrictEqual(implicit_cast<TNode<Object>>(p_searchElement), implicit_cast<TNode<Object>>((*element_1118))));
                USE(implicit_cast<TNode<Oddball>>(t3353));
                TNode<Oddball> same_1119_impl;
                auto same_1119 = &same_1119_impl;
                USE(same_1119);
                *same_1119 = implicit_cast<TNode<Oddball>>(t3353);
                // ../../src/builtins/array-lastindexof.tq:38:9
                {
                  Label label__True_1004_impl(this);
                  Label* label__True_1004 = &label__True_1004_impl;
                  USE(label__True_1004);
                  Label label__False_1005_impl(this, {});
                  Label* label__False_1005 = &label__False_1005_impl;
                  USE(label__False_1005);
                  TNode<BoolT> t3354 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*same_1119)), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t3354));
                  Branch(implicit_cast<TNode<BoolT>>(t3354), label__True_1004, label__False_1005);
                  if (label__True_1004->is_used())
                  {
                    BIND(label__True_1004);
                    // ../../src/builtins/array-lastindexof.tq:38:27
                    {
                      // ../../src/builtins/array-lastindexof.tq:39:11
                      // ../../src/builtins/array-lastindexof.tq:40:11
                      *_return_546 = implicit_cast<TNode<Smi>>((*k_547).value());
                      Goto(label_macro_end_1519);
                    }
                  }
                  BIND(label__False_1005);
                }
              }
              Goto(label_try_done_1116_1521);
            }
            if (label_Hole_1003->is_used())
            {
              BIND(label_Hole_1003);
              // ../../src/builtins/array-lastindexof.tq:43:18
              {
              }
              Goto(label_try_done_1116_1521);
            }
            BIND(label_try_done_1116_1521);
          }
          // ../../src/builtins/array-lastindexof.tq:45:7
          TNode<Smi> t3355 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3356 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*k_547).value()), implicit_cast<TNode<Smi>>(t3355)));
          *k_547 = implicit_cast<TNode<Smi>>(t3356);
        }
        Goto(label_header_1115_1520);
      }
      BIND(label__False_1002);
    }
    // ../../src/builtins/array-lastindexof.tq:48:5
    // ../../src/builtins/array-lastindexof.tq:49:5
    int31_t t3357 = -1;
    TNode<Smi> t3358 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3357)));
    *_return_546 = implicit_cast<TNode<Smi>>(t3358);
    Goto(label_macro_end_1519);
  }
  BIND(label_macro_end_1519);
  return implicit_cast<TNode<Smi>>((*_return_546).value());
}

void ArrayBuiltinsFromDSLAssembler::FastPackedArrayReverse23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  Label label_macro_end_1523_impl(this, {});
  Label* label_macro_end_1523 = &label_macro_end_1523_impl;
  USE(label_macro_end_1523);
  // ../../src/builtins/array-reverse.tq:61:46
  {
    // ../../src/builtins/array-reverse.tq:62:5
    int31_t t3359 = 0;
    TVARIABLE(Smi, lower_548_impl);
    auto lower_548 = &lower_548_impl;
    USE(lower_548);
    TNode<Smi> t3360 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3359)));
    *lower_548 = implicit_cast<TNode<Smi>>(t3360);
    // ../../src/builtins/array-reverse.tq:63:5
    int31_t t3361 = 1;
    TNode<Smi> t3362 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3361)));
    TNode<Smi> t3363 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3362)));
    USE(implicit_cast<TNode<Smi>>(t3363));
    TVARIABLE(Smi, upper_549_impl);
    auto upper_549 = &upper_549_impl;
    USE(upper_549);
    *upper_549 = implicit_cast<TNode<Smi>>(t3363);
    // ../../src/builtins/array-reverse.tq:65:5
    {
      Label label__True_1006_impl(this);
      Label* label__True_1006 = &label__True_1006_impl;
      USE(label__True_1006);
      Label label__False_1007_impl(this);
      Label* label__False_1007 = &label__False_1007_impl;
      USE(label__False_1007);
      Label label_header_1120_1524_impl(this, {lower_548, upper_549});
      Label* label_header_1120_1524 = &label_header_1120_1524_impl;
      USE(label_header_1120_1524);
      Goto(label_header_1120_1524);
      BIND(label_header_1120_1524);
      TNode<BoolT> t3364 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lower_548).value()), implicit_cast<TNode<Smi>>((*upper_549).value())));
      USE(implicit_cast<TNode<BoolT>>(t3364));
      Branch(implicit_cast<TNode<BoolT>>(t3364), label__True_1006, label__False_1007);
      if (label__True_1006->is_used())
      {
        BIND(label__True_1006);
        // ../../src/builtins/array-reverse.tq:65:27
        {
          // ../../src/builtins/array-reverse.tq:66:7
          TNode<Smi> t3365 = UncheckedCast<Smi>(LoadElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_548).value())));
          USE(implicit_cast<TNode<Smi>>(t3365));
          TNode<Smi> lower_value_1121_impl;
          auto lower_value_1121 = &lower_value_1121_impl;
          USE(lower_value_1121);
          *lower_value_1121 = implicit_cast<TNode<Smi>>(t3365);
          // ../../src/builtins/array-reverse.tq:67:7
          TNode<Smi> t3366 = UncheckedCast<Smi>(LoadElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_549).value())));
          USE(implicit_cast<TNode<Smi>>(t3366));
          TNode<Smi> upper_value_1122_impl;
          auto upper_value_1122 = &upper_value_1122_impl;
          USE(upper_value_1122);
          *upper_value_1122 = implicit_cast<TNode<Smi>>(t3366);
          // ../../src/builtins/array-reverse.tq:68:7
          StoreElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_548).value()), implicit_cast<TNode<Smi>>((*upper_value_1122)));
          // ../../src/builtins/array-reverse.tq:69:7
          StoreElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_549).value()), implicit_cast<TNode<Smi>>((*lower_value_1121)));
          // ../../src/builtins/array-reverse.tq:70:7
          TNode<Smi> t3367 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3368 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lower_548).value()), implicit_cast<TNode<Smi>>(t3367)));
          *lower_548 = implicit_cast<TNode<Smi>>(t3368);
          // ../../src/builtins/array-reverse.tq:71:7
          TNode<Smi> t3369 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3370 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*upper_549).value()), implicit_cast<TNode<Smi>>(t3369)));
          *upper_549 = implicit_cast<TNode<Smi>>(t3370);
        }
        Goto(label_header_1120_1524);
      }
      BIND(label__False_1007);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::FastPackedArrayReverse26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  Label label_macro_end_1525_impl(this, {});
  Label* label_macro_end_1525 = &label_macro_end_1525_impl;
  USE(label_macro_end_1525);
  // ../../src/builtins/array-reverse.tq:61:46
  {
    // ../../src/builtins/array-reverse.tq:62:5
    int31_t t3371 = 0;
    TVARIABLE(Smi, lower_550_impl);
    auto lower_550 = &lower_550_impl;
    USE(lower_550);
    TNode<Smi> t3372 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3371)));
    *lower_550 = implicit_cast<TNode<Smi>>(t3372);
    // ../../src/builtins/array-reverse.tq:63:5
    int31_t t3373 = 1;
    TNode<Smi> t3374 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3373)));
    TNode<Smi> t3375 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3374)));
    USE(implicit_cast<TNode<Smi>>(t3375));
    TVARIABLE(Smi, upper_551_impl);
    auto upper_551 = &upper_551_impl;
    USE(upper_551);
    *upper_551 = implicit_cast<TNode<Smi>>(t3375);
    // ../../src/builtins/array-reverse.tq:65:5
    {
      Label label__True_1008_impl(this);
      Label* label__True_1008 = &label__True_1008_impl;
      USE(label__True_1008);
      Label label__False_1009_impl(this);
      Label* label__False_1009 = &label__False_1009_impl;
      USE(label__False_1009);
      Label label_header_1123_1526_impl(this, {lower_550, upper_551});
      Label* label_header_1123_1526 = &label_header_1123_1526_impl;
      USE(label_header_1123_1526);
      Goto(label_header_1123_1526);
      BIND(label_header_1123_1526);
      TNode<BoolT> t3376 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lower_550).value()), implicit_cast<TNode<Smi>>((*upper_551).value())));
      USE(implicit_cast<TNode<BoolT>>(t3376));
      Branch(implicit_cast<TNode<BoolT>>(t3376), label__True_1008, label__False_1009);
      if (label__True_1008->is_used())
      {
        BIND(label__True_1008);
        // ../../src/builtins/array-reverse.tq:65:27
        {
          // ../../src/builtins/array-reverse.tq:66:7
          TNode<Object> t3377 = UncheckedCast<Object>(LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_550).value())));
          USE(implicit_cast<TNode<Object>>(t3377));
          TNode<Object> lower_value_1124_impl;
          auto lower_value_1124 = &lower_value_1124_impl;
          USE(lower_value_1124);
          *lower_value_1124 = implicit_cast<TNode<Object>>(t3377);
          // ../../src/builtins/array-reverse.tq:67:7
          TNode<Object> t3378 = UncheckedCast<Object>(LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_551).value())));
          USE(implicit_cast<TNode<Object>>(t3378));
          TNode<Object> upper_value_1125_impl;
          auto upper_value_1125 = &upper_value_1125_impl;
          USE(upper_value_1125);
          *upper_value_1125 = implicit_cast<TNode<Object>>(t3378);
          // ../../src/builtins/array-reverse.tq:68:7
          StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_550).value()), implicit_cast<TNode<Object>>((*upper_value_1125)));
          // ../../src/builtins/array-reverse.tq:69:7
          StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_551).value()), implicit_cast<TNode<Object>>((*lower_value_1124)));
          // ../../src/builtins/array-reverse.tq:70:7
          TNode<Smi> t3379 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3380 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lower_550).value()), implicit_cast<TNode<Smi>>(t3379)));
          *lower_550 = implicit_cast<TNode<Smi>>(t3380);
          // ../../src/builtins/array-reverse.tq:71:7
          TNode<Smi> t3381 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3382 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*upper_551).value()), implicit_cast<TNode<Smi>>(t3381)));
          *upper_551 = implicit_cast<TNode<Smi>>(t3382);
        }
        Goto(label_header_1123_1526);
      }
      BIND(label__False_1009);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::FastPackedArrayReverse26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  Label label_macro_end_1527_impl(this, {});
  Label* label_macro_end_1527 = &label_macro_end_1527_impl;
  USE(label_macro_end_1527);
  // ../../src/builtins/array-reverse.tq:61:46
  {
    // ../../src/builtins/array-reverse.tq:62:5
    int31_t t3383 = 0;
    TVARIABLE(Smi, lower_552_impl);
    auto lower_552 = &lower_552_impl;
    USE(lower_552);
    TNode<Smi> t3384 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3383)));
    *lower_552 = implicit_cast<TNode<Smi>>(t3384);
    // ../../src/builtins/array-reverse.tq:63:5
    int31_t t3385 = 1;
    TNode<Smi> t3386 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3385)));
    TNode<Smi> t3387 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3386)));
    USE(implicit_cast<TNode<Smi>>(t3387));
    TVARIABLE(Smi, upper_553_impl);
    auto upper_553 = &upper_553_impl;
    USE(upper_553);
    *upper_553 = implicit_cast<TNode<Smi>>(t3387);
    // ../../src/builtins/array-reverse.tq:65:5
    {
      Label label__True_1010_impl(this);
      Label* label__True_1010 = &label__True_1010_impl;
      USE(label__True_1010);
      Label label__False_1011_impl(this);
      Label* label__False_1011 = &label__False_1011_impl;
      USE(label__False_1011);
      Label label_header_1126_1528_impl(this, {lower_552, upper_553});
      Label* label_header_1126_1528 = &label_header_1126_1528_impl;
      USE(label_header_1126_1528);
      Goto(label_header_1126_1528);
      BIND(label_header_1126_1528);
      TNode<BoolT> t3388 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lower_552).value()), implicit_cast<TNode<Smi>>((*upper_553).value())));
      USE(implicit_cast<TNode<BoolT>>(t3388));
      Branch(implicit_cast<TNode<BoolT>>(t3388), label__True_1010, label__False_1011);
      if (label__True_1010->is_used())
      {
        BIND(label__True_1010);
        // ../../src/builtins/array-reverse.tq:65:27
        {
          // ../../src/builtins/array-reverse.tq:66:7
          TNode<Float64T> t3389 = UncheckedCast<Float64T>(LoadElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_552).value())));
          USE(implicit_cast<TNode<Float64T>>(t3389));
          TNode<Float64T> lower_value_1127_impl;
          auto lower_value_1127 = &lower_value_1127_impl;
          USE(lower_value_1127);
          *lower_value_1127 = implicit_cast<TNode<Float64T>>(t3389);
          // ../../src/builtins/array-reverse.tq:67:7
          TNode<Float64T> t3390 = UncheckedCast<Float64T>(LoadElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_553).value())));
          USE(implicit_cast<TNode<Float64T>>(t3390));
          TNode<Float64T> upper_value_1128_impl;
          auto upper_value_1128 = &upper_value_1128_impl;
          USE(upper_value_1128);
          *upper_value_1128 = implicit_cast<TNode<Float64T>>(t3390);
          // ../../src/builtins/array-reverse.tq:68:7
          StoreElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_552).value()), implicit_cast<TNode<Float64T>>((*upper_value_1128)));
          // ../../src/builtins/array-reverse.tq:69:7
          StoreElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_553).value()), implicit_cast<TNode<Float64T>>((*lower_value_1127)));
          // ../../src/builtins/array-reverse.tq:70:7
          TNode<Smi> t3391 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3392 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lower_552).value()), implicit_cast<TNode<Smi>>(t3391)));
          *lower_552 = implicit_cast<TNode<Smi>>(t3392);
          // ../../src/builtins/array-reverse.tq:71:7
          TNode<Smi> t3393 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3394 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*upper_553).value()), implicit_cast<TNode<Smi>>(t3393)));
          *upper_553 = implicit_cast<TNode<Smi>>(t3394);
        }
        Goto(label_header_1126_1528);
      }
      BIND(label__False_1011);
    }
  }
}

TF_BUILTIN(Load25ATGenericElementsAccessor, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:129:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:130:5
    TNode<Object> t3473 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_elements), implicit_cast<TNode<Object>>(p_index)));
    USE(implicit_cast<TNode<Object>>(t3473));
    Return(implicit_cast<TNode<Object>>(t3473));
  }
}

TF_BUILTIN(Store25ATGenericElementsAccessor, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:198:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:199:5
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_elements), implicit_cast<TNode<Object>>(p_index), implicit_cast<TNode<Object>>(p_value));
    // ../../third_party/v8/builtins/array-sort.tq:200:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor20ATFastDoubleElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1539_impl(this, {});
  Label* label_macro_end_1539 = &label_macro_end_1539_impl;
  USE(label_macro_end_1539);
  // ../../third_party/v8/builtins/array-sort.tq:1641:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:1642:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1643:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad20ATFastDoubleElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1644:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore20ATFastDoubleElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1645:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor20ATFastDoubleElements).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor23ATFastPackedSmiElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1540_impl(this, {});
  Label* label_macro_end_1540 = &label_macro_end_1540_impl;
  USE(label_macro_end_1540);
  // ../../third_party/v8/builtins/array-sort.tq:1641:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:1642:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1643:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad23ATFastPackedSmiElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1644:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore23ATFastPackedSmiElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1645:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor23ATFastPackedSmiElements).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor25ATFastSmiOrObjectElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1541_impl(this, {});
  Label* label_macro_end_1541 = &label_macro_end_1541_impl;
  USE(label_macro_end_1541);
  // ../../third_party/v8/builtins/array-sort.tq:1641:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:1642:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1643:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad25ATFastSmiOrObjectElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1644:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore25ATFastSmiOrObjectElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1645:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor25ATFastSmiOrObjectElements).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor20ATDictionaryElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1542_impl(this, {});
  Label* label_macro_end_1542 = &label_macro_end_1542_impl;
  USE(label_macro_end_1542);
  // ../../third_party/v8/builtins/array-sort.tq:1641:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:1642:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1643:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad20ATDictionaryElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1644:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore20ATDictionaryElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1645:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor20ATDictionaryElements).code())));
  }
}

TF_BUILTIN(CanUseSameAccessor20ATFastDoubleElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:329:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:330:5
    // ../../third_party/v8/builtins/array-sort.tq:332:5
    TNode<JSArray> t3474 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t3474));
    TVARIABLE(JSArray, a_568_impl);
    auto a_568 = &a_568_impl;
    USE(a_568);
    *a_568 = implicit_cast<TNode<JSArray>>(t3474);
    // ../../third_party/v8/builtins/array-sort.tq:333:5
    {
      Label label__True_1016_impl(this);
      Label* label__True_1016 = &label__True_1016_impl;
      USE(label__True_1016);
      Label label__False_1017_impl(this, {});
      Label* label__False_1017 = &label__False_1017_impl;
      USE(label__False_1017);
      TNode<Map> t3475 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_568).value())));
      TNode<BoolT> t3476 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t3475), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
      USE(implicit_cast<TNode<BoolT>>(t3476));
      Branch(implicit_cast<TNode<BoolT>>(t3476), label__True_1016, label__False_1017);
      if (label__True_1016->is_used())
      {
        BIND(label__True_1016);
        // ../../third_party/v8/builtins/array-sort.tq:333:38
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1017);
    }
    // ../../third_party/v8/builtins/array-sort.tq:335:5
    // ../../third_party/v8/builtins/array-sort.tq:336:5
    TNode<Smi> t3477 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<Smi>>(t3477));
    TVARIABLE(Smi, originalLength_569_impl);
    auto originalLength_569 = &originalLength_569_impl;
    USE(originalLength_569);
    *originalLength_569 = implicit_cast<TNode<Smi>>(t3477);
    // ../../third_party/v8/builtins/array-sort.tq:337:5
    {
      Label label__True_1018_impl(this);
      Label* label__True_1018 = &label__True_1018_impl;
      USE(label__True_1018);
      Label label__False_1019_impl(this, {});
      Label* label__False_1019 = &label__False_1019_impl;
      USE(label__False_1019);
      TNode<Smi> t3478 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_568).value())));
      TNode<BoolT> t3479 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>(t3478), implicit_cast<TNode<Smi>>((*originalLength_569).value())));
      USE(implicit_cast<TNode<BoolT>>(t3479));
      Branch(implicit_cast<TNode<BoolT>>(t3479), label__True_1018, label__False_1019);
      if (label__True_1018->is_used())
      {
        BIND(label__True_1018);
        // ../../third_party/v8/builtins/array-sort.tq:337:42
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1019);
    }
    // ../../third_party/v8/builtins/array-sort.tq:339:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

TF_BUILTIN(CanUseSameAccessor23ATFastPackedSmiElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:329:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:330:5
    // ../../third_party/v8/builtins/array-sort.tq:332:5
    TNode<JSArray> t3480 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t3480));
    TVARIABLE(JSArray, a_570_impl);
    auto a_570 = &a_570_impl;
    USE(a_570);
    *a_570 = implicit_cast<TNode<JSArray>>(t3480);
    // ../../third_party/v8/builtins/array-sort.tq:333:5
    {
      Label label__True_1020_impl(this);
      Label* label__True_1020 = &label__True_1020_impl;
      USE(label__True_1020);
      Label label__False_1021_impl(this, {});
      Label* label__False_1021 = &label__False_1021_impl;
      USE(label__False_1021);
      TNode<Map> t3481 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_570).value())));
      TNode<BoolT> t3482 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t3481), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
      USE(implicit_cast<TNode<BoolT>>(t3482));
      Branch(implicit_cast<TNode<BoolT>>(t3482), label__True_1020, label__False_1021);
      if (label__True_1020->is_used())
      {
        BIND(label__True_1020);
        // ../../third_party/v8/builtins/array-sort.tq:333:38
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1021);
    }
    // ../../third_party/v8/builtins/array-sort.tq:335:5
    // ../../third_party/v8/builtins/array-sort.tq:336:5
    TNode<Smi> t3483 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<Smi>>(t3483));
    TVARIABLE(Smi, originalLength_571_impl);
    auto originalLength_571 = &originalLength_571_impl;
    USE(originalLength_571);
    *originalLength_571 = implicit_cast<TNode<Smi>>(t3483);
    // ../../third_party/v8/builtins/array-sort.tq:337:5
    {
      Label label__True_1022_impl(this);
      Label* label__True_1022 = &label__True_1022_impl;
      USE(label__True_1022);
      Label label__False_1023_impl(this, {});
      Label* label__False_1023 = &label__False_1023_impl;
      USE(label__False_1023);
      TNode<Smi> t3484 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_570).value())));
      TNode<BoolT> t3485 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>(t3484), implicit_cast<TNode<Smi>>((*originalLength_571).value())));
      USE(implicit_cast<TNode<BoolT>>(t3485));
      Branch(implicit_cast<TNode<BoolT>>(t3485), label__True_1022, label__False_1023);
      if (label__True_1022->is_used())
      {
        BIND(label__True_1022);
        // ../../third_party/v8/builtins/array-sort.tq:337:42
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1023);
    }
    // ../../third_party/v8/builtins/array-sort.tq:339:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

TF_BUILTIN(CanUseSameAccessor25ATFastSmiOrObjectElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:329:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:330:5
    // ../../third_party/v8/builtins/array-sort.tq:332:5
    TNode<JSArray> t3486 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t3486));
    TVARIABLE(JSArray, a_572_impl);
    auto a_572 = &a_572_impl;
    USE(a_572);
    *a_572 = implicit_cast<TNode<JSArray>>(t3486);
    // ../../third_party/v8/builtins/array-sort.tq:333:5
    {
      Label label__True_1024_impl(this);
      Label* label__True_1024 = &label__True_1024_impl;
      USE(label__True_1024);
      Label label__False_1025_impl(this, {});
      Label* label__False_1025 = &label__False_1025_impl;
      USE(label__False_1025);
      TNode<Map> t3487 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_572).value())));
      TNode<BoolT> t3488 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t3487), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
      USE(implicit_cast<TNode<BoolT>>(t3488));
      Branch(implicit_cast<TNode<BoolT>>(t3488), label__True_1024, label__False_1025);
      if (label__True_1024->is_used())
      {
        BIND(label__True_1024);
        // ../../third_party/v8/builtins/array-sort.tq:333:38
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1025);
    }
    // ../../third_party/v8/builtins/array-sort.tq:335:5
    // ../../third_party/v8/builtins/array-sort.tq:336:5
    TNode<Smi> t3489 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<Smi>>(t3489));
    TVARIABLE(Smi, originalLength_573_impl);
    auto originalLength_573 = &originalLength_573_impl;
    USE(originalLength_573);
    *originalLength_573 = implicit_cast<TNode<Smi>>(t3489);
    // ../../third_party/v8/builtins/array-sort.tq:337:5
    {
      Label label__True_1026_impl(this);
      Label* label__True_1026 = &label__True_1026_impl;
      USE(label__True_1026);
      Label label__False_1027_impl(this, {});
      Label* label__False_1027 = &label__False_1027_impl;
      USE(label__False_1027);
      TNode<Smi> t3490 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_572).value())));
      TNode<BoolT> t3491 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>(t3490), implicit_cast<TNode<Smi>>((*originalLength_573).value())));
      USE(implicit_cast<TNode<BoolT>>(t3491));
      Branch(implicit_cast<TNode<BoolT>>(t3491), label__True_1026, label__False_1027);
      if (label__True_1026->is_used())
      {
        BIND(label__True_1026);
        // ../../third_party/v8/builtins/array-sort.tq:337:42
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1027);
    }
    // ../../third_party/v8/builtins/array-sort.tq:339:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

}  // namespace internal
}  // namespace v8

