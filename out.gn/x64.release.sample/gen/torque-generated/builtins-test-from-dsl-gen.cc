#include "src/builtins/builtins-test-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper1(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_340_impl);
  auto _return_340 = &_return_340_impl;
  USE(_return_340);
  Label label_macro_end_1303_impl(this, {_return_340});
  Label* label_macro_end_1303 = &label_macro_end_1303_impl;
  USE(label_macro_end_1303);
  // ../../test/torque/test-torque.tq:6:69
  {
    // ../../test/torque/test-torque.tq:7:5
    {
      Label label__False_494_impl(this);
      Label* label__False_494 = &label__False_494_impl;
      USE(label__False_494);
      bool t1858 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t1858));
      bool t1859 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
      USE(implicit_cast<bool>(t1859));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1858) || implicit_cast<bool>(t1859))))) {
        // ../../test/torque/test-torque.tq:7:73
        {
          // ../../test/torque/test-torque.tq:8:9
          TNode<BoolT> t1860 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
          *_return_340 = implicit_cast<TNode<BoolT>>(t1860);
          Goto(label_macro_end_1303);
        }
      } else {
        // ../../test/torque/test-torque.tq:10:10
        {
          // ../../test/torque/test-torque.tq:11:7
          TNode<BoolT> t1861 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
          *_return_340 = implicit_cast<TNode<BoolT>>(t1861);
          Goto(label_macro_end_1303);
        }
      }
    }
  }
  BIND(label_macro_end_1303);
  return implicit_cast<TNode<BoolT>>((*_return_340).value());
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper2(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_341_impl);
  auto _return_341 = &_return_341_impl;
  USE(_return_341);
  Label label_macro_end_1304_impl(this, {_return_341});
  Label* label_macro_end_1304 = &label_macro_end_1304_impl;
  USE(label_macro_end_1304);
  // ../../test/torque/test-torque.tq:15:69
  {
    // ../../test/torque/test-torque.tq:16:5
    Label label__False_495_impl(this);
    Label* label__False_495 = &label__False_495_impl;
    USE(label__False_495);
    bool t1862 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1862));
    bool t1863 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1863));
    TNode<BoolT> t1864 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>((implicit_cast<bool>(t1862) || implicit_cast<bool>(t1863)))));
    *_return_341 = implicit_cast<TNode<BoolT>>(t1864);
    Goto(label_macro_end_1304);
  }
  BIND(label_macro_end_1304);
  return implicit_cast<TNode<BoolT>>((*_return_341).value());
}

bool TestBuiltinsFromDSLAssembler::ElementsKindTestHelper3(ElementsKind p_kind) {
  bool _return_342_impl;
  auto _return_342 = &_return_342_impl;
  USE(_return_342);
  Label label_macro_end_1305_impl(this, {});
  Label* label_macro_end_1305 = &label_macro_end_1305_impl;
  USE(label_macro_end_1305);
  // ../../test/torque/test-torque.tq:19:79
  {
    // ../../test/torque/test-torque.tq:20:5
    Label label__False_496_impl(this);
    Label* label__False_496 = &label__False_496_impl;
    USE(label__False_496);
    bool t1865 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1865));
    bool t1866 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1866));
    *_return_342 = implicit_cast<bool>((implicit_cast<bool>(t1865) || implicit_cast<bool>(t1866)));
    Goto(label_macro_end_1305);
  }
  BIND(label_macro_end_1305);
  return implicit_cast<bool>((*_return_342));
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper1(Label* label_Label1_497) {
  Label label_macro_end_1306_impl(this, {});
  Label* label_macro_end_1306 = &label_macro_end_1306_impl;
  USE(label_macro_end_1306);
  // ../../test/torque/test-torque.tq:24:17
  {
    // ../../test/torque/test-torque.tq:25:5
    Goto(label_Label1_497);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper2(Label* label_Label2_498, TVariable<Smi>* Label20_343) {
  Label label_macro_end_1307_impl(this, {});
  Label* label_macro_end_1307 = &label_macro_end_1307_impl;
  USE(label_macro_end_1307);
  // ../../test/torque/test-torque.tq:29:22
  {
    // ../../test/torque/test-torque.tq:30:5
    int31_t t1867 = 42;
    TNode<Smi> t1868 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1867)));
    *Label20_343 = implicit_cast<TNode<Smi>>(t1868);
    Goto(label_Label2_498);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper3(Label* label_Label3_499, TVariable<String>* Label30_344, TVariable<Smi>* Label31_345) {
  Label label_macro_end_1308_impl(this, {});
  Label* label_macro_end_1308 = &label_macro_end_1308_impl;
  USE(label_macro_end_1308);
  // ../../test/torque/test-torque.tq:34:30
  {
    // ../../test/torque/test-torque.tq:35:5
    const char* t1869 = "foo";
    TNode<String> t1870 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t1869)));
    *Label30_344 = implicit_cast<TNode<String>>(t1870);
    int31_t t1871 = 7;
    TNode<Smi> t1872 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1871)));
    *Label31_345 = implicit_cast<TNode<Smi>>(t1872);
    Goto(label_Label3_499);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexpr1() {
  Label label_macro_end_1309_impl(this, {});
  Label* label_macro_end_1309 = &label_macro_end_1309_impl;
  USE(label_macro_end_1309);
  // ../../test/torque/test-torque.tq:38:26
  {
    // ../../test/torque/test-torque.tq:39:5
    Label label__True_500_impl(this);
    Label* label__True_500 = &label__True_500_impl;
    USE(label__True_500);
    Label label__False_501_impl(this);
    Label* label__False_501 = &label__False_501_impl;
    USE(label__False_501);
    bool t1873 = IsFastElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS));
    USE(implicit_cast<bool>(t1873));
    TNode<BoolT> t1874 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1873)));
    USE(implicit_cast<TNode<BoolT>>(t1874));
    Branch(implicit_cast<TNode<BoolT>>(t1874), label__True_500, label__False_501);
    BIND(label__False_501);
    Print("assert 'from_constexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))' failed at ../../test/torque/test-torque.tq:39:5");
    Unreachable();
    BIND(label__True_500);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprIf() {
  Label label_macro_end_1310_impl(this, {});
  Label* label_macro_end_1310 = &label_macro_end_1310_impl;
  USE(label_macro_end_1310);
  // ../../test/torque/test-torque.tq:42:27
  {
    // ../../test/torque/test-torque.tq:43:5
    Label label__True_502_impl(this);
    Label* label__True_502 = &label__True_502_impl;
    USE(label__True_502);
    Label label__False_503_impl(this);
    Label* label__False_503 = &label__False_503_impl;
    USE(label__False_503);
    TNode<BoolT> t1875 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1875));
    Branch(implicit_cast<TNode<BoolT>>(t1875), label__True_502, label__False_503);
    BIND(label__False_503);
    Print("assert 'ElementsKindTestHelper1(UINT8_ELEMENTS)' failed at ../../test/torque/test-torque.tq:43:5");
    Unreachable();
    BIND(label__True_502);
    // ../../test/torque/test-torque.tq:44:5
    Label label__True_504_impl(this);
    Label* label__True_504 = &label__True_504_impl;
    USE(label__True_504);
    Label label__False_505_impl(this);
    Label* label__False_505 = &label__False_505_impl;
    USE(label__False_505);
    TNode<BoolT> t1876 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1876));
    Branch(implicit_cast<TNode<BoolT>>(t1876), label__True_504, label__False_505);
    BIND(label__False_505);
    Print("assert 'ElementsKindTestHelper1(UINT16_ELEMENTS)' failed at ../../test/torque/test-torque.tq:44:5");
    Unreachable();
    BIND(label__True_504);
    // ../../test/torque/test-torque.tq:45:5
    Label label__True_506_impl(this);
    Label* label__True_506 = &label__True_506_impl;
    USE(label__True_506);
    Label label__False_507_impl(this);
    Label* label__False_507 = &label__False_507_impl;
    USE(label__False_507);
    TNode<BoolT> t1877 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1877));
    TNode<BoolT> t1878 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t1877)));
    USE(implicit_cast<TNode<BoolT>>(t1878));
    Branch(implicit_cast<TNode<BoolT>>(t1878), label__True_506, label__False_507);
    BIND(label__False_507);
    Print("assert '!ElementsKindTestHelper1(UINT32_ELEMENTS)' failed at ../../test/torque/test-torque.tq:45:5");
    Unreachable();
    BIND(label__True_506);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprReturn() {
  Label label_macro_end_1311_impl(this, {});
  Label* label_macro_end_1311 = &label_macro_end_1311_impl;
  USE(label_macro_end_1311);
  // ../../test/torque/test-torque.tq:48:31
  {
    // ../../test/torque/test-torque.tq:49:5
    Label label__True_508_impl(this);
    Label* label__True_508 = &label__True_508_impl;
    USE(label__True_508);
    Label label__False_509_impl(this);
    Label* label__False_509 = &label__False_509_impl;
    USE(label__False_509);
    bool t1879 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1879));
    TNode<BoolT> t1880 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1879)));
    USE(implicit_cast<TNode<BoolT>>(t1880));
    Branch(implicit_cast<TNode<BoolT>>(t1880), label__True_508, label__False_509);
    BIND(label__False_509);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT8_ELEMENTS))' failed at ../../test/torque/test-torque.tq:49:5");
    Unreachable();
    BIND(label__True_508);
    // ../../test/torque/test-torque.tq:50:5
    Label label__True_510_impl(this);
    Label* label__True_510 = &label__True_510_impl;
    USE(label__True_510);
    Label label__False_511_impl(this);
    Label* label__False_511 = &label__False_511_impl;
    USE(label__False_511);
    bool t1881 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1881));
    TNode<BoolT> t1882 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1881)));
    USE(implicit_cast<TNode<BoolT>>(t1882));
    Branch(implicit_cast<TNode<BoolT>>(t1882), label__True_510, label__False_511);
    BIND(label__False_511);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT16_ELEMENTS))' failed at ../../test/torque/test-torque.tq:50:5");
    Unreachable();
    BIND(label__True_510);
    // ../../test/torque/test-torque.tq:51:5
    Label label__True_512_impl(this);
    Label* label__True_512 = &label__True_512_impl;
    USE(label__True_512);
    Label label__False_513_impl(this);
    Label* label__False_513 = &label__False_513_impl;
    USE(label__False_513);
    bool t1883 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT32_ELEMENTS));
    USE(implicit_cast<bool>(t1883));
    TNode<BoolT> t1884 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1883)));
    USE(implicit_cast<TNode<BoolT>>(t1884));
    TNode<BoolT> t1885 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t1884)));
    USE(implicit_cast<TNode<BoolT>>(t1885));
    Branch(implicit_cast<TNode<BoolT>>(t1885), label__True_512, label__False_513);
    BIND(label__False_513);
    Print("assert '!from_constexpr<bool>(ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:51:5");
    Unreachable();
    BIND(label__True_512);
    // ../../test/torque/test-torque.tq:52:5
    Label label__True_514_impl(this);
    Label* label__True_514 = &label__True_514_impl;
    USE(label__True_514);
    Label label__False_515_impl(this);
    Label* label__False_515 = &label__False_515_impl;
    USE(label__False_515);
    bool t1886 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT32_ELEMENTS));
    USE(implicit_cast<bool>(t1886));
    bool t1887 = ConstexprBoolNot(implicit_cast<bool>(t1886));
    USE(implicit_cast<bool>(t1887));
    TNode<BoolT> t1888 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1887)));
    USE(implicit_cast<TNode<BoolT>>(t1888));
    Branch(implicit_cast<TNode<BoolT>>(t1888), label__True_514, label__False_515);
    BIND(label__False_515);
    Print("assert 'from_constexpr<bool>(!ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:52:5");
    Unreachable();
    BIND(label__True_514);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabel() {
  TVARIABLE(Oddball, _return_346_impl);
  auto _return_346 = &_return_346_impl;
  USE(_return_346);
  Label label_macro_end_1312_impl(this, {_return_346});
  Label* label_macro_end_1312 = &label_macro_end_1312_impl;
  USE(label_macro_end_1312);
  // ../../test/torque/test-torque.tq:55:34
  {
    // ../../test/torque/test-torque.tq:56:5
    {
      Label label_try_done_857_1313_impl(this);
      Label* label_try_done_857_1313 = &label_try_done_857_1313_impl;
      USE(label_try_done_857_1313);
      Label label_Label1_516_impl(this);
      Label* label_Label1_516 = &label_Label1_516_impl;
      USE(label_Label1_516);
      Label label_try_begin_858_1314_impl(this);
      Label* label_try_begin_858_1314 = &label_try_begin_858_1314_impl;
      USE(label_try_begin_858_1314);
      Goto(label_try_begin_858_1314);
      if (label_try_begin_858_1314->is_used())
      {
        BIND(label_try_begin_858_1314);
        // ../../test/torque/test-torque.tq:56:9
        {
          // ../../test/torque/test-torque.tq:57:7
          LabelTestHelper1(label_Label1_516);
        }
      }
      if (label_Label1_516->is_used())
      {
        BIND(label_Label1_516);
        // ../../test/torque/test-torque.tq:59:18
        {
          // ../../test/torque/test-torque.tq:60:7
          *_return_346 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1312);
        }
      }
    }
  }
  BIND(label_macro_end_1312);
  return implicit_cast<TNode<Oddball>>((*_return_346).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithOneParameter() {
  TVARIABLE(Oddball, _return_347_impl);
  auto _return_347 = &_return_347_impl;
  USE(_return_347);
  Label label_macro_end_1315_impl(this, {_return_347});
  Label* label_macro_end_1315 = &label_macro_end_1315_impl;
  USE(label_macro_end_1315);
  // ../../test/torque/test-torque.tq:64:50
  {
    // ../../test/torque/test-torque.tq:65:5
    {
      Label label_try_done_859_1316_impl(this);
      Label* label_try_done_859_1316 = &label_try_done_859_1316_impl;
      USE(label_try_done_859_1316);
      Label label_Label2_517_impl(this);
      Label* label_Label2_517 = &label_Label2_517_impl;
      USE(label_Label2_517);
      TVARIABLE(Smi, smi_348_impl);
      auto smi_348 = &smi_348_impl;
      USE(smi_348);
      Label label_try_begin_860_1317_impl(this);
      Label* label_try_begin_860_1317 = &label_try_begin_860_1317_impl;
      USE(label_try_begin_860_1317);
      Goto(label_try_begin_860_1317);
      if (label_try_begin_860_1317->is_used())
      {
        BIND(label_try_begin_860_1317);
        // ../../test/torque/test-torque.tq:65:9
        {
          // ../../test/torque/test-torque.tq:66:7
          LabelTestHelper2(label_Label2_517, smi_348);
        }
      }
      if (label_Label2_517->is_used())
      {
        BIND(label_Label2_517);
        // ../../test/torque/test-torque.tq:68:28
        {
          // ../../test/torque/test-torque.tq:69:7
          Label label__True_518_impl(this);
          Label* label__True_518 = &label__True_518_impl;
          USE(label__True_518);
          Label label__False_519_impl(this);
          Label* label__False_519 = &label__False_519_impl;
          USE(label__False_519);
          int31_t t1889 = 42;
          TNode<Smi> t1890 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1889)));
          TNode<BoolT> t1891 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*smi_348).value()), implicit_cast<TNode<Smi>>(t1890)));
          USE(implicit_cast<TNode<BoolT>>(t1891));
          Branch(implicit_cast<TNode<BoolT>>(t1891), label__True_518, label__False_519);
          BIND(label__False_519);
          Print("assert 'smi == 42' failed at ../../test/torque/test-torque.tq:69:7");
          Unreachable();
          BIND(label__True_518);
          // ../../test/torque/test-torque.tq:70:7
          *_return_347 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1315);
        }
      }
    }
  }
  BIND(label_macro_end_1315);
  return implicit_cast<TNode<Oddball>>((*_return_347).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithTwoParameters() {
  TVARIABLE(Oddball, _return_349_impl);
  auto _return_349 = &_return_349_impl;
  USE(_return_349);
  Label label_macro_end_1318_impl(this, {_return_349});
  Label* label_macro_end_1318 = &label_macro_end_1318_impl;
  USE(label_macro_end_1318);
  // ../../test/torque/test-torque.tq:74:51
  {
    // ../../test/torque/test-torque.tq:75:5
    {
      Label label_try_done_861_1319_impl(this);
      Label* label_try_done_861_1319 = &label_try_done_861_1319_impl;
      USE(label_try_done_861_1319);
      Label label_Label3_520_impl(this);
      Label* label_Label3_520 = &label_Label3_520_impl;
      USE(label_Label3_520);
      TVARIABLE(String, str_350_impl);
      auto str_350 = &str_350_impl;
      USE(str_350);
      TVARIABLE(Smi, smi_351_impl);
      auto smi_351 = &smi_351_impl;
      USE(smi_351);
      Label label_try_begin_862_1320_impl(this);
      Label* label_try_begin_862_1320 = &label_try_begin_862_1320_impl;
      USE(label_try_begin_862_1320);
      Goto(label_try_begin_862_1320);
      if (label_try_begin_862_1320->is_used())
      {
        BIND(label_try_begin_862_1320);
        // ../../test/torque/test-torque.tq:75:9
        {
          // ../../test/torque/test-torque.tq:76:7
          LabelTestHelper3(label_Label3_520, str_350, smi_351);
        }
      }
      if (label_Label3_520->is_used())
      {
        BIND(label_Label3_520);
        // ../../test/torque/test-torque.tq:78:41
        {
          // ../../test/torque/test-torque.tq:79:7
          Label label__True_521_impl(this);
          Label* label__True_521 = &label__True_521_impl;
          USE(label__True_521);
          Label label__False_522_impl(this);
          Label* label__False_522 = &label__False_522_impl;
          USE(label__False_522);
          const char* t1892 = "foo";
          TNode<Object> t1893 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t1892)));
          TNode<BoolT> t1894 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*str_350).value()), implicit_cast<TNode<Object>>(t1893)));
          USE(implicit_cast<TNode<BoolT>>(t1894));
          Branch(implicit_cast<TNode<BoolT>>(t1894), label__True_521, label__False_522);
          BIND(label__False_522);
          Print("assert 'str == 'foo'' failed at ../../test/torque/test-torque.tq:79:7");
          Unreachable();
          BIND(label__True_521);
          // ../../test/torque/test-torque.tq:80:7
          Label label__True_523_impl(this);
          Label* label__True_523 = &label__True_523_impl;
          USE(label__True_523);
          Label label__False_524_impl(this);
          Label* label__False_524 = &label__False_524_impl;
          USE(label__False_524);
          int31_t t1895 = 7;
          TNode<Smi> t1896 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1895)));
          TNode<BoolT> t1897 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*smi_351).value()), implicit_cast<TNode<Smi>>(t1896)));
          USE(implicit_cast<TNode<BoolT>>(t1897));
          Branch(implicit_cast<TNode<BoolT>>(t1897), label__True_523, label__False_524);
          BIND(label__False_524);
          Print("assert 'smi == 7' failed at ../../test/torque/test-torque.tq:80:7");
          Unreachable();
          BIND(label__True_523);
          // ../../test/torque/test-torque.tq:81:7
          *_return_349 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1318);
        }
      }
    }
  }
  BIND(label_macro_end_1318);
  return implicit_cast<TNode<Oddball>>((*_return_349).value());
}

