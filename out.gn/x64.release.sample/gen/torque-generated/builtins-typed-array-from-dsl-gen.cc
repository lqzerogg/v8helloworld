#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-typed-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedUint8Array() {
  ElementsKind _return_147_impl;
  auto _return_147 = &_return_147_impl;
  USE(_return_147);
  Label label_macro_end_1178_impl(this, {});
  Label* label_macro_end_1178 = &label_macro_end_1178_impl;
  USE(label_macro_end_1178);
  // ../../src/builtins/typed-array.tq:20:63
  {
    // ../../src/builtins/typed-array.tq:21:5
    *_return_147 = implicit_cast<ElementsKind>(UINT8_ELEMENTS);
    Goto(label_macro_end_1178);
  }
  BIND(label_macro_end_1178);
  return implicit_cast<ElementsKind>((*_return_147));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType16ATFixedInt8Array() {
  ElementsKind _return_148_impl;
  auto _return_148 = &_return_148_impl;
  USE(_return_148);
  Label label_macro_end_1179_impl(this, {});
  Label* label_macro_end_1179 = &label_macro_end_1179_impl;
  USE(label_macro_end_1179);
  // ../../src/builtins/typed-array.tq:23:62
  {
    // ../../src/builtins/typed-array.tq:24:5
    *_return_148 = implicit_cast<ElementsKind>(INT8_ELEMENTS);
    Goto(label_macro_end_1179);
  }
  BIND(label_macro_end_1179);
  return implicit_cast<ElementsKind>((*_return_148));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint16Array() {
  ElementsKind _return_149_impl;
  auto _return_149 = &_return_149_impl;
  USE(_return_149);
  Label label_macro_end_1180_impl(this, {});
  Label* label_macro_end_1180 = &label_macro_end_1180_impl;
  USE(label_macro_end_1180);
  // ../../src/builtins/typed-array.tq:26:64
  {
    // ../../src/builtins/typed-array.tq:27:5
    *_return_149 = implicit_cast<ElementsKind>(UINT16_ELEMENTS);
    Goto(label_macro_end_1180);
  }
  BIND(label_macro_end_1180);
  return implicit_cast<ElementsKind>((*_return_149));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt16Array() {
  ElementsKind _return_150_impl;
  auto _return_150 = &_return_150_impl;
  USE(_return_150);
  Label label_macro_end_1181_impl(this, {});
  Label* label_macro_end_1181 = &label_macro_end_1181_impl;
  USE(label_macro_end_1181);
  // ../../src/builtins/typed-array.tq:29:63
  {
    // ../../src/builtins/typed-array.tq:30:5
    *_return_150 = implicit_cast<ElementsKind>(INT16_ELEMENTS);
    Goto(label_macro_end_1181);
  }
  BIND(label_macro_end_1181);
  return implicit_cast<ElementsKind>((*_return_150));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint32Array() {
  ElementsKind _return_151_impl;
  auto _return_151 = &_return_151_impl;
  USE(_return_151);
  Label label_macro_end_1182_impl(this, {});
  Label* label_macro_end_1182 = &label_macro_end_1182_impl;
  USE(label_macro_end_1182);
  // ../../src/builtins/typed-array.tq:32:64
  {
    // ../../src/builtins/typed-array.tq:33:5
    *_return_151 = implicit_cast<ElementsKind>(UINT32_ELEMENTS);
    Goto(label_macro_end_1182);
  }
  BIND(label_macro_end_1182);
  return implicit_cast<ElementsKind>((*_return_151));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt32Array() {
  ElementsKind _return_152_impl;
  auto _return_152 = &_return_152_impl;
  USE(_return_152);
  Label label_macro_end_1183_impl(this, {});
  Label* label_macro_end_1183 = &label_macro_end_1183_impl;
  USE(label_macro_end_1183);
  // ../../src/builtins/typed-array.tq:35:63
  {
    // ../../src/builtins/typed-array.tq:36:5
    *_return_152 = implicit_cast<ElementsKind>(INT32_ELEMENTS);
    Goto(label_macro_end_1183);
  }
  BIND(label_macro_end_1183);
  return implicit_cast<ElementsKind>((*_return_152));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat32Array() {
  ElementsKind _return_153_impl;
  auto _return_153 = &_return_153_impl;
  USE(_return_153);
  Label label_macro_end_1184_impl(this, {});
  Label* label_macro_end_1184 = &label_macro_end_1184_impl;
  USE(label_macro_end_1184);
  // ../../src/builtins/typed-array.tq:38:65
  {
    // ../../src/builtins/typed-array.tq:39:5
    *_return_153 = implicit_cast<ElementsKind>(FLOAT32_ELEMENTS);
    Goto(label_macro_end_1184);
  }
  BIND(label_macro_end_1184);
  return implicit_cast<ElementsKind>((*_return_153));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat64Array() {
  ElementsKind _return_154_impl;
  auto _return_154 = &_return_154_impl;
  USE(_return_154);
  Label label_macro_end_1185_impl(this, {});
  Label* label_macro_end_1185 = &label_macro_end_1185_impl;
  USE(label_macro_end_1185);
  // ../../src/builtins/typed-array.tq:41:65
  {
    // ../../src/builtins/typed-array.tq:42:5
    *_return_154 = implicit_cast<ElementsKind>(FLOAT64_ELEMENTS);
    Goto(label_macro_end_1185);
  }
  BIND(label_macro_end_1185);
  return implicit_cast<ElementsKind>((*_return_154));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType24ATFixedUint8ClampedArray() {
  ElementsKind _return_155_impl;
  auto _return_155 = &_return_155_impl;
  USE(_return_155);
  Label label_macro_end_1186_impl(this, {});
  Label* label_macro_end_1186 = &label_macro_end_1186_impl;
  USE(label_macro_end_1186);
  // ../../src/builtins/typed-array.tq:44:70
  {
    // ../../src/builtins/typed-array.tq:45:5
    *_return_155 = implicit_cast<ElementsKind>(UINT8_CLAMPED_ELEMENTS);
    Goto(label_macro_end_1186);
  }
  BIND(label_macro_end_1186);
  return implicit_cast<ElementsKind>((*_return_155));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType21ATFixedBigUint64Array() {
  ElementsKind _return_156_impl;
  auto _return_156 = &_return_156_impl;
  USE(_return_156);
  Label label_macro_end_1187_impl(this, {});
  Label* label_macro_end_1187 = &label_macro_end_1187_impl;
  USE(label_macro_end_1187);
  // ../../src/builtins/typed-array.tq:47:67
  {
    // ../../src/builtins/typed-array.tq:48:5
    *_return_156 = implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS);
    Goto(label_macro_end_1187);
  }
  BIND(label_macro_end_1187);
  return implicit_cast<ElementsKind>((*_return_156));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType20ATFixedBigInt64Array() {
  ElementsKind _return_157_impl;
  auto _return_157 = &_return_157_impl;
  USE(_return_157);
  Label label_macro_end_1188_impl(this, {});
  Label* label_macro_end_1188 = &label_macro_end_1188_impl;
  USE(label_macro_end_1188);
  // ../../src/builtins/typed-array.tq:50:66
  {
    // ../../src/builtins/typed-array.tq:51:5
    *_return_157 = implicit_cast<ElementsKind>(BIGINT64_ELEMENTS);
    Goto(label_macro_end_1188);
  }
  BIND(label_macro_end_1188);
  return implicit_cast<ElementsKind>((*_return_157));
}

compiler::TNode<Number> TypedArrayBuiltinsFromDSLAssembler::CallCompareWithDetachedCheck(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b, Label* label_Detached_168) {
  TVARIABLE(Number, _return_158_impl);
  auto _return_158 = &_return_158_impl;
  USE(_return_158);
  Label label_macro_end_1189_impl(this, {_return_158});
  Label* label_macro_end_1189 = &label_macro_end_1189_impl;
  USE(label_macro_end_1189);
  // ../../src/builtins/typed-array.tq:72:42
  {
    // ../../src/builtins/typed-array.tq:74:5
    TNode<Object> t540 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>(p_a), implicit_cast<TNode<Object>>(p_b)));
    USE(implicit_cast<TNode<Object>>(t540));
    TNode<Number> t541 = UncheckedCast<Number>(ToNumber_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t540)));
    USE(implicit_cast<TNode<Number>>(t541));
    TNode<Number> v_701_impl;
    auto v_701 = &v_701_impl;
    USE(v_701);
    *v_701 = implicit_cast<TNode<Number>>(t541);
    // ../../src/builtins/typed-array.tq:78:5
    {
      Label label__True_169_impl(this);
      Label* label__True_169 = &label__True_169_impl;
      USE(label__True_169);
      Label label__False_170_impl(this, {});
      Label* label__False_170 = &label__False_170_impl;
      USE(label__False_170);
      TNode<JSArrayBuffer> t542 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(implicit_cast<TNode<JSTypedArray>>(p_array)));
      TNode<BoolT> t543 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t542)));
      USE(implicit_cast<TNode<BoolT>>(t543));
      Branch(implicit_cast<TNode<BoolT>>(t543), label__True_169, label__False_170);
      if (label__True_169->is_used())
      {
        BIND(label__True_169);
        // ../../src/builtins/typed-array.tq:78:41
        Goto(label_Detached_168);
      }
      BIND(label__False_170);
    }
    // ../../src/builtins/typed-array.tq:81:5
    {
      Label label__True_171_impl(this);
      Label* label__True_171 = &label__True_171_impl;
      USE(label__True_171);
      Label label__False_172_impl(this, {});
      Label* label__False_172 = &label__False_172_impl;
      USE(label__False_172);
      TNode<BoolT> t544 = UncheckedCast<BoolT>(NumberIsNaN(implicit_cast<TNode<Number>>((*v_701))));
      USE(implicit_cast<TNode<BoolT>>(t544));
      Branch(implicit_cast<TNode<BoolT>>(t544), label__True_171, label__False_172);
      if (label__True_171->is_used())
      {
        BIND(label__True_171);
        // ../../src/builtins/typed-array.tq:81:25
        int31_t t545 = 0;
        TNode<Number> t546 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t545)));
        *_return_158 = implicit_cast<TNode<Number>>(t546);
        Goto(label_macro_end_1189);
      }
      BIND(label__False_172);
    }
    // ../../src/builtins/typed-array.tq:84:5
    *_return_158 = implicit_cast<TNode<Number>>((*v_701));
    Goto(label_macro_end_1189);
  }
  BIND(label_macro_end_1189);
  return implicit_cast<TNode<Number>>((*_return_158).value());
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayInsertionSort(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_173) {
  Label label_macro_end_1190_impl(this, {});
  Label* label_macro_end_1190 = &label_macro_end_1190_impl;
  USE(label_macro_end_1190);
  // ../../src/builtins/typed-array.tq:91:19
  {
    // ../../src/builtins/typed-array.tq:92:5
    TVARIABLE(Smi, from_159_impl);
    auto from_159 = &from_159_impl;
    USE(from_159);
    *from_159 = implicit_cast<TNode<Smi>>(p_from_arg);
    // ../../src/builtins/typed-array.tq:93:5
    TVARIABLE(Smi, to_160_impl);
    auto to_160 = &to_160_impl;
    USE(to_160);
    *to_160 = implicit_cast<TNode<Smi>>(p_to_arg);
    // ../../src/builtins/typed-array.tq:95:5
    {
      Label label__True_174_impl(this);
      Label* label__True_174 = &label__True_174_impl;
      USE(label__True_174);
      Label label__False_175_impl(this, {});
      Label* label__False_175 = &label__False_175_impl;
      USE(label__False_175);
      TNode<JSArrayBuffer> t547 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(implicit_cast<TNode<JSTypedArray>>(p_array)));
      TNode<BoolT> t548 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t547)));
      USE(implicit_cast<TNode<BoolT>>(t548));
      Branch(implicit_cast<TNode<BoolT>>(t548), label__True_174, label__False_175);
      if (label__True_174->is_used())
      {
        BIND(label__True_174);
        // ../../src/builtins/typed-array.tq:95:41
        Goto(label_Detached_173);
      }
      BIND(label__False_175);
    }
    // ../../src/builtins/typed-array.tq:97:5
    int31_t t549 = 1;
    TNode<Smi> t550 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t549)));
    TNode<Smi> t551 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*from_159).value()), implicit_cast<TNode<Smi>>(t550)));
    USE(implicit_cast<TNode<Smi>>(t551));
    TVARIABLE(Smi, i_161_impl);
    auto i_161 = &i_161_impl;
    USE(i_161);
    *i_161 = implicit_cast<TNode<Smi>>(t551);
    Label label__True_176_impl(this);
    Label* label__True_176 = &label__True_176_impl;
    USE(label__True_176);
    Label label__False_177_impl(this);
    Label* label__False_177 = &label__False_177_impl;
    USE(label__False_177);
    Label label_header_702_1191_impl(this, {i_161});
    Label* label_header_702_1191 = &label_header_702_1191_impl;
    USE(label_header_702_1191);
    Goto(label_header_702_1191);
    BIND(label_header_702_1191);
    Label label_action_703_1192_impl(this);
    Label* label_action_703_1192 = &label_action_703_1192_impl;
    USE(label_action_703_1192);
    TNode<BoolT> t552 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_161).value()), implicit_cast<TNode<Smi>>((*to_160).value())));
    USE(implicit_cast<TNode<BoolT>>(t552));
    Branch(implicit_cast<TNode<BoolT>>(t552), label__True_176, label__False_177);
    if (label__True_176->is_used())
    {
      BIND(label__True_176);
      // ../../src/builtins/typed-array.tq:97:46
      {
        // ../../src/builtins/typed-array.tq:98:7
        TNode<Object> t553 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*i_161).value())));
        USE(implicit_cast<TNode<Object>>(t553));
        TNode<Object> element_704_impl;
        auto element_704 = &element_704_impl;
        USE(element_704);
        *element_704 = implicit_cast<TNode<Object>>(t553);
        // ../../src/builtins/typed-array.tq:99:7
        int31_t t554 = 1;
        TNode<Smi> t555 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t554)));
        TNode<Smi> t556 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*i_161).value()), implicit_cast<TNode<Smi>>(t555)));
        USE(implicit_cast<TNode<Smi>>(t556));
        TVARIABLE(Smi, j_162_impl);
        auto j_162 = &j_162_impl;
        USE(j_162);
        *j_162 = implicit_cast<TNode<Smi>>(t556);
        // ../../src/builtins/typed-array.tq:100:7
        Label label__True_178_impl(this);
        Label* label__True_178 = &label__True_178_impl;
        USE(label__True_178);
        Label label__False_179_impl(this);
        Label* label__False_179 = &label__False_179_impl;
        USE(label__False_179);
        Label label_header_705_1193_impl(this, {j_162});
        Label* label_header_705_1193 = &label_header_705_1193_impl;
        USE(label_header_705_1193);
        Goto(label_header_705_1193);
        BIND(label_header_705_1193);
        Label label_action_706_1194_impl(this);
        Label* label_action_706_1194 = &label_action_706_1194_impl;
        USE(label_action_706_1194);
        TNode<BoolT> t557 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*j_162).value()), implicit_cast<TNode<Smi>>((*from_159).value())));
        USE(implicit_cast<TNode<BoolT>>(t557));
        Branch(implicit_cast<TNode<BoolT>>(t557), label__True_178, label__False_179);
        if (label__True_178->is_used())
        {
          BIND(label__True_178);
          // ../../src/builtins/typed-array.tq:100:30
          {
            // ../../src/builtins/typed-array.tq:101:9
            TNode<Object> t558 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*j_162).value())));
            USE(implicit_cast<TNode<Object>>(t558));
            TNode<Object> tmp_707_impl;
            auto tmp_707 = &tmp_707_impl;
            USE(tmp_707);
            *tmp_707 = implicit_cast<TNode<Object>>(t558);
            // ../../src/builtins/typed-array.tq:102:9
            TNode<Number> t559 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*tmp_707)), implicit_cast<TNode<Object>>((*element_704)), label_Detached_173));
            USE(implicit_cast<TNode<Number>>(t559));
            TNode<Number> order_708_impl;
            auto order_708 = &order_708_impl;
            USE(order_708);
            *order_708 = implicit_cast<TNode<Number>>(t559);
            // ../../src/builtins/typed-array.tq:104:9
            {
              Label label__True_180_impl(this);
              Label* label__True_180 = &label__True_180_impl;
              USE(label__True_180);
              Label label__False_181_impl(this);
              Label* label__False_181 = &label__False_181_impl;
              USE(label__False_181);
              Label label_if_done_label_709_1195_impl(this, {});
              Label* label_if_done_label_709_1195 = &label_if_done_label_709_1195_impl;
              USE(label_if_done_label_709_1195);
              int31_t t560 = 0;
              TNode<Number> t561 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t560)));
              BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*order_708)), implicit_cast<TNode<Number>>(t561), label__True_180, label__False_181);
              if (label__True_180->is_used())
              {
                BIND(label__True_180);
                // ../../src/builtins/typed-array.tq:104:24
                {
                  // ../../src/builtins/typed-array.tq:105:11
                  int31_t t562 = 1;
                  TNode<Smi> t563 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t562)));
                  TNode<Smi> t564 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_162).value()), implicit_cast<TNode<Smi>>(t563)));
                  USE(implicit_cast<TNode<Smi>>(t564));
                  TNode<Object> t565 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t564), implicit_cast<TNode<Object>>((*tmp_707))));
                  USE(implicit_cast<TNode<Object>>(t565));
                }
                Goto(label_if_done_label_709_1195);
              }
              if (label__False_181->is_used())
              {
                BIND(label__False_181);
                // ../../src/builtins/typed-array.tq:106:16
                {
                  // ../../src/builtins/typed-array.tq:107:11
                  Goto(label__False_179);
                }
              }
              BIND(label_if_done_label_709_1195);
            }
          }
          Goto(label_action_706_1194);
        }
        {
          BIND(label_action_706_1194);
          TNode<Smi> t566 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t567 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*j_162).value()), implicit_cast<TNode<Smi>>(t566)));
          *j_162 = implicit_cast<TNode<Smi>>(t567);
          Goto(label_header_705_1193);
        }
        BIND(label__False_179);
        // ../../src/builtins/typed-array.tq:110:7
        int31_t t568 = 1;
        TNode<Smi> t569 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t568)));
        TNode<Smi> t570 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_162).value()), implicit_cast<TNode<Smi>>(t569)));
        USE(implicit_cast<TNode<Smi>>(t570));
        TNode<Object> t571 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t570), implicit_cast<TNode<Object>>((*element_704))));
        USE(implicit_cast<TNode<Object>>(t571));
      }
      Goto(label_action_703_1192);
    }
    {
      BIND(label_action_703_1192);
      TNode<Smi> t572 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t573 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_161).value()), implicit_cast<TNode<Smi>>(t572)));
      *i_161 = implicit_cast<TNode<Smi>>(t573);
      Goto(label_header_702_1191);
    }
    BIND(label__False_177);
  }
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayQuickSortImpl(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_182) {
  Label label_macro_end_1196_impl(this, {});
  Label* label_macro_end_1196 = &label_macro_end_1196_impl;
  USE(label_macro_end_1196);
  // ../../src/builtins/typed-array.tq:117:19
  {
    // ../../src/builtins/typed-array.tq:118:5
    TVARIABLE(Smi, from_163_impl);
    auto from_163 = &from_163_impl;
    USE(from_163);
    *from_163 = implicit_cast<TNode<Smi>>(p_from_arg);
    // ../../src/builtins/typed-array.tq:119:5
    TVARIABLE(Smi, to_164_impl);
    auto to_164 = &to_164_impl;
    USE(to_164);
    *to_164 = implicit_cast<TNode<Smi>>(p_to_arg);
    // ../../src/builtins/typed-array.tq:121:5
    {
      Label label__True_183_impl(this);
      Label* label__True_183 = &label__True_183_impl;
      USE(label__True_183);
      Label label__False_184_impl(this);
      Label* label__False_184 = &label__False_184_impl;
      USE(label__False_184);
      Label label_header_710_1197_impl(this, {from_163, to_164});
      Label* label_header_710_1197 = &label_header_710_1197_impl;
      USE(label_header_710_1197);
      Goto(label_header_710_1197);
      BIND(label_header_710_1197);
      TNode<Smi> t574 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_164).value()), implicit_cast<TNode<Smi>>((*from_163).value())));
      USE(implicit_cast<TNode<Smi>>(t574));
      int31_t t575 = 1;
      TNode<Smi> t576 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t575)));
      TNode<BoolT> t577 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(t574), implicit_cast<TNode<Smi>>(t576)));
      USE(implicit_cast<TNode<BoolT>>(t577));
      Branch(implicit_cast<TNode<BoolT>>(t577), label__True_183, label__False_184);
      if (label__True_183->is_used())
      {
        BIND(label__True_183);
        // ../../src/builtins/typed-array.tq:121:27
        {
          // ../../src/builtins/typed-array.tq:122:7
          {
            Label label__True_185_impl(this);
            Label* label__True_185 = &label__True_185_impl;
            USE(label__True_185);
            Label label__False_186_impl(this, {});
            Label* label__False_186 = &label__False_186_impl;
            USE(label__False_186);
            TNode<Smi> t578 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_164).value()), implicit_cast<TNode<Smi>>((*from_163).value())));
            USE(implicit_cast<TNode<Smi>>(t578));
            int31_t t579 = 10;
            TNode<Smi> t580 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t579)));
            TNode<BoolT> t581 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t578), implicit_cast<TNode<Smi>>(t580)));
            USE(implicit_cast<TNode<BoolT>>(t581));
            Branch(implicit_cast<TNode<BoolT>>(t581), label__True_185, label__False_186);
            if (label__True_185->is_used())
            {
              BIND(label__True_185);
              // ../../src/builtins/typed-array.tq:122:28
              {
                // ../../src/builtins/typed-array.tq:126:9
                TypedArrayInsertionSort(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_163).value()), implicit_cast<TNode<Smi>>((*to_164).value()), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Code>>(p_Store), label_Detached_182);
                // ../../src/builtins/typed-array.tq:129:9
                Goto(label__False_184);
              }
            }
            BIND(label__False_186);
          }
          // ../../src/builtins/typed-array.tq:134:7
          TNode<Smi> t582 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_164).value()), implicit_cast<TNode<Smi>>((*from_163).value())));
          USE(implicit_cast<TNode<Smi>>(t582));
          int31_t t583 = 1;
          TNode<Smi> t584 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t582), implicit_cast<int31_t>(t583)));
          USE(implicit_cast<TNode<Smi>>(t584));
          TNode<Smi> t585 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*from_163).value()), implicit_cast<TNode<Smi>>(t584)));
          USE(implicit_cast<TNode<Smi>>(t585));
          TNode<Smi> third_index_711_impl;
          auto third_index_711 = &third_index_711_impl;
          USE(third_index_711);
          *third_index_711 = implicit_cast<TNode<Smi>>(t585);
          // ../../src/builtins/typed-array.tq:136:7
          {
            Label label__True_187_impl(this);
            Label* label__True_187 = &label__True_187_impl;
            USE(label__True_187);
            Label label__False_188_impl(this, {});
            Label* label__False_188 = &label__False_188_impl;
            USE(label__False_188);
            TNode<JSArrayBuffer> t586 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(implicit_cast<TNode<JSTypedArray>>(p_array)));
            TNode<BoolT> t587 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t586)));
            USE(implicit_cast<TNode<BoolT>>(t587));
            Branch(implicit_cast<TNode<BoolT>>(t587), label__True_187, label__False_188);
            if (label__True_187->is_used())
            {
              BIND(label__True_187);
              // ../../src/builtins/typed-array.tq:136:43
              Goto(label_Detached_182);
            }
            BIND(label__False_188);
          }
          // ../../src/builtins/typed-array.tq:139:7
          TNode<Object> t588 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_163).value())));
          USE(implicit_cast<TNode<Object>>(t588));
          TVARIABLE(Object, v0_165_impl);
          auto v0_165 = &v0_165_impl;
          USE(v0_165);
          *v0_165 = implicit_cast<TNode<Object>>(t588);
          // ../../src/builtins/typed-array.tq:140:7
          int31_t t589 = 1;
          TNode<Smi> t590 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t589)));
          TNode<Smi> t591 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_164).value()), implicit_cast<TNode<Smi>>(t590)));
          USE(implicit_cast<TNode<Smi>>(t591));
          TNode<Object> t592 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t591)));
          USE(implicit_cast<TNode<Object>>(t592));
          TVARIABLE(Object, v1_166_impl);
          auto v1_166 = &v1_166_impl;
          USE(v1_166);
          *v1_166 = implicit_cast<TNode<Object>>(t592);
          // ../../src/builtins/typed-array.tq:141:7
          TNode<Object> t593 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*third_index_711))));
          USE(implicit_cast<TNode<Object>>(t593));
          TVARIABLE(Object, v2_167_impl);
          auto v2_167 = &v2_167_impl;
          USE(v2_167);
          *v2_167 = implicit_cast<TNode<Object>>(t593);
          // ../../src/builtins/typed-array.tq:143:7
          TNode<Number> t594 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*v0_165).value()), implicit_cast<TNode<Object>>((*v1_166).value()), label_Detached_182));
          USE(implicit_cast<TNode<Number>>(t594));
          TNode<Number> c01_712_impl;
          auto c01_712 = &c01_712_impl;
          USE(c01_712);
          *c01_712 = implicit_cast<TNode<Number>>(t594);
          // ../../src/builtins/typed-array.tq:145:7
          {
            Label label__True_189_impl(this);
            Label* label__True_189 = &label__True_189_impl;
            USE(label__True_189);
            Label label__False_190_impl(this, {v0_165, v1_166});
            Label* label__False_190 = &label__False_190_impl;
            USE(label__False_190);
            int31_t t595 = 0;
            TNode<Number> t596 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t595)));
            BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*c01_712)), implicit_cast<TNode<Number>>(t596), label__True_189, label__False_190);
            if (label__True_189->is_used())
            {
              BIND(label__True_189);
              // ../../src/builtins/typed-array.tq:145:20
              {
                // ../../src/builtins/typed-array.tq:147:9
                TVARIABLE(Object, tmp_168_impl);
                auto tmp_168 = &tmp_168_impl;
                USE(tmp_168);
                *tmp_168 = implicit_cast<TNode<Object>>((*v0_165).value());
                // ../../src/builtins/typed-array.tq:148:9
                *v0_165 = implicit_cast<TNode<Object>>((*v1_166).value());
                // ../../src/builtins/typed-array.tq:149:9
                *v1_166 = implicit_cast<TNode<Object>>((*tmp_168).value());
              }
              Goto(label__False_190);
            }
            BIND(label__False_190);
          }
          // ../../src/builtins/typed-array.tq:152:7
          TNode<Number> t597 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*v0_165).value()), implicit_cast<TNode<Object>>((*v2_167).value()), label_Detached_182));
          USE(implicit_cast<TNode<Number>>(t597));
          TNode<Number> c02_713_impl;
          auto c02_713 = &c02_713_impl;
          USE(c02_713);
          *c02_713 = implicit_cast<TNode<Number>>(t597);
          // ../../src/builtins/typed-array.tq:154:7
          {
            Label label__True_191_impl(this);
            Label* label__True_191 = &label__True_191_impl;
            USE(label__True_191);
            Label label__False_192_impl(this);
            Label* label__False_192 = &label__False_192_impl;
            USE(label__False_192);
            Label label_if_done_label_714_1198_impl(this, {v0_165, v1_166, v2_167});
            Label* label_if_done_label_714_1198 = &label_if_done_label_714_1198_impl;
            USE(label_if_done_label_714_1198);
            int31_t t598 = 0;
            TNode<Number> t599 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t598)));
            BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*c02_713)), implicit_cast<TNode<Number>>(t599), label__True_191, label__False_192);
            if (label__True_191->is_used())
            {
              BIND(label__True_191);
              // ../../src/builtins/typed-array.tq:154:21
              {
                // ../../src/builtins/typed-array.tq:156:9
                TNode<Object> tmp_715_impl;
                auto tmp_715 = &tmp_715_impl;
                USE(tmp_715);
                *tmp_715 = implicit_cast<TNode<Object>>((*v0_165).value());
                // ../../src/builtins/typed-array.tq:157:9
                *v0_165 = implicit_cast<TNode<Object>>((*v2_167).value());
                // ../../src/builtins/typed-array.tq:158:9
                *v2_167 = implicit_cast<TNode<Object>>((*v1_166).value());
                // ../../src/builtins/typed-array.tq:159:9
                *v1_166 = implicit_cast<TNode<Object>>((*tmp_715));
              }
              Goto(label_if_done_label_714_1198);
            }
            if (label__False_192->is_used())
            {
              BIND(label__False_192);
              // ../../src/builtins/typed-array.tq:160:14
              {
                // ../../src/builtins/typed-array.tq:162:9
                TNode<Number> t600 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*v1_166).value()), implicit_cast<TNode<Object>>((*v2_167).value()), label_Detached_182));
                USE(implicit_cast<TNode<Number>>(t600));
                TNode<Number> c12_716_impl;
                auto c12_716 = &c12_716_impl;
                USE(c12_716);
                *c12_716 = implicit_cast<TNode<Number>>(t600);
                // ../../src/builtins/typed-array.tq:164:9
                {
                  Label label__True_193_impl(this);
                  Label* label__True_193 = &label__True_193_impl;
                  USE(label__True_193);
                  Label label__False_194_impl(this, {v1_166, v2_167});
                  Label* label__False_194 = &label__False_194_impl;
                  USE(label__False_194);
                  int31_t t601 = 0;
                  TNode<Number> t602 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t601)));
                  BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*c12_716)), implicit_cast<TNode<Number>>(t602), label__True_193, label__False_194);
                  if (label__True_193->is_used())
                  {
                    BIND(label__True_193);
                    // ../../src/builtins/typed-array.tq:164:22
                    {
                      // ../../src/builtins/typed-array.tq:166:11
                      TNode<Object> tmp_717_impl;
                      auto tmp_717 = &tmp_717_impl;
                      USE(tmp_717);
                      *tmp_717 = implicit_cast<TNode<Object>>((*v1_166).value());
                      // ../../src/builtins/typed-array.tq:167:11
                      *v1_166 = implicit_cast<TNode<Object>>((*v2_167).value());
                      // ../../src/builtins/typed-array.tq:168:11
                      *v2_167 = implicit_cast<TNode<Object>>((*tmp_717));
                    }
                    Goto(label__False_194);
                  }
                  BIND(label__False_194);
                }
              }
              Goto(label_if_done_label_714_1198);
            }
            BIND(label_if_done_label_714_1198);
          }
          // ../../src/builtins/typed-array.tq:173:7
          TNode<Object> t603 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_163).value()), implicit_cast<TNode<Object>>((*v0_165).value())));
          USE(implicit_cast<TNode<Object>>(t603));
          // ../../src/builtins/typed-array.tq:174:7
          int31_t t604 = 1;
          TNode<Smi> t605 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t604)));
          TNode<Smi> t606 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_164).value()), implicit_cast<TNode<Smi>>(t605)));
          USE(implicit_cast<TNode<Smi>>(t606));
          TNode<Object> t607 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t606), implicit_cast<TNode<Object>>((*v2_167).value())));
          USE(implicit_cast<TNode<Object>>(t607));
          // ../../src/builtins/typed-array.tq:176:7
          TNode<Object> pivot_718_impl;
          auto pivot_718 = &pivot_718_impl;
          USE(pivot_718);
          *pivot_718 = implicit_cast<TNode<Object>>((*v1_166).value());
          // ../../src/builtins/typed-array.tq:177:7
          int31_t t608 = 1;
          TNode<Smi> t609 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t608)));
          TNode<Smi> t610 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*from_163).value()), implicit_cast<TNode<Smi>>(t609)));
          USE(implicit_cast<TNode<Smi>>(t610));
          TVARIABLE(Smi, low_end_169_impl);
          auto low_end_169 = &low_end_169_impl;
          USE(low_end_169);
          *low_end_169 = implicit_cast<TNode<Smi>>(t610);
          // ../../src/builtins/typed-array.tq:178:7
          int31_t t611 = 1;
          TNode<Smi> t612 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t611)));
          TNode<Smi> t613 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_164).value()), implicit_cast<TNode<Smi>>(t612)));
          USE(implicit_cast<TNode<Smi>>(t613));
          TVARIABLE(Smi, high_start_170_impl);
          auto high_start_170 = &high_start_170_impl;
          USE(high_start_170);
          *high_start_170 = implicit_cast<TNode<Smi>>(t613);
          // ../../src/builtins/typed-array.tq:180:7
          TNode<Object> t614 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_169).value())));
          USE(implicit_cast<TNode<Object>>(t614));
          TVARIABLE(Object, low_end_value_171_impl);
          auto low_end_value_171 = &low_end_value_171_impl;
          USE(low_end_value_171);
          *low_end_value_171 = implicit_cast<TNode<Object>>(t614);
          // ../../src/builtins/typed-array.tq:181:7
          TNode<Object> t615 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*third_index_711)), implicit_cast<TNode<Object>>((*low_end_value_171).value())));
          USE(implicit_cast<TNode<Object>>(t615));
          // ../../src/builtins/typed-array.tq:182:7
          TNode<Object> t616 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_169).value()), implicit_cast<TNode<Object>>((*pivot_718))));
          USE(implicit_cast<TNode<Object>>(t616));
          // ../../src/builtins/typed-array.tq:186:7
          int31_t t617 = 1;
          TNode<Smi> t618 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t617)));
          TNode<Smi> t619 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_end_169).value()), implicit_cast<TNode<Smi>>(t618)));
          USE(implicit_cast<TNode<Smi>>(t619));
          TVARIABLE(Smi, idx_172_impl);
          auto idx_172 = &idx_172_impl;
          USE(idx_172);
          *idx_172 = implicit_cast<TNode<Smi>>(t619);
          Label label__True_195_impl(this);
          Label* label__True_195 = &label__True_195_impl;
          USE(label__True_195);
          Label label__False_196_impl(this);
          Label* label__False_196 = &label__False_196_impl;
          USE(label__False_196);
          Label label_header_719_1199_impl(this, {high_start_170, idx_172, low_end_169, low_end_value_171});
          Label* label_header_719_1199 = &label_header_719_1199_impl;
          USE(label_header_719_1199);
          Goto(label_header_719_1199);
          BIND(label_header_719_1199);
          Label label_action_720_1200_impl(this);
          Label* label_action_720_1200 = &label_action_720_1200_impl;
          USE(label_action_720_1200);
          TNode<BoolT> t620 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*idx_172).value()), implicit_cast<TNode<Smi>>((*high_start_170).value())));
          USE(implicit_cast<TNode<BoolT>>(t620));
          Branch(implicit_cast<TNode<BoolT>>(t620), label__True_195, label__False_196);
          if (label__True_195->is_used())
          {
            BIND(label__True_195);
            // ../../src/builtins/typed-array.tq:186:65
            {
              // ../../src/builtins/typed-array.tq:187:9
              TNode<Object> t621 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_172).value())));
              USE(implicit_cast<TNode<Object>>(t621));
              TVARIABLE(Object, element_173_impl);
              auto element_173 = &element_173_impl;
              USE(element_173);
              *element_173 = implicit_cast<TNode<Object>>(t621);
              // ../../src/builtins/typed-array.tq:188:9
              TNode<Number> t622 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*element_173).value()), implicit_cast<TNode<Object>>((*pivot_718)), label_Detached_182));
              USE(implicit_cast<TNode<Number>>(t622));
              TVARIABLE(Number, order_174_impl);
              auto order_174 = &order_174_impl;
              USE(order_174);
              *order_174 = implicit_cast<TNode<Number>>(t622);
              // ../../src/builtins/typed-array.tq:191:9
              {
                Label label__True_197_impl(this);
                Label* label__True_197 = &label__True_197_impl;
                USE(label__True_197);
                Label label__False_198_impl(this);
                Label* label__False_198 = &label__False_198_impl;
                USE(label__False_198);
                Label label_if_done_label_721_1201_impl(this, {element_173, high_start_170, low_end_169, low_end_value_171, order_174});
                Label* label_if_done_label_721_1201 = &label_if_done_label_721_1201_impl;
                USE(label_if_done_label_721_1201);
                int31_t t623 = 0;
                TNode<Number> t624 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t623)));
                BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_174).value()), implicit_cast<TNode<Number>>(t624), label__True_197, label__False_198);
                if (label__True_197->is_used())
                {
                  BIND(label__True_197);
                  // ../../src/builtins/typed-array.tq:191:24
                  {
                    // ../../src/builtins/typed-array.tq:192:11
                    TNode<Object> t625 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_169).value())));
                    USE(implicit_cast<TNode<Object>>(t625));
                    *low_end_value_171 = implicit_cast<TNode<Object>>(t625);
                    // ../../src/builtins/typed-array.tq:193:11
                    TNode<Object> t626 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_172).value()), implicit_cast<TNode<Object>>((*low_end_value_171).value())));
                    USE(implicit_cast<TNode<Object>>(t626));
                    // ../../src/builtins/typed-array.tq:194:11
                    TNode<Object> t627 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_169).value()), implicit_cast<TNode<Object>>((*element_173).value())));
                    USE(implicit_cast<TNode<Object>>(t627));
                    // ../../src/builtins/typed-array.tq:195:11
                    TNode<Smi> t628 = implicit_cast<TNode<Smi>>((*low_end_169).value());
                    USE(t628);
                    TNode<Smi> t629 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                    TNode<Smi> t630 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_end_169).value()), implicit_cast<TNode<Smi>>(t629)));
                    *low_end_169 = implicit_cast<TNode<Smi>>(t630);
                  }
                  Goto(label_if_done_label_721_1201);
                }
                if (label__False_198->is_used())
                {
                  BIND(label__False_198);
                  // ../../src/builtins/typed-array.tq:196:16
                  {
                    Label label__True_199_impl(this);
                    Label* label__True_199 = &label__True_199_impl;
                    USE(label__True_199);
                    Label label__False_200_impl(this, {element_173, high_start_170, low_end_169, low_end_value_171, order_174});
                    Label* label__False_200 = &label__False_200_impl;
                    USE(label__False_200);
                    int31_t t631 = 0;
                    TNode<Number> t632 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t631)));
                    BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*order_174).value()), implicit_cast<TNode<Number>>(t632), label__True_199, label__False_200);
                    if (label__True_199->is_used())
                    {
                      BIND(label__True_199);
                      // ../../src/builtins/typed-array.tq:196:31
                      {
                        // ../../src/builtins/typed-array.tq:197:11
                        TVARIABLE(BoolT, break_for_175_impl);
                        auto break_for_175 = &break_for_175_impl;
                        USE(break_for_175);
                        TNode<BoolT> t633 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                        *break_for_175 = implicit_cast<TNode<BoolT>>(t633);
                        // ../../src/builtins/typed-array.tq:199:11
                        {
                          Label label__True_201_impl(this);
                          Label* label__True_201 = &label__True_201_impl;
                          USE(label__True_201);
                          Label label__False_202_impl(this);
                          Label* label__False_202 = &label__False_202_impl;
                          USE(label__False_202);
                          Label label_header_722_1202_impl(this, {break_for_175, high_start_170, order_174});
                          Label* label_header_722_1202 = &label_header_722_1202_impl;
                          USE(label_header_722_1202);
                          Goto(label_header_722_1202);
                          BIND(label_header_722_1202);
                          int31_t t634 = 0;
                          TNode<Number> t635 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t634)));
                          BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*order_174).value()), implicit_cast<TNode<Number>>(t635), label__True_201, label__False_202);
                          if (label__True_201->is_used())
                          {
                            BIND(label__True_201);
                            // ../../src/builtins/typed-array.tq:199:29
                            {
                              // ../../src/builtins/typed-array.tq:200:13
                              TNode<Smi> t636 = implicit_cast<TNode<Smi>>((*high_start_170).value());
                              USE(t636);
                              TNode<Smi> t637 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                              TNode<Smi> t638 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*high_start_170).value()), implicit_cast<TNode<Smi>>(t637)));
                              *high_start_170 = implicit_cast<TNode<Smi>>(t638);
                              // ../../src/builtins/typed-array.tq:201:13
                              {
                                Label label__True_203_impl(this);
                                Label* label__True_203 = &label__True_203_impl;
                                USE(label__True_203);
                                Label label__False_204_impl(this, {break_for_175});
                                Label* label__False_204 = &label__False_204_impl;
                                USE(label__False_204);
                                TNode<BoolT> t639 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*high_start_170).value()), implicit_cast<TNode<Smi>>((*idx_172).value())));
                                USE(implicit_cast<TNode<BoolT>>(t639));
                                Branch(implicit_cast<TNode<BoolT>>(t639), label__True_203, label__False_204);
                                if (label__True_203->is_used())
                                {
                                  BIND(label__True_203);
                                  // ../../src/builtins/typed-array.tq:201:36
                                  {
                                    // ../../src/builtins/typed-array.tq:202:15
                                    TNode<BoolT> t640 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                                    *break_for_175 = implicit_cast<TNode<BoolT>>(t640);
                                    // ../../src/builtins/typed-array.tq:203:15
                                    Goto(label__False_202);
                                  }
                                }
                                BIND(label__False_204);
                              }
                              // ../../src/builtins/typed-array.tq:206:13
                              TNode<Object> t641 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*high_start_170).value())));
                              USE(implicit_cast<TNode<Object>>(t641));
                              TNode<Object> top_elem_723_impl;
                              auto top_elem_723 = &top_elem_723_impl;
                              USE(top_elem_723);
                              *top_elem_723 = implicit_cast<TNode<Object>>(t641);
                              // ../../src/builtins/typed-array.tq:207:13
                              TNode<Number> t642 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*top_elem_723)), implicit_cast<TNode<Object>>((*pivot_718)), label_Detached_182));
                              USE(implicit_cast<TNode<Number>>(t642));
                              *order_174 = implicit_cast<TNode<Number>>(t642);
                            }
                            Goto(label_header_722_1202);
                          }
                          BIND(label__False_202);
                        }
                        // ../../src/builtins/typed-array.tq:211:11
                        {
                          Label label__True_205_impl(this);
                          Label* label__True_205 = &label__True_205_impl;
                          USE(label__True_205);
                          Label label__False_206_impl(this, {});
                          Label* label__False_206 = &label__False_206_impl;
                          USE(label__False_206);
                          Branch(implicit_cast<TNode<BoolT>>((*break_for_175).value()), label__True_205, label__False_206);
                          if (label__True_205->is_used())
                          {
                            BIND(label__True_205);
                            // ../../src/builtins/typed-array.tq:211:26
                            {
                              // ../../src/builtins/typed-array.tq:212:13
                              Goto(label__False_196);
                            }
                          }
                          BIND(label__False_206);
                        }
                        // ../../src/builtins/typed-array.tq:215:11
                        TNode<Object> t643 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*high_start_170).value())));
                        USE(implicit_cast<TNode<Object>>(t643));
                        TNode<Object> high_start_value_724_impl;
                        auto high_start_value_724 = &high_start_value_724_impl;
                        USE(high_start_value_724);
                        *high_start_value_724 = implicit_cast<TNode<Object>>(t643);
                        // ../../src/builtins/typed-array.tq:216:11
                        TNode<Object> t644 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_172).value()), implicit_cast<TNode<Object>>((*high_start_value_724))));
                        USE(implicit_cast<TNode<Object>>(t644));
                        // ../../src/builtins/typed-array.tq:217:11
                        TNode<Object> t645 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*high_start_170).value()), implicit_cast<TNode<Object>>((*element_173).value())));
                        USE(implicit_cast<TNode<Object>>(t645));
                        // ../../src/builtins/typed-array.tq:219:11
                        {
                          Label label__True_207_impl(this);
                          Label* label__True_207 = &label__True_207_impl;
                          USE(label__True_207);
                          Label label__False_208_impl(this, {element_173, low_end_169, low_end_value_171});
                          Label* label__False_208 = &label__False_208_impl;
                          USE(label__False_208);
                          int31_t t646 = 0;
                          TNode<Number> t647 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t646)));
                          BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_174).value()), implicit_cast<TNode<Number>>(t647), label__True_207, label__False_208);
                          if (label__True_207->is_used())
                          {
                            BIND(label__True_207);
                            // ../../src/builtins/typed-array.tq:219:26
                            {
                              // ../../src/builtins/typed-array.tq:220:13
                              TNode<Object> t648 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_172).value())));
                              USE(implicit_cast<TNode<Object>>(t648));
                              *element_173 = implicit_cast<TNode<Object>>(t648);
                              // ../../src/builtins/typed-array.tq:222:13
                              TNode<Object> t649 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_169).value())));
                              USE(implicit_cast<TNode<Object>>(t649));
                              *low_end_value_171 = implicit_cast<TNode<Object>>(t649);
                              // ../../src/builtins/typed-array.tq:223:13
                              TNode<Object> t650 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_172).value()), implicit_cast<TNode<Object>>((*low_end_value_171).value())));
                              USE(implicit_cast<TNode<Object>>(t650));
                              // ../../src/builtins/typed-array.tq:224:13
                              TNode<Object> t651 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*low_end_169).value()), implicit_cast<TNode<Object>>((*element_173).value())));
                              USE(implicit_cast<TNode<Object>>(t651));
                              // ../../src/builtins/typed-array.tq:225:13
                              TNode<Smi> t652 = implicit_cast<TNode<Smi>>((*low_end_169).value());
                              USE(t652);
                              TNode<Smi> t653 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                              TNode<Smi> t654 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_end_169).value()), implicit_cast<TNode<Smi>>(t653)));
                              *low_end_169 = implicit_cast<TNode<Smi>>(t654);
                            }
                            Goto(label__False_208);
                          }
                          BIND(label__False_208);
                        }
                      }
                      Goto(label__False_200);
                    }
                    BIND(label__False_200);
                  }
                  Goto(label_if_done_label_721_1201);
                }
                BIND(label_if_done_label_721_1201);
              }
            }
            Goto(label_action_720_1200);
          }
          {
            BIND(label_action_720_1200);
            TNode<Smi> t655 = implicit_cast<TNode<Smi>>((*idx_172).value());
            USE(t655);
            TNode<Smi> t656 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t657 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*idx_172).value()), implicit_cast<TNode<Smi>>(t656)));
            *idx_172 = implicit_cast<TNode<Smi>>(t657);
            Goto(label_header_719_1199);
          }
          BIND(label__False_196);
          // ../../src/builtins/typed-array.tq:230:7
          {
            Label label__True_209_impl(this);
            Label* label__True_209 = &label__True_209_impl;
            USE(label__True_209);
            Label label__False_210_impl(this);
            Label* label__False_210 = &label__False_210_impl;
            USE(label__False_210);
            Label label_if_done_label_725_1203_impl(this, {from_163, to_164});
            Label* label_if_done_label_725_1203 = &label_if_done_label_725_1203_impl;
            USE(label_if_done_label_725_1203);
            TNode<Smi> t658 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_164).value()), implicit_cast<TNode<Smi>>((*high_start_170).value())));
            USE(implicit_cast<TNode<Smi>>(t658));
            TNode<Smi> t659 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*low_end_169).value()), implicit_cast<TNode<Smi>>((*from_163).value())));
            USE(implicit_cast<TNode<Smi>>(t659));
            TNode<BoolT> t660 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t658), implicit_cast<TNode<Smi>>(t659)));
            USE(implicit_cast<TNode<BoolT>>(t660));
            Branch(implicit_cast<TNode<BoolT>>(t660), label__True_209, label__False_210);
            if (label__True_209->is_used())
            {
              BIND(label__True_209);
              // ../../src/builtins/typed-array.tq:230:49
              {
                // ../../src/builtins/typed-array.tq:231:9
                TNode<JSTypedArray> t661 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*high_start_170).value()), implicit_cast<TNode<Smi>>((*to_164).value()), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Code>>(p_Store)));
                USE(implicit_cast<TNode<JSTypedArray>>(t661));
                // ../../src/builtins/typed-array.tq:233:9
                *to_164 = implicit_cast<TNode<Smi>>((*low_end_169).value());
              }
              Goto(label_if_done_label_725_1203);
            }
            if (label__False_210->is_used())
            {
              BIND(label__False_210);
              // ../../src/builtins/typed-array.tq:234:14
              {
                // ../../src/builtins/typed-array.tq:235:9
                TNode<JSTypedArray> t662 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_163).value()), implicit_cast<TNode<Smi>>((*low_end_169).value()), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Code>>(p_Store)));
                USE(implicit_cast<TNode<JSTypedArray>>(t662));
                // ../../src/builtins/typed-array.tq:237:9
                *from_163 = implicit_cast<TNode<Smi>>((*high_start_170).value());
              }
              Goto(label_if_done_label_725_1203);
            }
            BIND(label_if_done_label_725_1203);
          }
        }
        Goto(label_header_710_1197);
      }
      BIND(label__False_184);
    }
  }
}