TF_BUILTIN(GenericBuiltinTest22UT12ATHeapObject5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Object> p_param = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:89:65
  {
    // ../../test/torque/test-torque.tq:90:5
    Return(implicit_cast<TNode<Object>>(p_param));
  }
}

void TestBuiltinsFromDSLAssembler::TestBuiltinSpecialization(TNode<Context> p_c) {
  Label label_macro_end_1321_impl(this, {});
  Label* label_macro_end_1321 = &label_macro_end_1321_impl;
  USE(label_macro_end_1321);
  // ../../test/torque/test-torque.tq:93:47
  {
    // ../../test/torque/test-torque.tq:94:5
    Label label__True_525_impl(this);
    Label* label__True_525 = &label__True_525_impl;
    USE(label__True_525);
    Label label__False_526_impl(this);
    Label* label__False_526 = &label__False_526_impl;
    USE(label__False_526);
    int31_t t1898 = 0;
    TNode<Smi> t1899 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1898)));
    TNode<Object> t1900 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1899)));
    USE(implicit_cast<TNode<Object>>(t1900));
    TNode<BoolT> t1901 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1900), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1901));
    Branch(implicit_cast<TNode<BoolT>>(t1901), label__True_525, label__False_526);
    BIND(label__False_526);
    Print("assert 'GenericBuiltinTest<Smi>(c, 0) == Null' failed at ../../test/torque/test-torque.tq:94:5");
    Unreachable();
    BIND(label__True_525);
    // ../../test/torque/test-torque.tq:95:5
    Label label__True_527_impl(this);
    Label* label__True_527 = &label__True_527_impl;
    USE(label__True_527);
    Label label__False_528_impl(this);
    Label* label__False_528 = &label__False_528_impl;
    USE(label__False_528);
    int31_t t1902 = 1;
    TNode<Smi> t1903 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1902)));
    TNode<Object> t1904 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1903)));
    USE(implicit_cast<TNode<Object>>(t1904));
    TNode<BoolT> t1905 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1904), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1905));
    Branch(implicit_cast<TNode<BoolT>>(t1905), label__True_527, label__False_528);
    BIND(label__False_528);
    Print("assert 'GenericBuiltinTest<Smi>(c, 1) == Null' failed at ../../test/torque/test-torque.tq:95:5");
    Unreachable();
    BIND(label__True_527);
    // ../../test/torque/test-torque.tq:96:5
    Label label__True_529_impl(this);
    Label* label__True_529 = &label__True_529_impl;
    USE(label__True_529);
    Label label__False_530_impl(this);
    Label* label__False_530 = &label__False_530_impl;
    USE(label__False_530);
    TNode<Object> t1906 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1906));
    TNode<BoolT> t1907 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1906), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1907));
    Branch(implicit_cast<TNode<BoolT>>(t1907), label__True_529, label__False_530);
    BIND(label__False_530);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:96:5");
    Unreachable();
    BIND(label__True_529);
    // ../../test/torque/test-torque.tq:97:5
    Label label__True_531_impl(this);
    Label* label__True_531 = &label__True_531_impl;
    USE(label__True_531);
    Label label__False_532_impl(this);
    Label* label__False_532 = &label__False_532_impl;
    USE(label__False_532);
    TNode<Object> t1908 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1908));
    TNode<BoolT> t1909 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1908), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1909));
    Branch(implicit_cast<TNode<BoolT>>(t1909), label__True_531, label__False_532);
    BIND(label__False_532);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:97:5");
    Unreachable();
    BIND(label__True_531);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper4(bool p_flag, Label* label_Label4_533, Label* label_Label5_534) {
  Label label_macro_end_1322_impl(this, {});
  Label* label_macro_end_1322 = &label_macro_end_1322_impl;
  USE(label_macro_end_1322);
  // ../../test/torque/test-torque.tq:100:77
  {
    // ../../test/torque/test-torque.tq:101:5
    {
      if ((implicit_cast<bool>(p_flag))) {
        // ../../test/torque/test-torque.tq:101:24
        {
          // ../../test/torque/test-torque.tq:102:7
          Goto(label_Label4_533);
        }
      } else {
        // ../../test/torque/test-torque.tq:103:12
        {
          // ../../test/torque/test-torque.tq:104:7
          Goto(label_Label5_534);
        }
      }
    }
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::CallLabelTestHelper4(bool p_flag) {
  TVARIABLE(BoolT, _return_352_impl);
  auto _return_352 = &_return_352_impl;
  USE(_return_352);
  Label label_macro_end_1323_impl(this, {_return_352});
  Label* label_macro_end_1323 = &label_macro_end_1323_impl;
  USE(label_macro_end_1323);
  // ../../test/torque/test-torque.tq:108:58
  {
    // ../../test/torque/test-torque.tq:109:5
    {
      Label label_try_done_863_1324_impl(this);
      Label* label_try_done_863_1324 = &label_try_done_863_1324_impl;
      USE(label_try_done_863_1324);
      Label label_Label4_537_impl(this);
      Label* label_Label4_537 = &label_Label4_537_impl;
      USE(label_Label4_537);
      Label label_Label5_538_impl(this);
      Label* label_Label5_538 = &label_Label5_538_impl;
      USE(label_Label5_538);
      Label label_try_begin_864_1325_impl(this);
      Label* label_try_begin_864_1325 = &label_try_begin_864_1325_impl;
      USE(label_try_begin_864_1325);
      Goto(label_try_begin_864_1325);
      if (label_try_begin_864_1325->is_used())
      {
        BIND(label_try_begin_864_1325);
        // ../../test/torque/test-torque.tq:109:9
        {
          // ../../test/torque/test-torque.tq:110:7
          LabelTestHelper4(implicit_cast<bool>(p_flag), label_Label4_537, label_Label5_538);
        }
      }
      if (label_Label4_537->is_used())
      {
        BIND(label_Label4_537);
        // ../../test/torque/test-torque.tq:112:18
        {
          // ../../test/torque/test-torque.tq:113:7
          TNode<BoolT> t1910 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
          *_return_352 = implicit_cast<TNode<BoolT>>(t1910);
          Goto(label_macro_end_1323);
        }
      }
      if (label_Label5_538->is_used())
      {
        BIND(label_Label5_538);
        // ../../test/torque/test-torque.tq:115:18
        {
          // ../../test/torque/test-torque.tq:116:7
          TNode<BoolT> t1911 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
          *_return_352 = implicit_cast<TNode<BoolT>>(t1911);
          Goto(label_macro_end_1323);
        }
      }
    }
  }
  BIND(label_macro_end_1323);
  return implicit_cast<TNode<BoolT>>((*_return_352).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestPartiallyUnusedLabel() {
  TVARIABLE(Oddball, _return_353_impl);
  auto _return_353 = &_return_353_impl;
  USE(_return_353);
  Label label_macro_end_1326_impl(this, {_return_353});
  Label* label_macro_end_1326 = &label_macro_end_1326_impl;
  USE(label_macro_end_1326);
  // ../../test/torque/test-torque.tq:120:45
  {
    // ../../test/torque/test-torque.tq:121:5
    TNode<BoolT> t1912 = UncheckedCast<BoolT>(CallLabelTestHelper4(implicit_cast<bool>(true)));
    USE(implicit_cast<TNode<BoolT>>(t1912));
    TVARIABLE(BoolT, r1_354_impl);
    auto r1_354 = &r1_354_impl;
    USE(r1_354);
    *r1_354 = implicit_cast<TNode<BoolT>>(t1912);
    // ../../test/torque/test-torque.tq:122:5
    TNode<BoolT> t1913 = UncheckedCast<BoolT>(CallLabelTestHelper4(implicit_cast<bool>(false)));
    USE(implicit_cast<TNode<BoolT>>(t1913));
    TVARIABLE(BoolT, r2_355_impl);
    auto r2_355 = &r2_355_impl;
    USE(r2_355);
    *r2_355 = implicit_cast<TNode<BoolT>>(t1913);
    // ../../test/torque/test-torque.tq:124:5
    {
      Label label__True_539_impl(this);
      Label* label__True_539 = &label__True_539_impl;
      USE(label__True_539);
      Label label__False_540_impl(this);
      Label* label__False_540 = &label__False_540_impl;
      USE(label__False_540);
      Label label_if_done_label_865_1327_impl(this, {});
      Label* label_if_done_label_865_1327 = &label_if_done_label_865_1327_impl;
      USE(label_if_done_label_865_1327);
      Label label__True_541_impl(this);
      Label* label__True_541 = &label__True_541_impl;
      USE(label__True_541);
      GotoIfNot(implicit_cast<TNode<BoolT>>((*r1_354).value()), label__False_540);
      TNode<BoolT> t1914 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>((*r2_355).value())));
      USE(implicit_cast<TNode<BoolT>>(t1914));
      Branch(implicit_cast<TNode<BoolT>>(t1914), label__True_539, label__False_540);
      if (label__True_539->is_used())
      {
        BIND(label__True_539);
        // ../../test/torque/test-torque.tq:124:20
        {
          // ../../test/torque/test-torque.tq:125:7
          *_return_353 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1326);
        }
      }
      if (label__False_540->is_used())
      {
        BIND(label__False_540);
        // ../../test/torque/test-torque.tq:126:12
        {
          // ../../test/torque/test-torque.tq:127:7
          *_return_353 = implicit_cast<TNode<Oddball>>(False());
          Goto(label_macro_end_1326);
        }
      }
    }
  }
  BIND(label_macro_end_1326);
  return implicit_cast<TNode<Oddball>>((*_return_353).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object> p_param2) {
  TVARIABLE(Object, _return_356_impl);
  auto _return_356 = &_return_356_impl;
  USE(_return_356);
  Label label_macro_end_1328_impl(this, {_return_356});
  Label* label_macro_end_1328 = &label_macro_end_1328_impl;
  USE(label_macro_end_1328);
  // ../../test/torque/test-torque.tq:135:52
  {
    // ../../test/torque/test-torque.tq:136:5
    *_return_356 = implicit_cast<TNode<Object>>(p_param2);
    Goto(label_macro_end_1328);
  }
  BIND(label_macro_end_1328);
  return implicit_cast<TNode<Object>>((*_return_356).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object> p_param2, Label* label_Y_542) {
  TVARIABLE(Object, _return_357_impl);
  auto _return_357 = &_return_357_impl;
  USE(_return_357);
  Label label_macro_end_1329_impl(this, {_return_357});
  Label* label_macro_end_1329 = &label_macro_end_1329_impl;
  USE(label_macro_end_1329);
  // ../../test/torque/test-torque.tq:143:71
  {
    // ../../test/torque/test-torque.tq:144:5
    *_return_357 = implicit_cast<TNode<Object>>(p_param2);
    Goto(label_macro_end_1329);
  }
  BIND(label_macro_end_1329);
  return implicit_cast<TNode<Object>>((*_return_357).value());
}

void TestBuiltinsFromDSLAssembler::TestMacroSpecialization() {
  Label label_macro_end_1330_impl(this, {});
  Label* label_macro_end_1330 = &label_macro_end_1330_impl;
  USE(label_macro_end_1330);
  // ../../test/torque/test-torque.tq:147:35
  {
    // ../../test/torque/test-torque.tq:148:5
    {
      Label label_try_done_866_1331_impl(this);
      Label* label_try_done_866_1331 = &label_try_done_866_1331_impl;
      USE(label_try_done_866_1331);
      Label label_Fail_543_impl(this);
      Label* label_Fail_543 = &label_Fail_543_impl;
      USE(label_Fail_543);
      Label label_try_begin_867_1332_impl(this);
      Label* label_try_begin_867_1332 = &label_try_begin_867_1332_impl;
      USE(label_try_begin_867_1332);
      Goto(label_try_begin_867_1332);
      if (label_try_begin_867_1332->is_used())
      {
        BIND(label_try_begin_867_1332);
        // ../../test/torque/test-torque.tq:148:9
        {
          // ../../test/torque/test-torque.tq:149:7
          Label label__True_544_impl(this);
          Label* label__True_544 = &label__True_544_impl;
          USE(label__True_544);
          Label label__False_545_impl(this);
          Label* label__False_545 = &label__False_545_impl;
          USE(label__False_545);
          int31_t t1915 = 0;
          TNode<Smi> t1916 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1915)));
          TNode<Object> t1917 = UncheckedCast<Object>(GenericMacroTest5ATSmi(implicit_cast<TNode<Smi>>(t1916)));
          USE(implicit_cast<TNode<Object>>(t1917));
          TNode<BoolT> t1918 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1917), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1918));
          Branch(implicit_cast<TNode<BoolT>>(t1918), label__True_544, label__False_545);
          BIND(label__False_545);
          Print("assert 'GenericMacroTest<Smi>(0) == Undefined' failed at ../../test/torque/test-torque.tq:149:7");
          Unreachable();
          BIND(label__True_544);
          // ../../test/torque/test-torque.tq:150:7
          Label label__True_546_impl(this);
          Label* label__True_546 = &label__True_546_impl;
          USE(label__True_546);
          Label label__False_547_impl(this);
          Label* label__False_547 = &label__False_547_impl;
          USE(label__False_547);
          int31_t t1919 = 1;
          TNode<Smi> t1920 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1919)));
          TNode<Object> t1921 = UncheckedCast<Object>(GenericMacroTest5ATSmi(implicit_cast<TNode<Smi>>(t1920)));
          USE(implicit_cast<TNode<Object>>(t1921));
          TNode<BoolT> t1922 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1921), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1922));
          Branch(implicit_cast<TNode<BoolT>>(t1922), label__True_546, label__False_547);
          BIND(label__False_547);
          Print("assert 'GenericMacroTest<Smi>(1) == Undefined' failed at ../../test/torque/test-torque.tq:150:7");
          Unreachable();
          BIND(label__True_546);
          // ../../test/torque/test-torque.tq:151:7
          Label label__True_548_impl(this);
          Label* label__True_548 = &label__True_548_impl;
          USE(label__True_548);
          Label label__False_549_impl(this);
          Label* label__False_549 = &label__False_549_impl;
          USE(label__False_549);
          TNode<Object> t1923 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<Object>>(t1923));
          TNode<BoolT> t1924 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1923), implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<BoolT>>(t1924));
          Branch(implicit_cast<TNode<BoolT>>(t1924), label__True_548, label__False_549);
          BIND(label__False_549);
          Print("assert 'GenericMacroTest<Object>(Null) == Null' failed at ../../test/torque/test-torque.tq:151:7");
          Unreachable();
          BIND(label__True_548);
          // ../../test/torque/test-torque.tq:152:7
          Label label__True_550_impl(this);
          Label* label__True_550 = &label__True_550_impl;
          USE(label__True_550);
          Label label__False_551_impl(this);
          Label* label__False_551 = &label__False_551_impl;
          USE(label__False_551);
          TNode<Object> t1925 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<Object>>(t1925));
          TNode<BoolT> t1926 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1925), implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<BoolT>>(t1926));
          Branch(implicit_cast<TNode<BoolT>>(t1926), label__True_550, label__False_551);
          BIND(label__False_551);
          Print("assert 'GenericMacroTest<Object>(False) == False' failed at ../../test/torque/test-torque.tq:152:7");
          Unreachable();
          BIND(label__True_550);
          // ../../test/torque/test-torque.tq:153:7
          Label label__True_552_impl(this);
          Label* label__True_552 = &label__True_552_impl;
          USE(label__True_552);
          Label label__False_553_impl(this);
          Label* label__False_553 = &label__False_553_impl;
          USE(label__False_553);
          TNode<Object> t1927 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<Object>>(t1927));
          TNode<BoolT> t1928 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1927), implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<BoolT>>(t1928));
          Branch(implicit_cast<TNode<BoolT>>(t1928), label__True_552, label__False_553);
          BIND(label__False_553);
          Print("assert 'GenericMacroTest<Object>(True) == True' failed at ../../test/torque/test-torque.tq:153:7");
          Unreachable();
          BIND(label__True_552);
          // ../../test/torque/test-torque.tq:154:7
          Label label__True_554_impl(this);
          Label* label__True_554 = &label__True_554_impl;
          USE(label__True_554);
          Label label__False_555_impl(this);
          Label* label__False_555 = &label__False_555_impl;
          USE(label__False_555);
          int31_t t1929 = 0;
          TNode<Smi> t1930 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1929)));
          TNode<Object> t1931 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(implicit_cast<TNode<Smi>>(t1930), label_Fail_543));
          USE(implicit_cast<TNode<Object>>(t1931));
          TNode<BoolT> t1932 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1931), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1932));
          Branch(implicit_cast<TNode<BoolT>>(t1932), label__True_554, label__False_555);
          BIND(label__False_555);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:154:7");
          Unreachable();
          BIND(label__True_554);
          // ../../test/torque/test-torque.tq:155:7
          Label label__True_556_impl(this);
          Label* label__True_556 = &label__True_556_impl;
          USE(label__True_556);
          Label label__False_557_impl(this);
          Label* label__False_557 = &label__False_557_impl;
          USE(label__False_557);
          int31_t t1933 = 0;
          TNode<Smi> t1934 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1933)));
          TNode<Object> t1935 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(implicit_cast<TNode<Smi>>(t1934), label_Fail_543));
          USE(implicit_cast<TNode<Object>>(t1935));
          TNode<BoolT> t1936 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1935), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1936));
          Branch(implicit_cast<TNode<BoolT>>(t1936), label__True_556, label__False_557);
          BIND(label__False_557);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:155:7");
          Unreachable();
          BIND(label__True_556);
          // ../../test/torque/test-torque.tq:156:7
          Label label__True_558_impl(this);
          Label* label__True_558 = &label__True_558_impl;
          USE(label__True_558);
          Label label__False_559_impl(this);
          Label* label__False_559 = &label__False_559_impl;
          USE(label__False_559);
          TNode<Object> t1937 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(Null()), label_Fail_543));
          USE(implicit_cast<TNode<Object>>(t1937));
          TNode<BoolT> t1938 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1937), implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<BoolT>>(t1938));
          Branch(implicit_cast<TNode<BoolT>>(t1938), label__True_558, label__False_559);
          BIND(label__False_559);
          Print("assert 'GenericMacroTestWithLabels<Object>(Null) otherwise Fail == Null' failed at ../../test/torque/test-torque.tq:156:7");
          Unreachable();
          BIND(label__True_558);
          // ../../test/torque/test-torque.tq:157:7
          Label label__True_560_impl(this);
          Label* label__True_560 = &label__True_560_impl;
          USE(label__True_560);
          Label label__False_561_impl(this);
          Label* label__False_561 = &label__False_561_impl;
          USE(label__False_561);
          TNode<Object> t1939 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(False()), label_Fail_543));
          USE(implicit_cast<TNode<Object>>(t1939));
          TNode<BoolT> t1940 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1939), implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<BoolT>>(t1940));
          Branch(implicit_cast<TNode<BoolT>>(t1940), label__True_560, label__False_561);
          BIND(label__False_561);
          Print("assert 'GenericMacroTestWithLabels<Object>(False) otherwise Fail == False' failed at ../../test/torque/test-torque.tq:157:7");
          Unreachable();
          BIND(label__True_560);
        }
        Goto(label_try_done_866_1331);
      }
      if (label_Fail_543->is_used())
      {
        BIND(label_Fail_543);
        // ../../test/torque/test-torque.tq:159:16
        {
          // ../../test/torque/test-torque.tq:160:7
          Unreachable();
        }
      }
      BIND(label_try_done_866_1331);
    }
  }
}

TF_BUILTIN(TestHelperPlus1, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:164:58
  {
    // ../../test/torque/test-torque.tq:165:5
    int31_t t1941 = 1;
    TNode<Smi> t1942 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1941)));
    TNode<Smi> t1943 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1942)));
    USE(implicit_cast<TNode<Smi>>(t1943));
    Return(implicit_cast<TNode<Smi>>(t1943));
  }
}

TF_BUILTIN(TestHelperPlus2, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:167:58
  {
    // ../../test/torque/test-torque.tq:168:5
    int31_t t1944 = 2;
    TNode<Smi> t1945 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1944)));
    TNode<Smi> t1946 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1945)));
    USE(implicit_cast<TNode<Smi>>(t1946));
    Return(implicit_cast<TNode<Smi>>(t1946));
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestFunctionPointers(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_358_impl);
  auto _return_358 = &_return_358_impl;
  USE(_return_358);
  Label label_macro_end_1333_impl(this, {_return_358});
  Label* label_macro_end_1333 = &label_macro_end_1333_impl;
  USE(label_macro_end_1333);
  // ../../test/torque/test-torque.tq:171:57
  {
    // ../../test/torque/test-torque.tq:172:5
    TVARIABLE(Code, fptr_359_impl);
    auto fptr_359 = &fptr_359_impl;
    USE(fptr_359);
    *fptr_359 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).code()));
    // ../../test/torque/test-torque.tq:173:5
    Label label__True_562_impl(this);
    Label* label__True_562 = &label__True_562_impl;
    USE(label__True_562);
    Label label__False_563_impl(this);
    Label* label__False_563 = &label__False_563_impl;
    USE(label__False_563);
    int31_t t1947 = 42;
    TNode<Smi> t1948 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1947)));
    TNode<Smi> t1949 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), implicit_cast<TNode<Code>>((*fptr_359).value()), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Smi>>(t1948)));
    USE(implicit_cast<TNode<Smi>>(t1949));
    int31_t t1950 = 43;
    TNode<Smi> t1951 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1950)));
    TNode<BoolT> t1952 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1949), implicit_cast<TNode<Smi>>(t1951)));
    USE(implicit_cast<TNode<BoolT>>(t1952));
    Branch(implicit_cast<TNode<BoolT>>(t1952), label__True_562, label__False_563);
    BIND(label__False_563);
    Print("assert 'fptr(context, 42) == 43' failed at ../../test/torque/test-torque.tq:173:5");
    Unreachable();
    BIND(label__True_562);
    // ../../test/torque/test-torque.tq:174:5
    *fptr_359 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code()));
    // ../../test/torque/test-torque.tq:175:5
    Label label__True_564_impl(this);
    Label* label__True_564 = &label__True_564_impl;
    USE(label__True_564);
    Label label__False_565_impl(this);
    Label* label__False_565 = &label__False_565_impl;
    USE(label__False_565);
    int31_t t1953 = 42;
    TNode<Smi> t1954 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1953)));
    TNode<Smi> t1955 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), implicit_cast<TNode<Code>>((*fptr_359).value()), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Smi>>(t1954)));
    USE(implicit_cast<TNode<Smi>>(t1955));
    int31_t t1956 = 44;
    TNode<Smi> t1957 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1956)));
    TNode<BoolT> t1958 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1955), implicit_cast<TNode<Smi>>(t1957)));
    USE(implicit_cast<TNode<BoolT>>(t1958));
    Branch(implicit_cast<TNode<BoolT>>(t1958), label__True_564, label__False_565);
    BIND(label__False_565);
    Print("assert 'fptr(context, 42) == 44' failed at ../../test/torque/test-torque.tq:175:5");
    Unreachable();
    BIND(label__True_564);
    // ../../test/torque/test-torque.tq:176:5
    *_return_358 = implicit_cast<TNode<Oddball>>(True());
    Goto(label_macro_end_1333);
  }
  BIND(label_macro_end_1333);
  return implicit_cast<TNode<Oddball>>((*_return_358).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_360_impl);
  auto _return_360 = &_return_360_impl;
  USE(_return_360);
  Label label_macro_end_1334_impl(this, {_return_360});
  Label* label_macro_end_1334 = &label_macro_end_1334_impl;
  USE(label_macro_end_1334);
  // ../../test/torque/test-torque.tq:179:62
  {
    // ../../test/torque/test-torque.tq:180:5
    auto t1959 = [=]() {
      int31_t t1961 = 0;
      return implicit_cast<int31_t>(t1961);
    };
    auto t1960 = [=]() {
      int31_t t1962 = 1;
      return implicit_cast<int31_t>(t1962);
    };
    TVARIABLE(Int32T, t1963_868_impl);
    auto t1963_868 = &t1963_868_impl;
    USE(t1963_868);
    {
      Label label__True_566_impl(this);
      Label* label__True_566 = &label__True_566_impl;
      USE(label__True_566);
      Label label__False_567_impl(this);
      Label* label__False_567 = &label__False_567_impl;
      USE(label__False_567);
      Label label__done_869_1335_impl(this, {t1963_868});
      Label* label__done_869_1335 = &label__done_869_1335_impl;
      USE(label__done_869_1335);
      int31_t t1964 = 42;
      int31_t t1965 = 0;
      bool t1966 = ConstexprInt31Equal(implicit_cast<int31_t>(t1964), implicit_cast<int31_t>(t1965));
      USE(implicit_cast<bool>(t1966));
      TNode<BoolT> t1967 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1966)));
      USE(implicit_cast<TNode<BoolT>>(t1967));
      Branch(implicit_cast<TNode<BoolT>>(t1967), label__True_566, label__False_567);
      BIND(label__True_566);
            TNode<Int32T> t1968 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1959())));
      *t1963_868 = implicit_cast<TNode<Int32T>>(t1968);
      Goto(label__done_869_1335);
      BIND(label__False_567);
            TNode<Int32T> t1969 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1960())));
      *t1963_868 = implicit_cast<TNode<Int32T>>(t1969);
      Goto(label__done_869_1335);
      BIND(label__done_869_1335);
    }
    TVARIABLE(Int32T, var1_361_impl);
    auto var1_361 = &var1_361_impl;
    USE(var1_361);
    *var1_361 = implicit_cast<TNode<Int32T>>((*t1963_868).value());
    // ../../test/torque/test-torque.tq:181:5
    auto t1970 = [=]() {
      int31_t t1972 = 1;
      return implicit_cast<int31_t>(t1972);
    };
    auto t1971 = [=]() {
      int31_t t1973 = 0;
      return implicit_cast<int31_t>(t1973);
    };
    TVARIABLE(Int32T, t1974_870_impl);
    auto t1974_870 = &t1974_870_impl;
    USE(t1974_870);
    {
      Label label__True_568_impl(this);
      Label* label__True_568 = &label__True_568_impl;
      USE(label__True_568);
      Label label__False_569_impl(this);
      Label* label__False_569 = &label__False_569_impl;
      USE(label__False_569);
      Label label__done_871_1336_impl(this, {t1974_870});
      Label* label__done_871_1336 = &label__done_871_1336_impl;
      USE(label__done_871_1336);
      int31_t t1975 = 42;
      int31_t t1976 = 0;
      bool t1977 = ConstexprInt31Equal(implicit_cast<int31_t>(t1975), implicit_cast<int31_t>(t1976));
      USE(implicit_cast<bool>(t1977));
      TNode<BoolT> t1978 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1977)));
      USE(implicit_cast<TNode<BoolT>>(t1978));
      Branch(implicit_cast<TNode<BoolT>>(t1978), label__True_568, label__False_569);
      BIND(label__True_568);
            TNode<Int32T> t1979 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1970())));
      *t1974_870 = implicit_cast<TNode<Int32T>>(t1979);
      Goto(label__done_871_1336);
      BIND(label__False_569);
            TNode<Int32T> t1980 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1971())));
      *t1974_870 = implicit_cast<TNode<Int32T>>(t1980);
      Goto(label__done_871_1336);
      BIND(label__done_871_1336);
    }
    TVARIABLE(Int32T, var2_362_impl);
    auto var2_362 = &var2_362_impl;
    USE(var2_362);
    *var2_362 = implicit_cast<TNode<Int32T>>((*t1974_870).value());
    // ../../test/torque/test-torque.tq:182:5
    *_return_360 = implicit_cast<TNode<Oddball>>(True());
    Goto(label_macro_end_1334);
  }
  BIND(label_macro_end_1334);
  return implicit_cast<TNode<Oddball>>((*_return_360).value());
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestTernaryOperator(TNode<Smi> p_x) {
  TVARIABLE(Smi, _return_363_impl);
  auto _return_363 = &_return_363_impl;
  USE(_return_363);
  Label label_macro_end_1337_impl(this, {_return_363});
  Label* label_macro_end_1337 = &label_macro_end_1337_impl;
  USE(label_macro_end_1337);
  // ../../test/torque/test-torque.tq:185:42
  {
    // ../../test/torque/test-torque.tq:186:5
    auto t1981 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t1982 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t1983_872_impl);
    auto t1983_872 = &t1983_872_impl;
    USE(t1983_872);
    {
      Label label__True_570_impl(this);
      Label* label__True_570 = &label__True_570_impl;
      USE(label__True_570);
      Label label__False_571_impl(this);
      Label* label__False_571 = &label__False_571_impl;
      USE(label__False_571);
      Label label__done_873_1338_impl(this, {t1983_872});
      Label* label__done_873_1338 = &label__done_873_1338_impl;
      USE(label__done_873_1338);
      int31_t t1984 = 0;
      TNode<Smi> t1985 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1984)));
      TNode<BoolT> t1986 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1985)));
      USE(implicit_cast<TNode<BoolT>>(t1986));
      Branch(implicit_cast<TNode<BoolT>>(t1986), label__True_570, label__False_571);
      BIND(label__True_570);
            TNode<BoolT> t1987 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1981())));
      *t1983_872 = implicit_cast<TNode<BoolT>>(t1987);
      Goto(label__done_873_1338);
      BIND(label__False_571);
            TNode<BoolT> t1988 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1982())));
      *t1983_872 = implicit_cast<TNode<BoolT>>(t1988);
      Goto(label__done_873_1338);
      BIND(label__done_873_1338);
    }
    TVARIABLE(BoolT, b_364_impl);
    auto b_364 = &b_364_impl;
    USE(b_364);
    *b_364 = implicit_cast<TNode<BoolT>>((*t1983_872).value());
    // ../../test/torque/test-torque.tq:187:5
    auto t1989 = [=]() {
      int31_t t1991 = 10;
      TNode<Smi> t1992 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1991)));
      TNode<Smi> t1993 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1992)));
      USE(implicit_cast<TNode<Smi>>(t1993));
      return implicit_cast<TNode<Smi>>(t1993);
    };
    auto t1990 = [=]() {
      int31_t t1994 = 100;
      TNode<Smi> t1995 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1994)));
      TNode<Smi> t1996 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1995)));
      USE(implicit_cast<TNode<Smi>>(t1996));
      return implicit_cast<TNode<Smi>>(t1996);
    };
    TVARIABLE(Smi, t1997_874_impl);
    auto t1997_874 = &t1997_874_impl;
    USE(t1997_874);
    {
      Label label__True_572_impl(this);
      Label* label__True_572 = &label__True_572_impl;
      USE(label__True_572);
      Label label__False_573_impl(this);
      Label* label__False_573 = &label__False_573_impl;
      USE(label__False_573);
      Label label__done_875_1339_impl(this, {t1997_874});
      Label* label__done_875_1339 = &label__done_875_1339_impl;
      USE(label__done_875_1339);
      Branch(implicit_cast<TNode<BoolT>>((*b_364).value()), label__True_572, label__False_573);
      BIND(label__True_572);
            *t1997_874 = implicit_cast<TNode<Smi>>(t1989());
      Goto(label__done_875_1339);
      BIND(label__False_573);
            *t1997_874 = implicit_cast<TNode<Smi>>(t1990());
      Goto(label__done_875_1339);
      BIND(label__done_875_1339);
    }
    *_return_363 = implicit_cast<TNode<Smi>>((*t1997_874).value());
    Goto(label_macro_end_1337);
  }
  BIND(label_macro_end_1337);
  return implicit_cast<TNode<Smi>>((*_return_363).value());
}

void TestBuiltinsFromDSLAssembler::TestFunctionPointerToGeneric(TNode<Context> p_c) {
  Label label_macro_end_1340_impl(this, {});
  Label* label_macro_end_1340 = &label_macro_end_1340_impl;
  USE(label_macro_end_1340);
  // ../../test/torque/test-torque.tq:190:50
  {
    // ../../test/torque/test-torque.tq:191:5
    TVARIABLE(Code, fptr1_365_impl);
    auto fptr1_365 = &fptr1_365_impl;
    USE(fptr1_365);
    *fptr1_365 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).code()));
    // ../../test/torque/test-torque.tq:192:5
    TVARIABLE(Code, fptr2_366_impl);
    auto fptr2_366 = &fptr2_366_impl;
    USE(fptr2_366);
    *fptr2_366 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).code()));
    // ../../test/torque/test-torque.tq:194:5
    Label label__True_574_impl(this);
    Label* label__True_574 = &label__True_574_impl;
    USE(label__True_574);
    Label label__False_575_impl(this);
    Label* label__False_575 = &label__False_575_impl;
    USE(label__False_575);
    int31_t t1998 = 0;
    TNode<Smi> t1999 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1998)));
    TNode<Object> t2000 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr1_365).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1999)));
    USE(implicit_cast<TNode<Object>>(t2000));
    TNode<BoolT> t2001 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2000), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t2001));
    Branch(implicit_cast<TNode<BoolT>>(t2001), label__True_574, label__False_575);
    BIND(label__False_575);
    Print("assert 'fptr1(c, 0) == Null' failed at ../../test/torque/test-torque.tq:194:5");
    Unreachable();
    BIND(label__True_574);
    // ../../test/torque/test-torque.tq:195:5
    Label label__True_576_impl(this);
    Label* label__True_576 = &label__True_576_impl;
    USE(label__True_576);
    Label label__False_577_impl(this);
    Label* label__False_577 = &label__False_577_impl;
    USE(label__False_577);
    int31_t t2002 = 1;
    TNode<Smi> t2003 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2002)));
    TNode<Object> t2004 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr1_365).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t2003)));
    USE(implicit_cast<TNode<Object>>(t2004));
    TNode<BoolT> t2005 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2004), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t2005));
    Branch(implicit_cast<TNode<BoolT>>(t2005), label__True_576, label__False_577);
    BIND(label__False_577);
    Print("assert 'fptr1(c, 1) == Null' failed at ../../test/torque/test-torque.tq:195:5");
    Unreachable();
    BIND(label__True_576);
    // ../../test/torque/test-torque.tq:196:5
    Label label__True_578_impl(this);
    Label* label__True_578 = &label__True_578_impl;
    USE(label__True_578);
    Label label__False_579_impl(this);
    Label* label__False_579 = &label__False_579_impl;
    USE(label__False_579);
    TNode<Object> t2006 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr2_366).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t2006));
    TNode<BoolT> t2007 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2006), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t2007));
    Branch(implicit_cast<TNode<BoolT>>(t2007), label__True_578, label__False_579);
    BIND(label__False_579);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:196:5");
    Unreachable();
    BIND(label__True_578);
    // ../../test/torque/test-torque.tq:197:5
    Label label__True_580_impl(this);
    Label* label__True_580 = &label__True_580_impl;
    USE(label__True_580);
    Label label__False_581_impl(this);
    Label* label__False_581 = &label__False_581_impl;
    USE(label__False_581);
    TNode<Object> t2008 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr2_366).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t2008));
    TNode<BoolT> t2009 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2008), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t2009));
    Branch(implicit_cast<TNode<BoolT>>(t2009), label__True_580, label__False_581);
    BIND(label__False_581);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:197:5");
    Unreachable();
    BIND(label__True_580);
  }
}