TF_BUILTIN(TypedArrayQuickSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_from = UncheckedCast<Smi>(Parameter(Descriptor::kFrom));
  USE(p_from);
  TNode<Smi> p_to = UncheckedCast<Smi>(Parameter(Descriptor::kTo));
  USE(p_to);
  TNode<JSReceiver> p_comparefn = UncheckedCast<JSReceiver>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Code> p_Load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_Load);
  TNode<Code> p_Store = UncheckedCast<Code>(Parameter(Descriptor::kStore));
  USE(p_Store);
  // ../../src/builtins/typed-array.tq:244:72
  {
    // ../../src/builtins/typed-array.tq:245:5
    {
      Label label_try_done_726_1204_impl(this);
      Label* label_try_done_726_1204 = &label_try_done_726_1204_impl;
      USE(label_try_done_726_1204);
      Label label_Detached_211_impl(this);
      Label* label_Detached_211 = &label_Detached_211_impl;
      USE(label_Detached_211);
      Label label_try_begin_727_1205_impl(this);
      Label* label_try_begin_727_1205 = &label_try_begin_727_1205_impl;
      USE(label_try_begin_727_1205);
      Goto(label_try_begin_727_1205);
      if (label_try_begin_727_1205->is_used())
      {
        BIND(label_try_begin_727_1205);
        // ../../src/builtins/typed-array.tq:245:9
        {
          // ../../src/builtins/typed-array.tq:246:7
          TypedArrayQuickSortImpl(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(p_from), implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Code>>(p_Store), label_Detached_211);
        }
        Goto(label_try_done_726_1204);
      }
      if (label_Detached_211->is_used())
      {
        BIND(label_Detached_211);
        // ../../src/builtins/typed-array.tq:249:20
        {
          // ../../src/builtins/typed-array.tq:250:7
          const char* t663 = "%TypedArray%.prototype.sort";
          TNode<Object> t664 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t663)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t664));
        }
      }
      BIND(label_try_done_726_1204);
    }
    // ../../src/builtins/typed-array.tq:253:5
    Return(implicit_cast<TNode<JSTypedArray>>(p_array));
  }
}