compiler::TNode<Code> TestBuiltinsFromDSLAssembler::TestTypeAlias(TNode<Code> p_x) {
  TVARIABLE(Code, _return_367_impl);
  auto _return_367 = &_return_367_impl;
  USE(_return_367);
  Label label_macro_end_1341_impl(this, {_return_367});
  Label* label_macro_end_1341 = &label_macro_end_1341_impl;
  USE(label_macro_end_1341);
  // ../../test/torque/test-torque.tq:201:42
  {
    // ../../test/torque/test-torque.tq:202:5
    *_return_367 = implicit_cast<TNode<Code>>(p_x);
    Goto(label_macro_end_1341);
  }
  BIND(label_macro_end_1341);
  return implicit_cast<TNode<Code>>((*_return_367).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestUnsafeCast(TNode<Context> p_c, TNode<Number> p_n) {
  TVARIABLE(Oddball, _return_368_impl);
  auto _return_368 = &_return_368_impl;
  USE(_return_368);
  Label label_macro_end_1342_impl(this, {_return_368});
  Label* label_macro_end_1342 = &label_macro_end_1342_impl;
  USE(label_macro_end_1342);
  // ../../test/torque/test-torque.tq:205:56
  {
    // ../../test/torque/test-torque.tq:206:5
    {
      Label label__True_582_impl(this);
      Label* label__True_582 = &label__True_582_impl;
      USE(label__True_582);
      Label label__False_583_impl(this, {});
      Label* label__False_583 = &label__False_583_impl;
      USE(label__False_583);
      TNode<BoolT> t2010 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_n)));
      USE(implicit_cast<TNode<BoolT>>(t2010));
      Branch(implicit_cast<TNode<BoolT>>(t2010), label__True_582, label__False_583);
      if (label__True_582->is_used())
      {
        BIND(label__True_582);
        // ../../test/torque/test-torque.tq:206:25
        {
          // ../../test/torque/test-torque.tq:207:7
          TNode<Smi> t2011 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(p_n)));
          USE(implicit_cast<TNode<Smi>>(t2011));
          TVARIABLE(Smi, m_369_impl);
          auto m_369 = &m_369_impl;
          USE(m_369);
          *m_369 = implicit_cast<TNode<Smi>>(t2011);
          // ../../test/torque/test-torque.tq:209:7
          Label label__True_584_impl(this);
          Label* label__True_584 = &label__True_584_impl;
          USE(label__True_584);
          Label label__False_585_impl(this);
          Label* label__False_585 = &label__False_585_impl;
          USE(label__False_585);
          TNode<Smi> t2012 = UncheckedCast<Smi>(CallBuiltin(Builtins::kTestHelperPlus1, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>((*m_369).value())));
          USE(implicit_cast<TNode<Smi>>(t2012));
          int31_t t2013 = 11;
          TNode<Smi> t2014 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2013)));
          TNode<BoolT> t2015 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2012), implicit_cast<TNode<Smi>>(t2014)));
          USE(implicit_cast<TNode<BoolT>>(t2015));
          Branch(implicit_cast<TNode<BoolT>>(t2015), label__True_584, label__False_585);
          BIND(label__False_585);
          Print("assert 'TestHelperPlus1(c, m) == 11' failed at ../../test/torque/test-torque.tq:209:7");
          Unreachable();
          BIND(label__True_584);
          // ../../test/torque/test-torque.tq:210:7
          *_return_368 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1342);
        }
      }
      BIND(label__False_583);
    }
    // ../../test/torque/test-torque.tq:212:5
    *_return_368 = implicit_cast<TNode<Oddball>>(False());
    Goto(label_macro_end_1342);
  }
  BIND(label_macro_end_1342);
  return implicit_cast<TNode<Oddball>>((*_return_368).value());
}

void TestBuiltinsFromDSLAssembler::TestHexLiteral() {
  Label label_macro_end_1343_impl(this, {});
  Label* label_macro_end_1343 = &label_macro_end_1343_impl;
  USE(label_macro_end_1343);
  // ../../test/torque/test-torque.tq:215:26
  {
    // ../../test/torque/test-torque.tq:216:5
    Label label__True_586_impl(this);
    Label* label__True_586 = &label__True_586_impl;
    USE(label__True_586);
    Label label__False_587_impl(this);
    Label* label__False_587 = &label__False_587_impl;
    USE(label__False_587);
    int31_t t2016 = 0xffff;
    TNode<IntPtrT> t2017 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<int31_t>(t2016)));
    USE(implicit_cast<TNode<IntPtrT>>(t2017));
    int31_t t2018 = 1;
    TNode<IntPtrT> t2019 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t2018)));
    TNode<IntPtrT> t2020 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(t2017), implicit_cast<TNode<IntPtrT>>(t2019)));
    USE(implicit_cast<TNode<IntPtrT>>(t2020));
    int31_t t2021 = 0x10000;
    TNode<IntPtrT> t2022 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t2021)));
    TNode<BoolT> t2023 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t2020), implicit_cast<TNode<IntPtrT>>(t2022)));
    USE(implicit_cast<TNode<BoolT>>(t2023));
    Branch(implicit_cast<TNode<BoolT>>(t2023), label__True_586, label__False_587);
    BIND(label__False_587);
    Print("assert 'convert<intptr>(0xffff) + 1 == 0x10000' failed at ../../test/torque/test-torque.tq:216:5");
    Unreachable();
    BIND(label__True_586);
    // ../../test/torque/test-torque.tq:217:5
    Label label__True_588_impl(this);
    Label* label__True_588 = &label__True_588_impl;
    USE(label__True_588);
    Label label__False_589_impl(this);
    Label* label__False_589 = &label__False_589_impl;
    USE(label__False_589);
    int31_t t2024 = -0xffff;
    TNode<IntPtrT> t2025 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<int31_t>(t2024)));
    USE(implicit_cast<TNode<IntPtrT>>(t2025));
    int31_t t2026 = -65535;
    TNode<IntPtrT> t2027 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t2026)));
    TNode<BoolT> t2028 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t2025), implicit_cast<TNode<IntPtrT>>(t2027)));
    USE(implicit_cast<TNode<BoolT>>(t2028));
    Branch(implicit_cast<TNode<BoolT>>(t2028), label__True_588, label__False_589);
    BIND(label__False_589);
    Print("assert 'convert<intptr>(-0xffff) == -65535' failed at ../../test/torque/test-torque.tq:217:5");
    Unreachable();
    BIND(label__True_588);
  }
}

void TestBuiltinsFromDSLAssembler::TestLargeIntegerLiterals(TNode<Context> p_c) {
  Label label_macro_end_1344_impl(this, {});
  Label* label_macro_end_1344 = &label_macro_end_1344_impl;
  USE(label_macro_end_1344);
  // ../../test/torque/test-torque.tq:220:46
  {
    // ../../test/torque/test-torque.tq:221:5
    int32_t t2029 = 0x40000000;
    TVARIABLE(Int32T, x_370_impl);
    auto x_370 = &x_370_impl;
    USE(x_370);
    TNode<Int32T> t2030 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int32_t>(t2029)));
    *x_370 = implicit_cast<TNode<Int32T>>(t2030);
    // ../../test/torque/test-torque.tq:222:5
    int32_t t2031 = 0x7fffffff;
    TVARIABLE(Int32T, y_371_impl);
    auto y_371 = &y_371_impl;
    USE(y_371);
    TNode<Int32T> t2032 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int32_t>(t2031)));
    *y_371 = implicit_cast<TNode<Int32T>>(t2032);
  }
}

void TestBuiltinsFromDSLAssembler::TestMultilineAssert() {
  Label label_macro_end_1345_impl(this, {});
  Label* label_macro_end_1345 = &label_macro_end_1345_impl;
  USE(label_macro_end_1345);
  // ../../test/torque/test-torque.tq:225:31
  {
    // ../../test/torque/test-torque.tq:226:5
    int31_t t2033 = 5;
    TVARIABLE(Smi, someVeryLongVariableNameThatWillCauseLineBreaks_372_impl);
    auto someVeryLongVariableNameThatWillCauseLineBreaks_372 = &someVeryLongVariableNameThatWillCauseLineBreaks_372_impl;
    USE(someVeryLongVariableNameThatWillCauseLineBreaks_372);
    TNode<Smi> t2034 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2033)));
    *someVeryLongVariableNameThatWillCauseLineBreaks_372 = implicit_cast<TNode<Smi>>(t2034);
    // ../../test/torque/test-torque.tq:227:5
    Label label__True_590_impl(this);
    Label* label__True_590 = &label__True_590_impl;
    USE(label__True_590);
    Label label__False_591_impl(this);
    Label* label__False_591 = &label__False_591_impl;
    USE(label__False_591);
    Label label__True_592_impl(this);
    Label* label__True_592 = &label__True_592_impl;
    USE(label__True_592);
    int31_t t2035 = 0;
    TNode<Smi> t2036 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2035)));
    TNode<BoolT> t2037 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*someVeryLongVariableNameThatWillCauseLineBreaks_372).value()), implicit_cast<TNode<Smi>>(t2036)));
    USE(implicit_cast<TNode<BoolT>>(t2037));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t2037), label__False_591);
    int31_t t2038 = 10;
    TNode<Smi> t2039 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2038)));
    TNode<BoolT> t2040 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*someVeryLongVariableNameThatWillCauseLineBreaks_372).value()), implicit_cast<TNode<Smi>>(t2039)));
    USE(implicit_cast<TNode<BoolT>>(t2040));
    Branch(implicit_cast<TNode<BoolT>>(t2040), label__True_590, label__False_591);
    BIND(label__False_591);
    Print("assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed at ../../test/torque/test-torque.tq:227:5");
    Unreachable();
    BIND(label__True_590);
  }
}

void TestBuiltinsFromDSLAssembler::TestNewlineInString() {
  Label label_macro_end_1346_impl(this, {});
  Label* label_macro_end_1346 = &label_macro_end_1346_impl;
  USE(label_macro_end_1346);
  // ../../test/torque/test-torque.tq:232:31
  {
    // ../../test/torque/test-torque.tq:233:5
    const char* t2041 = "Hello, World!\n";
    Print(implicit_cast<const char*>(t2041));
  }
}

int31_t TestBuiltinsFromDSLAssembler::kConstexprConst() {
  int31_t t2042 = 5;
  return implicit_cast<int31_t>(t2042);
}

compiler::TNode<IntPtrT> TestBuiltinsFromDSLAssembler::kIntptrConst() {
  int31_t t2043 = 4;
  TNode<IntPtrT> t2044 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t2043)));
  return implicit_cast<TNode<IntPtrT>>(t2044);
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::kSmiConst() {
  int31_t t2045 = 3;
  TNode<Smi> t2046 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2045)));
  return implicit_cast<TNode<Smi>>(t2046);
}

void TestBuiltinsFromDSLAssembler::TestModuleConstBindings() {
  Label label_macro_end_1347_impl(this, {});
  Label* label_macro_end_1347 = &label_macro_end_1347_impl;
  USE(label_macro_end_1347);
  // ../../test/torque/test-torque.tq:240:35
  {
    // ../../test/torque/test-torque.tq:241:5
    Label label__True_593_impl(this);
    Label* label__True_593 = &label__True_593_impl;
    USE(label__True_593);
    Label label__False_594_impl(this);
    Label* label__False_594 = &label__False_594_impl;
    USE(label__False_594);
    int31_t t2047 = 5;
    TNode<Int32T> t2048 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(t2047)));
    USE(implicit_cast<TNode<Int32T>>(t2048));
    TNode<Int32T> t2049 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(kConstexprConst())));
    TNode<BoolT> t2050 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2049), implicit_cast<TNode<Int32T>>(t2048)));
    USE(implicit_cast<TNode<BoolT>>(t2050));
    Branch(implicit_cast<TNode<BoolT>>(t2050), label__True_593, label__False_594);
    BIND(label__False_594);
    Print("assert 'kConstexprConst == Int32Constant(5)' failed at ../../test/torque/test-torque.tq:241:5");
    Unreachable();
    BIND(label__True_593);
    // ../../test/torque/test-torque.tq:242:5
    Label label__True_595_impl(this);
    Label* label__True_595 = &label__True_595_impl;
    USE(label__True_595);
    Label label__False_596_impl(this);
    Label* label__False_596 = &label__False_596_impl;
    USE(label__False_596);
    int31_t t2051 = 4;
    TNode<IntPtrT> t2052 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t2051)));
    TNode<BoolT> t2053 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(kIntptrConst()), implicit_cast<TNode<IntPtrT>>(t2052)));
    USE(implicit_cast<TNode<BoolT>>(t2053));
    Branch(implicit_cast<TNode<BoolT>>(t2053), label__True_595, label__False_596);
    BIND(label__False_596);
    Print("assert 'kIntptrConst == 4' failed at ../../test/torque/test-torque.tq:242:5");
    Unreachable();
    BIND(label__True_595);
    // ../../test/torque/test-torque.tq:243:5
    Label label__True_597_impl(this);
    Label* label__True_597 = &label__True_597_impl;
    USE(label__True_597);
    Label label__False_598_impl(this);
    Label* label__False_598 = &label__False_598_impl;
    USE(label__False_598);
    int31_t t2054 = 3;
    TNode<Smi> t2055 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2054)));
    TNode<BoolT> t2056 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(kSmiConst()), implicit_cast<TNode<Smi>>(t2055)));
    USE(implicit_cast<TNode<BoolT>>(t2056));
    Branch(implicit_cast<TNode<BoolT>>(t2056), label__True_597, label__False_598);
    BIND(label__False_598);
    Print("assert 'kSmiConst == 3' failed at ../../test/torque/test-torque.tq:243:5");
    Unreachable();
    BIND(label__True_597);
  }
}

void TestBuiltinsFromDSLAssembler::TestLocalConstBindings() {
  Label label_macro_end_1348_impl(this, {});
  Label* label_macro_end_1348 = &label_macro_end_1348_impl;
  USE(label_macro_end_1348);
  // ../../test/torque/test-torque.tq:246:34
  {
    // ../../test/torque/test-torque.tq:247:5
    int31_t t2057 = 3;
    int31_t x_876_impl;
    auto x_876 = &x_876_impl;
    USE(x_876);
    *x_876 = implicit_cast<int31_t>(t2057);
    // ../../test/torque/test-torque.tq:248:5
    TNode<Smi> x_smi_877_impl;
    auto x_smi_877 = &x_smi_877_impl;
    USE(x_smi_877);
    TNode<Smi> t2058 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>((*x_876))));
    *x_smi_877 = implicit_cast<TNode<Smi>>(t2058);
    // ../../test/torque/test-torque.tq:249:5
    {
      // ../../test/torque/test-torque.tq:250:7
      int31_t t2059 = 1;
      TNode<Smi> t2060 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2059)));
      USE(implicit_cast<TNode<Smi>>(t2060));
      TNode<Smi> t2061 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>((*x_876))));
      TNode<Smi> t2062 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2061), implicit_cast<TNode<Smi>>(t2060)));
      USE(implicit_cast<TNode<Smi>>(t2062));
      TNode<Smi> x_878_impl;
      auto x_878 = &x_878_impl;
      USE(x_878);
      *x_878 = implicit_cast<TNode<Smi>>(t2062);
      // ../../test/torque/test-torque.tq:251:7
      Label label__True_599_impl(this);
      Label* label__True_599 = &label__True_599_impl;
      USE(label__True_599);
      Label label__False_600_impl(this);
      Label* label__False_600 = &label__False_600_impl;
      USE(label__False_600);
      int31_t t2063 = 1;
      TNode<Smi> t2064 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2063)));
      TNode<Smi> t2065 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*x_smi_877)), implicit_cast<TNode<Smi>>(t2064)));
      USE(implicit_cast<TNode<Smi>>(t2065));
      TNode<BoolT> t2066 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_878)), implicit_cast<TNode<Smi>>(t2065)));
      USE(implicit_cast<TNode<BoolT>>(t2066));
      Branch(implicit_cast<TNode<BoolT>>(t2066), label__True_599, label__False_600);
      BIND(label__False_600);
      Print("assert 'x == x_smi + 1' failed at ../../test/torque/test-torque.tq:251:7");
      Unreachable();
      BIND(label__True_599);
      // ../../test/torque/test-torque.tq:252:7
      TNode<Smi> x_smi_879_impl;
      auto x_smi_879 = &x_smi_879_impl;
      USE(x_smi_879);
      *x_smi_879 = implicit_cast<TNode<Smi>>((*x_878));
      // ../../test/torque/test-torque.tq:253:7
      Label label__True_601_impl(this);
      Label* label__True_601 = &label__True_601_impl;
      USE(label__True_601);
      Label label__False_602_impl(this);
      Label* label__False_602 = &label__False_602_impl;
      USE(label__False_602);
      TNode<BoolT> t2067 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_878)), implicit_cast<TNode<Smi>>((*x_smi_879))));
      USE(implicit_cast<TNode<BoolT>>(t2067));
      Branch(implicit_cast<TNode<BoolT>>(t2067), label__True_601, label__False_602);
      BIND(label__False_602);
      Print("assert 'x == x_smi' failed at ../../test/torque/test-torque.tq:253:7");
      Unreachable();
      BIND(label__True_601);
      // ../../test/torque/test-torque.tq:254:7
      Label label__True_603_impl(this);
      Label* label__True_603 = &label__True_603_impl;
      USE(label__True_603);
      Label label__False_604_impl(this);
      Label* label__False_604 = &label__False_604_impl;
      USE(label__False_604);
      int31_t t2068 = 4;
      TNode<Smi> t2069 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2068)));
      TNode<BoolT> t2070 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_878)), implicit_cast<TNode<Smi>>(t2069)));
      USE(implicit_cast<TNode<BoolT>>(t2070));
      Branch(implicit_cast<TNode<BoolT>>(t2070), label__True_603, label__False_604);
      BIND(label__False_604);
      Print("assert 'x == 4' failed at ../../test/torque/test-torque.tq:254:7");
      Unreachable();
      BIND(label__True_603);
    }
    // ../../test/torque/test-torque.tq:256:5
    Label label__True_605_impl(this);
    Label* label__True_605 = &label__True_605_impl;
    USE(label__True_605);
    Label label__False_606_impl(this);
    Label* label__False_606 = &label__False_606_impl;
    USE(label__False_606);
    int31_t t2071 = 3;
    TNode<Smi> t2072 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2071)));
    TNode<BoolT> t2073 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_smi_877)), implicit_cast<TNode<Smi>>(t2072)));
    USE(implicit_cast<TNode<BoolT>>(t2073));
    Branch(implicit_cast<TNode<BoolT>>(t2073), label__True_605, label__False_606);
    BIND(label__False_606);
    Print("assert 'x_smi == 3' failed at ../../test/torque/test-torque.tq:256:5");
    Unreachable();
    BIND(label__True_605);
    // ../../test/torque/test-torque.tq:257:5
    Label label__True_607_impl(this);
    Label* label__True_607 = &label__True_607_impl;
    USE(label__True_607);
    Label label__False_608_impl(this);
    Label* label__False_608 = &label__False_608_impl;
    USE(label__False_608);
    TNode<Smi> t2074 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>((*x_876))));
    TNode<BoolT> t2075 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2074), implicit_cast<TNode<Smi>>((*x_smi_877))));
    USE(implicit_cast<TNode<BoolT>>(t2075));
    Branch(implicit_cast<TNode<BoolT>>(t2075), label__True_607, label__False_608);
    BIND(label__False_608);
    Print("assert 'x == x_smi' failed at ../../test/torque/test-torque.tq:257:5");
    Unreachable();
    BIND(label__True_607);
  }
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestStruct1(TestStructA p_i) {
  TVARIABLE(Smi, _return_373_impl);
  auto _return_373 = &_return_373_impl;
  USE(_return_373);
  Label label_macro_end_1349_impl(this, {_return_373});
  Label* label_macro_end_1349 = &label_macro_end_1349_impl;
  USE(label_macro_end_1349);
  // ../../test/torque/test-torque.tq:271:42
  {
    // ../../test/torque/test-torque.tq:272:5
    *_return_373 = implicit_cast<TNode<Smi>>(p_i.i);
    Goto(label_macro_end_1349);
  }
  BIND(label_macro_end_1349);
  return implicit_cast<TNode<Smi>>((*_return_373).value());
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct2() {
  TVARIABLE(FixedArray, _return_indexes_375_impl);
  auto _return_indexes_375 = &_return_indexes_375_impl;
  USE(_return_indexes_375);
  TVARIABLE(Smi, _return_i_376_impl);
  auto _return_i_376 = &_return_i_376_impl;
  USE(_return_i_376);
  TVARIABLE(Number, _return_k_377_impl);
  auto _return_k_377 = &_return_k_377_impl;
  USE(_return_k_377);
  Label label_macro_end_1350_impl(this, {_return_i_376, _return_indexes_375, _return_k_377});
  Label* label_macro_end_1350 = &label_macro_end_1350_impl;
  USE(label_macro_end_1350);
  // ../../test/torque/test-torque.tq:275:36
  {
    // ../../test/torque/test-torque.tq:276:5
    TNode<FixedArray> t2076 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t2076));
    int31_t t2077 = 27;
    TNode<Smi> t2078 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2077)));
    int31_t t2079 = 31;
    TNode<Number> t2080 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2079)));
    TestStructA t2081 = {implicit_cast<TNode<FixedArray>>(t2076), implicit_cast<TNode<Smi>>(t2078), implicit_cast<TNode<Number>>(t2080)};
    *_return_indexes_375 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t2081).indexes);
    *_return_i_376 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2081).i);
    *_return_k_377 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t2081).k);
    Goto(label_macro_end_1350);
  }
  BIND(label_macro_end_1350);
  return TestStructA{implicit_cast<TNode<FixedArray>>((*_return_indexes_375).value()), implicit_cast<TNode<Smi>>((*_return_i_376).value()), implicit_cast<TNode<Number>>((*_return_k_377).value())};
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct3() {
  TVARIABLE(FixedArray, _return_indexes_379_impl);
  auto _return_indexes_379 = &_return_indexes_379_impl;
  USE(_return_indexes_379);
  TVARIABLE(Smi, _return_i_380_impl);
  auto _return_i_380 = &_return_i_380_impl;
  USE(_return_i_380);
  TVARIABLE(Number, _return_k_381_impl);
  auto _return_k_381 = &_return_k_381_impl;
  USE(_return_k_381);
  Label label_macro_end_1351_impl(this, {_return_i_380, _return_indexes_379, _return_k_381});
  Label* label_macro_end_1351 = &label_macro_end_1351_impl;
  USE(label_macro_end_1351);
  // ../../test/torque/test-torque.tq:279:36
  {
    // ../../test/torque/test-torque.tq:280:5
    TNode<FixedArray> t2082 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t2082));
    int31_t t2083 = 13;
    TNode<Smi> t2084 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2083)));
    int31_t t2085 = 5;
    TNode<Number> t2086 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2085)));
    TestStructA t2087 = {implicit_cast<TNode<FixedArray>>(t2082), implicit_cast<TNode<Smi>>(t2084), implicit_cast<TNode<Number>>(t2086)};
    TVARIABLE(FixedArray, a_indexes_383_impl);
    auto a_indexes_383 = &a_indexes_383_impl;
    USE(a_indexes_383);
    TVARIABLE(Smi, a_i_384_impl);
    auto a_i_384 = &a_i_384_impl;
    USE(a_i_384);
    TVARIABLE(Number, a_k_385_impl);
    auto a_k_385 = &a_k_385_impl;
    USE(a_k_385);
    *a_indexes_383 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t2087).indexes);
    *a_i_384 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2087).i);
    *a_k_385 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t2087).k);
    // ../../test/torque/test-torque.tq:282:5
    TVARIABLE(FixedArray, b_indexes_387_impl);
    auto b_indexes_387 = &b_indexes_387_impl;
    USE(b_indexes_387);
    TVARIABLE(Smi, b_i_388_impl);
    auto b_i_388 = &b_i_388_impl;
    USE(b_i_388);
    TVARIABLE(Number, b_k_389_impl);
    auto b_k_389 = &b_k_389_impl;
    USE(b_k_389);
    *b_indexes_387 = implicit_cast<TNode<FixedArray>>((*a_indexes_383).value());
    *b_i_388 = implicit_cast<TNode<Smi>>((*a_i_384).value());
    *b_k_389 = implicit_cast<TNode<Number>>((*a_k_385).value());
    // ../../test/torque/test-torque.tq:283:5
    TestStructA t2088 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2088));
    TVARIABLE(FixedArray, c_indexes_391_impl);
    auto c_indexes_391 = &c_indexes_391_impl;
    USE(c_indexes_391);
    TVARIABLE(Smi, c_i_392_impl);
    auto c_i_392 = &c_i_392_impl;
    USE(c_i_392);
    TVARIABLE(Number, c_k_393_impl);
    auto c_k_393 = &c_k_393_impl;
    USE(c_k_393);
    *c_indexes_391 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t2088).indexes);
    *c_i_392 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2088).i);
    *c_k_393 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t2088).k);
    // ../../test/torque/test-torque.tq:284:5
    TNode<Smi> t2089 = UncheckedCast<Smi>(TestStruct1(TestStructA{implicit_cast<TNode<FixedArray>>((*c_indexes_391).value()), implicit_cast<TNode<Smi>>((*c_i_392).value()), implicit_cast<TNode<Number>>((*c_k_393).value())}));
    USE(implicit_cast<TNode<Smi>>(t2089));
    *a_i_384 = implicit_cast<TNode<Smi>>(t2089);
    // ../../test/torque/test-torque.tq:285:5
    *a_k_385 = implicit_cast<TNode<Number>>((*a_i_384).value());
    // ../../test/torque/test-torque.tq:286:5
    TVARIABLE(FixedArray, d_x_indexes_396_impl);
    auto d_x_indexes_396 = &d_x_indexes_396_impl;
    USE(d_x_indexes_396);
    TVARIABLE(Smi, d_x_i_397_impl);
    auto d_x_i_397 = &d_x_i_397_impl;
    USE(d_x_i_397);
    TVARIABLE(Number, d_x_k_398_impl);
    auto d_x_k_398 = &d_x_k_398_impl;
    USE(d_x_k_398);
    TVARIABLE(Smi, d_y_399_impl);
    auto d_y_399 = &d_y_399_impl;
    USE(d_y_399);
    // ../../test/torque/test-torque.tq:287:5
    *d_x_indexes_396 = implicit_cast<TNode<FixedArray>>((*a_indexes_383).value());
    *d_x_i_397 = implicit_cast<TNode<Smi>>((*a_i_384).value());
    *d_x_k_398 = implicit_cast<TNode<Number>>((*a_k_385).value());
    // ../../test/torque/test-torque.tq:288:5
    int31_t t2090 = 7;
    TNode<Smi> t2091 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2090)));
    TestStructB t2092 = {TestStructA{implicit_cast<TNode<FixedArray>>((*a_indexes_383).value()), implicit_cast<TNode<Smi>>((*a_i_384).value()), implicit_cast<TNode<Number>>((*a_k_385).value())}, implicit_cast<TNode<Smi>>(t2091)};
    *d_x_indexes_396 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t2092).x).indexes);
    *d_x_i_397 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t2092).x).i);
    *d_x_k_398 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t2092).x).k);
    *d_y_399 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructB>(t2092).y);
    // ../../test/torque/test-torque.tq:289:5
    TVARIABLE(FixedArray, e_indexes_401_impl);
    auto e_indexes_401 = &e_indexes_401_impl;
    USE(e_indexes_401);
    TVARIABLE(Smi, e_i_402_impl);
    auto e_i_402 = &e_i_402_impl;
    USE(e_i_402);
    TVARIABLE(Number, e_k_403_impl);
    auto e_k_403 = &e_k_403_impl;
    USE(e_k_403);
    *e_indexes_401 = implicit_cast<TNode<FixedArray>>((*d_x_indexes_396).value());
    *e_i_402 = implicit_cast<TNode<Smi>>((*d_x_i_397).value());
    *e_k_403 = implicit_cast<TNode<Number>>((*d_x_k_398).value());
    // ../../test/torque/test-torque.tq:290:5
    TNode<FixedArray> t2093 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t2093));
    int31_t t2094 = 27;
    TNode<Smi> t2095 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2094)));
    int31_t t2096 = 31;
    TNode<Number> t2097 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2096)));
    TestStructA t2098 = {implicit_cast<TNode<FixedArray>>(t2093), implicit_cast<TNode<Smi>>(t2095), implicit_cast<TNode<Number>>(t2097)};
    TVARIABLE(Smi, f_404_impl);
    auto f_404 = &f_404_impl;
    USE(f_404);
    *f_404 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2098).i);
    // ../../test/torque/test-torque.tq:291:5
    TestStructA t2099 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2099));
    *f_404 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2099).i);
    // ../../test/torque/test-torque.tq:292:5
    *_return_indexes_379 = implicit_cast<TNode<FixedArray>>((*a_indexes_383).value());
    *_return_i_380 = implicit_cast<TNode<Smi>>((*a_i_384).value());
    *_return_k_381 = implicit_cast<TNode<Number>>((*a_k_385).value());
    Goto(label_macro_end_1351);
  }
  BIND(label_macro_end_1351);
  return TestStructA{implicit_cast<TNode<FixedArray>>((*_return_indexes_379).value()), implicit_cast<TNode<Smi>>((*_return_i_380).value()), implicit_cast<TNode<Number>>((*_return_k_381).value())};
}

TestBuiltinsFromDSLAssembler::TestStructC TestBuiltinsFromDSLAssembler::TestStruct4() {
  TVARIABLE(FixedArray, _return_x_indexes_407_impl);
  auto _return_x_indexes_407 = &_return_x_indexes_407_impl;
  USE(_return_x_indexes_407);
  TVARIABLE(Smi, _return_x_i_408_impl);
  auto _return_x_i_408 = &_return_x_i_408_impl;
  USE(_return_x_i_408);
  TVARIABLE(Number, _return_x_k_409_impl);
  auto _return_x_k_409 = &_return_x_k_409_impl;
  USE(_return_x_k_409);
  TVARIABLE(FixedArray, _return_y_indexes_411_impl);
  auto _return_y_indexes_411 = &_return_y_indexes_411_impl;
  USE(_return_y_indexes_411);
  TVARIABLE(Smi, _return_y_i_412_impl);
  auto _return_y_i_412 = &_return_y_i_412_impl;
  USE(_return_y_i_412);
  TVARIABLE(Number, _return_y_k_413_impl);
  auto _return_y_k_413 = &_return_y_k_413_impl;
  USE(_return_y_k_413);
  Label label_macro_end_1352_impl(this, {_return_x_i_408, _return_x_indexes_407, _return_x_k_409, _return_y_i_412, _return_y_indexes_411, _return_y_k_413});
  Label* label_macro_end_1352 = &label_macro_end_1352_impl;
  USE(label_macro_end_1352);
  // ../../test/torque/test-torque.tq:300:36
  {
    // ../../test/torque/test-torque.tq:301:5
    TestStructA t2100 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2100));
    TestStructA t2101 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2101));
    TestStructC t2102 = {implicit_cast<TestStructA>(t2100), implicit_cast<TestStructA>(t2101)};
    *_return_x_indexes_407 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2102).x).indexes);
    *_return_x_i_408 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2102).x).i);
    *_return_x_k_409 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2102).x).k);
    *_return_y_indexes_411 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2102).y).indexes);
    *_return_y_i_412 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2102).y).i);
    *_return_y_k_413 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2102).y).k);
    Goto(label_macro_end_1352);
  }
  BIND(label_macro_end_1352);
  return TestStructC{TestStructA{implicit_cast<TNode<FixedArray>>((*_return_x_indexes_407).value()), implicit_cast<TNode<Smi>>((*_return_x_i_408).value()), implicit_cast<TNode<Number>>((*_return_x_k_409).value())}, TestStructA{implicit_cast<TNode<FixedArray>>((*_return_y_indexes_411).value()), implicit_cast<TNode<Smi>>((*_return_y_i_412).value()), implicit_cast<TNode<Number>>((*_return_y_k_413).value())}};
}