TF_BUILTIN(TypedArrayPrototypeSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/typed-array.tq:258:71
  {
    // ../../src/builtins/typed-array.tq:261:5
    auto t665 = [=]() {
      int31_t t667 = 0;
      TNode<IntPtrT> t668 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t667)));
      TNode<Object> t669 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t668)));
      return implicit_cast<TNode<Object>>(t669);
    };
    auto t666 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t670_728_impl);
    auto t670_728 = &t670_728_impl;
    USE(t670_728);
    {
      Label label__True_212_impl(this);
      Label* label__True_212 = &label__True_212_impl;
      USE(label__True_212);
      Label label__False_213_impl(this);
      Label* label__False_213 = &label__False_213_impl;
      USE(label__False_213);
      Label label__done_729_1206_impl(this, {t670_728});
      Label* label__done_729_1206 = &label__done_729_1206_impl;
      USE(label__done_729_1206);
      TNode<IntPtrT> t671 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t672 = 0;
      TNode<IntPtrT> t673 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t672)));
      TNode<BoolT> t674 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t671), implicit_cast<TNode<IntPtrT>>(t673)));
      USE(implicit_cast<TNode<BoolT>>(t674));
      Branch(implicit_cast<TNode<BoolT>>(t674), label__True_212, label__False_213);
      BIND(label__True_212);
            *t670_728 = implicit_cast<TNode<Object>>(t665());
      Goto(label__done_729_1206);
      BIND(label__False_213);
            *t670_728 = implicit_cast<TNode<Object>>(t666());
      Goto(label__done_729_1206);
      BIND(label__done_729_1206);
    }
    TNode<Object> comparefn_obj_730_impl;
    auto comparefn_obj_730 = &comparefn_obj_730_impl;
    USE(comparefn_obj_730);
    *comparefn_obj_730 = implicit_cast<TNode<Object>>((*t670_728).value());
    // ../../src/builtins/typed-array.tq:263:5
    {
      Label label__True_214_impl(this);
      Label* label__True_214 = &label__True_214_impl;
      USE(label__True_214);
      Label label__False_215_impl(this, {});
      Label* label__False_215 = &label__False_215_impl;
      USE(label__False_215);
      Label label__True_216_impl(this);
      Label* label__True_216 = &label__True_216_impl;
      USE(label__True_216);
      TNode<BoolT> t675 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*comparefn_obj_730)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t675));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t675), label__False_215);
      TNode<BoolT> t676 = UncheckedCast<BoolT>(TaggedIsCallable(implicit_cast<TNode<Object>>((*comparefn_obj_730))));
      USE(implicit_cast<TNode<BoolT>>(t676));
      TNode<BoolT> t677 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t676)));
      USE(implicit_cast<TNode<BoolT>>(t677));
      Branch(implicit_cast<TNode<BoolT>>(t677), label__True_214, label__False_215);
      if (label__True_214->is_used())
      {
        BIND(label__True_214);
        // ../../src/builtins/typed-array.tq:263:73
        {
          // ../../src/builtins/typed-array.tq:264:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kBadSortComparisonFunction), implicit_cast<TNode<Object>>((*comparefn_obj_730)));
        }
      }
      BIND(label__False_215);
    }
    // ../../src/builtins/typed-array.tq:268:5
    TNode<Object> obj_731_impl;
    auto obj_731 = &obj_731_impl;
    USE(obj_731);
    *obj_731 = implicit_cast<TNode<Object>>(p_receiver);
    // ../../src/builtins/typed-array.tq:272:5
    const char* t678 = "%TypedArray%.prototype.sort";
    TNode<JSTypedArray> t679 = UncheckedCast<JSTypedArray>(ValidateTypedArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_731)), implicit_cast<const char*>(t678)));
    USE(implicit_cast<TNode<JSTypedArray>>(t679));
    TNode<JSTypedArray> array_732_impl;
    auto array_732 = &array_732_impl;
    USE(array_732);
    *array_732 = implicit_cast<TNode<JSTypedArray>>(t679);
    // ../../src/builtins/typed-array.tq:276:5
    {
      Label label__True_217_impl(this);
      Label* label__True_217 = &label__True_217_impl;
      USE(label__True_217);
      Label label__False_218_impl(this, {});
      Label* label__False_218 = &label__False_218_impl;
      USE(label__False_218);
      TNode<BoolT> t680 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*comparefn_obj_730)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t680));
      Branch(implicit_cast<TNode<BoolT>>(t680), label__True_217, label__False_218);
      if (label__True_217->is_used())
      {
        BIND(label__True_217);
        // ../../src/builtins/typed-array.tq:276:37
        {
          // ../../src/builtins/typed-array.tq:277:7
          TNode<JSTypedArray> t681 = UncheckedCast<JSTypedArray>(CallRuntime(Runtime::kTypedArraySortFast, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_731))));
          USE(implicit_cast<TNode<JSTypedArray>>(t681));
          arguments->PopAndReturn(implicit_cast<TNode<JSTypedArray>>(t681));
        }
      }
      BIND(label__False_218);
    }
    // ../../src/builtins/typed-array.tq:281:5
    TNode<Smi> t682 = UncheckedCast<Smi>(LoadTypedArrayLength(implicit_cast<TNode<JSTypedArray>>((*array_732))));
    TNode<Smi> len_733_impl;
    auto len_733 = &len_733_impl;
    USE(len_733);
    *len_733 = implicit_cast<TNode<Smi>>(t682);
    // ../../src/builtins/typed-array.tq:283:5
    {
      Label label_try_done_734_1207_impl(this);
      Label* label_try_done_734_1207 = &label_try_done_734_1207_impl;
      USE(label_try_done_734_1207);
      Label label_CastError_219_impl(this);
      Label* label_CastError_219 = &label_CastError_219_impl;
      USE(label_CastError_219);
      Label label_try_begin_735_1208_impl(this);
      Label* label_try_begin_735_1208 = &label_try_begin_735_1208_impl;
      USE(label_try_begin_735_1208);
      Goto(label_try_begin_735_1208);
      if (label_try_begin_735_1208->is_used())
      {
        BIND(label_try_begin_735_1208);
        // ../../src/builtins/typed-array.tq:283:9
        {
          // ../../src/builtins/typed-array.tq:284:7
          TNode<JSReceiver> t683 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>((*comparefn_obj_730)), label_CastError_219));
          USE(implicit_cast<TNode<JSReceiver>>(t683));
          TNode<JSReceiver> comparefn_736_impl;
          auto comparefn_736 = &comparefn_736_impl;
          USE(comparefn_736);
          *comparefn_736 = implicit_cast<TNode<JSReceiver>>(t683);
          // ../../src/builtins/typed-array.tq:286:7
          TVARIABLE(Code, loadfn_176_impl);
          auto loadfn_176 = &loadfn_176_impl;
          USE(loadfn_176);
          // ../../src/builtins/typed-array.tq:287:7
          TVARIABLE(Code, storefn_177_impl);
          auto storefn_177 = &storefn_177_impl;
          USE(storefn_177);
          // ../../src/builtins/typed-array.tq:289:7
          TNode<Int32T> t684 = UncheckedCast<Int32T>(LoadElementsKind(implicit_cast<TNode<JSTypedArray>>((*array_732))));
          TVARIABLE(Int32T, elements_kind_178_impl);
          auto elements_kind_178 = &elements_kind_178_impl;
          USE(elements_kind_178);
          *elements_kind_178 = implicit_cast<TNode<Int32T>>(t684);
          // ../../src/builtins/typed-array.tq:291:7
          {
            Label label__True_220_impl(this);
            Label* label__True_220 = &label__True_220_impl;
            USE(label__True_220);
            Label label__False_221_impl(this);
            Label* label__False_221 = &label__False_221_impl;
            USE(label__False_221);
            Label label_if_done_label_737_1209_impl(this, {loadfn_176, storefn_177});
            Label* label_if_done_label_737_1209 = &label_if_done_label_737_1209_impl;
            USE(label_if_done_label_737_1209);
            TNode<BoolT> t685 = UncheckedCast<BoolT>(IsElementsKindGreaterThan(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
            USE(implicit_cast<TNode<BoolT>>(t685));
            Branch(implicit_cast<TNode<BoolT>>(t685), label__True_220, label__False_221);
            if (label__True_220->is_used())
            {
              BIND(label__True_220);
              // ../../src/builtins/typed-array.tq:291:70
              {
                // ../../src/builtins/typed-array.tq:292:9
                {
                  Label label__True_222_impl(this);
                  Label* label__True_222 = &label__True_222_impl;
                  USE(label__True_222);
                  Label label__False_223_impl(this);
                  Label* label__False_223 = &label__False_223_impl;
                  USE(label__False_223);
                  Label label_if_done_label_738_1210_impl(this, {loadfn_176, storefn_177});
                  Label* label_if_done_label_738_1210 = &label_if_done_label_738_1210_impl;
                  USE(label_if_done_label_738_1210);
                  TNode<Int32T> t686 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(INT32_ELEMENTS)));
                  TNode<BoolT> t687 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t686)));
                  USE(implicit_cast<TNode<BoolT>>(t687));
                  Branch(implicit_cast<TNode<BoolT>>(t687), label__True_222, label__False_223);
                  if (label__True_222->is_used())
                  {
                    BIND(label__True_222);
                    // ../../src/builtins/typed-array.tq:292:46
                    {
                      // ../../src/builtins/typed-array.tq:293:11
                      *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).code()));
                      // ../../src/builtins/typed-array.tq:294:11
                      *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).code()));
                    }
                    Goto(label_if_done_label_738_1210);
                  }
                  if (label__False_223->is_used())
                  {
                    BIND(label__False_223);
                    // ../../src/builtins/typed-array.tq:295:16
                    {
                      Label label__True_224_impl(this);
                      Label* label__True_224 = &label__True_224_impl;
                      USE(label__True_224);
                      Label label__False_225_impl(this);
                      Label* label__False_225 = &label__False_225_impl;
                      USE(label__False_225);
                      Label label_if_done_label_739_1211_impl(this, {loadfn_176, storefn_177});
                      Label* label_if_done_label_739_1211 = &label_if_done_label_739_1211_impl;
                      USE(label_if_done_label_739_1211);
                      TNode<Int32T> t688 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
                      TNode<BoolT> t689 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t688)));
                      USE(implicit_cast<TNode<BoolT>>(t689));
                      Branch(implicit_cast<TNode<BoolT>>(t689), label__True_224, label__False_225);
                      if (label__True_224->is_used())
                      {
                        BIND(label__True_224);
                        // ../../src/builtins/typed-array.tq:295:55
                        {
                          // ../../src/builtins/typed-array.tq:296:11
                          *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat32Array).code()));
                          // ../../src/builtins/typed-array.tq:297:11
                          *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat32Array).code()));
                        }
                        Goto(label_if_done_label_739_1211);
                      }
                      if (label__False_225->is_used())
                      {
                        BIND(label__False_225);
                        // ../../src/builtins/typed-array.tq:298:16
                        {
                          Label label__True_226_impl(this);
                          Label* label__True_226 = &label__True_226_impl;
                          USE(label__True_226);
                          Label label__False_227_impl(this);
                          Label* label__False_227 = &label__False_227_impl;
                          USE(label__False_227);
                          Label label_if_done_label_740_1212_impl(this, {loadfn_176, storefn_177});
                          Label* label_if_done_label_740_1212 = &label_if_done_label_740_1212_impl;
                          USE(label_if_done_label_740_1212);
                          TNode<Int32T> t690 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
                          TNode<BoolT> t691 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t690)));
                          USE(implicit_cast<TNode<BoolT>>(t691));
                          Branch(implicit_cast<TNode<BoolT>>(t691), label__True_226, label__False_227);
                          if (label__True_226->is_used())
                          {
                            BIND(label__True_226);
                            // ../../src/builtins/typed-array.tq:298:55
                            {
                              // ../../src/builtins/typed-array.tq:299:11
                              *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat64Array).code()));
                              // ../../src/builtins/typed-array.tq:300:11
                              *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat64Array).code()));
                            }
                            Goto(label_if_done_label_740_1212);
                          }
                          if (label__False_227->is_used())
                          {
                            BIND(label__False_227);
                            // ../../src/builtins/typed-array.tq:301:16
                            {
                              Label label__True_228_impl(this);
                              Label* label__True_228 = &label__True_228_impl;
                              USE(label__True_228);
                              Label label__False_229_impl(this);
                              Label* label__False_229 = &label__False_229_impl;
                              USE(label__False_229);
                              Label label_if_done_label_741_1213_impl(this, {loadfn_176, storefn_177});
                              Label* label_if_done_label_741_1213 = &label_if_done_label_741_1213_impl;
                              USE(label_if_done_label_741_1213);
                              TNode<Int32T> t692 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT8_CLAMPED_ELEMENTS)));
                              TNode<BoolT> t693 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t692)));
                              USE(implicit_cast<TNode<BoolT>>(t693));
                              Branch(implicit_cast<TNode<BoolT>>(t693), label__True_228, label__False_229);
                              if (label__True_228->is_used())
                              {
                                BIND(label__True_228);
                                // ../../src/builtins/typed-array.tq:301:61
                                {
                                  // ../../src/builtins/typed-array.tq:302:11
                                  *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement24ATFixedUint8ClampedArray).code()));
                                  // ../../src/builtins/typed-array.tq:303:11
                                  *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement24ATFixedUint8ClampedArray).code()));
                                }
                                Goto(label_if_done_label_741_1213);
                              }
                              if (label__False_229->is_used())
                              {
                                BIND(label__False_229);
                                // ../../src/builtins/typed-array.tq:304:16
                                {
                                  Label label__True_230_impl(this);
                                  Label* label__True_230 = &label__True_230_impl;
                                  USE(label__True_230);
                                  Label label__False_231_impl(this);
                                  Label* label__False_231 = &label__False_231_impl;
                                  USE(label__False_231);
                                  Label label_if_done_label_742_1214_impl(this, {loadfn_176, storefn_177});
                                  Label* label_if_done_label_742_1214 = &label_if_done_label_742_1214_impl;
                                  USE(label_if_done_label_742_1214);
                                  TNode<Int32T> t694 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
                                  TNode<BoolT> t695 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t694)));
                                  USE(implicit_cast<TNode<BoolT>>(t695));
                                  Branch(implicit_cast<TNode<BoolT>>(t695), label__True_230, label__False_231);
                                  if (label__True_230->is_used())
                                  {
                                    BIND(label__True_230);
                                    // ../../src/builtins/typed-array.tq:304:57
                                    {
                                      // ../../src/builtins/typed-array.tq:305:11
                                      *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement21ATFixedBigUint64Array).code()));
                                      // ../../src/builtins/typed-array.tq:306:11
                                      *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement21ATFixedBigUint64Array).code()));
                                    }
                                    Goto(label_if_done_label_742_1214);
                                  }
                                  if (label__False_231->is_used())
                                  {
                                    BIND(label__False_231);
                                    // ../../src/builtins/typed-array.tq:307:16
                                    {
                                      Label label__True_232_impl(this);
                                      Label* label__True_232 = &label__True_232_impl;
                                      USE(label__True_232);
                                      Label label__False_233_impl(this);
                                      Label* label__False_233 = &label__False_233_impl;
                                      USE(label__False_233);
                                      Label label_if_done_label_743_1215_impl(this, {loadfn_176, storefn_177});
                                      Label* label_if_done_label_743_1215 = &label_if_done_label_743_1215_impl;
                                      USE(label_if_done_label_743_1215);
                                      TNode<Int32T> t696 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
                                      TNode<BoolT> t697 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t696)));
                                      USE(implicit_cast<TNode<BoolT>>(t697));
                                      Branch(implicit_cast<TNode<BoolT>>(t697), label__True_232, label__False_233);
                                      if (label__True_232->is_used())
                                      {
                                        BIND(label__True_232);
                                        // ../../src/builtins/typed-array.tq:307:56
                                        {
                                          // ../../src/builtins/typed-array.tq:308:11
                                          *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement20ATFixedBigInt64Array).code()));
                                          // ../../src/builtins/typed-array.tq:309:11
                                          *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement20ATFixedBigInt64Array).code()));
                                        }
                                        Goto(label_if_done_label_743_1215);
                                      }
                                      if (label__False_233->is_used())
                                      {
                                        BIND(label__False_233);
                                        // ../../src/builtins/typed-array.tq:310:16
                                        {
                                          // ../../src/builtins/typed-array.tq:311:11
                                          Unreachable();
                                        }
                                      }
                                      BIND(label_if_done_label_743_1215);
                                    }
                                    Goto(label_if_done_label_742_1214);
                                  }
                                  BIND(label_if_done_label_742_1214);
                                }
                                Goto(label_if_done_label_741_1213);
                              }
                              BIND(label_if_done_label_741_1213);
                            }
                            Goto(label_if_done_label_740_1212);
                          }
                          BIND(label_if_done_label_740_1212);
                        }
                        Goto(label_if_done_label_739_1211);
                      }
                      BIND(label_if_done_label_739_1211);
                    }
                    Goto(label_if_done_label_738_1210);
                  }
                  BIND(label_if_done_label_738_1210);
                }
              }
              Goto(label_if_done_label_737_1209);
            }
            if (label__False_221->is_used())
            {
              BIND(label__False_221);
              // ../../src/builtins/typed-array.tq:313:14
              {
                // ../../src/builtins/typed-array.tq:314:9
                {
                  Label label__True_234_impl(this);
                  Label* label__True_234 = &label__True_234_impl;
                  USE(label__True_234);
                  Label label__False_235_impl(this);
                  Label* label__False_235 = &label__False_235_impl;
                  USE(label__False_235);
                  Label label_if_done_label_744_1216_impl(this, {loadfn_176, storefn_177});
                  Label* label_if_done_label_744_1216 = &label_if_done_label_744_1216_impl;
                  USE(label_if_done_label_744_1216);
                  TNode<Int32T> t698 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
                  TNode<BoolT> t699 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t698)));
                  USE(implicit_cast<TNode<BoolT>>(t699));
                  Branch(implicit_cast<TNode<BoolT>>(t699), label__True_234, label__False_235);
                  if (label__True_234->is_used())
                  {
                    BIND(label__True_234);
                    // ../../src/builtins/typed-array.tq:314:46
                    {
                      // ../../src/builtins/typed-array.tq:315:11
                      *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedUint8Array).code()));
                      // ../../src/builtins/typed-array.tq:316:11
                      *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedUint8Array).code()));
                    }
                    Goto(label_if_done_label_744_1216);
                  }
                  if (label__False_235->is_used())
                  {
                    BIND(label__False_235);
                    // ../../src/builtins/typed-array.tq:317:16
                    {
                      Label label__True_236_impl(this);
                      Label* label__True_236 = &label__True_236_impl;
                      USE(label__True_236);
                      Label label__False_237_impl(this);
                      Label* label__False_237 = &label__False_237_impl;
                      USE(label__False_237);
                      Label label_if_done_label_745_1217_impl(this, {loadfn_176, storefn_177});
                      Label* label_if_done_label_745_1217 = &label_if_done_label_745_1217_impl;
                      USE(label_if_done_label_745_1217);
                      TNode<Int32T> t700 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(INT8_ELEMENTS)));
                      TNode<BoolT> t701 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t700)));
                      USE(implicit_cast<TNode<BoolT>>(t701));
                      Branch(implicit_cast<TNode<BoolT>>(t701), label__True_236, label__False_237);
                      if (label__True_236->is_used())
                      {
                        BIND(label__True_236);
                        // ../../src/builtins/typed-array.tq:317:52
                        {
                          // ../../src/builtins/typed-array.tq:318:11
                          *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement16ATFixedInt8Array).code()));
                          // ../../src/builtins/typed-array.tq:319:11
                          *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement16ATFixedInt8Array).code()));
                        }
                        Goto(label_if_done_label_745_1217);
                      }
                      if (label__False_237->is_used())
                      {
                        BIND(label__False_237);
                        // ../../src/builtins/typed-array.tq:320:16
                        {
                          Label label__True_238_impl(this);
                          Label* label__True_238 = &label__True_238_impl;
                          USE(label__True_238);
                          Label label__False_239_impl(this);
                          Label* label__False_239 = &label__False_239_impl;
                          USE(label__False_239);
                          Label label_if_done_label_746_1218_impl(this, {loadfn_176, storefn_177});
                          Label* label_if_done_label_746_1218 = &label_if_done_label_746_1218_impl;
                          USE(label_if_done_label_746_1218);
                          TNode<Int32T> t702 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
                          TNode<BoolT> t703 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t702)));
                          USE(implicit_cast<TNode<BoolT>>(t703));
                          Branch(implicit_cast<TNode<BoolT>>(t703), label__True_238, label__False_239);
                          if (label__True_238->is_used())
                          {
                            BIND(label__True_238);
                            // ../../src/builtins/typed-array.tq:320:54
                            {
                              // ../../src/builtins/typed-array.tq:321:11
                              *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint16Array).code()));
                              // ../../src/builtins/typed-array.tq:322:11
                              *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint16Array).code()));
                            }
                            Goto(label_if_done_label_746_1218);
                          }
                          if (label__False_239->is_used())
                          {
                            BIND(label__False_239);
                            // ../../src/builtins/typed-array.tq:323:16
                            {
                              Label label__True_240_impl(this);
                              Label* label__True_240 = &label__True_240_impl;
                              USE(label__True_240);
                              Label label__False_241_impl(this);
                              Label* label__False_241 = &label__False_241_impl;
                              USE(label__False_241);
                              Label label_if_done_label_747_1219_impl(this, {loadfn_176, storefn_177});
                              Label* label_if_done_label_747_1219 = &label_if_done_label_747_1219_impl;
                              USE(label_if_done_label_747_1219);
                              TNode<Int32T> t704 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(INT16_ELEMENTS)));
                              TNode<BoolT> t705 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t704)));
                              USE(implicit_cast<TNode<BoolT>>(t705));
                              Branch(implicit_cast<TNode<BoolT>>(t705), label__True_240, label__False_241);
                              if (label__True_240->is_used())
                              {
                                BIND(label__True_240);
                                // ../../src/builtins/typed-array.tq:323:53
                                {
                                  // ../../src/builtins/typed-array.tq:324:11
                                  *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt16Array).code()));
                                  // ../../src/builtins/typed-array.tq:325:11
                                  *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt16Array).code()));
                                }
                                Goto(label_if_done_label_747_1219);
                              }
                              if (label__False_241->is_used())
                              {
                                BIND(label__False_241);
                                // ../../src/builtins/typed-array.tq:326:16
                                {
                                  Label label__True_242_impl(this);
                                  Label* label__True_242 = &label__True_242_impl;
                                  USE(label__True_242);
                                  Label label__False_243_impl(this);
                                  Label* label__False_243 = &label__False_243_impl;
                                  USE(label__False_243);
                                  Label label_if_done_label_748_1220_impl(this, {loadfn_176, storefn_177});
                                  Label* label_if_done_label_748_1220 = &label_if_done_label_748_1220_impl;
                                  USE(label_if_done_label_748_1220);
                                  TNode<Int32T> t706 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
                                  TNode<BoolT> t707 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elements_kind_178).value()), implicit_cast<TNode<Int32T>>(t706)));
                                  USE(implicit_cast<TNode<BoolT>>(t707));
                                  Branch(implicit_cast<TNode<BoolT>>(t707), label__True_242, label__False_243);
                                  if (label__True_242->is_used())
                                  {
                                    BIND(label__True_242);
                                    // ../../src/builtins/typed-array.tq:326:54
                                    {
                                      // ../../src/builtins/typed-array.tq:327:11
                                      *loadfn_176 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint32Array).code()));
                                      // ../../src/builtins/typed-array.tq:328:11
                                      *storefn_177 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint32Array).code()));
                                    }
                                    Goto(label_if_done_label_748_1220);
                                  }
                                  if (label__False_243->is_used())
                                  {
                                    BIND(label__False_243);
                                    // ../../src/builtins/typed-array.tq:329:16
                                    {
                                      // ../../src/builtins/typed-array.tq:330:11
                                      Unreachable();
                                    }
                                  }
                                  BIND(label_if_done_label_748_1220);
                                }
                                Goto(label_if_done_label_747_1219);
                              }
                              BIND(label_if_done_label_747_1219);
                            }
                            Goto(label_if_done_label_746_1218);
                          }
                          BIND(label_if_done_label_746_1218);
                        }
                        Goto(label_if_done_label_745_1217);
                      }
                      BIND(label_if_done_label_745_1217);
                    }
                    Goto(label_if_done_label_744_1216);
                  }
                  BIND(label_if_done_label_744_1216);
                }
              }
              Goto(label_if_done_label_737_1209);
            }
            BIND(label_if_done_label_737_1209);
          }
          // ../../src/builtins/typed-array.tq:334:7
          int31_t t708 = 0;
          TNode<Smi> t709 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t708)));
          TNode<JSTypedArray> t710 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>((*array_732)), implicit_cast<TNode<Smi>>(t709), implicit_cast<TNode<Smi>>((*len_733)), implicit_cast<TNode<JSReceiver>>((*comparefn_736)), implicit_cast<TNode<Code>>((*loadfn_176).value()), implicit_cast<TNode<Code>>((*storefn_177).value())));
          USE(implicit_cast<TNode<JSTypedArray>>(t710));
        }
        Goto(label_try_done_734_1207);
      }
      if (label_CastError_219->is_used())
      {
        BIND(label_CastError_219);
        // ../../src/builtins/typed-array.tq:336:21
        {
          // ../../src/builtins/typed-array.tq:337:7
          Unreachable();
        }
      }
      BIND(label_try_done_734_1207);
    }
    // ../../src/builtins/typed-array.tq:339:5
    arguments->PopAndReturn(implicit_cast<TNode<JSTypedArray>>((*array_732)));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3395 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3396 = KindForArrayType17ATFixedInt32Array();
    USE(implicit_cast<ElementsKind>(t3396));
    TNode<Object> t3397 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3395), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3396), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3397));
    Return(implicit_cast<TNode<Object>>(t3397));
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3398 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3399 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3398)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3399));
    TNode<FixedTypedArrayBase> elements_1129_impl;
    auto elements_1129 = &elements_1129_impl;
    USE(elements_1129);
    *elements_1129 = implicit_cast<TNode<FixedTypedArrayBase>>(t3399);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3400 = KindForArrayType17ATFixedInt32Array();
    USE(implicit_cast<ElementsKind>(t3400));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1129)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3400), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3401 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3402 = KindForArrayType19ATFixedFloat32Array();
    USE(implicit_cast<ElementsKind>(t3402));
    TNode<Object> t3403 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3401), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3402), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3403));
    Return(implicit_cast<TNode<Object>>(t3403));
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3404 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3405 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3404)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3405));
    TNode<FixedTypedArrayBase> elements_1130_impl;
    auto elements_1130 = &elements_1130_impl;
    USE(elements_1130);
    *elements_1130 = implicit_cast<TNode<FixedTypedArrayBase>>(t3405);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3406 = KindForArrayType19ATFixedFloat32Array();
    USE(implicit_cast<ElementsKind>(t3406));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1130)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3406), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3407 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3408 = KindForArrayType19ATFixedFloat64Array();
    USE(implicit_cast<ElementsKind>(t3408));
    TNode<Object> t3409 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3407), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3408), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3409));
    Return(implicit_cast<TNode<Object>>(t3409));
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3410 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3411 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3410)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3411));
    TNode<FixedTypedArrayBase> elements_1131_impl;
    auto elements_1131 = &elements_1131_impl;
    USE(elements_1131);
    *elements_1131 = implicit_cast<TNode<FixedTypedArrayBase>>(t3411);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3412 = KindForArrayType19ATFixedFloat64Array();
    USE(implicit_cast<ElementsKind>(t3412));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1131)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3412), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement24ATFixedUint8ClampedArray, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3413 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3414 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(implicit_cast<ElementsKind>(t3414));
    TNode<Object> t3415 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3413), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3414), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3415));
    Return(implicit_cast<TNode<Object>>(t3415));
  }
}

TF_BUILTIN(StoreFixedElement24ATFixedUint8ClampedArray, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3416 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3417 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3416)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3417));
    TNode<FixedTypedArrayBase> elements_1132_impl;
    auto elements_1132 = &elements_1132_impl;
    USE(elements_1132);
    *elements_1132 = implicit_cast<TNode<FixedTypedArrayBase>>(t3417);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3418 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(implicit_cast<ElementsKind>(t3418));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1132)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3418), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement21ATFixedBigUint64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3419 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3420 = KindForArrayType21ATFixedBigUint64Array();
    USE(implicit_cast<ElementsKind>(t3420));
    TNode<Object> t3421 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3419), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3420), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3421));
    Return(implicit_cast<TNode<Object>>(t3421));
  }
}

TF_BUILTIN(StoreFixedElement21ATFixedBigUint64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3422 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3423 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3422)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3423));
    TNode<FixedTypedArrayBase> elements_1133_impl;
    auto elements_1133 = &elements_1133_impl;
    USE(elements_1133);
    *elements_1133 = implicit_cast<TNode<FixedTypedArrayBase>>(t3423);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3424 = KindForArrayType21ATFixedBigUint64Array();
    USE(implicit_cast<ElementsKind>(t3424));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1133)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3424), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement20ATFixedBigInt64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3425 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3426 = KindForArrayType20ATFixedBigInt64Array();
    USE(implicit_cast<ElementsKind>(t3426));
    TNode<Object> t3427 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3425), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3426), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3427));
    Return(implicit_cast<TNode<Object>>(t3427));
  }
}