void TestBuiltinsFromDSLAssembler::TestForLoop() {
  Label label_macro_end_1353_impl(this, {});
  Label* label_macro_end_1353 = &label_macro_end_1353_impl;
  USE(label_macro_end_1353);
  // ../../test/torque/test-torque.tq:306:23
  {
    // ../../test/torque/test-torque.tq:307:5
    int31_t t2103 = 0;
    TVARIABLE(Smi, sum_414_impl);
    auto sum_414 = &sum_414_impl;
    USE(sum_414);
    TNode<Smi> t2104 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2103)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2104);
    // ../../test/torque/test-torque.tq:308:5
    int31_t t2105 = 0;
    TVARIABLE(Smi, i_415_impl);
    auto i_415 = &i_415_impl;
    USE(i_415);
    TNode<Smi> t2106 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2105)));
    *i_415 = implicit_cast<TNode<Smi>>(t2106);
    Label label__True_609_impl(this);
    Label* label__True_609 = &label__True_609_impl;
    USE(label__True_609);
    Label label__False_610_impl(this);
    Label* label__False_610 = &label__False_610_impl;
    USE(label__False_610);
    Label label_header_880_1354_impl(this, {i_415, sum_414});
    Label* label_header_880_1354 = &label_header_880_1354_impl;
    USE(label_header_880_1354);
    Goto(label_header_880_1354);
    BIND(label_header_880_1354);
    Label label_action_881_1355_impl(this);
    Label* label_action_881_1355 = &label_action_881_1355_impl;
    USE(label_action_881_1355);
    int31_t t2107 = 5;
    TNode<Smi> t2108 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2107)));
    TNode<BoolT> t2109 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_415).value()), implicit_cast<TNode<Smi>>(t2108)));
    USE(implicit_cast<TNode<BoolT>>(t2109));
    Branch(implicit_cast<TNode<BoolT>>(t2109), label__True_609, label__False_610);
    if (label__True_609->is_used())
    {
      BIND(label__True_609);
      // ../../test/torque/test-torque.tq:308:38
      TNode<Smi> t2110 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>((*i_415).value())));
      *sum_414 = implicit_cast<TNode<Smi>>(t2110);
      Goto(label_action_881_1355);
    }
    {
      BIND(label_action_881_1355);
      TNode<Smi> t2111 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2112 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_415).value()), implicit_cast<TNode<Smi>>(t2111)));
      *i_415 = implicit_cast<TNode<Smi>>(t2112);
      Goto(label_header_880_1354);
    }
    BIND(label__False_610);
    // ../../test/torque/test-torque.tq:309:5
    Label label__True_611_impl(this);
    Label* label__True_611 = &label__True_611_impl;
    USE(label__True_611);
    Label label__False_612_impl(this);
    Label* label__False_612 = &label__False_612_impl;
    USE(label__False_612);
    int31_t t2113 = 10;
    TNode<Smi> t2114 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2113)));
    TNode<BoolT> t2115 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2114)));
    USE(implicit_cast<TNode<BoolT>>(t2115));
    Branch(implicit_cast<TNode<BoolT>>(t2115), label__True_611, label__False_612);
    BIND(label__False_612);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:309:5");
    Unreachable();
    BIND(label__True_611);
    // ../../test/torque/test-torque.tq:311:5
    int31_t t2116 = 0;
    TNode<Smi> t2117 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2116)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2117);
    // ../../test/torque/test-torque.tq:312:5
    int31_t t2118 = 0;
    TVARIABLE(Smi, j_416_impl);
    auto j_416 = &j_416_impl;
    USE(j_416);
    TNode<Smi> t2119 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2118)));
    *j_416 = implicit_cast<TNode<Smi>>(t2119);
    // ../../test/torque/test-torque.tq:313:5
    Label label__True_613_impl(this);
    Label* label__True_613 = &label__True_613_impl;
    USE(label__True_613);
    Label label__False_614_impl(this);
    Label* label__False_614 = &label__False_614_impl;
    USE(label__False_614);
    Label label_header_882_1356_impl(this, {j_416, sum_414});
    Label* label_header_882_1356 = &label_header_882_1356_impl;
    USE(label_header_882_1356);
    Goto(label_header_882_1356);
    BIND(label_header_882_1356);
    Label label_action_883_1357_impl(this);
    Label* label_action_883_1357 = &label_action_883_1357_impl;
    USE(label_action_883_1357);
    int31_t t2120 = 5;
    TNode<Smi> t2121 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2120)));
    TNode<BoolT> t2122 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2121)));
    USE(implicit_cast<TNode<BoolT>>(t2122));
    Branch(implicit_cast<TNode<BoolT>>(t2122), label__True_613, label__False_614);
    if (label__True_613->is_used())
    {
      BIND(label__True_613);
      // ../../test/torque/test-torque.tq:313:24
      TNode<Smi> t2123 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>((*j_416).value())));
      *sum_414 = implicit_cast<TNode<Smi>>(t2123);
      Goto(label_action_883_1357);
    }
    {
      BIND(label_action_883_1357);
      TNode<Smi> t2124 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2125 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2124)));
      *j_416 = implicit_cast<TNode<Smi>>(t2125);
      Goto(label_header_882_1356);
    }
    BIND(label__False_614);
    // ../../test/torque/test-torque.tq:314:5
    Label label__True_615_impl(this);
    Label* label__True_615 = &label__True_615_impl;
    USE(label__True_615);
    Label label__False_616_impl(this);
    Label* label__False_616 = &label__False_616_impl;
    USE(label__False_616);
    int31_t t2126 = 10;
    TNode<Smi> t2127 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2126)));
    TNode<BoolT> t2128 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2127)));
    USE(implicit_cast<TNode<BoolT>>(t2128));
    Branch(implicit_cast<TNode<BoolT>>(t2128), label__True_615, label__False_616);
    BIND(label__False_616);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:314:5");
    Unreachable();
    BIND(label__True_615);
    // ../../test/torque/test-torque.tq:316:5
    int31_t t2129 = 0;
    TNode<Smi> t2130 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2129)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2130);
    // ../../test/torque/test-torque.tq:317:5
    int31_t t2131 = 0;
    TNode<Smi> t2132 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2131)));
    *j_416 = implicit_cast<TNode<Smi>>(t2132);
    // ../../test/torque/test-torque.tq:318:5
    Label label__True_617_impl(this);
    Label* label__True_617 = &label__True_617_impl;
    USE(label__True_617);
    Label label__False_618_impl(this);
    Label* label__False_618 = &label__False_618_impl;
    USE(label__False_618);
    Label label_header_884_1358_impl(this, {j_416, sum_414});
    Label* label_header_884_1358 = &label_header_884_1358_impl;
    USE(label_header_884_1358);
    Goto(label_header_884_1358);
    BIND(label_header_884_1358);
    int31_t t2133 = 5;
    TNode<Smi> t2134 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2133)));
    TNode<BoolT> t2135 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2134)));
    USE(implicit_cast<TNode<BoolT>>(t2135));
    Branch(implicit_cast<TNode<BoolT>>(t2135), label__True_617, label__False_618);
    if (label__True_617->is_used())
    {
      BIND(label__True_617);
      // ../../test/torque/test-torque.tq:318:20
      TNode<Smi> t2136 = implicit_cast<TNode<Smi>>((*j_416).value());
      USE(t2136);
      TNode<Smi> t2137 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2138 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2137)));
      *j_416 = implicit_cast<TNode<Smi>>(t2138);
      TNode<Smi> t2139 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2136)));
      *sum_414 = implicit_cast<TNode<Smi>>(t2139);
      Goto(label_header_884_1358);
    }
    BIND(label__False_618);
    // ../../test/torque/test-torque.tq:319:5
    Label label__True_619_impl(this);
    Label* label__True_619 = &label__True_619_impl;
    USE(label__True_619);
    Label label__False_620_impl(this);
    Label* label__False_620 = &label__False_620_impl;
    USE(label__False_620);
    int31_t t2140 = 10;
    TNode<Smi> t2141 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2140)));
    TNode<BoolT> t2142 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2141)));
    USE(implicit_cast<TNode<BoolT>>(t2142));
    Branch(implicit_cast<TNode<BoolT>>(t2142), label__True_619, label__False_620);
    BIND(label__False_620);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:319:5");
    Unreachable();
    BIND(label__True_619);
    // ../../test/torque/test-torque.tq:322:5
    int31_t t2143 = 0;
    TNode<Smi> t2144 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2143)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2144);
    // ../../test/torque/test-torque.tq:323:5
    int31_t t2145 = 0;
    TVARIABLE(Smi, i_417_impl);
    auto i_417 = &i_417_impl;
    USE(i_417);
    TNode<Smi> t2146 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2145)));
    *i_417 = implicit_cast<TNode<Smi>>(t2146);
    Label label__True_621_impl(this);
    Label* label__True_621 = &label__True_621_impl;
    USE(label__True_621);
    Label label__False_622_impl(this);
    Label* label__False_622 = &label__False_622_impl;
    USE(label__False_622);
    Label label_header_885_1359_impl(this, {i_417, sum_414});
    Label* label_header_885_1359 = &label_header_885_1359_impl;
    USE(label_header_885_1359);
    Goto(label_header_885_1359);
    BIND(label_header_885_1359);
    Label label_action_886_1360_impl(this);
    Label* label_action_886_1360 = &label_action_886_1360_impl;
    USE(label_action_886_1360);
    Goto(label__True_621);
    if (label__True_621->is_used())
    {
      BIND(label__True_621);
      // ../../test/torque/test-torque.tq:323:32
      {
        // ../../test/torque/test-torque.tq:324:7
        {
          Label label__True_623_impl(this);
          Label* label__True_623 = &label__True_623_impl;
          USE(label__True_623);
          Label label__False_624_impl(this, {});
          Label* label__False_624 = &label__False_624_impl;
          USE(label__False_624);
          int31_t t2147 = 5;
          TNode<Smi> t2148 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2147)));
          TNode<BoolT> t2149 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_417).value()), implicit_cast<TNode<Smi>>(t2148)));
          USE(implicit_cast<TNode<BoolT>>(t2149));
          Branch(implicit_cast<TNode<BoolT>>(t2149), label__True_623, label__False_624);
          if (label__True_623->is_used())
          {
            BIND(label__True_623);
            // ../../test/torque/test-torque.tq:324:19
            Goto(label__False_622);
          }
          BIND(label__False_624);
        }
        // ../../test/torque/test-torque.tq:325:7
        TNode<Smi> t2150 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>((*i_417).value())));
        *sum_414 = implicit_cast<TNode<Smi>>(t2150);
      }
      Goto(label_action_886_1360);
    }
    {
      BIND(label_action_886_1360);
      TNode<Smi> t2151 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2152 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_417).value()), implicit_cast<TNode<Smi>>(t2151)));
      *i_417 = implicit_cast<TNode<Smi>>(t2152);
      Goto(label_header_885_1359);
    }
    BIND(label__False_622);
    // ../../test/torque/test-torque.tq:327:5
    Label label__True_625_impl(this);
    Label* label__True_625 = &label__True_625_impl;
    USE(label__True_625);
    Label label__False_626_impl(this);
    Label* label__False_626 = &label__False_626_impl;
    USE(label__False_626);
    int31_t t2153 = 10;
    TNode<Smi> t2154 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2153)));
    TNode<BoolT> t2155 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2154)));
    USE(implicit_cast<TNode<BoolT>>(t2155));
    Branch(implicit_cast<TNode<BoolT>>(t2155), label__True_625, label__False_626);
    BIND(label__False_626);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:327:5");
    Unreachable();
    BIND(label__True_625);
    // ../../test/torque/test-torque.tq:329:5
    int31_t t2156 = 0;
    TNode<Smi> t2157 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2156)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2157);
    // ../../test/torque/test-torque.tq:330:5
    int31_t t2158 = 0;
    TNode<Smi> t2159 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2158)));
    *j_416 = implicit_cast<TNode<Smi>>(t2159);
    // ../../test/torque/test-torque.tq:331:5
    Label label__True_627_impl(this);
    Label* label__True_627 = &label__True_627_impl;
    USE(label__True_627);
    Label label__False_628_impl(this);
    Label* label__False_628 = &label__False_628_impl;
    USE(label__False_628);
    Label label_header_887_1361_impl(this, {j_416, sum_414});
    Label* label_header_887_1361 = &label_header_887_1361_impl;
    USE(label_header_887_1361);
    Goto(label_header_887_1361);
    BIND(label_header_887_1361);
    Goto(label__True_627);
    if (label__True_627->is_used())
    {
      BIND(label__True_627);
      // ../../test/torque/test-torque.tq:331:14
      {
        // ../../test/torque/test-torque.tq:332:7
        {
          Label label__True_629_impl(this);
          Label* label__True_629 = &label__True_629_impl;
          USE(label__True_629);
          Label label__False_630_impl(this, {});
          Label* label__False_630 = &label__False_630_impl;
          USE(label__False_630);
          int31_t t2160 = 5;
          TNode<Smi> t2161 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2160)));
          TNode<BoolT> t2162 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2161)));
          USE(implicit_cast<TNode<BoolT>>(t2162));
          Branch(implicit_cast<TNode<BoolT>>(t2162), label__True_629, label__False_630);
          if (label__True_629->is_used())
          {
            BIND(label__True_629);
            // ../../test/torque/test-torque.tq:332:19
            Goto(label__False_628);
          }
          BIND(label__False_630);
        }
        // ../../test/torque/test-torque.tq:333:7
        TNode<Smi> t2163 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>((*j_416).value())));
        *sum_414 = implicit_cast<TNode<Smi>>(t2163);
        // ../../test/torque/test-torque.tq:334:7
        TNode<Smi> t2164 = implicit_cast<TNode<Smi>>((*j_416).value());
        USE(t2164);
        TNode<Smi> t2165 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2166 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2165)));
        *j_416 = implicit_cast<TNode<Smi>>(t2166);
      }
      Goto(label_header_887_1361);
    }
    BIND(label__False_628);
    // ../../test/torque/test-torque.tq:336:5
    Label label__True_631_impl(this);
    Label* label__True_631 = &label__True_631_impl;
    USE(label__True_631);
    Label label__False_632_impl(this);
    Label* label__False_632 = &label__False_632_impl;
    USE(label__False_632);
    int31_t t2167 = 10;
    TNode<Smi> t2168 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2167)));
    TNode<BoolT> t2169 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2168)));
    USE(implicit_cast<TNode<BoolT>>(t2169));
    Branch(implicit_cast<TNode<BoolT>>(t2169), label__True_631, label__False_632);
    BIND(label__False_632);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:336:5");
    Unreachable();
    BIND(label__True_631);
    // ../../test/torque/test-torque.tq:340:5
    int31_t t2170 = 0;
    TNode<Smi> t2171 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2170)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2171);
    // ../../test/torque/test-torque.tq:341:5
    int31_t t2172 = 0;
    TVARIABLE(Smi, i_418_impl);
    auto i_418 = &i_418_impl;
    USE(i_418);
    TNode<Smi> t2173 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2172)));
    *i_418 = implicit_cast<TNode<Smi>>(t2173);
    Label label__True_633_impl(this);
    Label* label__True_633 = &label__True_633_impl;
    USE(label__True_633);
    Label label__False_634_impl(this);
    Label* label__False_634 = &label__False_634_impl;
    USE(label__False_634);
    Label label_header_888_1362_impl(this, {i_418, sum_414});
    Label* label_header_888_1362 = &label_header_888_1362_impl;
    USE(label_header_888_1362);
    Goto(label_header_888_1362);
    BIND(label_header_888_1362);
    Label label_action_889_1363_impl(this);
    Label* label_action_889_1363 = &label_action_889_1363_impl;
    USE(label_action_889_1363);
    int31_t t2174 = 5;
    TNode<Smi> t2175 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2174)));
    TNode<BoolT> t2176 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_418).value()), implicit_cast<TNode<Smi>>(t2175)));
    USE(implicit_cast<TNode<BoolT>>(t2176));
    Branch(implicit_cast<TNode<BoolT>>(t2176), label__True_633, label__False_634);
    if (label__True_633->is_used())
    {
      BIND(label__True_633);
      // ../../test/torque/test-torque.tq:341:38
      {
        // ../../test/torque/test-torque.tq:342:7
        {
          Label label__True_635_impl(this);
          Label* label__True_635 = &label__True_635_impl;
          USE(label__True_635);
          Label label__False_636_impl(this, {});
          Label* label__False_636 = &label__False_636_impl;
          USE(label__False_636);
          int31_t t2177 = 3;
          TNode<Smi> t2178 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2177)));
          TNode<BoolT> t2179 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_418).value()), implicit_cast<TNode<Smi>>(t2178)));
          USE(implicit_cast<TNode<BoolT>>(t2179));
          Branch(implicit_cast<TNode<BoolT>>(t2179), label__True_635, label__False_636);
          if (label__True_635->is_used())
          {
            BIND(label__True_635);
            // ../../test/torque/test-torque.tq:342:19
            Goto(label_action_889_1363);
          }
          BIND(label__False_636);
        }
        // ../../test/torque/test-torque.tq:343:7
        TNode<Smi> t2180 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>((*i_418).value())));
        *sum_414 = implicit_cast<TNode<Smi>>(t2180);
      }
      Goto(label_action_889_1363);
    }
    {
      BIND(label_action_889_1363);
      TNode<Smi> t2181 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2182 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_418).value()), implicit_cast<TNode<Smi>>(t2181)));
      *i_418 = implicit_cast<TNode<Smi>>(t2182);
      Goto(label_header_888_1362);
    }
    BIND(label__False_634);
    // ../../test/torque/test-torque.tq:345:5
    Label label__True_637_impl(this);
    Label* label__True_637 = &label__True_637_impl;
    USE(label__True_637);
    Label label__False_638_impl(this);
    Label* label__False_638 = &label__False_638_impl;
    USE(label__False_638);
    int31_t t2183 = 7;
    TNode<Smi> t2184 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2183)));
    TNode<BoolT> t2185 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2184)));
    USE(implicit_cast<TNode<BoolT>>(t2185));
    Branch(implicit_cast<TNode<BoolT>>(t2185), label__True_637, label__False_638);
    BIND(label__False_638);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:345:5");
    Unreachable();
    BIND(label__True_637);
    // ../../test/torque/test-torque.tq:347:5
    int31_t t2186 = 0;
    TNode<Smi> t2187 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2186)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2187);
    // ../../test/torque/test-torque.tq:348:5
    int31_t t2188 = 0;
    TNode<Smi> t2189 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2188)));
    *j_416 = implicit_cast<TNode<Smi>>(t2189);
    // ../../test/torque/test-torque.tq:349:5
    Label label__True_639_impl(this);
    Label* label__True_639 = &label__True_639_impl;
    USE(label__True_639);
    Label label__False_640_impl(this);
    Label* label__False_640 = &label__False_640_impl;
    USE(label__False_640);
    Label label_header_890_1364_impl(this, {j_416, sum_414});
    Label* label_header_890_1364 = &label_header_890_1364_impl;
    USE(label_header_890_1364);
    Goto(label_header_890_1364);
    BIND(label_header_890_1364);
    Label label_action_891_1365_impl(this);
    Label* label_action_891_1365 = &label_action_891_1365_impl;
    USE(label_action_891_1365);
    int31_t t2190 = 5;
    TNode<Smi> t2191 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2190)));
    TNode<BoolT> t2192 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2191)));
    USE(implicit_cast<TNode<BoolT>>(t2192));
    Branch(implicit_cast<TNode<BoolT>>(t2192), label__True_639, label__False_640);
    if (label__True_639->is_used())
    {
      BIND(label__True_639);
      // ../../test/torque/test-torque.tq:349:24
      {
        // ../../test/torque/test-torque.tq:350:7
        {
          Label label__True_641_impl(this);
          Label* label__True_641 = &label__True_641_impl;
          USE(label__True_641);
          Label label__False_642_impl(this, {});
          Label* label__False_642 = &label__False_642_impl;
          USE(label__False_642);
          int31_t t2193 = 3;
          TNode<Smi> t2194 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2193)));
          TNode<BoolT> t2195 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2194)));
          USE(implicit_cast<TNode<BoolT>>(t2195));
          Branch(implicit_cast<TNode<BoolT>>(t2195), label__True_641, label__False_642);
          if (label__True_641->is_used())
          {
            BIND(label__True_641);
            // ../../test/torque/test-torque.tq:350:19
            Goto(label_action_891_1365);
          }
          BIND(label__False_642);
        }
        // ../../test/torque/test-torque.tq:351:7
        TNode<Smi> t2196 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>((*j_416).value())));
        *sum_414 = implicit_cast<TNode<Smi>>(t2196);
      }
      Goto(label_action_891_1365);
    }
    {
      BIND(label_action_891_1365);
      TNode<Smi> t2197 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2198 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2197)));
      *j_416 = implicit_cast<TNode<Smi>>(t2198);
      Goto(label_header_890_1364);
    }
    BIND(label__False_640);
    // ../../test/torque/test-torque.tq:353:5
    Label label__True_643_impl(this);
    Label* label__True_643 = &label__True_643_impl;
    USE(label__True_643);
    Label label__False_644_impl(this);
    Label* label__False_644 = &label__False_644_impl;
    USE(label__False_644);
    int31_t t2199 = 7;
    TNode<Smi> t2200 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2199)));
    TNode<BoolT> t2201 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2200)));
    USE(implicit_cast<TNode<BoolT>>(t2201));
    Branch(implicit_cast<TNode<BoolT>>(t2201), label__True_643, label__False_644);
    BIND(label__False_644);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:353:5");
    Unreachable();
    BIND(label__True_643);
    // ../../test/torque/test-torque.tq:355:5
    int31_t t2202 = 0;
    TNode<Smi> t2203 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2202)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2203);
    // ../../test/torque/test-torque.tq:356:5
    int31_t t2204 = 0;
    TNode<Smi> t2205 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2204)));
    *j_416 = implicit_cast<TNode<Smi>>(t2205);
    // ../../test/torque/test-torque.tq:357:5
    Label label__True_645_impl(this);
    Label* label__True_645 = &label__True_645_impl;
    USE(label__True_645);
    Label label__False_646_impl(this);
    Label* label__False_646 = &label__False_646_impl;
    USE(label__False_646);
    Label label_header_892_1366_impl(this, {j_416, sum_414});
    Label* label_header_892_1366 = &label_header_892_1366_impl;
    USE(label_header_892_1366);
    Goto(label_header_892_1366);
    BIND(label_header_892_1366);
    int31_t t2206 = 5;
    TNode<Smi> t2207 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2206)));
    TNode<BoolT> t2208 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2207)));
    USE(implicit_cast<TNode<BoolT>>(t2208));
    Branch(implicit_cast<TNode<BoolT>>(t2208), label__True_645, label__False_646);
    if (label__True_645->is_used())
    {
      BIND(label__True_645);
      // ../../test/torque/test-torque.tq:357:20
      {
        // ../../test/torque/test-torque.tq:358:7
        {
          Label label__True_647_impl(this);
          Label* label__True_647 = &label__True_647_impl;
          USE(label__True_647);
          Label label__False_648_impl(this, {j_416});
          Label* label__False_648 = &label__False_648_impl;
          USE(label__False_648);
          int31_t t2209 = 3;
          TNode<Smi> t2210 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2209)));
          TNode<BoolT> t2211 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2210)));
          USE(implicit_cast<TNode<BoolT>>(t2211));
          Branch(implicit_cast<TNode<BoolT>>(t2211), label__True_647, label__False_648);
          if (label__True_647->is_used())
          {
            BIND(label__True_647);
            // ../../test/torque/test-torque.tq:358:19
            {
              // ../../test/torque/test-torque.tq:359:9
              TNode<Smi> t2212 = implicit_cast<TNode<Smi>>((*j_416).value());
              USE(t2212);
              TNode<Smi> t2213 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
              TNode<Smi> t2214 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2213)));
              *j_416 = implicit_cast<TNode<Smi>>(t2214);
              // ../../test/torque/test-torque.tq:360:9
              Goto(label_header_892_1366);
            }
          }
          BIND(label__False_648);
        }
        // ../../test/torque/test-torque.tq:362:7
        TNode<Smi> t2215 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>((*j_416).value())));
        *sum_414 = implicit_cast<TNode<Smi>>(t2215);
        // ../../test/torque/test-torque.tq:363:7
        TNode<Smi> t2216 = implicit_cast<TNode<Smi>>((*j_416).value());
        USE(t2216);
        TNode<Smi> t2217 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2218 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2217)));
        *j_416 = implicit_cast<TNode<Smi>>(t2218);
      }
      Goto(label_header_892_1366);
    }
    BIND(label__False_646);
    // ../../test/torque/test-torque.tq:365:5
    Label label__True_649_impl(this);
    Label* label__True_649 = &label__True_649_impl;
    USE(label__True_649);
    Label label__False_650_impl(this);
    Label* label__False_650 = &label__False_650_impl;
    USE(label__False_650);
    int31_t t2219 = 7;
    TNode<Smi> t2220 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2219)));
    TNode<BoolT> t2221 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2220)));
    USE(implicit_cast<TNode<BoolT>>(t2221));
    Branch(implicit_cast<TNode<BoolT>>(t2221), label__True_649, label__False_650);
    BIND(label__False_650);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:365:5");
    Unreachable();
    BIND(label__True_649);
    // ../../test/torque/test-torque.tq:367:5
    int31_t t2222 = 0;
    TNode<Smi> t2223 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2222)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2223);
    // ../../test/torque/test-torque.tq:368:5
    int31_t t2224 = 0;
    TVARIABLE(Smi, i_419_impl);
    auto i_419 = &i_419_impl;
    USE(i_419);
    TNode<Smi> t2225 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2224)));
    *i_419 = implicit_cast<TNode<Smi>>(t2225);
    Label label__True_651_impl(this);
    Label* label__True_651 = &label__True_651_impl;
    USE(label__True_651);
    Label label__False_652_impl(this);
    Label* label__False_652 = &label__False_652_impl;
    USE(label__False_652);
    Label label_header_893_1367_impl(this, {i_419, sum_414});
    Label* label_header_893_1367 = &label_header_893_1367_impl;
    USE(label_header_893_1367);
    Goto(label_header_893_1367);
    BIND(label_header_893_1367);
    Label label_action_894_1368_impl(this);
    Label* label_action_894_1368 = &label_action_894_1368_impl;
    USE(label_action_894_1368);
    Goto(label__True_651);
    if (label__True_651->is_used())
    {
      BIND(label__True_651);
      // ../../test/torque/test-torque.tq:368:32
      {
        // ../../test/torque/test-torque.tq:369:7
        {
          Label label__True_653_impl(this);
          Label* label__True_653 = &label__True_653_impl;
          USE(label__True_653);
          Label label__False_654_impl(this, {});
          Label* label__False_654 = &label__False_654_impl;
          USE(label__False_654);
          int31_t t2226 = 3;
          TNode<Smi> t2227 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2226)));
          TNode<BoolT> t2228 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_419).value()), implicit_cast<TNode<Smi>>(t2227)));
          USE(implicit_cast<TNode<BoolT>>(t2228));
          Branch(implicit_cast<TNode<BoolT>>(t2228), label__True_653, label__False_654);
          if (label__True_653->is_used())
          {
            BIND(label__True_653);
            // ../../test/torque/test-torque.tq:369:19
            Goto(label_action_894_1368);
          }
          BIND(label__False_654);
        }
        // ../../test/torque/test-torque.tq:370:7
        {
          Label label__True_655_impl(this);
          Label* label__True_655 = &label__True_655_impl;
          USE(label__True_655);
          Label label__False_656_impl(this, {});
          Label* label__False_656 = &label__False_656_impl;
          USE(label__False_656);
          int31_t t2229 = 5;
          TNode<Smi> t2230 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2229)));
          TNode<BoolT> t2231 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_419).value()), implicit_cast<TNode<Smi>>(t2230)));
          USE(implicit_cast<TNode<BoolT>>(t2231));
          Branch(implicit_cast<TNode<BoolT>>(t2231), label__True_655, label__False_656);
          if (label__True_655->is_used())
          {
            BIND(label__True_655);
            // ../../test/torque/test-torque.tq:370:19
            Goto(label__False_652);
          }
          BIND(label__False_656);
        }
        // ../../test/torque/test-torque.tq:371:7
        TNode<Smi> t2232 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>((*i_419).value())));
        *sum_414 = implicit_cast<TNode<Smi>>(t2232);
      }
      Goto(label_action_894_1368);
    }
    {
      BIND(label_action_894_1368);
      TNode<Smi> t2233 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2234 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_419).value()), implicit_cast<TNode<Smi>>(t2233)));
      *i_419 = implicit_cast<TNode<Smi>>(t2234);
      Goto(label_header_893_1367);
    }
    BIND(label__False_652);
    // ../../test/torque/test-torque.tq:373:5
    Label label__True_657_impl(this);
    Label* label__True_657 = &label__True_657_impl;
    USE(label__True_657);
    Label label__False_658_impl(this);
    Label* label__False_658 = &label__False_658_impl;
    USE(label__False_658);
    int31_t t2235 = 7;
    TNode<Smi> t2236 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2235)));
    TNode<BoolT> t2237 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2236)));
    USE(implicit_cast<TNode<BoolT>>(t2237));
    Branch(implicit_cast<TNode<BoolT>>(t2237), label__True_657, label__False_658);
    BIND(label__False_658);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:373:5");
    Unreachable();
    BIND(label__True_657);
    // ../../test/torque/test-torque.tq:375:5
    int31_t t2238 = 0;
    TNode<Smi> t2239 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2238)));
    *sum_414 = implicit_cast<TNode<Smi>>(t2239);
    // ../../test/torque/test-torque.tq:376:5
    int31_t t2240 = 0;
    TNode<Smi> t2241 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2240)));
    *j_416 = implicit_cast<TNode<Smi>>(t2241);
    // ../../test/torque/test-torque.tq:377:5
    Label label__True_659_impl(this);
    Label* label__True_659 = &label__True_659_impl;
    USE(label__True_659);
    Label label__False_660_impl(this);
    Label* label__False_660 = &label__False_660_impl;
    USE(label__False_660);
    Label label_header_895_1369_impl(this, {j_416, sum_414});
    Label* label_header_895_1369 = &label_header_895_1369_impl;
    USE(label_header_895_1369);
    Goto(label_header_895_1369);
    BIND(label_header_895_1369);
    Goto(label__True_659);
    if (label__True_659->is_used())
    {
      BIND(label__True_659);
      // ../../test/torque/test-torque.tq:377:14
      {
        // ../../test/torque/test-torque.tq:378:7
        {
          Label label__True_661_impl(this);
          Label* label__True_661 = &label__True_661_impl;
          USE(label__True_661);
          Label label__False_662_impl(this, {j_416});
          Label* label__False_662 = &label__False_662_impl;
          USE(label__False_662);
          int31_t t2242 = 3;
          TNode<Smi> t2243 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2242)));
          TNode<BoolT> t2244 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2243)));
          USE(implicit_cast<TNode<BoolT>>(t2244));
          Branch(implicit_cast<TNode<BoolT>>(t2244), label__True_661, label__False_662);
          if (label__True_661->is_used())
          {
            BIND(label__True_661);
            // ../../test/torque/test-torque.tq:378:19
            {
              // ../../test/torque/test-torque.tq:379:9
              TNode<Smi> t2245 = implicit_cast<TNode<Smi>>((*j_416).value());
              USE(t2245);
              TNode<Smi> t2246 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
              TNode<Smi> t2247 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2246)));
              *j_416 = implicit_cast<TNode<Smi>>(t2247);
              // ../../test/torque/test-torque.tq:380:9
              Goto(label_header_895_1369);
            }
          }
          BIND(label__False_662);
        }
        // ../../test/torque/test-torque.tq:383:7
        {
          Label label__True_663_impl(this);
          Label* label__True_663 = &label__True_663_impl;
          USE(label__True_663);
          Label label__False_664_impl(this, {});
          Label* label__False_664 = &label__False_664_impl;
          USE(label__False_664);
          int31_t t2248 = 5;
          TNode<Smi> t2249 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2248)));
          TNode<BoolT> t2250 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2249)));
          USE(implicit_cast<TNode<BoolT>>(t2250));
          Branch(implicit_cast<TNode<BoolT>>(t2250), label__True_663, label__False_664);
          if (label__True_663->is_used())
          {
            BIND(label__True_663);
            // ../../test/torque/test-torque.tq:383:19
            Goto(label__False_660);
          }
          BIND(label__False_664);
        }
        // ../../test/torque/test-torque.tq:384:7
        TNode<Smi> t2251 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>((*j_416).value())));
        *sum_414 = implicit_cast<TNode<Smi>>(t2251);
        // ../../test/torque/test-torque.tq:385:7
        TNode<Smi> t2252 = implicit_cast<TNode<Smi>>((*j_416).value());
        USE(t2252);
        TNode<Smi> t2253 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2254 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_416).value()), implicit_cast<TNode<Smi>>(t2253)));
        *j_416 = implicit_cast<TNode<Smi>>(t2254);
      }
      Goto(label_header_895_1369);
    }
    BIND(label__False_660);
    // ../../test/torque/test-torque.tq:387:5
    Label label__True_665_impl(this);
    Label* label__True_665 = &label__True_665_impl;
    USE(label__True_665);
    Label label__False_666_impl(this);
    Label* label__False_666 = &label__False_666_impl;
    USE(label__False_666);
    int31_t t2255 = 7;
    TNode<Smi> t2256 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2255)));
    TNode<BoolT> t2257 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_414).value()), implicit_cast<TNode<Smi>>(t2256)));
    USE(implicit_cast<TNode<BoolT>>(t2257));
    Branch(implicit_cast<TNode<BoolT>>(t2257), label__True_665, label__False_666);
    BIND(label__False_666);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:387:5");
    Unreachable();
    BIND(label__True_665);
  }
}