TF_BUILTIN(StoreFixedElement20ATFixedBigInt64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3428 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3429 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3428)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3429));
    TNode<FixedTypedArrayBase> elements_1134_impl;
    auto elements_1134 = &elements_1134_impl;
    USE(elements_1134);
    *elements_1134 = implicit_cast<TNode<FixedTypedArrayBase>>(t3429);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3430 = KindForArrayType20ATFixedBigInt64Array();
    USE(implicit_cast<ElementsKind>(t3430));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1134)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3430), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedUint8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3431 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3432 = KindForArrayType17ATFixedUint8Array();
    USE(implicit_cast<ElementsKind>(t3432));
    TNode<Object> t3433 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3431), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3432), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3433));
    Return(implicit_cast<TNode<Object>>(t3433));
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedUint8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3434 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3435 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3434)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3435));
    TNode<FixedTypedArrayBase> elements_1135_impl;
    auto elements_1135 = &elements_1135_impl;
    USE(elements_1135);
    *elements_1135 = implicit_cast<TNode<FixedTypedArrayBase>>(t3435);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3436 = KindForArrayType17ATFixedUint8Array();
    USE(implicit_cast<ElementsKind>(t3436));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1135)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3436), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement16ATFixedInt8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3437 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3438 = KindForArrayType16ATFixedInt8Array();
    USE(implicit_cast<ElementsKind>(t3438));
    TNode<Object> t3439 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3437), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3438), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3439));
    Return(implicit_cast<TNode<Object>>(t3439));
  }
}

TF_BUILTIN(StoreFixedElement16ATFixedInt8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3440 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3441 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3440)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3441));
    TNode<FixedTypedArrayBase> elements_1136_impl;
    auto elements_1136 = &elements_1136_impl;
    USE(elements_1136);
    *elements_1136 = implicit_cast<TNode<FixedTypedArrayBase>>(t3441);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3442 = KindForArrayType16ATFixedInt8Array();
    USE(implicit_cast<ElementsKind>(t3442));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1136)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3442), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3443 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3444 = KindForArrayType18ATFixedUint16Array();
    USE(implicit_cast<ElementsKind>(t3444));
    TNode<Object> t3445 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3443), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3444), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3445));
    Return(implicit_cast<TNode<Object>>(t3445));
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3446 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3447 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3446)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3447));
    TNode<FixedTypedArrayBase> elements_1137_impl;
    auto elements_1137 = &elements_1137_impl;
    USE(elements_1137);
    *elements_1137 = implicit_cast<TNode<FixedTypedArrayBase>>(t3447);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3448 = KindForArrayType18ATFixedUint16Array();
    USE(implicit_cast<ElementsKind>(t3448));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1137)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3448), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3449 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3450 = KindForArrayType17ATFixedInt16Array();
    USE(implicit_cast<ElementsKind>(t3450));
    TNode<Object> t3451 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3449), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3450), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3451));
    Return(implicit_cast<TNode<Object>>(t3451));
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3452 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3453 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3452)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3453));
    TNode<FixedTypedArrayBase> elements_1138_impl;
    auto elements_1138 = &elements_1138_impl;
    USE(elements_1138);
    *elements_1138 = implicit_cast<TNode<FixedTypedArrayBase>>(t3453);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3454 = KindForArrayType17ATFixedInt16Array();
    USE(implicit_cast<ElementsKind>(t3454));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1138)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3454), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3455 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3456 = KindForArrayType18ATFixedUint32Array();
    USE(implicit_cast<ElementsKind>(t3456));
    TNode<Object> t3457 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3455), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3456), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t3457));
    Return(implicit_cast<TNode<Object>>(t3457));
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t3458 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t3459 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t3458)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t3459));
    TNode<FixedTypedArrayBase> elements_1139_impl;
    auto elements_1139 = &elements_1139_impl;
    USE(elements_1139);
    *elements_1139 = implicit_cast<TNode<FixedTypedArrayBase>>(t3459);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t3460 = KindForArrayType18ATFixedUint32Array();
    USE(implicit_cast<ElementsKind>(t3460));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1139)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t3460), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

}  // namespace internal
}  // namespace v8