void TestBuiltinsFromDSLAssembler::TestSubtyping(TNode<Smi> p_x) {
  Label label_macro_end_1370_impl(this, {});
  Label* label_macro_end_1370 = &label_macro_end_1370_impl;
  USE(label_macro_end_1370);
  // ../../test/torque/test-torque.tq:390:32
  {
    // ../../test/torque/test-torque.tq:391:5
    TNode<Object> foo_896_impl;
    auto foo_896 = &foo_896_impl;
    USE(foo_896);
    *foo_896 = implicit_cast<TNode<Object>>(p_x);
  }
}

compiler::TNode<Int32T> TestBuiltinsFromDSLAssembler::TypeswitchExample(TNode<Object> p_x) {
  TVARIABLE(Int32T, _return_420_impl);
  auto _return_420 = &_return_420_impl;
  USE(_return_420);
  Label label_macro_end_1371_impl(this, {_return_420});
  Label* label_macro_end_1371 = &label_macro_end_1371_impl;
  USE(label_macro_end_1371);
  // ../../test/torque/test-torque.tq:404:60
  {
    // ../../test/torque/test-torque.tq:405:5
    int31_t t2258 = 0;
    TVARIABLE(Int32T, result_421_impl);
    auto result_421 = &result_421_impl;
    USE(result_421);
    TNode<Int32T> t2259 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2258)));
    *result_421 = implicit_cast<TNode<Int32T>>(t2259);
    // ../../test/torque/test-torque.tq:406:5
    {
      // ../../test/torque/test-torque.tq:406:17
      TNode<Object> t2260 = UncheckedCast<Object>(IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_x)));
      USE(implicit_cast<TNode<Object>>(t2260));
      TNode<Object> _value_897_impl;
      auto _value_897 = &_value_897_impl;
      USE(_value_897);
      *_value_897 = implicit_cast<TNode<Object>>(t2260);
      // ../../test/torque/test-torque.tq:407:7
      {
        Label label_try_done_898_1372_impl(this);
        Label* label_try_done_898_1372 = &label_try_done_898_1372_impl;
        USE(label_try_done_898_1372);
        Label label__NextCase_667_impl(this);
        Label* label__NextCase_667 = &label__NextCase_667_impl;
        USE(label__NextCase_667);
        Label label_try_begin_899_1373_impl(this);
        Label* label_try_begin_899_1373 = &label_try_begin_899_1373_impl;
        USE(label_try_begin_899_1373);
        Goto(label_try_begin_899_1373);
        if (label_try_begin_899_1373->is_used())
        {
          BIND(label_try_begin_899_1373);
          // ../../test/torque/test-torque.tq:407:7
          {
            // ../../test/torque/test-torque.tq:407:7
            TNode<FixedArray> t2261 = UncheckedCast<FixedArray>(cast12ATFixedArray(implicit_cast<TNode<Object>>((*_value_897)), label__NextCase_667));
            USE(implicit_cast<TNode<FixedArray>>(t2261));
            TNode<FixedArray> x_900_impl;
            auto x_900 = &x_900_impl;
            USE(x_900);
            *x_900 = implicit_cast<TNode<FixedArray>>(t2261);
            // ../../test/torque/test-torque.tq:407:29
            {
              // ../../test/torque/test-torque.tq:408:9
              int31_t t2262 = 1;
              TNode<Int32T> t2263 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2262)));
              TNode<Int32T> t2264 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_421).value()), implicit_cast<TNode<Int32T>>(t2263)));
              USE(implicit_cast<TNode<Int32T>>(t2264));
              *result_421 = implicit_cast<TNode<Int32T>>(t2264);
            }
          }
          Goto(label_try_done_898_1372);
        }
        if (label__NextCase_667->is_used())
        {
          BIND(label__NextCase_667);
          // ../../test/torque/test-torque.tq:407:7
          {
            // ../../test/torque/test-torque.tq:409:9
            TNode<Number> _case_value_901_impl;
            auto _case_value_901 = &_case_value_901_impl;
            USE(_case_value_901);
            *_case_value_901 = implicit_cast<TNode<Number>>(UncheckedCast<Number>(implicit_cast<TNode<Object>>((*_value_897))));
            // ../../test/torque/test-torque.tq:409:23
            {
              // ../../test/torque/test-torque.tq:410:9
              int31_t t2265 = 2;
              TNode<Int32T> t2266 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2265)));
              TNode<Int32T> t2267 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_421).value()), implicit_cast<TNode<Int32T>>(t2266)));
              USE(implicit_cast<TNode<Int32T>>(t2267));
              *result_421 = implicit_cast<TNode<Int32T>>(t2267);
            }
          }
          Goto(label_try_done_898_1372);
        }
        BIND(label_try_done_898_1372);
      }
    }
    // ../../test/torque/test-torque.tq:414:5
    int31_t t2268 = 10;
    TNode<Int32T> t2269 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2268)));
    TNode<Int32T> t2270 = UncheckedCast<Int32T>(Int32Mul(implicit_cast<TNode<Int32T>>((*result_421).value()), implicit_cast<TNode<Int32T>>(t2269)));
    USE(implicit_cast<TNode<Int32T>>(t2270));
    *result_421 = implicit_cast<TNode<Int32T>>(t2270);
    // ../../test/torque/test-torque.tq:416:5
    {
      // ../../test/torque/test-torque.tq:416:17
      TNode<Object> t2271 = UncheckedCast<Object>(IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_x)));
      USE(implicit_cast<TNode<Object>>(t2271));
      TNode<Object> _value_902_impl;
      auto _value_902 = &_value_902_impl;
      USE(_value_902);
      *_value_902 = implicit_cast<TNode<Object>>(t2271);
      // ../../test/torque/test-torque.tq:417:7
      {
        Label label_try_done_903_1374_impl(this);
        Label* label_try_done_903_1374 = &label_try_done_903_1374_impl;
        USE(label_try_done_903_1374);
        Label label__NextCase_668_impl(this);
        Label* label__NextCase_668 = &label__NextCase_668_impl;
        USE(label__NextCase_668);
        Label label_try_begin_904_1375_impl(this);
        Label* label_try_begin_904_1375 = &label_try_begin_904_1375_impl;
        USE(label_try_begin_904_1375);
        Goto(label_try_begin_904_1375);
        if (label_try_begin_904_1375->is_used())
        {
          BIND(label_try_begin_904_1375);
          // ../../test/torque/test-torque.tq:417:7
          {
            // ../../test/torque/test-torque.tq:417:7
            TNode<Smi> t2272 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>((*_value_902)), label__NextCase_668));
            USE(implicit_cast<TNode<Smi>>(t2272));
            TNode<Smi> x_905_impl;
            auto x_905 = &x_905_impl;
            USE(x_905);
            *x_905 = implicit_cast<TNode<Smi>>(t2272);
            // ../../test/torque/test-torque.tq:417:22
            {
              // ../../test/torque/test-torque.tq:418:9
              TNode<Int32T> t2273 = UncheckedCast<Int32T>(convert7ATint32(implicit_cast<TNode<Smi>>((*x_905))));
              USE(implicit_cast<TNode<Int32T>>(t2273));
              TNode<Int32T> t2274 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_421).value()), implicit_cast<TNode<Int32T>>(t2273)));
              USE(implicit_cast<TNode<Int32T>>(t2274));
              *result_421 = implicit_cast<TNode<Int32T>>(t2274);
            }
          }
          Goto(label_try_done_903_1374);
        }
        if (label__NextCase_668->is_used())
        {
          BIND(label__NextCase_668);
          // ../../test/torque/test-torque.tq:417:7
          {
            // ../../test/torque/test-torque.tq:419:9
            {
              Label label_try_done_906_1376_impl(this);
              Label* label_try_done_906_1376 = &label_try_done_906_1376_impl;
              USE(label_try_done_906_1376);
              Label label__NextCase_669_impl(this);
              Label* label__NextCase_669 = &label__NextCase_669_impl;
              USE(label__NextCase_669);
              Label label_try_begin_907_1377_impl(this);
              Label* label_try_begin_907_1377 = &label_try_begin_907_1377_impl;
              USE(label_try_begin_907_1377);
              Goto(label_try_begin_907_1377);
              if (label_try_begin_907_1377->is_used())
              {
                BIND(label_try_begin_907_1377);
                // ../../test/torque/test-torque.tq:419:9
                {
                  // ../../test/torque/test-torque.tq:419:9
                  TNode<FixedArray> t2275 = UncheckedCast<FixedArray>(cast12ATFixedArray(implicit_cast<TNode<HeapObject>>(UncheckedCast<HeapObject>(implicit_cast<TNode<Object>>((*_value_902)))), label__NextCase_669));
                  USE(implicit_cast<TNode<FixedArray>>(t2275));
                  TNode<FixedArray> a_908_impl;
                  auto a_908 = &a_908_impl;
                  USE(a_908);
                  *a_908 = implicit_cast<TNode<FixedArray>>(t2275);
                  // ../../test/torque/test-torque.tq:419:31
                  {
                    // ../../test/torque/test-torque.tq:420:9
                    TNode<Smi> t2276 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>((*a_908))));
                    TNode<Int32T> t2277 = UncheckedCast<Int32T>(convert7ATint32(implicit_cast<TNode<Smi>>(t2276)));
                    USE(implicit_cast<TNode<Int32T>>(t2277));
                    TNode<Int32T> t2278 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_421).value()), implicit_cast<TNode<Int32T>>(t2277)));
                    USE(implicit_cast<TNode<Int32T>>(t2278));
                    *result_421 = implicit_cast<TNode<Int32T>>(t2278);
                  }
                }
                Goto(label_try_done_906_1376);
              }
              if (label__NextCase_669->is_used())
              {
                BIND(label__NextCase_669);
                // ../../test/torque/test-torque.tq:419:9
                {
                  // ../../test/torque/test-torque.tq:421:9
                  TNode<HeapNumber> x_909_impl;
                  auto x_909 = &x_909_impl;
                  USE(x_909);
                  *x_909 = implicit_cast<TNode<HeapNumber>>(UncheckedCast<HeapNumber>(implicit_cast<TNode<Object>>((*_value_902))));
                  // ../../test/torque/test-torque.tq:421:31
                  {
                    // ../../test/torque/test-torque.tq:422:9
                    int31_t t2279 = 7;
                    TNode<Int32T> t2280 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2279)));
                    TNode<Int32T> t2281 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_421).value()), implicit_cast<TNode<Int32T>>(t2280)));
                    USE(implicit_cast<TNode<Int32T>>(t2281));
                    *result_421 = implicit_cast<TNode<Int32T>>(t2281);
                  }
                }
                Goto(label_try_done_906_1376);
              }
              BIND(label_try_done_906_1376);
            }
          }
          Goto(label_try_done_903_1374);
        }
        BIND(label_try_done_903_1374);
      }
    }
    // ../../test/torque/test-torque.tq:426:5
    *_return_420 = implicit_cast<TNode<Int32T>>((*result_421).value());
    Goto(label_macro_end_1371);
  }
  BIND(label_macro_end_1371);
  return implicit_cast<TNode<Int32T>>((*_return_420).value());
}

void TestBuiltinsFromDSLAssembler::TestTypeswitch() {
  Label label_macro_end_1378_impl(this, {});
  Label* label_macro_end_1378 = &label_macro_end_1378_impl;
  USE(label_macro_end_1378);
  // ../../test/torque/test-torque.tq:429:26
  {
    // ../../test/torque/test-torque.tq:430:5
    Label label__True_670_impl(this);
    Label* label__True_670 = &label__True_670_impl;
    USE(label__True_670);
    Label label__False_671_impl(this);
    Label* label__False_671 = &label__False_671_impl;
    USE(label__False_671);
    int31_t t2282 = 5;
    TNode<Smi> t2283 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2282)));
    USE(implicit_cast<TNode<Smi>>(t2283));
    TNode<Int32T> t2284 = UncheckedCast<Int32T>(TypeswitchExample(implicit_cast<TNode<Object>>(t2283)));
    USE(implicit_cast<TNode<Int32T>>(t2284));
    int31_t t2285 = 26;
    TNode<Int32T> t2286 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2285)));
    TNode<BoolT> t2287 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2284), implicit_cast<TNode<Int32T>>(t2286)));
    USE(implicit_cast<TNode<BoolT>>(t2287));
    Branch(implicit_cast<TNode<BoolT>>(t2287), label__True_670, label__False_671);
    BIND(label__False_671);
    Print("assert 'TypeswitchExample(from_constexpr<Smi>(5)) == 26' failed at ../../test/torque/test-torque.tq:430:5");
    Unreachable();
    BIND(label__True_670);
    // ../../test/torque/test-torque.tq:431:5
    int31_t t2288 = 3;
    TNode<IntPtrT> t2289 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t2288)));
    TNode<FixedArray> t2290 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(t2289)));
    USE(implicit_cast<TNode<FixedArray>>(t2290));
    TNode<FixedArray> a_910_impl;
    auto a_910 = &a_910_impl;
    USE(a_910);
    *a_910 = implicit_cast<TNode<FixedArray>>(t2290);
    // ../../test/torque/test-torque.tq:432:5
    Label label__True_672_impl(this);
    Label* label__True_672 = &label__True_672_impl;
    USE(label__True_672);
    Label label__False_673_impl(this);
    Label* label__False_673 = &label__False_673_impl;
    USE(label__False_673);
    TNode<Int32T> t2291 = UncheckedCast<Int32T>(TypeswitchExample(implicit_cast<TNode<Object>>((*a_910))));
    USE(implicit_cast<TNode<Int32T>>(t2291));
    int31_t t2292 = 13;
    TNode<Int32T> t2293 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2292)));
    TNode<BoolT> t2294 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2291), implicit_cast<TNode<Int32T>>(t2293)));
    USE(implicit_cast<TNode<BoolT>>(t2294));
    Branch(implicit_cast<TNode<BoolT>>(t2294), label__True_672, label__False_673);
    BIND(label__False_673);
    Print("assert 'TypeswitchExample(a) == 13' failed at ../../test/torque/test-torque.tq:432:5");
    Unreachable();
    BIND(label__True_672);
    // ../../test/torque/test-torque.tq:433:5
    Label label__True_674_impl(this);
    Label* label__True_674 = &label__True_674_impl;
    USE(label__True_674);
    Label label__False_675_impl(this);
    Label* label__False_675 = &label__False_675_impl;
    USE(label__False_675);
    double t2295 = 0.5;
    TNode<Number> t2296 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(t2295)));
    USE(implicit_cast<TNode<Number>>(t2296));
    TNode<Int32T> t2297 = UncheckedCast<Int32T>(TypeswitchExample(implicit_cast<TNode<Object>>(t2296)));
    USE(implicit_cast<TNode<Int32T>>(t2297));
    int31_t t2298 = 27;
    TNode<Int32T> t2299 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2298)));
    TNode<BoolT> t2300 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2297), implicit_cast<TNode<Int32T>>(t2299)));
    USE(implicit_cast<TNode<BoolT>>(t2300));
    Branch(implicit_cast<TNode<BoolT>>(t2300), label__True_674, label__False_675);
    BIND(label__False_675);
    Print("assert 'TypeswitchExample(from_constexpr<Number>(0.5)) == 27' failed at ../../test/torque/test-torque.tq:433:5");
    Unreachable();
    BIND(label__True_674);
  }
}

void TestBuiltinsFromDSLAssembler::TestGenericOverload() {
  Label label_macro_end_1379_impl(this, {});
  Label* label_macro_end_1379 = &label_macro_end_1379_impl;
  USE(label_macro_end_1379);
  // ../../test/torque/test-torque.tq:443:31
  {
    // ../../test/torque/test-torque.tq:444:5
    int31_t t2301 = 5;
    TNode<Smi> x_smi_911_impl;
    auto x_smi_911 = &x_smi_911_impl;
    USE(x_smi_911);
    TNode<Smi> t2302 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2301)));
    *x_smi_911 = implicit_cast<TNode<Smi>>(t2302);
    // ../../test/torque/test-torque.tq:445:5
    TNode<Object> x_object_912_impl;
    auto x_object_912 = &x_object_912_impl;
    USE(x_object_912);
    *x_object_912 = implicit_cast<TNode<Object>>((*x_smi_911));
    // ../../test/torque/test-torque.tq:446:5
    Label label__True_676_impl(this);
    Label* label__True_676 = &label__True_676_impl;
    USE(label__True_676);
    Label label__False_677_impl(this);
    Label* label__False_677 = &label__False_677_impl;
    USE(label__False_677);
    TNode<Smi> t2303 = UncheckedCast<Smi>(ExampleGenericOverload5ATSmi(implicit_cast<TNode<Smi>>((*x_smi_911))));
    USE(implicit_cast<TNode<Smi>>(t2303));
    int31_t t2304 = 6;
    TNode<Smi> t2305 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2304)));
    TNode<BoolT> t2306 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2303), implicit_cast<TNode<Smi>>(t2305)));
    USE(implicit_cast<TNode<BoolT>>(t2306));
    Branch(implicit_cast<TNode<BoolT>>(t2306), label__True_676, label__False_677);
    BIND(label__False_677);
    Print("assert 'ExampleGenericOverload<Smi>(x_smi) == 6' failed at ../../test/torque/test-torque.tq:446:5");
    Unreachable();
    BIND(label__True_676);
    // ../../test/torque/test-torque.tq:447:5
    Label label__True_678_impl(this);
    Label* label__True_678 = &label__True_678_impl;
    USE(label__True_678);
    Label label__False_679_impl(this);
    Label* label__False_679 = &label__False_679_impl;
    USE(label__False_679);
    TNode<Object> t2307 = UncheckedCast<Object>(ExampleGenericOverload22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>((*x_object_912))));
    USE(implicit_cast<TNode<Object>>(t2307));
    TNode<Smi> t2308 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2307)));
    USE(implicit_cast<TNode<Smi>>(t2308));
    int31_t t2309 = 5;
    TNode<Smi> t2310 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2309)));
    TNode<BoolT> t2311 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2308), implicit_cast<TNode<Smi>>(t2310)));
    USE(implicit_cast<TNode<BoolT>>(t2311));
    Branch(implicit_cast<TNode<BoolT>>(t2311), label__True_678, label__False_679);
    BIND(label__False_679);
    Print("assert 'unsafe_cast<Smi>(ExampleGenericOverload<Object>(x_object)) == 5' failed at ../../test/torque/test-torque.tq:447:5");
    Unreachable();
    BIND(label__True_678);
  }
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Smi> p_param = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:85:70
  {
    // ../../test/torque/test-torque.tq:86:5
    Return(implicit_cast<TNode<Object>>(Null()));
  }
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest5ATSmi(TNode<Smi> p_param) {
  TVARIABLE(Object, _return_560_impl);
  auto _return_560 = &_return_560_impl;
  USE(_return_560);
  Label label_macro_end_1530_impl(this, {_return_560});
  Label* label_macro_end_1530 = &label_macro_end_1530_impl;
  USE(label_macro_end_1530);
  // ../../test/torque/test-torque.tq:131:54
  {
    // ../../test/torque/test-torque.tq:132:5
    *_return_560 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1530);
  }
  BIND(label_macro_end_1530);
  return implicit_cast<TNode<Object>>((*_return_560).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels5ATSmi(TNode<Smi> p_param, Label* label_X_1014) {
  TVARIABLE(Object, _return_561_impl);
  auto _return_561 = &_return_561_impl;
  USE(_return_561);
  Label label_macro_end_1531_impl(this, {_return_561});
  Label* label_macro_end_1531 = &label_macro_end_1531_impl;
  USE(label_macro_end_1531);
  // ../../test/torque/test-torque.tq:139:73
  {
    // ../../test/torque/test-torque.tq:140:5
    *_return_561 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1531);
  }
  BIND(label_macro_end_1531);
  return implicit_cast<TNode<Object>>((*_return_561).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(TNode<Object> p_x) {
  TVARIABLE(Object, _return_562_impl);
  auto _return_562 = &_return_562_impl;
  USE(_return_562);
  Label label_macro_end_1533_impl(this, {_return_562});
  Label* label_macro_end_1533 = &label_macro_end_1533_impl;
  USE(label_macro_end_1533);
  // ../../test/torque/test-torque.tq:394:45
  {
    // ../../test/torque/test-torque.tq:395:5
    {
      // ../../test/torque/test-torque.tq:395:17
      TNode<Object> _value_1140_impl;
      auto _value_1140 = &_value_1140_impl;
      USE(_value_1140);
      *_value_1140 = implicit_cast<TNode<Object>>(p_x);
      // ../../test/torque/test-torque.tq:396:7
      {
        Label label_try_done_1141_1534_impl(this);
        Label* label_try_done_1141_1534 = &label_try_done_1141_1534_impl;
        USE(label_try_done_1141_1534);
        Label label__NextCase_1015_impl(this);
        Label* label__NextCase_1015 = &label__NextCase_1015_impl;
        USE(label__NextCase_1015);
        Label label_try_begin_1142_1535_impl(this);
        Label* label_try_begin_1142_1535 = &label_try_begin_1142_1535_impl;
        USE(label_try_begin_1142_1535);
        Goto(label_try_begin_1142_1535);
        if (label_try_begin_1142_1535->is_used())
        {
          BIND(label_try_begin_1142_1535);
          // ../../test/torque/test-torque.tq:396:7
          {
            // ../../test/torque/test-torque.tq:396:7
            TNode<Smi> t3464 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>((*_value_1140)), label__NextCase_1015));
            USE(implicit_cast<TNode<Smi>>(t3464));
            TNode<Smi> x_1143_impl;
            auto x_1143 = &x_1143_impl;
            USE(x_1143);
            *x_1143 = implicit_cast<TNode<Smi>>(t3464);
            // ../../test/torque/test-torque.tq:396:22
            {
              // ../../test/torque/test-torque.tq:397:9
              int31_t t3465 = 1;
              TNode<Smi> t3466 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3465)));
              TNode<Smi> t3467 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*x_1143)), implicit_cast<TNode<Smi>>(t3466)));
              USE(implicit_cast<TNode<Smi>>(t3467));
              *_return_562 = implicit_cast<TNode<Object>>(t3467);
              Goto(label_macro_end_1533);
            }
          }
        }
        if (label__NextCase_1015->is_used())
        {
          BIND(label__NextCase_1015);
          // ../../test/torque/test-torque.tq:396:7
          {
            // ../../test/torque/test-torque.tq:398:9
            TNode<Object> o_1144_impl;
            auto o_1144 = &o_1144_impl;
            USE(o_1144);
            *o_1144 = implicit_cast<TNode<Object>>(UncheckedCast<HeapObject>(implicit_cast<TNode<Object>>((*_value_1140))));
            // ../../test/torque/test-torque.tq:398:22
            {
              // ../../test/torque/test-torque.tq:399:9
              *_return_562 = implicit_cast<TNode<Object>>((*o_1144));
              Goto(label_macro_end_1533);
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1533);
  return implicit_cast<TNode<Object>>((*_return_562).value());
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::ExampleGenericOverload5ATSmi(TNode<Smi> p_o) {
  TVARIABLE(Smi, _return_565_impl);
  auto _return_565 = &_return_565_impl;
  USE(_return_565);
  Label label_macro_end_1537_impl(this, {_return_565});
  Label* label_macro_end_1537 = &label_macro_end_1537_impl;
  USE(label_macro_end_1537);
  // ../../test/torque/test-torque.tq:439:54
  {
    // ../../test/torque/test-torque.tq:440:5
    int31_t t3470 = 1;
    TNode<Smi> t3471 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3470)));
    TNode<Smi> t3472 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_o), implicit_cast<TNode<Smi>>(t3471)));
    USE(implicit_cast<TNode<Smi>>(t3472));
    *_return_565 = implicit_cast<TNode<Smi>>(t3472);
    Goto(label_macro_end_1537);
  }
  BIND(label_macro_end_1537);
  return implicit_cast<TNode<Smi>>((*_return_565).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::ExampleGenericOverload22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Object, _return_566_impl);
  auto _return_566 = &_return_566_impl;
  USE(_return_566);
  Label label_macro_end_1538_impl(this, {_return_566});
  Label* label_macro_end_1538 = &label_macro_end_1538_impl;
  USE(label_macro_end_1538);
  // ../../test/torque/test-torque.tq:436:57
  {
    // ../../test/torque/test-torque.tq:437:5
    *_return_566 = implicit_cast<TNode<Object>>(p_o);
    Goto(label_macro_end_1538);
  }
  BIND(label_macro_end_1538);
  return implicit_cast<TNode<Object>>((*_return_566).value());
}

}  // namespace internal
}  // namespace v8

