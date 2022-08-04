#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-data-view-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewGetterNameString(ElementsKind p_kind) {
  TVARIABLE(String, _return_179_impl);
  auto _return_179 = &_return_179_impl;
  USE(_return_179);
  Label label_macro_end_1221_impl(this, {_return_179});
  Label* label_macro_end_1221 = &label_macro_end_1221_impl;
  USE(label_macro_end_1221);
  // ../../src/builtins/data-view.tq:16:76
  {
    // ../../src/builtins/data-view.tq:17:5
    {
      bool t711 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t711));
      if ((implicit_cast<bool>(t711))) {
        // ../../src/builtins/data-view.tq:17:43
        {
          // ../../src/builtins/data-view.tq:18:7
          const char* t712 = "DataView.prototype.getUint8";
          TNode<String> t713 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t712)));
          *_return_179 = implicit_cast<TNode<String>>(t713);
          Goto(label_macro_end_1221);
        }
      } else {
        // ../../src/builtins/data-view.tq:19:12
        {
          bool t714 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t714));
          if ((implicit_cast<bool>(t714))) {
            // ../../src/builtins/data-view.tq:19:49
            {
              // ../../src/builtins/data-view.tq:20:7
              const char* t715 = "DataView.prototype.getInt8";
              TNode<String> t716 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t715)));
              *_return_179 = implicit_cast<TNode<String>>(t716);
              Goto(label_macro_end_1221);
            }
          } else {
            // ../../src/builtins/data-view.tq:21:12
            {
              bool t717 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t717));
              if ((implicit_cast<bool>(t717))) {
                // ../../src/builtins/data-view.tq:21:51
                {
                  // ../../src/builtins/data-view.tq:22:7
                  const char* t718 = "DataView.prototype.getUint16";
                  TNode<String> t719 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t718)));
                  *_return_179 = implicit_cast<TNode<String>>(t719);
                  Goto(label_macro_end_1221);
                }
              } else {
                // ../../src/builtins/data-view.tq:23:12
                {
                  bool t720 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t720));
                  if ((implicit_cast<bool>(t720))) {
                    // ../../src/builtins/data-view.tq:23:50
                    {
                      // ../../src/builtins/data-view.tq:24:7
                      const char* t721 = "DataView.prototype.getInt16";
                      TNode<String> t722 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t721)));
                      *_return_179 = implicit_cast<TNode<String>>(t722);
                      Goto(label_macro_end_1221);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:25:12
                    {
                      bool t723 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t723));
                      if ((implicit_cast<bool>(t723))) {
                        // ../../src/builtins/data-view.tq:25:51
                        {
                          // ../../src/builtins/data-view.tq:26:7
                          const char* t724 = "DataView.prototype.getUint32";
                          TNode<String> t725 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t724)));
                          *_return_179 = implicit_cast<TNode<String>>(t725);
                          Goto(label_macro_end_1221);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:27:12
                        {
                          bool t726 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t726));
                          if ((implicit_cast<bool>(t726))) {
                            // ../../src/builtins/data-view.tq:27:50
                            {
                              // ../../src/builtins/data-view.tq:28:7
                              const char* t727 = "DataView.prototype.getInt32";
                              TNode<String> t728 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t727)));
                              *_return_179 = implicit_cast<TNode<String>>(t728);
                              Goto(label_macro_end_1221);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:29:12
                            {
                              bool t729 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t729));
                              if ((implicit_cast<bool>(t729))) {
                                // ../../src/builtins/data-view.tq:29:52
                                {
                                  // ../../src/builtins/data-view.tq:30:7
                                  const char* t730 = "DataView.prototype.getFloat32";
                                  TNode<String> t731 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t730)));
                                  *_return_179 = implicit_cast<TNode<String>>(t731);
                                  Goto(label_macro_end_1221);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:31:12
                                {
                                  bool t732 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t732));
                                  if ((implicit_cast<bool>(t732))) {
                                    // ../../src/builtins/data-view.tq:31:52
                                    {
                                      // ../../src/builtins/data-view.tq:32:7
                                      const char* t733 = "DataView.prototype.getFloat64";
                                      TNode<String> t734 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t733)));
                                      *_return_179 = implicit_cast<TNode<String>>(t734);
                                      Goto(label_macro_end_1221);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:33:12
                                    {
                                      bool t735 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t735));
                                      if ((implicit_cast<bool>(t735))) {
                                        // ../../src/builtins/data-view.tq:33:53
                                        {
                                          // ../../src/builtins/data-view.tq:34:7
                                          const char* t736 = "DataView.prototype.getBigInt64";
                                          TNode<String> t737 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t736)));
                                          *_return_179 = implicit_cast<TNode<String>>(t737);
                                          Goto(label_macro_end_1221);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:35:12
                                        {
                                          bool t738 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t738));
                                          if ((implicit_cast<bool>(t738))) {
                                            // ../../src/builtins/data-view.tq:35:54
                                            {
                                              // ../../src/builtins/data-view.tq:36:7
                                              const char* t739 = "DataView.prototype.getBigUint64";
                                              TNode<String> t740 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t739)));
                                              *_return_179 = implicit_cast<TNode<String>>(t740);
                                              Goto(label_macro_end_1221);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:37:12
                                            {
                                              // ../../src/builtins/data-view.tq:38:7
                                              Unreachable();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1221);
  return implicit_cast<TNode<String>>((*_return_179).value());
}

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewSetterNameString(ElementsKind p_kind) {
  TVARIABLE(String, _return_180_impl);
  auto _return_180 = &_return_180_impl;
  USE(_return_180);
  Label label_macro_end_1222_impl(this, {_return_180});
  Label* label_macro_end_1222 = &label_macro_end_1222_impl;
  USE(label_macro_end_1222);
  // ../../src/builtins/data-view.tq:42:76
  {
    // ../../src/builtins/data-view.tq:43:5
    {
      bool t741 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t741));
      if ((implicit_cast<bool>(t741))) {
        // ../../src/builtins/data-view.tq:43:43
        {
          // ../../src/builtins/data-view.tq:44:7
          const char* t742 = "DataView.prototype.setUint8";
          TNode<String> t743 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t742)));
          *_return_180 = implicit_cast<TNode<String>>(t743);
          Goto(label_macro_end_1222);
        }
      } else {
        // ../../src/builtins/data-view.tq:45:12
        {
          bool t744 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t744));
          if ((implicit_cast<bool>(t744))) {
            // ../../src/builtins/data-view.tq:45:49
            {
              // ../../src/builtins/data-view.tq:46:7
              const char* t745 = "DataView.prototype.setInt8";
              TNode<String> t746 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t745)));
              *_return_180 = implicit_cast<TNode<String>>(t746);
              Goto(label_macro_end_1222);
            }
          } else {
            // ../../src/builtins/data-view.tq:47:12
            {
              bool t747 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t747));
              if ((implicit_cast<bool>(t747))) {
                // ../../src/builtins/data-view.tq:47:51
                {
                  // ../../src/builtins/data-view.tq:48:7
                  const char* t748 = "DataView.prototype.setUint16";
                  TNode<String> t749 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t748)));
                  *_return_180 = implicit_cast<TNode<String>>(t749);
                  Goto(label_macro_end_1222);
                }
              } else {
                // ../../src/builtins/data-view.tq:49:12
                {
                  bool t750 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t750));
                  if ((implicit_cast<bool>(t750))) {
                    // ../../src/builtins/data-view.tq:49:50
                    {
                      // ../../src/builtins/data-view.tq:50:7
                      const char* t751 = "DataView.prototype.setInt16";
                      TNode<String> t752 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t751)));
                      *_return_180 = implicit_cast<TNode<String>>(t752);
                      Goto(label_macro_end_1222);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:51:12
                    {
                      bool t753 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t753));
                      if ((implicit_cast<bool>(t753))) {
                        // ../../src/builtins/data-view.tq:51:51
                        {
                          // ../../src/builtins/data-view.tq:52:7
                          const char* t754 = "DataView.prototype.setUint32";
                          TNode<String> t755 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t754)));
                          *_return_180 = implicit_cast<TNode<String>>(t755);
                          Goto(label_macro_end_1222);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:53:12
                        {
                          bool t756 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t756));
                          if ((implicit_cast<bool>(t756))) {
                            // ../../src/builtins/data-view.tq:53:50
                            {
                              // ../../src/builtins/data-view.tq:54:7
                              const char* t757 = "DataView.prototype.setInt32";
                              TNode<String> t758 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t757)));
                              *_return_180 = implicit_cast<TNode<String>>(t758);
                              Goto(label_macro_end_1222);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:55:12
                            {
                              bool t759 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t759));
                              if ((implicit_cast<bool>(t759))) {
                                // ../../src/builtins/data-view.tq:55:52
                                {
                                  // ../../src/builtins/data-view.tq:56:7
                                  const char* t760 = "DataView.prototype.setFloat32";
                                  TNode<String> t761 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t760)));
                                  *_return_180 = implicit_cast<TNode<String>>(t761);
                                  Goto(label_macro_end_1222);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:57:12
                                {
                                  bool t762 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t762));
                                  if ((implicit_cast<bool>(t762))) {
                                    // ../../src/builtins/data-view.tq:57:52
                                    {
                                      // ../../src/builtins/data-view.tq:58:7
                                      const char* t763 = "DataView.prototype.setFloat64";
                                      TNode<String> t764 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t763)));
                                      *_return_180 = implicit_cast<TNode<String>>(t764);
                                      Goto(label_macro_end_1222);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:59:12
                                    {
                                      bool t765 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t765));
                                      if ((implicit_cast<bool>(t765))) {
                                        // ../../src/builtins/data-view.tq:59:53
                                        {
                                          // ../../src/builtins/data-view.tq:60:7
                                          const char* t766 = "DataView.prototype.setBigInt64";
                                          TNode<String> t767 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t766)));
                                          *_return_180 = implicit_cast<TNode<String>>(t767);
                                          Goto(label_macro_end_1222);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:61:12
                                        {
                                          bool t768 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t768));
                                          if ((implicit_cast<bool>(t768))) {
                                            // ../../src/builtins/data-view.tq:61:54
                                            {
                                              // ../../src/builtins/data-view.tq:62:7
                                              const char* t769 = "DataView.prototype.setBigUint64";
                                              TNode<String> t770 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t769)));
                                              *_return_180 = implicit_cast<TNode<String>>(t770);
                                              Goto(label_macro_end_1222);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:63:12
                                            {
                                              // ../../src/builtins/data-view.tq:64:7
                                              Unreachable();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1222);
  return implicit_cast<TNode<String>>((*_return_180).value());
}

compiler::TNode<BoolT> DataViewBuiltinsFromDSLAssembler::WasNeutered(TNode<JSArrayBufferView> p_view) {
  TVARIABLE(BoolT, _return_181_impl);
  auto _return_181 = &_return_181_impl;
  USE(_return_181);
  Label label_macro_end_1223_impl(this, {_return_181});
  Label* label_macro_end_1223 = &label_macro_end_1223_impl;
  USE(label_macro_end_1223);
  // ../../src/builtins/data-view.tq:68:52
  {
    // ../../src/builtins/data-view.tq:69:5
    TNode<JSArrayBuffer> t771 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>(p_view)));
    TNode<BoolT> t772 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t771)));
    USE(implicit_cast<TNode<BoolT>>(t772));
    *_return_181 = implicit_cast<TNode<BoolT>>(t772);
    Goto(label_macro_end_1223);
  }
  BIND(label_macro_end_1223);
  return implicit_cast<TNode<BoolT>>((*_return_181).value());
}

compiler::TNode<JSDataView> DataViewBuiltinsFromDSLAssembler::ValidateDataView(TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method) {
  TVARIABLE(JSDataView, _return_182_impl);
  auto _return_182 = &_return_182_impl;
  USE(_return_182);
  Label label_macro_end_1224_impl(this, {_return_182});
  Label* label_macro_end_1224 = &label_macro_end_1224_impl;
  USE(label_macro_end_1224);
  // ../../src/builtins/data-view.tq:73:46
  {
    // ../../src/builtins/data-view.tq:74:5
    {
      Label label_try_done_749_1225_impl(this);
      Label* label_try_done_749_1225 = &label_try_done_749_1225_impl;
      USE(label_try_done_749_1225);
      Label label_CastError_284_impl(this);
      Label* label_CastError_284 = &label_CastError_284_impl;
      USE(label_CastError_284);
      Label label_try_begin_750_1226_impl(this);
      Label* label_try_begin_750_1226 = &label_try_begin_750_1226_impl;
      USE(label_try_begin_750_1226);
      Goto(label_try_begin_750_1226);
      if (label_try_begin_750_1226->is_used())
      {
        BIND(label_try_begin_750_1226);
        // ../../src/builtins/data-view.tq:74:9
        {
          // ../../src/builtins/data-view.tq:75:7
          TNode<JSDataView> t773 = UncheckedCast<JSDataView>(cast12ATJSDataView(implicit_cast<TNode<Object>>(p_o), label_CastError_284));
          USE(implicit_cast<TNode<JSDataView>>(t773));
          *_return_182 = implicit_cast<TNode<JSDataView>>(t773);
          Goto(label_macro_end_1224);
        }
      }
      if (label_CastError_284->is_used())
      {
        BIND(label_CastError_284);
        // ../../src/builtins/data-view.tq:77:21
        {
          // ../../src/builtins/data-view.tq:78:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kIncompatibleMethodReceiver), implicit_cast<TNode<Object>>(p_method));
        }
      }
    }
  }
  BIND(label_macro_end_1224);
  return implicit_cast<TNode<JSDataView>>((*_return_182).value());
}

TF_BUILTIN(DataViewPrototypeGetBuffer, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:84:72
  {
    // ../../src/builtins/data-view.tq:85:5
    const char* t774 = "get DataView.prototype.buffer";
    TNode<String> t775 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t774)));
    TNode<JSDataView> t776 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t775)));
    USE(implicit_cast<TNode<JSDataView>>(t776));
    TVARIABLE(JSDataView, data_view_183_impl);
    auto data_view_183 = &data_view_183_impl;
    USE(data_view_183);
    *data_view_183 = implicit_cast<TNode<JSDataView>>(t776);
    // ../../src/builtins/data-view.tq:87:5
    TNode<JSArrayBuffer> t777 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*data_view_183).value())));
    arguments->PopAndReturn(implicit_cast<TNode<JSArrayBuffer>>(t777));
  }
}

TF_BUILTIN(DataViewPrototypeGetByteLength, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:92:65
  {
    // ../../src/builtins/data-view.tq:93:5
    const char* t778 = "get DataView.prototype.byte_length";
    TNode<String> t779 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t778)));
    TNode<JSDataView> t780 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t779)));
    USE(implicit_cast<TNode<JSDataView>>(t780));
    TVARIABLE(JSDataView, data_view_184_impl);
    auto data_view_184 = &data_view_184_impl;
    USE(data_view_184);
    *data_view_184 = implicit_cast<TNode<JSDataView>>(t780);
    // ../../src/builtins/data-view.tq:95:5
    {
      Label label__True_285_impl(this);
      Label* label__True_285 = &label__True_285_impl;
      USE(label__True_285);
      Label label__False_286_impl(this, {});
      Label* label__False_286 = &label__False_286_impl;
      USE(label__False_286);
      TNode<BoolT> t781 = UncheckedCast<BoolT>(WasNeutered(implicit_cast<TNode<JSArrayBufferView>>((*data_view_184).value())));
      USE(implicit_cast<TNode<BoolT>>(t781));
      Branch(implicit_cast<TNode<BoolT>>(t781), label__True_285, label__False_286);
      if (label__True_285->is_used())
      {
        BIND(label__True_285);
        // ../../src/builtins/data-view.tq:95:33
        {
          // ../../src/builtins/data-view.tq:98:7
          int31_t t782 = 0;
          TNode<Number> t783 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t782)));
          arguments->PopAndReturn(implicit_cast<TNode<Number>>(t783));
        }
      }
      BIND(label__False_286);
    }
    // ../../src/builtins/data-view.tq:100:5
    TNode<Number> t784 = UncheckedCast<Number>(LoadDataViewByteLength(implicit_cast<TNode<JSDataView>>((*data_view_184).value())));
    arguments->PopAndReturn(implicit_cast<TNode<Number>>(t784));
  }
}

TF_BUILTIN(DataViewPrototypeGetByteOffset, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:105:65
  {
    // ../../src/builtins/data-view.tq:106:5
    const char* t785 = "get DataView.prototype.byte_offset";
    TNode<String> t786 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t785)));
    TNode<JSDataView> t787 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t786)));
    USE(implicit_cast<TNode<JSDataView>>(t787));
    TVARIABLE(JSDataView, data_view_185_impl);
    auto data_view_185 = &data_view_185_impl;
    USE(data_view_185);
    *data_view_185 = implicit_cast<TNode<JSDataView>>(t787);
    // ../../src/builtins/data-view.tq:108:5
    {
      Label label__True_287_impl(this);
      Label* label__True_287 = &label__True_287_impl;
      USE(label__True_287);
      Label label__False_288_impl(this, {});
      Label* label__False_288 = &label__False_288_impl;
      USE(label__False_288);
      TNode<BoolT> t788 = UncheckedCast<BoolT>(WasNeutered(implicit_cast<TNode<JSArrayBufferView>>((*data_view_185).value())));
      USE(implicit_cast<TNode<BoolT>>(t788));
      Branch(implicit_cast<TNode<BoolT>>(t788), label__True_287, label__False_288);
      if (label__True_287->is_used())
      {
        BIND(label__True_287);
        // ../../src/builtins/data-view.tq:108:33
        {
          // ../../src/builtins/data-view.tq:111:7
          int31_t t789 = 0;
          TNode<Number> t790 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t789)));
          arguments->PopAndReturn(implicit_cast<TNode<Number>>(t790));
        }
      }
      BIND(label__False_288);
    }
    // ../../src/builtins/data-view.tq:113:5
    TNode<Number> t791 = UncheckedCast<Number>(LoadDataViewByteOffset(implicit_cast<TNode<JSDataView>>((*data_view_185).value())));
    arguments->PopAndReturn(implicit_cast<TNode<Number>>(t791));
  }
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataView8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, bool p_signed) {
  TVARIABLE(Smi, _return_186_impl);
  auto _return_186 = &_return_186_impl;
  USE(_return_186);
  Label label_macro_end_1227_impl(this, {_return_186});
  Label* label_macro_end_1227 = &label_macro_end_1227_impl;
  USE(label_macro_end_1227);
  // ../../src/builtins/data-view.tq:127:56
  {
    // ../../src/builtins/data-view.tq:128:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../../src/builtins/data-view.tq:128:27
        {
          // ../../src/builtins/data-view.tq:129:7
          TNode<RawPtrT> t792 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
          TNode<Int32T> t793 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>(t792), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Int32T>>(t793));
          TNode<Smi> t794 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Int32T>>(t793)));
          USE(implicit_cast<TNode<Smi>>(t794));
          *_return_186 = implicit_cast<TNode<Smi>>(t794);
          Goto(label_macro_end_1227);
        }
      } else {
        // ../../src/builtins/data-view.tq:130:12
        {
          // ../../src/builtins/data-view.tq:131:7
          TNode<RawPtrT> t795 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
          TNode<Uint32T> t796 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>(t795), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Uint32T>>(t796));
          TNode<Smi> t797 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Uint32T>>(t796)));
          USE(implicit_cast<TNode<Smi>>(t797));
          *_return_186 = implicit_cast<TNode<Smi>>(t797);
          Goto(label_macro_end_1227);
        }
      }
    }
  }
  BIND(label_macro_end_1227);
  return implicit_cast<TNode<Smi>>((*_return_186).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(Number, _return_187_impl);
  auto _return_187 = &_return_187_impl;
  USE(_return_187);
  Label label_macro_end_1228_impl(this, {_return_187});
  Label* label_macro_end_1228 = &label_macro_end_1228_impl;
  USE(label_macro_end_1228);
  // ../../src/builtins/data-view.tq:137:56
  {
    // ../../src/builtins/data-view.tq:138:5
    TNode<RawPtrT> t798 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_188_impl);
    auto data_pointer_188 = &data_pointer_188_impl;
    USE(data_pointer_188);
    *data_pointer_188 = implicit_cast<TNode<RawPtrT>>(t798);
    // ../../src/builtins/data-view.tq:140:5
    TVARIABLE(Int32T, b0_189_impl);
    auto b0_189 = &b0_189_impl;
    USE(b0_189);
    // ../../src/builtins/data-view.tq:141:5
    TVARIABLE(Int32T, b1_190_impl);
    auto b1_190 = &b1_190_impl;
    USE(b1_190);
    // ../../src/builtins/data-view.tq:142:5
    TVARIABLE(Int32T, result_191_impl);
    auto result_191 = &result_191_impl;
    USE(result_191);
    // ../../src/builtins/data-view.tq:145:5
    {
      Label label__True_291_impl(this);
      Label* label__True_291 = &label__True_291_impl;
      USE(label__True_291);
      Label label__False_292_impl(this);
      Label* label__False_292 = &label__False_292_impl;
      USE(label__False_292);
      Label label_if_done_label_751_1229_impl(this, {b0_189, b1_190, result_191});
      Label* label_if_done_label_751_1229 = &label_if_done_label_751_1229_impl;
      USE(label_if_done_label_751_1229);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_291, label__False_292);
      if (label__True_291->is_used())
      {
        BIND(label__True_291);
        // ../../src/builtins/data-view.tq:145:34
        {
          // ../../src/builtins/data-view.tq:146:7
          TNode<Uint32T> t799 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_188).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Uint32T>>(t799));
          TNode<Int32T> t800 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(t799)));
          USE(implicit_cast<TNode<Int32T>>(t800));
          *b0_189 = implicit_cast<TNode<Int32T>>(t800);
          // ../../src/builtins/data-view.tq:147:7
          int31_t t801 = 1;
          TNode<IntPtrT> t802 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t801)));
          TNode<IntPtrT> t803 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t802)));
          USE(implicit_cast<TNode<IntPtrT>>(t803));
          TNode<Int32T> t804 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>((*data_pointer_188).value()), implicit_cast<TNode<IntPtrT>>(t803)));
          USE(implicit_cast<TNode<Int32T>>(t804));
          *b1_190 = implicit_cast<TNode<Int32T>>(t804);
          // ../../src/builtins/data-view.tq:148:7
          int31_t t805 = 8;
          TNode<Int32T> t806 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t805)));
          TNode<Int32T> t807 = UncheckedCast<Int32T>(Word32Shl(implicit_cast<TNode<Int32T>>((*b1_190).value()), implicit_cast<TNode<Int32T>>(t806)));
          USE(implicit_cast<TNode<Int32T>>(t807));
          TNode<Int32T> t808 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>(t807), implicit_cast<TNode<Int32T>>((*b0_189).value())));
          USE(implicit_cast<TNode<Int32T>>(t808));
          *result_191 = implicit_cast<TNode<Int32T>>(t808);
        }
        Goto(label_if_done_label_751_1229);
      }
      if (label__False_292->is_used())
      {
        BIND(label__False_292);
        // ../../src/builtins/data-view.tq:149:12
        {
          // ../../src/builtins/data-view.tq:150:7
          TNode<Int32T> t809 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>((*data_pointer_188).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Int32T>>(t809));
          *b0_189 = implicit_cast<TNode<Int32T>>(t809);
          // ../../src/builtins/data-view.tq:151:7
          int31_t t810 = 1;
          TNode<IntPtrT> t811 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t810)));
          TNode<IntPtrT> t812 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t811)));
          USE(implicit_cast<TNode<IntPtrT>>(t812));
          TNode<Uint32T> t813 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_188).value()), implicit_cast<TNode<IntPtrT>>(t812)));
          USE(implicit_cast<TNode<Uint32T>>(t813));
          TNode<Int32T> t814 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(t813)));
          USE(implicit_cast<TNode<Int32T>>(t814));
          *b1_190 = implicit_cast<TNode<Int32T>>(t814);
          // ../../src/builtins/data-view.tq:152:7
          int31_t t815 = 8;
          TNode<Int32T> t816 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t815)));
          TNode<Int32T> t817 = UncheckedCast<Int32T>(Word32Shl(implicit_cast<TNode<Int32T>>((*b0_189).value()), implicit_cast<TNode<Int32T>>(t816)));
          USE(implicit_cast<TNode<Int32T>>(t817));
          TNode<Int32T> t818 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>(t817), implicit_cast<TNode<Int32T>>((*b1_190).value())));
          USE(implicit_cast<TNode<Int32T>>(t818));
          *result_191 = implicit_cast<TNode<Int32T>>(t818);
        }
        Goto(label_if_done_label_751_1229);
      }
      BIND(label_if_done_label_751_1229);
    }
    // ../../src/builtins/data-view.tq:154:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../../src/builtins/data-view.tq:154:27
        {
          // ../../src/builtins/data-view.tq:155:7
          TNode<Smi> t819 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Int32T>>((*result_191).value())));
          USE(implicit_cast<TNode<Smi>>(t819));
          *_return_187 = implicit_cast<TNode<Number>>(t819);
          Goto(label_macro_end_1228);
        }
      } else {
        // ../../src/builtins/data-view.tq:156:12
        {
          // ../../src/builtins/data-view.tq:158:7
          int31_t t820 = 0xFFFF;
          TNode<Int32T> t821 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t820)));
          TNode<Int32T> t822 = UncheckedCast<Int32T>(Word32And(implicit_cast<TNode<Int32T>>((*result_191).value()), implicit_cast<TNode<Int32T>>(t821)));
          USE(implicit_cast<TNode<Int32T>>(t822));
          TNode<Smi> t823 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Int32T>>(t822)));
          USE(implicit_cast<TNode<Smi>>(t823));
          *_return_187 = implicit_cast<TNode<Number>>(t823);
          Goto(label_macro_end_1228);
        }
      }
    }
  }
  BIND(label_macro_end_1228);
  return implicit_cast<TNode<Number>>((*_return_187).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Number, _return_192_impl);
  auto _return_192 = &_return_192_impl;
  USE(_return_192);
  Label label_macro_end_1230_impl(this, {_return_192});
  Label* label_macro_end_1230 = &label_macro_end_1230_impl;
  USE(label_macro_end_1230);
  // ../../src/builtins/data-view.tq:164:62
  {
    // ../../src/builtins/data-view.tq:165:5
    TNode<RawPtrT> t824 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_193_impl);
    auto data_pointer_193 = &data_pointer_193_impl;
    USE(data_pointer_193);
    *data_pointer_193 = implicit_cast<TNode<RawPtrT>>(t824);
    // ../../src/builtins/data-view.tq:167:5
    TNode<Uint32T> t825 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_193).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t825));
    TVARIABLE(Uint32T, b0_194_impl);
    auto b0_194 = &b0_194_impl;
    USE(b0_194);
    *b0_194 = implicit_cast<TNode<Uint32T>>(t825);
    // ../../src/builtins/data-view.tq:168:5
    int31_t t826 = 1;
    TNode<IntPtrT> t827 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t826)));
    TNode<IntPtrT> t828 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t827)));
    USE(implicit_cast<TNode<IntPtrT>>(t828));
    TNode<Uint32T> t829 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_193).value()), implicit_cast<TNode<IntPtrT>>(t828)));
    USE(implicit_cast<TNode<Uint32T>>(t829));
    TVARIABLE(Uint32T, b1_195_impl);
    auto b1_195 = &b1_195_impl;
    USE(b1_195);
    *b1_195 = implicit_cast<TNode<Uint32T>>(t829);
    // ../../src/builtins/data-view.tq:169:5
    int31_t t830 = 2;
    TNode<IntPtrT> t831 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t830)));
    TNode<IntPtrT> t832 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t831)));
    USE(implicit_cast<TNode<IntPtrT>>(t832));
    TNode<Uint32T> t833 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_193).value()), implicit_cast<TNode<IntPtrT>>(t832)));
    USE(implicit_cast<TNode<Uint32T>>(t833));
    TVARIABLE(Uint32T, b2_196_impl);
    auto b2_196 = &b2_196_impl;
    USE(b2_196);
    *b2_196 = implicit_cast<TNode<Uint32T>>(t833);
    // ../../src/builtins/data-view.tq:170:5
    int31_t t834 = 3;
    TNode<IntPtrT> t835 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t834)));
    TNode<IntPtrT> t836 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t835)));
    USE(implicit_cast<TNode<IntPtrT>>(t836));
    TNode<Uint32T> t837 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_193).value()), implicit_cast<TNode<IntPtrT>>(t836)));
    USE(implicit_cast<TNode<Uint32T>>(t837));
    TVARIABLE(Uint32T, b3_197_impl);
    auto b3_197 = &b3_197_impl;
    USE(b3_197);
    *b3_197 = implicit_cast<TNode<Uint32T>>(t837);
    // ../../src/builtins/data-view.tq:171:5
    TVARIABLE(Uint32T, result_198_impl);
    auto result_198 = &result_198_impl;
    USE(result_198);
    // ../../src/builtins/data-view.tq:173:5
    {
      Label label__True_295_impl(this);
      Label* label__True_295 = &label__True_295_impl;
      USE(label__True_295);
      Label label__False_296_impl(this);
      Label* label__False_296 = &label__False_296_impl;
      USE(label__False_296);
      Label label_if_done_label_752_1231_impl(this, {result_198});
      Label* label_if_done_label_752_1231 = &label_if_done_label_752_1231_impl;
      USE(label_if_done_label_752_1231);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_295, label__False_296);
      if (label__True_295->is_used())
      {
        BIND(label__True_295);
        // ../../src/builtins/data-view.tq:173:34
        {
          // ../../src/builtins/data-view.tq:174:7
          int31_t t838 = 24;
          TNode<Uint32T> t839 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t838)));
          TNode<Uint32T> t840 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_197).value()), implicit_cast<TNode<Uint32T>>(t839)));
          USE(implicit_cast<TNode<Uint32T>>(t840));
          int31_t t841 = 16;
          TNode<Uint32T> t842 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t841)));
          TNode<Uint32T> t843 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_196).value()), implicit_cast<TNode<Uint32T>>(t842)));
          USE(implicit_cast<TNode<Uint32T>>(t843));
          TNode<Uint32T> t844 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t840), implicit_cast<TNode<Uint32T>>(t843)));
          USE(implicit_cast<TNode<Uint32T>>(t844));
          int31_t t845 = 8;
          TNode<Uint32T> t846 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t845)));
          TNode<Uint32T> t847 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_195).value()), implicit_cast<TNode<Uint32T>>(t846)));
          USE(implicit_cast<TNode<Uint32T>>(t847));
          TNode<Uint32T> t848 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t844), implicit_cast<TNode<Uint32T>>(t847)));
          USE(implicit_cast<TNode<Uint32T>>(t848));
          TNode<Uint32T> t849 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t848), implicit_cast<TNode<Uint32T>>((*b0_194).value())));
          USE(implicit_cast<TNode<Uint32T>>(t849));
          *result_198 = implicit_cast<TNode<Uint32T>>(t849);
        }
        Goto(label_if_done_label_752_1231);
      }
      if (label__False_296->is_used())
      {
        BIND(label__False_296);
        // ../../src/builtins/data-view.tq:175:12
        {
          // ../../src/builtins/data-view.tq:176:7
          int31_t t850 = 24;
          TNode<Uint32T> t851 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t850)));
          TNode<Uint32T> t852 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_194).value()), implicit_cast<TNode<Uint32T>>(t851)));
          USE(implicit_cast<TNode<Uint32T>>(t852));
          int31_t t853 = 16;
          TNode<Uint32T> t854 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t853)));
          TNode<Uint32T> t855 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_195).value()), implicit_cast<TNode<Uint32T>>(t854)));
          USE(implicit_cast<TNode<Uint32T>>(t855));
          TNode<Uint32T> t856 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t852), implicit_cast<TNode<Uint32T>>(t855)));
          USE(implicit_cast<TNode<Uint32T>>(t856));
          int31_t t857 = 8;
          TNode<Uint32T> t858 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t857)));
          TNode<Uint32T> t859 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_196).value()), implicit_cast<TNode<Uint32T>>(t858)));
          USE(implicit_cast<TNode<Uint32T>>(t859));
          TNode<Uint32T> t860 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t856), implicit_cast<TNode<Uint32T>>(t859)));
          USE(implicit_cast<TNode<Uint32T>>(t860));
          TNode<Uint32T> t861 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t860), implicit_cast<TNode<Uint32T>>((*b3_197).value())));
          USE(implicit_cast<TNode<Uint32T>>(t861));
          *result_198 = implicit_cast<TNode<Uint32T>>(t861);
        }
        Goto(label_if_done_label_752_1231);
      }
      BIND(label_if_done_label_752_1231);
    }
    // ../../src/builtins/data-view.tq:179:5
    {
      bool t862 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
      USE(implicit_cast<bool>(t862));
      if ((implicit_cast<bool>(t862))) {
        // ../../src/builtins/data-view.tq:179:43
        {
          // ../../src/builtins/data-view.tq:180:7
          TNode<Int32T> t863 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*result_198).value())));
          USE(implicit_cast<TNode<Int32T>>(t863));
          TNode<Number> t864 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Int32T>>(t863)));
          USE(implicit_cast<TNode<Number>>(t864));
          *_return_192 = implicit_cast<TNode<Number>>(t864);
          Goto(label_macro_end_1230);
        }
      } else {
        // ../../src/builtins/data-view.tq:181:12
        {
          bool t865 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
          USE(implicit_cast<bool>(t865));
          if ((implicit_cast<bool>(t865))) {
            // ../../src/builtins/data-view.tq:181:51
            {
              // ../../src/builtins/data-view.tq:182:7
              TNode<Number> t866 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Uint32T>>((*result_198).value())));
              USE(implicit_cast<TNode<Number>>(t866));
              *_return_192 = implicit_cast<TNode<Number>>(t866);
              Goto(label_macro_end_1230);
            }
          } else {
            // ../../src/builtins/data-view.tq:183:12
            {
              bool t867 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
              USE(implicit_cast<bool>(t867));
              if ((implicit_cast<bool>(t867))) {
                // ../../src/builtins/data-view.tq:183:52
                {
                  // ../../src/builtins/data-view.tq:184:7
                  TNode<Float32T> t868 = UncheckedCast<Float32T>(BitcastInt32ToFloat32(implicit_cast<TNode<Uint32T>>((*result_198).value())));
                  USE(implicit_cast<TNode<Float32T>>(t868));
                  TNode<Float64T> t869 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Float32T>>(t868)));
                  USE(implicit_cast<TNode<Float64T>>(t869));
                  TVARIABLE(Float64T, float_res_199_impl);
                  auto float_res_199 = &float_res_199_impl;
                  USE(float_res_199);
                  *float_res_199 = implicit_cast<TNode<Float64T>>(t869);
                  // ../../src/builtins/data-view.tq:185:7
                  TNode<Number> t870 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Float64T>>((*float_res_199).value())));
                  USE(implicit_cast<TNode<Number>>(t870));
                  *_return_192 = implicit_cast<TNode<Number>>(t870);
                  Goto(label_macro_end_1230);
                }
              } else {
                // ../../src/builtins/data-view.tq:186:12
                {
                  // ../../src/builtins/data-view.tq:187:7
                  Unreachable();
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1230);
  return implicit_cast<TNode<Number>>((*_return_192).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian) {
  TVARIABLE(Number, _return_200_impl);
  auto _return_200 = &_return_200_impl;
  USE(_return_200);
  Label label_macro_end_1232_impl(this, {_return_200});
  Label* label_macro_end_1232 = &label_macro_end_1232_impl;
  USE(label_macro_end_1232);
  // ../../src/builtins/data-view.tq:192:68
  {
    // ../../src/builtins/data-view.tq:193:5
    TNode<RawPtrT> t871 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_201_impl);
    auto data_pointer_201 = &data_pointer_201_impl;
    USE(data_pointer_201);
    *data_pointer_201 = implicit_cast<TNode<RawPtrT>>(t871);
    // ../../src/builtins/data-view.tq:195:5
    TNode<Uint32T> t872 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_201).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t872));
    TVARIABLE(Uint32T, b0_202_impl);
    auto b0_202 = &b0_202_impl;
    USE(b0_202);
    *b0_202 = implicit_cast<TNode<Uint32T>>(t872);
    // ../../src/builtins/data-view.tq:196:5
    int31_t t873 = 1;
    TNode<IntPtrT> t874 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t873)));
    TNode<IntPtrT> t875 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t874)));
    USE(implicit_cast<TNode<IntPtrT>>(t875));
    TNode<Uint32T> t876 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_201).value()), implicit_cast<TNode<IntPtrT>>(t875)));
    USE(implicit_cast<TNode<Uint32T>>(t876));
    TVARIABLE(Uint32T, b1_203_impl);
    auto b1_203 = &b1_203_impl;
    USE(b1_203);
    *b1_203 = implicit_cast<TNode<Uint32T>>(t876);
    // ../../src/builtins/data-view.tq:197:5
    int31_t t877 = 2;
    TNode<IntPtrT> t878 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t877)));
    TNode<IntPtrT> t879 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t878)));
    USE(implicit_cast<TNode<IntPtrT>>(t879));
    TNode<Uint32T> t880 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_201).value()), implicit_cast<TNode<IntPtrT>>(t879)));
    USE(implicit_cast<TNode<Uint32T>>(t880));
    TVARIABLE(Uint32T, b2_204_impl);
    auto b2_204 = &b2_204_impl;
    USE(b2_204);
    *b2_204 = implicit_cast<TNode<Uint32T>>(t880);
    // ../../src/builtins/data-view.tq:198:5
    int31_t t881 = 3;
    TNode<IntPtrT> t882 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t881)));
    TNode<IntPtrT> t883 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t882)));
    USE(implicit_cast<TNode<IntPtrT>>(t883));
    TNode<Uint32T> t884 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_201).value()), implicit_cast<TNode<IntPtrT>>(t883)));
    USE(implicit_cast<TNode<Uint32T>>(t884));
    TVARIABLE(Uint32T, b3_205_impl);
    auto b3_205 = &b3_205_impl;
    USE(b3_205);
    *b3_205 = implicit_cast<TNode<Uint32T>>(t884);
    // ../../src/builtins/data-view.tq:199:5
    int31_t t885 = 4;
    TNode<IntPtrT> t886 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t885)));
    TNode<IntPtrT> t887 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t886)));
    USE(implicit_cast<TNode<IntPtrT>>(t887));
    TNode<Uint32T> t888 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_201).value()), implicit_cast<TNode<IntPtrT>>(t887)));
    USE(implicit_cast<TNode<Uint32T>>(t888));
    TVARIABLE(Uint32T, b4_206_impl);
    auto b4_206 = &b4_206_impl;
    USE(b4_206);
    *b4_206 = implicit_cast<TNode<Uint32T>>(t888);
    // ../../src/builtins/data-view.tq:200:5
    int31_t t889 = 5;
    TNode<IntPtrT> t890 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t889)));
    TNode<IntPtrT> t891 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t890)));
    USE(implicit_cast<TNode<IntPtrT>>(t891));
    TNode<Uint32T> t892 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_201).value()), implicit_cast<TNode<IntPtrT>>(t891)));
    USE(implicit_cast<TNode<Uint32T>>(t892));
    TVARIABLE(Uint32T, b5_207_impl);
    auto b5_207 = &b5_207_impl;
    USE(b5_207);
    *b5_207 = implicit_cast<TNode<Uint32T>>(t892);
    // ../../src/builtins/data-view.tq:201:5
    int31_t t893 = 6;
    TNode<IntPtrT> t894 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t893)));
    TNode<IntPtrT> t895 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t894)));
    USE(implicit_cast<TNode<IntPtrT>>(t895));
    TNode<Uint32T> t896 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_201).value()), implicit_cast<TNode<IntPtrT>>(t895)));
    USE(implicit_cast<TNode<Uint32T>>(t896));
    TVARIABLE(Uint32T, b6_208_impl);
    auto b6_208 = &b6_208_impl;
    USE(b6_208);
    *b6_208 = implicit_cast<TNode<Uint32T>>(t896);
    // ../../src/builtins/data-view.tq:202:5
    int31_t t897 = 7;
    TNode<IntPtrT> t898 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t897)));
    TNode<IntPtrT> t899 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t898)));
    USE(implicit_cast<TNode<IntPtrT>>(t899));
    TNode<Uint32T> t900 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_201).value()), implicit_cast<TNode<IntPtrT>>(t899)));
    USE(implicit_cast<TNode<Uint32T>>(t900));
    TVARIABLE(Uint32T, b7_209_impl);
    auto b7_209 = &b7_209_impl;
    USE(b7_209);
    *b7_209 = implicit_cast<TNode<Uint32T>>(t900);
    // ../../src/builtins/data-view.tq:203:5
    TVARIABLE(Uint32T, low_word_210_impl);
    auto low_word_210 = &low_word_210_impl;
    USE(low_word_210);
    // ../../src/builtins/data-view.tq:204:5
    TVARIABLE(Uint32T, high_word_211_impl);
    auto high_word_211 = &high_word_211_impl;
    USE(high_word_211);
    // ../../src/builtins/data-view.tq:206:5
    {
      Label label__True_303_impl(this);
      Label* label__True_303 = &label__True_303_impl;
      USE(label__True_303);
      Label label__False_304_impl(this);
      Label* label__False_304 = &label__False_304_impl;
      USE(label__False_304);
      Label label_if_done_label_753_1233_impl(this, {high_word_211, low_word_210});
      Label* label_if_done_label_753_1233 = &label_if_done_label_753_1233_impl;
      USE(label_if_done_label_753_1233);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_303, label__False_304);
      if (label__True_303->is_used())
      {
        BIND(label__True_303);
        // ../../src/builtins/data-view.tq:206:34
        {
          // ../../src/builtins/data-view.tq:207:7
          int31_t t901 = 24;
          TNode<Uint32T> t902 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t901)));
          TNode<Uint32T> t903 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_205).value()), implicit_cast<TNode<Uint32T>>(t902)));
          USE(implicit_cast<TNode<Uint32T>>(t903));
          int31_t t904 = 16;
          TNode<Uint32T> t905 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t904)));
          TNode<Uint32T> t906 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_204).value()), implicit_cast<TNode<Uint32T>>(t905)));
          USE(implicit_cast<TNode<Uint32T>>(t906));
          TNode<Uint32T> t907 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t903), implicit_cast<TNode<Uint32T>>(t906)));
          USE(implicit_cast<TNode<Uint32T>>(t907));
          int31_t t908 = 8;
          TNode<Uint32T> t909 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t908)));
          TNode<Uint32T> t910 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_203).value()), implicit_cast<TNode<Uint32T>>(t909)));
          USE(implicit_cast<TNode<Uint32T>>(t910));
          TNode<Uint32T> t911 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t907), implicit_cast<TNode<Uint32T>>(t910)));
          USE(implicit_cast<TNode<Uint32T>>(t911));
          TNode<Uint32T> t912 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t911), implicit_cast<TNode<Uint32T>>((*b0_202).value())));
          USE(implicit_cast<TNode<Uint32T>>(t912));
          *low_word_210 = implicit_cast<TNode<Uint32T>>(t912);
          // ../../src/builtins/data-view.tq:208:7
          int31_t t913 = 24;
          TNode<Uint32T> t914 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t913)));
          TNode<Uint32T> t915 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b7_209).value()), implicit_cast<TNode<Uint32T>>(t914)));
          USE(implicit_cast<TNode<Uint32T>>(t915));
          int31_t t916 = 16;
          TNode<Uint32T> t917 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t916)));
          TNode<Uint32T> t918 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_208).value()), implicit_cast<TNode<Uint32T>>(t917)));
          USE(implicit_cast<TNode<Uint32T>>(t918));
          TNode<Uint32T> t919 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t915), implicit_cast<TNode<Uint32T>>(t918)));
          USE(implicit_cast<TNode<Uint32T>>(t919));
          int31_t t920 = 8;
          TNode<Uint32T> t921 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t920)));
          TNode<Uint32T> t922 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_207).value()), implicit_cast<TNode<Uint32T>>(t921)));
          USE(implicit_cast<TNode<Uint32T>>(t922));
          TNode<Uint32T> t923 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t919), implicit_cast<TNode<Uint32T>>(t922)));
          USE(implicit_cast<TNode<Uint32T>>(t923));
          TNode<Uint32T> t924 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t923), implicit_cast<TNode<Uint32T>>((*b4_206).value())));
          USE(implicit_cast<TNode<Uint32T>>(t924));
          *high_word_211 = implicit_cast<TNode<Uint32T>>(t924);
        }
        Goto(label_if_done_label_753_1233);
      }
      if (label__False_304->is_used())
      {
        BIND(label__False_304);
        // ../../src/builtins/data-view.tq:209:12
        {
          // ../../src/builtins/data-view.tq:210:7
          int31_t t925 = 24;
          TNode<Uint32T> t926 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t925)));
          TNode<Uint32T> t927 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_202).value()), implicit_cast<TNode<Uint32T>>(t926)));
          USE(implicit_cast<TNode<Uint32T>>(t927));
          int31_t t928 = 16;
          TNode<Uint32T> t929 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t928)));
          TNode<Uint32T> t930 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_203).value()), implicit_cast<TNode<Uint32T>>(t929)));
          USE(implicit_cast<TNode<Uint32T>>(t930));
          TNode<Uint32T> t931 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t927), implicit_cast<TNode<Uint32T>>(t930)));
          USE(implicit_cast<TNode<Uint32T>>(t931));
          int31_t t932 = 8;
          TNode<Uint32T> t933 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t932)));
          TNode<Uint32T> t934 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_204).value()), implicit_cast<TNode<Uint32T>>(t933)));
          USE(implicit_cast<TNode<Uint32T>>(t934));
          TNode<Uint32T> t935 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t931), implicit_cast<TNode<Uint32T>>(t934)));
          USE(implicit_cast<TNode<Uint32T>>(t935));
          TNode<Uint32T> t936 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t935), implicit_cast<TNode<Uint32T>>((*b3_205).value())));
          USE(implicit_cast<TNode<Uint32T>>(t936));
          *high_word_211 = implicit_cast<TNode<Uint32T>>(t936);
          // ../../src/builtins/data-view.tq:211:7
          int31_t t937 = 24;
          TNode<Uint32T> t938 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t937)));
          TNode<Uint32T> t939 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b4_206).value()), implicit_cast<TNode<Uint32T>>(t938)));
          USE(implicit_cast<TNode<Uint32T>>(t939));
          int31_t t940 = 16;
          TNode<Uint32T> t941 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t940)));
          TNode<Uint32T> t942 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_207).value()), implicit_cast<TNode<Uint32T>>(t941)));
          USE(implicit_cast<TNode<Uint32T>>(t942));
          TNode<Uint32T> t943 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t939), implicit_cast<TNode<Uint32T>>(t942)));
          USE(implicit_cast<TNode<Uint32T>>(t943));
          int31_t t944 = 8;
          TNode<Uint32T> t945 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t944)));
          TNode<Uint32T> t946 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_208).value()), implicit_cast<TNode<Uint32T>>(t945)));
          USE(implicit_cast<TNode<Uint32T>>(t946));
          TNode<Uint32T> t947 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t943), implicit_cast<TNode<Uint32T>>(t946)));
          USE(implicit_cast<TNode<Uint32T>>(t947));
          TNode<Uint32T> t948 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t947), implicit_cast<TNode<Uint32T>>((*b7_209).value())));
          USE(implicit_cast<TNode<Uint32T>>(t948));
          *low_word_210 = implicit_cast<TNode<Uint32T>>(t948);
        }
        Goto(label_if_done_label_753_1233);
      }
      BIND(label_if_done_label_753_1233);
    }
    // ../../src/builtins/data-view.tq:214:5
    int31_t t949 = 0;
    TVARIABLE(Float64T, result_212_impl);
    auto result_212 = &result_212_impl;
    USE(result_212);
    TNode<Float64T> t950 = UncheckedCast<Float64T>(from_constexpr9ATfloat64(implicit_cast<int31_t>(t949)));
    *result_212 = implicit_cast<TNode<Float64T>>(t950);
    // ../../src/builtins/data-view.tq:215:5
    TNode<Float64T> t951 = UncheckedCast<Float64T>(Float64InsertLowWord32(implicit_cast<TNode<Float64T>>((*result_212).value()), implicit_cast<TNode<Uint32T>>((*low_word_210).value())));
    USE(implicit_cast<TNode<Float64T>>(t951));
    *result_212 = implicit_cast<TNode<Float64T>>(t951);
    // ../../src/builtins/data-view.tq:216:5
    TNode<Float64T> t952 = UncheckedCast<Float64T>(Float64InsertHighWord32(implicit_cast<TNode<Float64T>>((*result_212).value()), implicit_cast<TNode<Uint32T>>((*high_word_211).value())));
    USE(implicit_cast<TNode<Float64T>>(t952));
    *result_212 = implicit_cast<TNode<Float64T>>(t952);
    // ../../src/builtins/data-view.tq:218:5
    TNode<Number> t953 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Float64T>>((*result_212).value())));
    USE(implicit_cast<TNode<Number>>(t953));
    *_return_200 = implicit_cast<TNode<Number>>(t953);
    Goto(label_macro_end_1232);
  }
  BIND(label_macro_end_1232);
  return implicit_cast<TNode<Number>>((*_return_200).value());
}

bool DataViewBuiltinsFromDSLAssembler::kPositiveBigInt() {
  return implicit_cast<bool>(false);
}

bool DataViewBuiltinsFromDSLAssembler::kNegativeBigInt() {
  return implicit_cast<bool>(true);
}

int31_t DataViewBuiltinsFromDSLAssembler::kZeroDigitBigInt() {
  int31_t t954 = 0;
  return implicit_cast<int31_t>(t954);
}

int31_t DataViewBuiltinsFromDSLAssembler::kOneDigitBigInt() {
  int31_t t955 = 1;
  return implicit_cast<int31_t>(t955);
}

int31_t DataViewBuiltinsFromDSLAssembler::kTwoDigitBigInt() {
  int31_t t956 = 2;
  return implicit_cast<int31_t>(t956);
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::CreateEmptyBigInt(TNode<BoolT> p_is_positive, int31_t p_length) {
  TVARIABLE(BigInt, _return_213_impl);
  auto _return_213 = &_return_213_impl;
  USE(_return_213);
  Label label_macro_end_1234_impl(this, {_return_213});
  Label* label_macro_end_1234 = &label_macro_end_1234_impl;
  USE(label_macro_end_1234);
  // ../../src/builtins/data-view.tq:233:79
  {
    // ../../src/builtins/data-view.tq:235:5
    TNode<IntPtrT> t957 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(p_length)));
    TNode<BigInt> t958 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t957)));
    USE(implicit_cast<TNode<BigInt>>(t958));
    TVARIABLE(BigInt, result_214_impl);
    auto result_214 = &result_214_impl;
    USE(result_214);
    *result_214 = implicit_cast<TNode<BigInt>>(t958);
    // ../../src/builtins/data-view.tq:238:5
    {
      Label label__True_305_impl(this);
      Label* label__True_305 = &label__True_305_impl;
      USE(label__True_305);
      Label label__False_306_impl(this);
      Label* label__False_306 = &label__False_306_impl;
      USE(label__False_306);
      Label label_if_done_label_754_1235_impl(this, {});
      Label* label_if_done_label_754_1235 = &label_if_done_label_754_1235_impl;
      USE(label_if_done_label_754_1235);
      Branch(implicit_cast<TNode<BoolT>>(p_is_positive), label__True_305, label__False_306);
      if (label__True_305->is_used())
      {
        BIND(label__True_305);
        // ../../src/builtins/data-view.tq:238:22
        {
          // ../../src/builtins/data-view.tq:239:7
          TNode<IntPtrT> t959 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(implicit_cast<bool>(kPositiveBigInt()), implicit_cast<int31_t>(p_length)));
          USE(implicit_cast<TNode<IntPtrT>>(t959));
          StoreBigIntBitfield(implicit_cast<TNode<BigInt>>((*result_214).value()), implicit_cast<TNode<IntPtrT>>(t959));
        }
        Goto(label_if_done_label_754_1235);
      }
      if (label__False_306->is_used())
      {
        BIND(label__False_306);
        // ../../src/builtins/data-view.tq:241:12
        {
          // ../../src/builtins/data-view.tq:242:7
          TNode<IntPtrT> t960 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(implicit_cast<bool>(kNegativeBigInt()), implicit_cast<int31_t>(p_length)));
          USE(implicit_cast<TNode<IntPtrT>>(t960));
          StoreBigIntBitfield(implicit_cast<TNode<BigInt>>((*result_214).value()), implicit_cast<TNode<IntPtrT>>(t960));
        }
        Goto(label_if_done_label_754_1235);
      }
      BIND(label_if_done_label_754_1235);
    }
    // ../../src/builtins/data-view.tq:246:5
    *_return_213 = implicit_cast<TNode<BigInt>>((*result_214).value());
    Goto(label_macro_end_1234);
  }
  BIND(label_macro_end_1234);
  return implicit_cast<TNode<BigInt>>((*_return_213).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn64Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_215_impl);
  auto _return_215 = &_return_215_impl;
  USE(_return_215);
  Label label_macro_end_1236_impl(this, {_return_215});
  Label* label_macro_end_1236 = &label_macro_end_1236_impl;
  USE(label_macro_end_1236);
  // ../../src/builtins/data-view.tq:251:59
  {
    // ../../src/builtins/data-view.tq:254:5
    {
      Label label__True_307_impl(this);
      Label* label__True_307 = &label__True_307_impl;
      USE(label__True_307);
      Label label__False_308_impl(this, {});
      Label* label__False_308 = &label__False_308_impl;
      USE(label__False_308);
      Label label__True_309_impl(this);
      Label* label__True_309 = &label__True_309_impl;
      USE(label__True_309);
      int31_t t961 = 0;
      TNode<Uint32T> t962 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t961)));
      TNode<BoolT> t963 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t962)));
      USE(implicit_cast<TNode<BoolT>>(t963));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t963), label__False_308);
      int31_t t964 = 0;
      TNode<Uint32T> t965 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t964)));
      TNode<BoolT> t966 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t965)));
      USE(implicit_cast<TNode<BoolT>>(t966));
      Branch(implicit_cast<TNode<BoolT>>(t966), label__True_307, label__False_308);
      if (label__True_307->is_used())
      {
        BIND(label__True_307);
        // ../../src/builtins/data-view.tq:254:42
        {
          // ../../src/builtins/data-view.tq:255:7
          TNode<IntPtrT> t967 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(kZeroDigitBigInt())));
          TNode<BigInt> t968 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t967)));
          USE(implicit_cast<TNode<BigInt>>(t968));
          *_return_215 = implicit_cast<TNode<BigInt>>(t968);
          Goto(label_macro_end_1236);
        }
      }
      BIND(label__False_308);
    }
    // ../../src/builtins/data-view.tq:258:5
    TVARIABLE(BoolT, is_positive_216_impl);
    auto is_positive_216 = &is_positive_216_impl;
    USE(is_positive_216);
    TNode<BoolT> t969 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
    *is_positive_216 = implicit_cast<TNode<BoolT>>(t969);
    // ../../src/builtins/data-view.tq:259:5
    TNode<UintPtrT> t970 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Uint32T>>(p_high_word)));
    USE(implicit_cast<TNode<UintPtrT>>(t970));
    TNode<IntPtrT> t971 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t970)));
    USE(implicit_cast<TNode<IntPtrT>>(t971));
    TVARIABLE(IntPtrT, high_part_217_impl);
    auto high_part_217 = &high_part_217_impl;
    USE(high_part_217);
    *high_part_217 = implicit_cast<TNode<IntPtrT>>(t971);
    // ../../src/builtins/data-view.tq:260:5
    TNode<UintPtrT> t972 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Uint32T>>(p_low_word)));
    USE(implicit_cast<TNode<UintPtrT>>(t972));
    TNode<IntPtrT> t973 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t972)));
    USE(implicit_cast<TNode<IntPtrT>>(t973));
    TVARIABLE(IntPtrT, low_part_218_impl);
    auto low_part_218 = &low_part_218_impl;
    USE(low_part_218);
    *low_part_218 = implicit_cast<TNode<IntPtrT>>(t973);
    // ../../src/builtins/data-view.tq:261:5
    int31_t t974 = 32;
    TNode<IntPtrT> t975 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t974)));
    TNode<IntPtrT> t976 = UncheckedCast<IntPtrT>(WordShl(implicit_cast<TNode<IntPtrT>>((*high_part_217).value()), implicit_cast<TNode<IntPtrT>>(t975)));
    USE(implicit_cast<TNode<IntPtrT>>(t976));
    TNode<IntPtrT> t977 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(t976), implicit_cast<TNode<IntPtrT>>((*low_part_218).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t977));
    TVARIABLE(IntPtrT, raw_value_219_impl);
    auto raw_value_219 = &raw_value_219_impl;
    USE(raw_value_219);
    *raw_value_219 = implicit_cast<TNode<IntPtrT>>(t977);
    // ../../src/builtins/data-view.tq:263:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../../src/builtins/data-view.tq:263:27
        {
          // ../../src/builtins/data-view.tq:264:7
          {
            Label label__True_312_impl(this);
            Label* label__True_312 = &label__True_312_impl;
            USE(label__True_312);
            Label label__False_313_impl(this, {is_positive_216, raw_value_219});
            Label* label__False_313 = &label__False_313_impl;
            USE(label__False_313);
            int31_t t978 = 0;
            TNode<IntPtrT> t979 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t978)));
            TNode<BoolT> t980 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*raw_value_219).value()), implicit_cast<TNode<IntPtrT>>(t979)));
            USE(implicit_cast<TNode<BoolT>>(t980));
            Branch(implicit_cast<TNode<BoolT>>(t980), label__True_312, label__False_313);
            if (label__True_312->is_used())
            {
              BIND(label__True_312);
              // ../../src/builtins/data-view.tq:264:26
              {
                // ../../src/builtins/data-view.tq:265:9
                TNode<BoolT> t981 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                *is_positive_216 = implicit_cast<TNode<BoolT>>(t981);
                // ../../src/builtins/data-view.tq:267:9
                int31_t t982 = 0;
                TNode<IntPtrT> t983 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t982)));
                TNode<IntPtrT> t984 = UncheckedCast<IntPtrT>(IntPtrSub(implicit_cast<TNode<IntPtrT>>(t983), implicit_cast<TNode<IntPtrT>>((*raw_value_219).value())));
                USE(implicit_cast<TNode<IntPtrT>>(t984));
                *raw_value_219 = implicit_cast<TNode<IntPtrT>>(t984);
              }
              Goto(label__False_313);
            }
            BIND(label__False_313);
          }
        }
      }
    }
    // ../../src/builtins/data-view.tq:272:5
    TNode<BigInt> t985 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*is_positive_216).value()), implicit_cast<int31_t>(kOneDigitBigInt())));
    USE(implicit_cast<TNode<BigInt>>(t985));
    TVARIABLE(BigInt, result_220_impl);
    auto result_220 = &result_220_impl;
    USE(result_220);
    *result_220 = implicit_cast<TNode<BigInt>>(t985);
    // ../../src/builtins/data-view.tq:274:5
    int31_t t986 = 0;
    TNode<UintPtrT> t987 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>((*raw_value_219).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t987));
    StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_220).value()), implicit_cast<int31_t>(t986), implicit_cast<TNode<UintPtrT>>(t987));
    // ../../src/builtins/data-view.tq:276:5
    *_return_215 = implicit_cast<TNode<BigInt>>((*result_220).value());
    Goto(label_macro_end_1236);
  }
  BIND(label_macro_end_1236);
  return implicit_cast<TNode<BigInt>>((*_return_215).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn32Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_221_impl);
  auto _return_221 = &_return_221_impl;
  USE(_return_221);
  Label label_macro_end_1237_impl(this, {_return_221});
  Label* label_macro_end_1237 = &label_macro_end_1237_impl;
  USE(label_macro_end_1237);
  // ../../src/builtins/data-view.tq:281:59
  {
    // ../../src/builtins/data-view.tq:284:5
    {
      Label label__True_314_impl(this);
      Label* label__True_314 = &label__True_314_impl;
      USE(label__True_314);
      Label label__False_315_impl(this, {});
      Label* label__False_315 = &label__False_315_impl;
      USE(label__False_315);
      Label label__True_316_impl(this);
      Label* label__True_316 = &label__True_316_impl;
      USE(label__True_316);
      int31_t t988 = 0;
      TNode<Uint32T> t989 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t988)));
      TNode<BoolT> t990 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t989)));
      USE(implicit_cast<TNode<BoolT>>(t990));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t990), label__False_315);
      int31_t t991 = 0;
      TNode<Uint32T> t992 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t991)));
      TNode<BoolT> t993 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t992)));
      USE(implicit_cast<TNode<BoolT>>(t993));
      Branch(implicit_cast<TNode<BoolT>>(t993), label__True_314, label__False_315);
      if (label__True_314->is_used())
      {
        BIND(label__True_314);
        // ../../src/builtins/data-view.tq:284:42
        {
          // ../../src/builtins/data-view.tq:285:7
          TNode<IntPtrT> t994 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(kZeroDigitBigInt())));
          TNode<BigInt> t995 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t994)));
          USE(implicit_cast<TNode<BigInt>>(t995));
          *_return_221 = implicit_cast<TNode<BigInt>>(t995);
          Goto(label_macro_end_1237);
        }
      }
      BIND(label__False_315);
    }
    // ../../src/builtins/data-view.tq:289:5
    TVARIABLE(BoolT, need_two_digits_222_impl);
    auto need_two_digits_222 = &need_two_digits_222_impl;
    USE(need_two_digits_222);
    TNode<BoolT> t996 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
    *need_two_digits_222 = implicit_cast<TNode<BoolT>>(t996);
    // ../../src/builtins/data-view.tq:290:5
    TVARIABLE(BoolT, is_positive_223_impl);
    auto is_positive_223 = &is_positive_223_impl;
    USE(is_positive_223);
    TNode<BoolT> t997 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
    *is_positive_223 = implicit_cast<TNode<BoolT>>(t997);
    // ../../src/builtins/data-view.tq:294:5
    TNode<Int32T> t998 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_low_word)));
    USE(implicit_cast<TNode<Int32T>>(t998));
    TVARIABLE(Int32T, low_part_224_impl);
    auto low_part_224 = &low_part_224_impl;
    USE(low_part_224);
    *low_part_224 = implicit_cast<TNode<Int32T>>(t998);
    // ../../src/builtins/data-view.tq:295:5
    TNode<Int32T> t999 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_high_word)));
    USE(implicit_cast<TNode<Int32T>>(t999));
    TVARIABLE(Int32T, high_part_225_impl);
    auto high_part_225 = &high_part_225_impl;
    USE(high_part_225);
    *high_part_225 = implicit_cast<TNode<Int32T>>(t999);
    // ../../src/builtins/data-view.tq:300:5
    {
      Label label__True_317_impl(this);
      Label* label__True_317 = &label__True_317_impl;
      USE(label__True_317);
      Label label__False_318_impl(this, {high_part_225, is_positive_223, low_part_224, need_two_digits_222});
      Label* label__False_318 = &label__False_318_impl;
      USE(label__False_318);
      int31_t t1000 = 0;
      TNode<Uint32T> t1001 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1000)));
      TNode<BoolT> t1002 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1001)));
      USE(implicit_cast<TNode<BoolT>>(t1002));
      Branch(implicit_cast<TNode<BoolT>>(t1002), label__True_317, label__False_318);
      if (label__True_317->is_used())
      {
        BIND(label__True_317);
        // ../../src/builtins/data-view.tq:300:25
        {
          // ../../src/builtins/data-view.tq:301:7
          {
            if ((implicit_cast<bool>(p_signed))) {
              // ../../src/builtins/data-view.tq:301:29
              {
                // ../../src/builtins/data-view.tq:304:9
                {
                  Label label__True_321_impl(this);
                  Label* label__True_321 = &label__True_321_impl;
                  USE(label__True_321);
                  Label label__False_322_impl(this);
                  Label* label__False_322 = &label__False_322_impl;
                  USE(label__False_322);
                  Label label_if_done_label_755_1238_impl(this, {high_part_225, is_positive_223, low_part_224, need_two_digits_222});
                  Label* label_if_done_label_755_1238 = &label_if_done_label_755_1238_impl;
                  USE(label_if_done_label_755_1238);
                  int31_t t1003 = 0;
                  TNode<Int32T> t1004 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1003)));
                  TNode<BoolT> t1005 = UncheckedCast<BoolT>(Int32LessThan(implicit_cast<TNode<Int32T>>((*high_part_225).value()), implicit_cast<TNode<Int32T>>(t1004)));
                  USE(implicit_cast<TNode<BoolT>>(t1005));
                  Branch(implicit_cast<TNode<BoolT>>(t1005), label__True_321, label__False_322);
                  if (label__True_321->is_used())
                  {
                    BIND(label__True_321);
                    // ../../src/builtins/data-view.tq:304:28
                    {
                      // ../../src/builtins/data-view.tq:305:11
                      TNode<BoolT> t1006 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                      *is_positive_223 = implicit_cast<TNode<BoolT>>(t1006);
                      // ../../src/builtins/data-view.tq:310:11
                      int31_t t1007 = 0;
                      TNode<Int32T> t1008 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1007)));
                      TNode<Int32T> t1009 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1008), implicit_cast<TNode<Int32T>>((*high_part_225).value())));
                      USE(implicit_cast<TNode<Int32T>>(t1009));
                      *high_part_225 = implicit_cast<TNode<Int32T>>(t1009);
                      // ../../src/builtins/data-view.tq:311:11
                      {
                        Label label__True_323_impl(this);
                        Label* label__True_323 = &label__True_323_impl;
                        USE(label__True_323);
                        Label label__False_324_impl(this, {high_part_225});
                        Label* label__False_324 = &label__False_324_impl;
                        USE(label__False_324);
                        int31_t t1010 = 0;
                        TNode<Int32T> t1011 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1010)));
                        TNode<BoolT> t1012 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Int32T>>((*low_part_224).value()), implicit_cast<TNode<Int32T>>(t1011)));
                        USE(implicit_cast<TNode<BoolT>>(t1012));
                        Branch(implicit_cast<TNode<BoolT>>(t1012), label__True_323, label__False_324);
                        if (label__True_323->is_used())
                        {
                          BIND(label__True_323);
                          // ../../src/builtins/data-view.tq:311:30
                          {
                            // ../../src/builtins/data-view.tq:312:13
                            int31_t t1013 = 1;
                            TNode<Int32T> t1014 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1013)));
                            TNode<Int32T> t1015 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>((*high_part_225).value()), implicit_cast<TNode<Int32T>>(t1014)));
                            USE(implicit_cast<TNode<Int32T>>(t1015));
                            *high_part_225 = implicit_cast<TNode<Int32T>>(t1015);
                          }
                          Goto(label__False_324);
                        }
                        BIND(label__False_324);
                      }
                      // ../../src/builtins/data-view.tq:314:11
                      int31_t t1016 = 0;
                      TNode<Int32T> t1017 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1016)));
                      TNode<Int32T> t1018 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1017), implicit_cast<TNode<Int32T>>((*low_part_224).value())));
                      USE(implicit_cast<TNode<Int32T>>(t1018));
                      *low_part_224 = implicit_cast<TNode<Int32T>>(t1018);
                      // ../../src/builtins/data-view.tq:317:11
                      {
                        Label label__True_325_impl(this);
                        Label* label__True_325 = &label__True_325_impl;
                        USE(label__True_325);
                        Label label__False_326_impl(this, {need_two_digits_222});
                        Label* label__False_326 = &label__False_326_impl;
                        USE(label__False_326);
                        int31_t t1019 = 0;
                        TNode<Int32T> t1020 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1019)));
                        TNode<BoolT> t1021 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Int32T>>((*high_part_225).value()), implicit_cast<TNode<Int32T>>(t1020)));
                        USE(implicit_cast<TNode<BoolT>>(t1021));
                        Branch(implicit_cast<TNode<BoolT>>(t1021), label__True_325, label__False_326);
                        if (label__True_325->is_used())
                        {
                          BIND(label__True_325);
                          // ../../src/builtins/data-view.tq:317:31
                          {
                            // ../../src/builtins/data-view.tq:318:13
                            TNode<BoolT> t1022 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                            *need_two_digits_222 = implicit_cast<TNode<BoolT>>(t1022);
                          }
                          Goto(label__False_326);
                        }
                        BIND(label__False_326);
                      }
                    }
                    Goto(label_if_done_label_755_1238);
                  }
                  if (label__False_322->is_used())
                  {
                    BIND(label__False_322);
                    // ../../src/builtins/data-view.tq:321:16
                    {
                      // ../../src/builtins/data-view.tq:323:11
                      TNode<BoolT> t1023 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                      *need_two_digits_222 = implicit_cast<TNode<BoolT>>(t1023);
                    }
                    Goto(label_if_done_label_755_1238);
                  }
                  BIND(label_if_done_label_755_1238);
                }
              }
            } else {
              // ../../src/builtins/data-view.tq:326:14
              {
                // ../../src/builtins/data-view.tq:329:9
                TNode<BoolT> t1024 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                *need_two_digits_222 = implicit_cast<TNode<BoolT>>(t1024);
              }
            }
          }
        }
        Goto(label__False_318);
      }
      BIND(label__False_318);
    }
    // ../../src/builtins/data-view.tq:334:5
    TVARIABLE(BigInt, result_226_impl);
    auto result_226 = &result_226_impl;
    USE(result_226);
    // ../../src/builtins/data-view.tq:335:5
    {
      Label label__True_327_impl(this);
      Label* label__True_327 = &label__True_327_impl;
      USE(label__True_327);
      Label label__False_328_impl(this);
      Label* label__False_328 = &label__False_328_impl;
      USE(label__False_328);
      Label label_if_done_label_756_1239_impl(this, {result_226});
      Label* label_if_done_label_756_1239 = &label_if_done_label_756_1239_impl;
      USE(label_if_done_label_756_1239);
      Branch(implicit_cast<TNode<BoolT>>((*need_two_digits_222).value()), label__True_327, label__False_328);
      if (label__True_327->is_used())
      {
        BIND(label__True_327);
        // ../../src/builtins/data-view.tq:335:26
        {
          // ../../src/builtins/data-view.tq:336:7
          TNode<BigInt> t1025 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*is_positive_223).value()), implicit_cast<int31_t>(kTwoDigitBigInt())));
          USE(implicit_cast<TNode<BigInt>>(t1025));
          *result_226 = implicit_cast<TNode<BigInt>>(t1025);
        }
        Goto(label_if_done_label_756_1239);
      }
      if (label__False_328->is_used())
      {
        BIND(label__False_328);
        // ../../src/builtins/data-view.tq:337:12
        {
          // ../../src/builtins/data-view.tq:338:7
          TNode<BigInt> t1026 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*is_positive_223).value()), implicit_cast<int31_t>(kOneDigitBigInt())));
          USE(implicit_cast<TNode<BigInt>>(t1026));
          *result_226 = implicit_cast<TNode<BigInt>>(t1026);
        }
        Goto(label_if_done_label_756_1239);
      }
      BIND(label_if_done_label_756_1239);
    }
    // ../../src/builtins/data-view.tq:342:5
    int31_t t1027 = 0;
    TNode<IntPtrT> t1028 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Int32T>>((*low_part_224).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t1028));
    TNode<UintPtrT> t1029 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>(t1028)));
    USE(implicit_cast<TNode<UintPtrT>>(t1029));
    StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_226).value()), implicit_cast<int31_t>(t1027), implicit_cast<TNode<UintPtrT>>(t1029));
    // ../../src/builtins/data-view.tq:344:5
    {
      Label label__True_329_impl(this);
      Label* label__True_329 = &label__True_329_impl;
      USE(label__True_329);
      Label label__False_330_impl(this, {});
      Label* label__False_330 = &label__False_330_impl;
      USE(label__False_330);
      Branch(implicit_cast<TNode<BoolT>>((*need_two_digits_222).value()), label__True_329, label__False_330);
      if (label__True_329->is_used())
      {
        BIND(label__True_329);
        // ../../src/builtins/data-view.tq:344:26
        {
          // ../../src/builtins/data-view.tq:345:7
          int31_t t1030 = 1;
          TNode<IntPtrT> t1031 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Int32T>>((*high_part_225).value())));
          USE(implicit_cast<TNode<IntPtrT>>(t1031));
          TNode<UintPtrT> t1032 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>(t1031)));
          USE(implicit_cast<TNode<UintPtrT>>(t1032));
          StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_226).value()), implicit_cast<int31_t>(t1030), implicit_cast<TNode<UintPtrT>>(t1032));
        }
        Goto(label__False_330);
      }
      BIND(label__False_330);
    }
    // ../../src/builtins/data-view.tq:348:5
    *_return_221 = implicit_cast<TNode<BigInt>>((*result_226).value());
    Goto(label_macro_end_1237);
  }
  BIND(label_macro_end_1237);
  return implicit_cast<TNode<BigInt>>((*_return_221).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigInt(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_227_impl);
  auto _return_227 = &_return_227_impl;
  USE(_return_227);
  Label label_macro_end_1240_impl(this, {_return_227});
  Label* label_macro_end_1240 = &label_macro_end_1240_impl;
  USE(label_macro_end_1240);
  // ../../src/builtins/data-view.tq:352:52
  {
    // ../../src/builtins/data-view.tq:355:5
    {
      bool t1033 = Is64();
      USE(implicit_cast<bool>(t1033));
      if ((implicit_cast<bool>(t1033))) {
        // ../../src/builtins/data-view.tq:355:27
        {
          // ../../src/builtins/data-view.tq:356:7
          TNode<BigInt> t1034 = UncheckedCast<BigInt>(MakeBigIntOn64Bit(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<bool>(p_signed)));
          USE(implicit_cast<TNode<BigInt>>(t1034));
          *_return_227 = implicit_cast<TNode<BigInt>>(t1034);
          Goto(label_macro_end_1240);
        }
      } else {
        // ../../src/builtins/data-view.tq:357:12
        {
          // ../../src/builtins/data-view.tq:358:7
          TNode<BigInt> t1035 = UncheckedCast<BigInt>(MakeBigIntOn32Bit(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<bool>(p_signed)));
          USE(implicit_cast<TNode<BigInt>>(t1035));
          *_return_227 = implicit_cast<TNode<BigInt>>(t1035);
          Goto(label_macro_end_1240);
        }
      }
    }
  }
  BIND(label_macro_end_1240);
  return implicit_cast<TNode<BigInt>>((*_return_227).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::LoadDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(BigInt, _return_228_impl);
  auto _return_228 = &_return_228_impl;
  USE(_return_228);
  Label label_macro_end_1241_impl(this, {_return_228});
  Label* label_macro_end_1241 = &label_macro_end_1241_impl;
  USE(label_macro_end_1241);
  // ../../src/builtins/data-view.tq:364:60
  {
    // ../../src/builtins/data-view.tq:365:5
    TNode<RawPtrT> t1036 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_229_impl);
    auto data_pointer_229 = &data_pointer_229_impl;
    USE(data_pointer_229);
    *data_pointer_229 = implicit_cast<TNode<RawPtrT>>(t1036);
    // ../../src/builtins/data-view.tq:367:5
    TNode<Uint32T> t1037 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_229).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t1037));
    TVARIABLE(Uint32T, b0_230_impl);
    auto b0_230 = &b0_230_impl;
    USE(b0_230);
    *b0_230 = implicit_cast<TNode<Uint32T>>(t1037);
    // ../../src/builtins/data-view.tq:368:5
    int31_t t1038 = 1;
    TNode<IntPtrT> t1039 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1038)));
    TNode<IntPtrT> t1040 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1039)));
    USE(implicit_cast<TNode<IntPtrT>>(t1040));
    TNode<Uint32T> t1041 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_229).value()), implicit_cast<TNode<IntPtrT>>(t1040)));
    USE(implicit_cast<TNode<Uint32T>>(t1041));
    TVARIABLE(Uint32T, b1_231_impl);
    auto b1_231 = &b1_231_impl;
    USE(b1_231);
    *b1_231 = implicit_cast<TNode<Uint32T>>(t1041);
    // ../../src/builtins/data-view.tq:369:5
    int31_t t1042 = 2;
    TNode<IntPtrT> t1043 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1042)));
    TNode<IntPtrT> t1044 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1043)));
    USE(implicit_cast<TNode<IntPtrT>>(t1044));
    TNode<Uint32T> t1045 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_229).value()), implicit_cast<TNode<IntPtrT>>(t1044)));
    USE(implicit_cast<TNode<Uint32T>>(t1045));
    TVARIABLE(Uint32T, b2_232_impl);
    auto b2_232 = &b2_232_impl;
    USE(b2_232);
    *b2_232 = implicit_cast<TNode<Uint32T>>(t1045);
    // ../../src/builtins/data-view.tq:370:5
    int31_t t1046 = 3;
    TNode<IntPtrT> t1047 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1046)));
    TNode<IntPtrT> t1048 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1047)));
    USE(implicit_cast<TNode<IntPtrT>>(t1048));
    TNode<Uint32T> t1049 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_229).value()), implicit_cast<TNode<IntPtrT>>(t1048)));
    USE(implicit_cast<TNode<Uint32T>>(t1049));
    TVARIABLE(Uint32T, b3_233_impl);
    auto b3_233 = &b3_233_impl;
    USE(b3_233);
    *b3_233 = implicit_cast<TNode<Uint32T>>(t1049);
    // ../../src/builtins/data-view.tq:371:5
    int31_t t1050 = 4;
    TNode<IntPtrT> t1051 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1050)));
    TNode<IntPtrT> t1052 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1051)));
    USE(implicit_cast<TNode<IntPtrT>>(t1052));
    TNode<Uint32T> t1053 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_229).value()), implicit_cast<TNode<IntPtrT>>(t1052)));
    USE(implicit_cast<TNode<Uint32T>>(t1053));
    TVARIABLE(Uint32T, b4_234_impl);
    auto b4_234 = &b4_234_impl;
    USE(b4_234);
    *b4_234 = implicit_cast<TNode<Uint32T>>(t1053);
    // ../../src/builtins/data-view.tq:372:5
    int31_t t1054 = 5;
    TNode<IntPtrT> t1055 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1054)));
    TNode<IntPtrT> t1056 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1055)));
    USE(implicit_cast<TNode<IntPtrT>>(t1056));
    TNode<Uint32T> t1057 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_229).value()), implicit_cast<TNode<IntPtrT>>(t1056)));
    USE(implicit_cast<TNode<Uint32T>>(t1057));
    TVARIABLE(Uint32T, b5_235_impl);
    auto b5_235 = &b5_235_impl;
    USE(b5_235);
    *b5_235 = implicit_cast<TNode<Uint32T>>(t1057);
    // ../../src/builtins/data-view.tq:373:5
    int31_t t1058 = 6;
    TNode<IntPtrT> t1059 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1058)));
    TNode<IntPtrT> t1060 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1059)));
    USE(implicit_cast<TNode<IntPtrT>>(t1060));
    TNode<Uint32T> t1061 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_229).value()), implicit_cast<TNode<IntPtrT>>(t1060)));
    USE(implicit_cast<TNode<Uint32T>>(t1061));
    TVARIABLE(Uint32T, b6_236_impl);
    auto b6_236 = &b6_236_impl;
    USE(b6_236);
    *b6_236 = implicit_cast<TNode<Uint32T>>(t1061);
    // ../../src/builtins/data-view.tq:374:5
    int31_t t1062 = 7;
    TNode<IntPtrT> t1063 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1062)));
    TNode<IntPtrT> t1064 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1063)));
    USE(implicit_cast<TNode<IntPtrT>>(t1064));
    TNode<Uint32T> t1065 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_229).value()), implicit_cast<TNode<IntPtrT>>(t1064)));
    USE(implicit_cast<TNode<Uint32T>>(t1065));
    TVARIABLE(Uint32T, b7_237_impl);
    auto b7_237 = &b7_237_impl;
    USE(b7_237);
    *b7_237 = implicit_cast<TNode<Uint32T>>(t1065);
    // ../../src/builtins/data-view.tq:375:5
    TVARIABLE(Uint32T, low_word_238_impl);
    auto low_word_238 = &low_word_238_impl;
    USE(low_word_238);
    // ../../src/builtins/data-view.tq:376:5
    TVARIABLE(Uint32T, high_word_239_impl);
    auto high_word_239 = &high_word_239_impl;
    USE(high_word_239);
    // ../../src/builtins/data-view.tq:378:5
    {
      Label label__True_333_impl(this);
      Label* label__True_333 = &label__True_333_impl;
      USE(label__True_333);
      Label label__False_334_impl(this);
      Label* label__False_334 = &label__False_334_impl;
      USE(label__False_334);
      Label label_if_done_label_757_1242_impl(this, {high_word_239, low_word_238});
      Label* label_if_done_label_757_1242 = &label_if_done_label_757_1242_impl;
      USE(label_if_done_label_757_1242);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_333, label__False_334);
      if (label__True_333->is_used())
      {
        BIND(label__True_333);
        // ../../src/builtins/data-view.tq:378:34
        {
          // ../../src/builtins/data-view.tq:379:7
          int31_t t1066 = 24;
          TNode<Uint32T> t1067 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1066)));
          TNode<Uint32T> t1068 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_233).value()), implicit_cast<TNode<Uint32T>>(t1067)));
          USE(implicit_cast<TNode<Uint32T>>(t1068));
          int31_t t1069 = 16;
          TNode<Uint32T> t1070 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1069)));
          TNode<Uint32T> t1071 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_232).value()), implicit_cast<TNode<Uint32T>>(t1070)));
          USE(implicit_cast<TNode<Uint32T>>(t1071));
          TNode<Uint32T> t1072 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1068), implicit_cast<TNode<Uint32T>>(t1071)));
          USE(implicit_cast<TNode<Uint32T>>(t1072));
          int31_t t1073 = 8;
          TNode<Uint32T> t1074 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1073)));
          TNode<Uint32T> t1075 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_231).value()), implicit_cast<TNode<Uint32T>>(t1074)));
          USE(implicit_cast<TNode<Uint32T>>(t1075));
          TNode<Uint32T> t1076 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1072), implicit_cast<TNode<Uint32T>>(t1075)));
          USE(implicit_cast<TNode<Uint32T>>(t1076));
          TNode<Uint32T> t1077 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1076), implicit_cast<TNode<Uint32T>>((*b0_230).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1077));
          *low_word_238 = implicit_cast<TNode<Uint32T>>(t1077);
          // ../../src/builtins/data-view.tq:380:7
          int31_t t1078 = 24;
          TNode<Uint32T> t1079 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1078)));
          TNode<Uint32T> t1080 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b7_237).value()), implicit_cast<TNode<Uint32T>>(t1079)));
          USE(implicit_cast<TNode<Uint32T>>(t1080));
          int31_t t1081 = 16;
          TNode<Uint32T> t1082 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1081)));
          TNode<Uint32T> t1083 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_236).value()), implicit_cast<TNode<Uint32T>>(t1082)));
          USE(implicit_cast<TNode<Uint32T>>(t1083));
          TNode<Uint32T> t1084 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1080), implicit_cast<TNode<Uint32T>>(t1083)));
          USE(implicit_cast<TNode<Uint32T>>(t1084));
          int31_t t1085 = 8;
          TNode<Uint32T> t1086 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1085)));
          TNode<Uint32T> t1087 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_235).value()), implicit_cast<TNode<Uint32T>>(t1086)));
          USE(implicit_cast<TNode<Uint32T>>(t1087));
          TNode<Uint32T> t1088 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1084), implicit_cast<TNode<Uint32T>>(t1087)));
          USE(implicit_cast<TNode<Uint32T>>(t1088));
          TNode<Uint32T> t1089 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1088), implicit_cast<TNode<Uint32T>>((*b4_234).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1089));
          *high_word_239 = implicit_cast<TNode<Uint32T>>(t1089);
        }
        Goto(label_if_done_label_757_1242);
      }
      if (label__False_334->is_used())
      {
        BIND(label__False_334);
        // ../../src/builtins/data-view.tq:381:12
        {
          // ../../src/builtins/data-view.tq:382:7
          int31_t t1090 = 24;
          TNode<Uint32T> t1091 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1090)));
          TNode<Uint32T> t1092 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_230).value()), implicit_cast<TNode<Uint32T>>(t1091)));
          USE(implicit_cast<TNode<Uint32T>>(t1092));
          int31_t t1093 = 16;
          TNode<Uint32T> t1094 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1093)));
          TNode<Uint32T> t1095 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_231).value()), implicit_cast<TNode<Uint32T>>(t1094)));
          USE(implicit_cast<TNode<Uint32T>>(t1095));
          TNode<Uint32T> t1096 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1092), implicit_cast<TNode<Uint32T>>(t1095)));
          USE(implicit_cast<TNode<Uint32T>>(t1096));
          int31_t t1097 = 8;
          TNode<Uint32T> t1098 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1097)));
          TNode<Uint32T> t1099 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_232).value()), implicit_cast<TNode<Uint32T>>(t1098)));
          USE(implicit_cast<TNode<Uint32T>>(t1099));
          TNode<Uint32T> t1100 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1096), implicit_cast<TNode<Uint32T>>(t1099)));
          USE(implicit_cast<TNode<Uint32T>>(t1100));
          TNode<Uint32T> t1101 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1100), implicit_cast<TNode<Uint32T>>((*b3_233).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1101));
          *high_word_239 = implicit_cast<TNode<Uint32T>>(t1101);
          // ../../src/builtins/data-view.tq:383:7
          int31_t t1102 = 24;
          TNode<Uint32T> t1103 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1102)));
          TNode<Uint32T> t1104 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b4_234).value()), implicit_cast<TNode<Uint32T>>(t1103)));
          USE(implicit_cast<TNode<Uint32T>>(t1104));
          int31_t t1105 = 16;
          TNode<Uint32T> t1106 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1105)));
          TNode<Uint32T> t1107 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_235).value()), implicit_cast<TNode<Uint32T>>(t1106)));
          USE(implicit_cast<TNode<Uint32T>>(t1107));
          TNode<Uint32T> t1108 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1104), implicit_cast<TNode<Uint32T>>(t1107)));
          USE(implicit_cast<TNode<Uint32T>>(t1108));
          int31_t t1109 = 8;
          TNode<Uint32T> t1110 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1109)));
          TNode<Uint32T> t1111 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_236).value()), implicit_cast<TNode<Uint32T>>(t1110)));
          USE(implicit_cast<TNode<Uint32T>>(t1111));
          TNode<Uint32T> t1112 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1108), implicit_cast<TNode<Uint32T>>(t1111)));
          USE(implicit_cast<TNode<Uint32T>>(t1112));
          TNode<Uint32T> t1113 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1112), implicit_cast<TNode<Uint32T>>((*b7_237).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1113));
          *low_word_238 = implicit_cast<TNode<Uint32T>>(t1113);
        }
        Goto(label_if_done_label_757_1242);
      }
      BIND(label_if_done_label_757_1242);
    }
    // ../../src/builtins/data-view.tq:386:5
    TNode<BigInt> t1114 = UncheckedCast<BigInt>(MakeBigInt(implicit_cast<TNode<Uint32T>>((*low_word_238).value()), implicit_cast<TNode<Uint32T>>((*high_word_239).value()), implicit_cast<bool>(p_signed)));
    USE(implicit_cast<TNode<BigInt>>(t1114));
    *_return_228 = implicit_cast<TNode<BigInt>>(t1114);
    Goto(label_macro_end_1241);
  }
  BIND(label_macro_end_1241);
  return implicit_cast<TNode<BigInt>>((*_return_228).value());
}

compiler::TNode<Numeric> DataViewBuiltinsFromDSLAssembler::DataViewGet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Numeric, _return_240_impl);
  auto _return_240 = &_return_240_impl;
  USE(_return_240);
  Label label_macro_end_1243_impl(this, {_return_240});
  Label* label_macro_end_1243 = &label_macro_end_1243_impl;
  USE(label_macro_end_1243);
  // ../../src/builtins/data-view.tq:396:60
  {
    // ../../src/builtins/data-view.tq:398:5
    TNode<String> t1115 = UncheckedCast<String>(MakeDataViewGetterNameString(implicit_cast<ElementsKind>(p_kind)));
    USE(implicit_cast<TNode<String>>(t1115));
    TNode<JSDataView> t1116 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t1115)));
    USE(implicit_cast<TNode<JSDataView>>(t1116));
    TVARIABLE(JSDataView, data_view_241_impl);
    auto data_view_241 = &data_view_241_impl;
    USE(data_view_241);
    *data_view_241 = implicit_cast<TNode<JSDataView>>(t1116);
    // ../../src/builtins/data-view.tq:401:5
    TVARIABLE(Number, getIndex_242_impl);
    auto getIndex_242 = &getIndex_242_impl;
    USE(getIndex_242);
    // ../../src/builtins/data-view.tq:402:5
    {
      Label label_try_done_758_1244_impl(this);
      Label* label_try_done_758_1244 = &label_try_done_758_1244_impl;
      USE(label_try_done_758_1244);
      Label label_RangeError_335_impl(this);
      Label* label_RangeError_335 = &label_RangeError_335_impl;
      USE(label_RangeError_335);
      Label label_try_begin_759_1245_impl(this);
      Label* label_try_begin_759_1245 = &label_try_begin_759_1245_impl;
      USE(label_try_begin_759_1245);
      Goto(label_try_begin_759_1245);
      if (label_try_begin_759_1245->is_used())
      {
        BIND(label_try_begin_759_1245);
        // ../../src/builtins/data-view.tq:402:9
        {
          // ../../src/builtins/data-view.tq:403:7
          TNode<Number> t1117 = UncheckedCast<Number>(ToIndex(implicit_cast<TNode<Object>>(p_offset), implicit_cast<TNode<Context>>(p_context), label_RangeError_335));
          USE(implicit_cast<TNode<Number>>(t1117));
          *getIndex_242 = implicit_cast<TNode<Number>>(t1117);
        }
        Goto(label_try_done_758_1244);
      }
      if (label_RangeError_335->is_used())
      {
        BIND(label_RangeError_335);
        // ../../src/builtins/data-view.tq:405:22
        {
          // ../../src/builtins/data-view.tq:406:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label_try_done_758_1244);
    }
    // ../../src/builtins/data-view.tq:409:5
    TNode<BoolT> t1118 = UncheckedCast<BoolT>(ToBoolean(implicit_cast<TNode<Object>>(p_requested_little_endian)));
    USE(implicit_cast<TNode<BoolT>>(t1118));
    TVARIABLE(BoolT, littleEndian_243_impl);
    auto littleEndian_243 = &littleEndian_243_impl;
    USE(littleEndian_243);
    *littleEndian_243 = implicit_cast<TNode<BoolT>>(t1118);
    // ../../src/builtins/data-view.tq:410:5
    TNode<JSArrayBuffer> t1119 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*data_view_241).value())));
    TVARIABLE(JSArrayBuffer, buffer_244_impl);
    auto buffer_244 = &buffer_244_impl;
    USE(buffer_244);
    *buffer_244 = implicit_cast<TNode<JSArrayBuffer>>(t1119);
    // ../../src/builtins/data-view.tq:412:5
    {
      Label label__True_336_impl(this);
      Label* label__True_336 = &label__True_336_impl;
      USE(label__True_336);
      Label label__False_337_impl(this, {});
      Label* label__False_337 = &label__False_337_impl;
      USE(label__False_337);
      TNode<BoolT> t1120 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value())));
      USE(implicit_cast<TNode<BoolT>>(t1120));
      Branch(implicit_cast<TNode<BoolT>>(t1120), label__True_336, label__False_337);
      if (label__True_336->is_used())
      {
        BIND(label__True_336);
        // ../../src/builtins/data-view.tq:412:35
        {
          // ../../src/builtins/data-view.tq:413:7
          TNode<String> t1121 = UncheckedCast<String>(MakeDataViewGetterNameString(implicit_cast<ElementsKind>(p_kind)));
          USE(implicit_cast<TNode<String>>(t1121));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t1121));
        }
      }
      BIND(label__False_337);
    }
    // ../../src/builtins/data-view.tq:417:5
    TNode<Number> t1122 = UncheckedCast<Number>(LoadDataViewByteOffset(implicit_cast<TNode<JSDataView>>((*data_view_241).value())));
    TVARIABLE(Number, viewOffset_245_impl);
    auto viewOffset_245 = &viewOffset_245_impl;
    USE(viewOffset_245);
    *viewOffset_245 = implicit_cast<TNode<Number>>(t1122);
    // ../../src/builtins/data-view.tq:418:5
    TNode<Number> t1123 = UncheckedCast<Number>(LoadDataViewByteLength(implicit_cast<TNode<JSDataView>>((*data_view_241).value())));
    TVARIABLE(Number, viewSize_246_impl);
    auto viewSize_246 = &viewSize_246_impl;
    USE(viewSize_246);
    *viewSize_246 = implicit_cast<TNode<Number>>(t1123);
    // ../../src/builtins/data-view.tq:419:5
    int31_t t1124 = DataViewElementSize(implicit_cast<ElementsKind>(p_kind));
    USE(implicit_cast<int31_t>(t1124));
    TVARIABLE(Number, elementSize_247_impl);
    auto elementSize_247 = &elementSize_247_impl;
    USE(elementSize_247);
    TNode<Number> t1125 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t1124)));
    *elementSize_247 = implicit_cast<TNode<Number>>(t1125);
    // ../../src/builtins/data-view.tq:421:5
    {
      Label label__True_338_impl(this);
      Label* label__True_338 = &label__True_338_impl;
      USE(label__True_338);
      Label label__False_339_impl(this, {});
      Label* label__False_339 = &label__False_339_impl;
      USE(label__False_339);
      TNode<Number> t1126 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*getIndex_242).value()), implicit_cast<TNode<Number>>((*elementSize_247).value())));
      USE(implicit_cast<TNode<Number>>(t1126));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t1126), implicit_cast<TNode<Number>>((*viewSize_246).value()), label__True_338, label__False_339);
      if (label__True_338->is_used())
      {
        BIND(label__True_338);
        // ../../src/builtins/data-view.tq:421:44
        {
          // ../../src/builtins/data-view.tq:422:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label__False_339);
    }
    // ../../src/builtins/data-view.tq:425:5
    TNode<Float64T> t1127 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*getIndex_242).value())));
    USE(implicit_cast<TNode<Float64T>>(t1127));
    TVARIABLE(Float64T, getIndexFloat_248_impl);
    auto getIndexFloat_248 = &getIndexFloat_248_impl;
    USE(getIndexFloat_248);
    *getIndexFloat_248 = implicit_cast<TNode<Float64T>>(t1127);
    // ../../src/builtins/data-view.tq:426:5
    TNode<UintPtrT> t1128 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*getIndexFloat_248).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1128));
    TNode<IntPtrT> t1129 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1128)));
    USE(implicit_cast<TNode<IntPtrT>>(t1129));
    TVARIABLE(IntPtrT, getIndexIntptr_249_impl);
    auto getIndexIntptr_249 = &getIndexIntptr_249_impl;
    USE(getIndexIntptr_249);
    *getIndexIntptr_249 = implicit_cast<TNode<IntPtrT>>(t1129);
    // ../../src/builtins/data-view.tq:427:5
    TNode<Float64T> t1130 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*viewOffset_245).value())));
    USE(implicit_cast<TNode<Float64T>>(t1130));
    TVARIABLE(Float64T, viewOffsetFloat_250_impl);
    auto viewOffsetFloat_250 = &viewOffsetFloat_250_impl;
    USE(viewOffsetFloat_250);
    *viewOffsetFloat_250 = implicit_cast<TNode<Float64T>>(t1130);
    // ../../src/builtins/data-view.tq:428:5
    TNode<UintPtrT> t1131 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*viewOffsetFloat_250).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1131));
    TNode<IntPtrT> t1132 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1131)));
    USE(implicit_cast<TNode<IntPtrT>>(t1132));
    TVARIABLE(IntPtrT, viewOffsetIntptr_251_impl);
    auto viewOffsetIntptr_251 = &viewOffsetIntptr_251_impl;
    USE(viewOffsetIntptr_251);
    *viewOffsetIntptr_251 = implicit_cast<TNode<IntPtrT>>(t1132);
    // ../../src/builtins/data-view.tq:430:5
    TNode<IntPtrT> t1133 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*getIndexIntptr_249).value()), implicit_cast<TNode<IntPtrT>>((*viewOffsetIntptr_251).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t1133));
    TVARIABLE(IntPtrT, bufferIndex_252_impl);
    auto bufferIndex_252 = &bufferIndex_252_impl;
    USE(bufferIndex_252);
    *bufferIndex_252 = implicit_cast<TNode<IntPtrT>>(t1133);
    // ../../src/builtins/data-view.tq:432:5
    {
      bool t1134 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t1134));
      if ((implicit_cast<bool>(t1134))) {
        // ../../src/builtins/data-view.tq:432:43
        {
          // ../../src/builtins/data-view.tq:433:7
          TNode<Smi> t1135 = UncheckedCast<Smi>(LoadDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<bool>(false)));
          USE(implicit_cast<TNode<Smi>>(t1135));
          *_return_240 = implicit_cast<TNode<Numeric>>(t1135);
          Goto(label_macro_end_1243);
        }
      } else {
        // ../../src/builtins/data-view.tq:434:12
        {
          bool t1136 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t1136));
          if ((implicit_cast<bool>(t1136))) {
            // ../../src/builtins/data-view.tq:434:49
            {
              // ../../src/builtins/data-view.tq:435:7
              TNode<Smi> t1137 = UncheckedCast<Smi>(LoadDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<bool>(true)));
              USE(implicit_cast<TNode<Smi>>(t1137));
              *_return_240 = implicit_cast<TNode<Numeric>>(t1137);
              Goto(label_macro_end_1243);
            }
          } else {
            // ../../src/builtins/data-view.tq:436:12
            {
              bool t1138 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t1138));
              if ((implicit_cast<bool>(t1138))) {
                // ../../src/builtins/data-view.tq:436:51
                {
                  // ../../src/builtins/data-view.tq:437:7
                  TNode<Number> t1139 = UncheckedCast<Number>(LoadDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<TNode<BoolT>>((*littleEndian_243).value()), implicit_cast<bool>(false)));
                  USE(implicit_cast<TNode<Number>>(t1139));
                  *_return_240 = implicit_cast<TNode<Numeric>>(t1139);
                  Goto(label_macro_end_1243);
                }
              } else {
                // ../../src/builtins/data-view.tq:438:12
                {
                  bool t1140 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t1140));
                  if ((implicit_cast<bool>(t1140))) {
                    // ../../src/builtins/data-view.tq:438:50
                    {
                      // ../../src/builtins/data-view.tq:439:7
                      TNode<Number> t1141 = UncheckedCast<Number>(LoadDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<TNode<BoolT>>((*littleEndian_243).value()), implicit_cast<bool>(true)));
                      USE(implicit_cast<TNode<Number>>(t1141));
                      *_return_240 = implicit_cast<TNode<Numeric>>(t1141);
                      Goto(label_macro_end_1243);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:440:12
                    {
                      bool t1142 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t1142));
                      if ((implicit_cast<bool>(t1142))) {
                        // ../../src/builtins/data-view.tq:440:51
                        {
                          // ../../src/builtins/data-view.tq:441:7
                          TNode<Number> t1143 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<TNode<BoolT>>((*littleEndian_243).value()), implicit_cast<ElementsKind>(p_kind)));
                          USE(implicit_cast<TNode<Number>>(t1143));
                          *_return_240 = implicit_cast<TNode<Numeric>>(t1143);
                          Goto(label_macro_end_1243);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:442:12
                        {
                          bool t1144 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t1144));
                          if ((implicit_cast<bool>(t1144))) {
                            // ../../src/builtins/data-view.tq:442:50
                            {
                              // ../../src/builtins/data-view.tq:443:7
                              TNode<Number> t1145 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<TNode<BoolT>>((*littleEndian_243).value()), implicit_cast<ElementsKind>(p_kind)));
                              USE(implicit_cast<TNode<Number>>(t1145));
                              *_return_240 = implicit_cast<TNode<Numeric>>(t1145);
                              Goto(label_macro_end_1243);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:444:12
                            {
                              bool t1146 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t1146));
                              if ((implicit_cast<bool>(t1146))) {
                                // ../../src/builtins/data-view.tq:444:52
                                {
                                  // ../../src/builtins/data-view.tq:445:7
                                  TNode<Number> t1147 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<TNode<BoolT>>((*littleEndian_243).value()), implicit_cast<ElementsKind>(p_kind)));
                                  USE(implicit_cast<TNode<Number>>(t1147));
                                  *_return_240 = implicit_cast<TNode<Numeric>>(t1147);
                                  Goto(label_macro_end_1243);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:446:12
                                {
                                  bool t1148 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t1148));
                                  if ((implicit_cast<bool>(t1148))) {
                                    // ../../src/builtins/data-view.tq:446:52
                                    {
                                      // ../../src/builtins/data-view.tq:447:7
                                      TNode<Number> t1149 = UncheckedCast<Number>(LoadDataViewFloat64(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<TNode<BoolT>>((*littleEndian_243).value())));
                                      USE(implicit_cast<TNode<Number>>(t1149));
                                      *_return_240 = implicit_cast<TNode<Numeric>>(t1149);
                                      Goto(label_macro_end_1243);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:448:12
                                    {
                                      bool t1150 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t1150));
                                      if ((implicit_cast<bool>(t1150))) {
                                        // ../../src/builtins/data-view.tq:448:54
                                        {
                                          // ../../src/builtins/data-view.tq:449:7
                                          TNode<BigInt> t1151 = UncheckedCast<BigInt>(LoadDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<TNode<BoolT>>((*littleEndian_243).value()), implicit_cast<bool>(false)));
                                          USE(implicit_cast<TNode<BigInt>>(t1151));
                                          *_return_240 = implicit_cast<TNode<Numeric>>(t1151);
                                          Goto(label_macro_end_1243);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:450:12
                                        {
                                          bool t1152 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t1152));
                                          if ((implicit_cast<bool>(t1152))) {
                                            // ../../src/builtins/data-view.tq:450:53
                                            {
                                              // ../../src/builtins/data-view.tq:451:7
                                              TNode<BigInt> t1153 = UncheckedCast<BigInt>(LoadDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_244).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_252).value()), implicit_cast<TNode<BoolT>>((*littleEndian_243).value()), implicit_cast<bool>(true)));
                                              USE(implicit_cast<TNode<BigInt>>(t1153));
                                              *_return_240 = implicit_cast<TNode<Numeric>>(t1153);
                                              Goto(label_macro_end_1243);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:452:12
                                            {
                                              // ../../src/builtins/data-view.tq:453:7
                                              Unreachable();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1243);
  return implicit_cast<TNode<Numeric>>((*_return_240).value());
}

TF_BUILTIN(DataViewPrototypeGetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:458:63
  {
    // ../../src/builtins/data-view.tq:459:7
    auto t1154 = [=]() {
      int31_t t1156 = 0;
      TNode<IntPtrT> t1157 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1156)));
      TNode<Object> t1158 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1157)));
      return implicit_cast<TNode<Object>>(t1158);
    };
    auto t1155 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1159_760_impl);
    auto t1159_760 = &t1159_760_impl;
    USE(t1159_760);
    {
      Label label__True_360_impl(this);
      Label* label__True_360 = &label__True_360_impl;
      USE(label__True_360);
      Label label__False_361_impl(this);
      Label* label__False_361 = &label__False_361_impl;
      USE(label__False_361);
      Label label__done_761_1246_impl(this, {t1159_760});
      Label* label__done_761_1246 = &label__done_761_1246_impl;
      USE(label__done_761_1246);
      TNode<IntPtrT> t1160 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1161 = 0;
      TNode<IntPtrT> t1162 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1161)));
      TNode<BoolT> t1163 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1160), implicit_cast<TNode<IntPtrT>>(t1162)));
      USE(implicit_cast<TNode<BoolT>>(t1163));
      Branch(implicit_cast<TNode<BoolT>>(t1163), label__True_360, label__False_361);
      BIND(label__True_360);
            *t1159_760 = implicit_cast<TNode<Object>>(t1154());
      Goto(label__done_761_1246);
      BIND(label__False_361);
            *t1159_760 = implicit_cast<TNode<Object>>(t1155());
      Goto(label__done_761_1246);
      BIND(label__done_761_1246);
    }
    TVARIABLE(Object, offset_253_impl);
    auto offset_253 = &offset_253_impl;
    USE(offset_253);
    *offset_253 = implicit_cast<TNode<Object>>((*t1159_760).value());
    // ../../src/builtins/data-view.tq:462:7
    TNode<Numeric> t1164 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_253).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1164));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1164));
  }
}

TF_BUILTIN(DataViewPrototypeGetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:466:65
  {
    // ../../src/builtins/data-view.tq:467:5
    auto t1165 = [=]() {
      int31_t t1167 = 0;
      TNode<IntPtrT> t1168 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1167)));
      TNode<Object> t1169 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1168)));
      return implicit_cast<TNode<Object>>(t1169);
    };
    auto t1166 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1170_762_impl);
    auto t1170_762 = &t1170_762_impl;
    USE(t1170_762);
    {
      Label label__True_362_impl(this);
      Label* label__True_362 = &label__True_362_impl;
      USE(label__True_362);
      Label label__False_363_impl(this);
      Label* label__False_363 = &label__False_363_impl;
      USE(label__False_363);
      Label label__done_763_1247_impl(this, {t1170_762});
      Label* label__done_763_1247 = &label__done_763_1247_impl;
      USE(label__done_763_1247);
      TNode<IntPtrT> t1171 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1172 = 0;
      TNode<IntPtrT> t1173 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1172)));
      TNode<BoolT> t1174 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1171), implicit_cast<TNode<IntPtrT>>(t1173)));
      USE(implicit_cast<TNode<BoolT>>(t1174));
      Branch(implicit_cast<TNode<BoolT>>(t1174), label__True_362, label__False_363);
      BIND(label__True_362);
            *t1170_762 = implicit_cast<TNode<Object>>(t1165());
      Goto(label__done_763_1247);
      BIND(label__False_363);
            *t1170_762 = implicit_cast<TNode<Object>>(t1166());
      Goto(label__done_763_1247);
      BIND(label__done_763_1247);
    }
    TVARIABLE(Object, offset_254_impl);
    auto offset_254 = &offset_254_impl;
    USE(offset_254);
    *offset_254 = implicit_cast<TNode<Object>>((*t1170_762).value());
    // ../../src/builtins/data-view.tq:470:5
    TNode<Numeric> t1175 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_254).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(INT8_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1175));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1175));
  }
}

TF_BUILTIN(DataViewPrototypeGetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:474:63
  {
    // ../../src/builtins/data-view.tq:475:7
    auto t1176 = [=]() {
      int31_t t1178 = 0;
      TNode<IntPtrT> t1179 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1178)));
      TNode<Object> t1180 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1179)));
      return implicit_cast<TNode<Object>>(t1180);
    };
    auto t1177 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1181_764_impl);
    auto t1181_764 = &t1181_764_impl;
    USE(t1181_764);
    {
      Label label__True_364_impl(this);
      Label* label__True_364 = &label__True_364_impl;
      USE(label__True_364);
      Label label__False_365_impl(this);
      Label* label__False_365 = &label__False_365_impl;
      USE(label__False_365);
      Label label__done_765_1248_impl(this, {t1181_764});
      Label* label__done_765_1248 = &label__done_765_1248_impl;
      USE(label__done_765_1248);
      TNode<IntPtrT> t1182 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1183 = 0;
      TNode<IntPtrT> t1184 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1183)));
      TNode<BoolT> t1185 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1182), implicit_cast<TNode<IntPtrT>>(t1184)));
      USE(implicit_cast<TNode<BoolT>>(t1185));
      Branch(implicit_cast<TNode<BoolT>>(t1185), label__True_364, label__False_365);
      BIND(label__True_364);
            *t1181_764 = implicit_cast<TNode<Object>>(t1176());
      Goto(label__done_765_1248);
      BIND(label__False_365);
            *t1181_764 = implicit_cast<TNode<Object>>(t1177());
      Goto(label__done_765_1248);
      BIND(label__done_765_1248);
    }
    TVARIABLE(Object, offset_255_impl);
    auto offset_255 = &offset_255_impl;
    USE(offset_255);
    *offset_255 = implicit_cast<TNode<Object>>((*t1181_764).value());
    // ../../src/builtins/data-view.tq:478:7
    auto t1186 = [=]() {
      int31_t t1188 = 1;
      TNode<IntPtrT> t1189 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1188)));
      TNode<Object> t1190 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1189)));
      return implicit_cast<TNode<Object>>(t1190);
    };
    auto t1187 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1191_766_impl);
    auto t1191_766 = &t1191_766_impl;
    USE(t1191_766);
    {
      Label label__True_366_impl(this);
      Label* label__True_366 = &label__True_366_impl;
      USE(label__True_366);
      Label label__False_367_impl(this);
      Label* label__False_367 = &label__False_367_impl;
      USE(label__False_367);
      Label label__done_767_1249_impl(this, {t1191_766});
      Label* label__done_767_1249 = &label__done_767_1249_impl;
      USE(label__done_767_1249);
      TNode<IntPtrT> t1192 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1193 = 1;
      TNode<IntPtrT> t1194 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1193)));
      TNode<BoolT> t1195 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1192), implicit_cast<TNode<IntPtrT>>(t1194)));
      USE(implicit_cast<TNode<BoolT>>(t1195));
      Branch(implicit_cast<TNode<BoolT>>(t1195), label__True_366, label__False_367);
      BIND(label__True_366);
            *t1191_766 = implicit_cast<TNode<Object>>(t1186());
      Goto(label__done_767_1249);
      BIND(label__False_367);
            *t1191_766 = implicit_cast<TNode<Object>>(t1187());
      Goto(label__done_767_1249);
      BIND(label__done_767_1249);
    }
    TVARIABLE(Object, is_little_endian_256_impl);
    auto is_little_endian_256 = &is_little_endian_256_impl;
    USE(is_little_endian_256);
    *is_little_endian_256 = implicit_cast<TNode<Object>>((*t1191_766).value());
    // ../../src/builtins/data-view.tq:481:7
    TNode<Numeric> t1196 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_255).value()), implicit_cast<TNode<Object>>((*is_little_endian_256).value()), implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1196));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1196));
  }
}

TF_BUILTIN(DataViewPrototypeGetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:486:63
  {
    // ../../src/builtins/data-view.tq:487:7
    auto t1197 = [=]() {
      int31_t t1199 = 0;
      TNode<IntPtrT> t1200 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1199)));
      TNode<Object> t1201 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1200)));
      return implicit_cast<TNode<Object>>(t1201);
    };
    auto t1198 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1202_768_impl);
    auto t1202_768 = &t1202_768_impl;
    USE(t1202_768);
    {
      Label label__True_368_impl(this);
      Label* label__True_368 = &label__True_368_impl;
      USE(label__True_368);
      Label label__False_369_impl(this);
      Label* label__False_369 = &label__False_369_impl;
      USE(label__False_369);
      Label label__done_769_1250_impl(this, {t1202_768});
      Label* label__done_769_1250 = &label__done_769_1250_impl;
      USE(label__done_769_1250);
      TNode<IntPtrT> t1203 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1204 = 0;
      TNode<IntPtrT> t1205 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1204)));
      TNode<BoolT> t1206 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1203), implicit_cast<TNode<IntPtrT>>(t1205)));
      USE(implicit_cast<TNode<BoolT>>(t1206));
      Branch(implicit_cast<TNode<BoolT>>(t1206), label__True_368, label__False_369);
      BIND(label__True_368);
            *t1202_768 = implicit_cast<TNode<Object>>(t1197());
      Goto(label__done_769_1250);
      BIND(label__False_369);
            *t1202_768 = implicit_cast<TNode<Object>>(t1198());
      Goto(label__done_769_1250);
      BIND(label__done_769_1250);
    }
    TVARIABLE(Object, offset_257_impl);
    auto offset_257 = &offset_257_impl;
    USE(offset_257);
    *offset_257 = implicit_cast<TNode<Object>>((*t1202_768).value());
    // ../../src/builtins/data-view.tq:490:7
    auto t1207 = [=]() {
      int31_t t1209 = 1;
      TNode<IntPtrT> t1210 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1209)));
      TNode<Object> t1211 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1210)));
      return implicit_cast<TNode<Object>>(t1211);
    };
    auto t1208 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1212_770_impl);
    auto t1212_770 = &t1212_770_impl;
    USE(t1212_770);
    {
      Label label__True_370_impl(this);
      Label* label__True_370 = &label__True_370_impl;
      USE(label__True_370);
      Label label__False_371_impl(this);
      Label* label__False_371 = &label__False_371_impl;
      USE(label__False_371);
      Label label__done_771_1251_impl(this, {t1212_770});
      Label* label__done_771_1251 = &label__done_771_1251_impl;
      USE(label__done_771_1251);
      TNode<IntPtrT> t1213 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1214 = 1;
      TNode<IntPtrT> t1215 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1214)));
      TNode<BoolT> t1216 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1213), implicit_cast<TNode<IntPtrT>>(t1215)));
      USE(implicit_cast<TNode<BoolT>>(t1216));
      Branch(implicit_cast<TNode<BoolT>>(t1216), label__True_370, label__False_371);
      BIND(label__True_370);
            *t1212_770 = implicit_cast<TNode<Object>>(t1207());
      Goto(label__done_771_1251);
      BIND(label__False_371);
            *t1212_770 = implicit_cast<TNode<Object>>(t1208());
      Goto(label__done_771_1251);
      BIND(label__done_771_1251);
    }
    TVARIABLE(Object, is_little_endian_258_impl);
    auto is_little_endian_258 = &is_little_endian_258_impl;
    USE(is_little_endian_258);
    *is_little_endian_258 = implicit_cast<TNode<Object>>((*t1212_770).value());
    // ../../src/builtins/data-view.tq:493:7
    TNode<Numeric> t1217 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_257).value()), implicit_cast<TNode<Object>>((*is_little_endian_258).value()), implicit_cast<ElementsKind>(INT16_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1217));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1217));
  }
}

TF_BUILTIN(DataViewPrototypeGetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:498:63
  {
    // ../../src/builtins/data-view.tq:499:7
    auto t1218 = [=]() {
      int31_t t1220 = 0;
      TNode<IntPtrT> t1221 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1220)));
      TNode<Object> t1222 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1221)));
      return implicit_cast<TNode<Object>>(t1222);
    };
    auto t1219 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1223_772_impl);
    auto t1223_772 = &t1223_772_impl;
    USE(t1223_772);
    {
      Label label__True_372_impl(this);
      Label* label__True_372 = &label__True_372_impl;
      USE(label__True_372);
      Label label__False_373_impl(this);
      Label* label__False_373 = &label__False_373_impl;
      USE(label__False_373);
      Label label__done_773_1252_impl(this, {t1223_772});
      Label* label__done_773_1252 = &label__done_773_1252_impl;
      USE(label__done_773_1252);
      TNode<IntPtrT> t1224 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1225 = 0;
      TNode<IntPtrT> t1226 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1225)));
      TNode<BoolT> t1227 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1224), implicit_cast<TNode<IntPtrT>>(t1226)));
      USE(implicit_cast<TNode<BoolT>>(t1227));
      Branch(implicit_cast<TNode<BoolT>>(t1227), label__True_372, label__False_373);
      BIND(label__True_372);
            *t1223_772 = implicit_cast<TNode<Object>>(t1218());
      Goto(label__done_773_1252);
      BIND(label__False_373);
            *t1223_772 = implicit_cast<TNode<Object>>(t1219());
      Goto(label__done_773_1252);
      BIND(label__done_773_1252);
    }
    TVARIABLE(Object, offset_259_impl);
    auto offset_259 = &offset_259_impl;
    USE(offset_259);
    *offset_259 = implicit_cast<TNode<Object>>((*t1223_772).value());
    // ../../src/builtins/data-view.tq:502:7
    auto t1228 = [=]() {
      int31_t t1230 = 1;
      TNode<IntPtrT> t1231 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1230)));
      TNode<Object> t1232 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1231)));
      return implicit_cast<TNode<Object>>(t1232);
    };
    auto t1229 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1233_774_impl);
    auto t1233_774 = &t1233_774_impl;
    USE(t1233_774);
    {
      Label label__True_374_impl(this);
      Label* label__True_374 = &label__True_374_impl;
      USE(label__True_374);
      Label label__False_375_impl(this);
      Label* label__False_375 = &label__False_375_impl;
      USE(label__False_375);
      Label label__done_775_1253_impl(this, {t1233_774});
      Label* label__done_775_1253 = &label__done_775_1253_impl;
      USE(label__done_775_1253);
      TNode<IntPtrT> t1234 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1235 = 1;
      TNode<IntPtrT> t1236 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1235)));
      TNode<BoolT> t1237 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1234), implicit_cast<TNode<IntPtrT>>(t1236)));
      USE(implicit_cast<TNode<BoolT>>(t1237));
      Branch(implicit_cast<TNode<BoolT>>(t1237), label__True_374, label__False_375);
      BIND(label__True_374);
            *t1233_774 = implicit_cast<TNode<Object>>(t1228());
      Goto(label__done_775_1253);
      BIND(label__False_375);
            *t1233_774 = implicit_cast<TNode<Object>>(t1229());
      Goto(label__done_775_1253);
      BIND(label__done_775_1253);
    }
    TVARIABLE(Object, is_little_endian_260_impl);
    auto is_little_endian_260 = &is_little_endian_260_impl;
    USE(is_little_endian_260);
    *is_little_endian_260 = implicit_cast<TNode<Object>>((*t1233_774).value());
    // ../../src/builtins/data-view.tq:505:7
    TNode<Numeric> t1238 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_259).value()), implicit_cast<TNode<Object>>((*is_little_endian_260).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1238));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1238));
  }
}

TF_BUILTIN(DataViewPrototypeGetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:510:63
  {
    // ../../src/builtins/data-view.tq:511:7
    auto t1239 = [=]() {
      int31_t t1241 = 0;
      TNode<IntPtrT> t1242 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1241)));
      TNode<Object> t1243 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1242)));
      return implicit_cast<TNode<Object>>(t1243);
    };
    auto t1240 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1244_776_impl);
    auto t1244_776 = &t1244_776_impl;
    USE(t1244_776);
    {
      Label label__True_376_impl(this);
      Label* label__True_376 = &label__True_376_impl;
      USE(label__True_376);
      Label label__False_377_impl(this);
      Label* label__False_377 = &label__False_377_impl;
      USE(label__False_377);
      Label label__done_777_1254_impl(this, {t1244_776});
      Label* label__done_777_1254 = &label__done_777_1254_impl;
      USE(label__done_777_1254);
      TNode<IntPtrT> t1245 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1246 = 0;
      TNode<IntPtrT> t1247 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1246)));
      TNode<BoolT> t1248 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1245), implicit_cast<TNode<IntPtrT>>(t1247)));
      USE(implicit_cast<TNode<BoolT>>(t1248));
      Branch(implicit_cast<TNode<BoolT>>(t1248), label__True_376, label__False_377);
      BIND(label__True_376);
            *t1244_776 = implicit_cast<TNode<Object>>(t1239());
      Goto(label__done_777_1254);
      BIND(label__False_377);
            *t1244_776 = implicit_cast<TNode<Object>>(t1240());
      Goto(label__done_777_1254);
      BIND(label__done_777_1254);
    }
    TVARIABLE(Object, offset_261_impl);
    auto offset_261 = &offset_261_impl;
    USE(offset_261);
    *offset_261 = implicit_cast<TNode<Object>>((*t1244_776).value());
    // ../../src/builtins/data-view.tq:514:7
    auto t1249 = [=]() {
      int31_t t1251 = 1;
      TNode<IntPtrT> t1252 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1251)));
      TNode<Object> t1253 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1252)));
      return implicit_cast<TNode<Object>>(t1253);
    };
    auto t1250 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1254_778_impl);
    auto t1254_778 = &t1254_778_impl;
    USE(t1254_778);
    {
      Label label__True_378_impl(this);
      Label* label__True_378 = &label__True_378_impl;
      USE(label__True_378);
      Label label__False_379_impl(this);
      Label* label__False_379 = &label__False_379_impl;
      USE(label__False_379);
      Label label__done_779_1255_impl(this, {t1254_778});
      Label* label__done_779_1255 = &label__done_779_1255_impl;
      USE(label__done_779_1255);
      TNode<IntPtrT> t1255 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1256 = 1;
      TNode<IntPtrT> t1257 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1256)));
      TNode<BoolT> t1258 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1255), implicit_cast<TNode<IntPtrT>>(t1257)));
      USE(implicit_cast<TNode<BoolT>>(t1258));
      Branch(implicit_cast<TNode<BoolT>>(t1258), label__True_378, label__False_379);
      BIND(label__True_378);
            *t1254_778 = implicit_cast<TNode<Object>>(t1249());
      Goto(label__done_779_1255);
      BIND(label__False_379);
            *t1254_778 = implicit_cast<TNode<Object>>(t1250());
      Goto(label__done_779_1255);
      BIND(label__done_779_1255);
    }
    TVARIABLE(Object, is_little_endian_262_impl);
    auto is_little_endian_262 = &is_little_endian_262_impl;
    USE(is_little_endian_262);
    *is_little_endian_262 = implicit_cast<TNode<Object>>((*t1254_778).value());
    // ../../src/builtins/data-view.tq:517:7
    TNode<Numeric> t1259 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_261).value()), implicit_cast<TNode<Object>>((*is_little_endian_262).value()), implicit_cast<ElementsKind>(INT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1259));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1259));
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:522:63
  {
    // ../../src/builtins/data-view.tq:523:7
    auto t1260 = [=]() {
      int31_t t1262 = 0;
      TNode<IntPtrT> t1263 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1262)));
      TNode<Object> t1264 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1263)));
      return implicit_cast<TNode<Object>>(t1264);
    };
    auto t1261 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1265_780_impl);
    auto t1265_780 = &t1265_780_impl;
    USE(t1265_780);
    {
      Label label__True_380_impl(this);
      Label* label__True_380 = &label__True_380_impl;
      USE(label__True_380);
      Label label__False_381_impl(this);
      Label* label__False_381 = &label__False_381_impl;
      USE(label__False_381);
      Label label__done_781_1256_impl(this, {t1265_780});
      Label* label__done_781_1256 = &label__done_781_1256_impl;
      USE(label__done_781_1256);
      TNode<IntPtrT> t1266 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1267 = 0;
      TNode<IntPtrT> t1268 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1267)));
      TNode<BoolT> t1269 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1266), implicit_cast<TNode<IntPtrT>>(t1268)));
      USE(implicit_cast<TNode<BoolT>>(t1269));
      Branch(implicit_cast<TNode<BoolT>>(t1269), label__True_380, label__False_381);
      BIND(label__True_380);
            *t1265_780 = implicit_cast<TNode<Object>>(t1260());
      Goto(label__done_781_1256);
      BIND(label__False_381);
            *t1265_780 = implicit_cast<TNode<Object>>(t1261());
      Goto(label__done_781_1256);
      BIND(label__done_781_1256);
    }
    TVARIABLE(Object, offset_263_impl);
    auto offset_263 = &offset_263_impl;
    USE(offset_263);
    *offset_263 = implicit_cast<TNode<Object>>((*t1265_780).value());
    // ../../src/builtins/data-view.tq:526:7
    auto t1270 = [=]() {
      int31_t t1272 = 1;
      TNode<IntPtrT> t1273 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1272)));
      TNode<Object> t1274 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1273)));
      return implicit_cast<TNode<Object>>(t1274);
    };
    auto t1271 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1275_782_impl);
    auto t1275_782 = &t1275_782_impl;
    USE(t1275_782);
    {
      Label label__True_382_impl(this);
      Label* label__True_382 = &label__True_382_impl;
      USE(label__True_382);
      Label label__False_383_impl(this);
      Label* label__False_383 = &label__False_383_impl;
      USE(label__False_383);
      Label label__done_783_1257_impl(this, {t1275_782});
      Label* label__done_783_1257 = &label__done_783_1257_impl;
      USE(label__done_783_1257);
      TNode<IntPtrT> t1276 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1277 = 1;
      TNode<IntPtrT> t1278 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1277)));
      TNode<BoolT> t1279 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1276), implicit_cast<TNode<IntPtrT>>(t1278)));
      USE(implicit_cast<TNode<BoolT>>(t1279));
      Branch(implicit_cast<TNode<BoolT>>(t1279), label__True_382, label__False_383);
      BIND(label__True_382);
            *t1275_782 = implicit_cast<TNode<Object>>(t1270());
      Goto(label__done_783_1257);
      BIND(label__False_383);
            *t1275_782 = implicit_cast<TNode<Object>>(t1271());
      Goto(label__done_783_1257);
      BIND(label__done_783_1257);
    }
    TVARIABLE(Object, is_little_endian_264_impl);
    auto is_little_endian_264 = &is_little_endian_264_impl;
    USE(is_little_endian_264);
    *is_little_endian_264 = implicit_cast<TNode<Object>>((*t1275_782).value());
    // ../../src/builtins/data-view.tq:529:7
    TNode<Numeric> t1280 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_263).value()), implicit_cast<TNode<Object>>((*is_little_endian_264).value()), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1280));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1280));
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:534:63
  {
    // ../../src/builtins/data-view.tq:535:7
    auto t1281 = [=]() {
      int31_t t1283 = 0;
      TNode<IntPtrT> t1284 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1283)));
      TNode<Object> t1285 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1284)));
      return implicit_cast<TNode<Object>>(t1285);
    };
    auto t1282 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1286_784_impl);
    auto t1286_784 = &t1286_784_impl;
    USE(t1286_784);
    {
      Label label__True_384_impl(this);
      Label* label__True_384 = &label__True_384_impl;
      USE(label__True_384);
      Label label__False_385_impl(this);
      Label* label__False_385 = &label__False_385_impl;
      USE(label__False_385);
      Label label__done_785_1258_impl(this, {t1286_784});
      Label* label__done_785_1258 = &label__done_785_1258_impl;
      USE(label__done_785_1258);
      TNode<IntPtrT> t1287 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1288 = 0;
      TNode<IntPtrT> t1289 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1288)));
      TNode<BoolT> t1290 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1287), implicit_cast<TNode<IntPtrT>>(t1289)));
      USE(implicit_cast<TNode<BoolT>>(t1290));
      Branch(implicit_cast<TNode<BoolT>>(t1290), label__True_384, label__False_385);
      BIND(label__True_384);
            *t1286_784 = implicit_cast<TNode<Object>>(t1281());
      Goto(label__done_785_1258);
      BIND(label__False_385);
            *t1286_784 = implicit_cast<TNode<Object>>(t1282());
      Goto(label__done_785_1258);
      BIND(label__done_785_1258);
    }
    TVARIABLE(Object, offset_265_impl);
    auto offset_265 = &offset_265_impl;
    USE(offset_265);
    *offset_265 = implicit_cast<TNode<Object>>((*t1286_784).value());
    // ../../src/builtins/data-view.tq:538:7
    auto t1291 = [=]() {
      int31_t t1293 = 1;
      TNode<IntPtrT> t1294 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1293)));
      TNode<Object> t1295 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1294)));
      return implicit_cast<TNode<Object>>(t1295);
    };
    auto t1292 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1296_786_impl);
    auto t1296_786 = &t1296_786_impl;
    USE(t1296_786);
    {
      Label label__True_386_impl(this);
      Label* label__True_386 = &label__True_386_impl;
      USE(label__True_386);
      Label label__False_387_impl(this);
      Label* label__False_387 = &label__False_387_impl;
      USE(label__False_387);
      Label label__done_787_1259_impl(this, {t1296_786});
      Label* label__done_787_1259 = &label__done_787_1259_impl;
      USE(label__done_787_1259);
      TNode<IntPtrT> t1297 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1298 = 1;
      TNode<IntPtrT> t1299 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1298)));
      TNode<BoolT> t1300 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1297), implicit_cast<TNode<IntPtrT>>(t1299)));
      USE(implicit_cast<TNode<BoolT>>(t1300));
      Branch(implicit_cast<TNode<BoolT>>(t1300), label__True_386, label__False_387);
      BIND(label__True_386);
            *t1296_786 = implicit_cast<TNode<Object>>(t1291());
      Goto(label__done_787_1259);
      BIND(label__False_387);
            *t1296_786 = implicit_cast<TNode<Object>>(t1292());
      Goto(label__done_787_1259);
      BIND(label__done_787_1259);
    }
    TVARIABLE(Object, is_little_endian_266_impl);
    auto is_little_endian_266 = &is_little_endian_266_impl;
    USE(is_little_endian_266);
    *is_little_endian_266 = implicit_cast<TNode<Object>>((*t1296_786).value());
    // ../../src/builtins/data-view.tq:541:7
    TNode<Numeric> t1301 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_265).value()), implicit_cast<TNode<Object>>((*is_little_endian_266).value()), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1301));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1301));
  }
}

TF_BUILTIN(DataViewPrototypeGetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:546:63
  {
    // ../../src/builtins/data-view.tq:547:7
    auto t1302 = [=]() {
      int31_t t1304 = 0;
      TNode<IntPtrT> t1305 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1304)));
      TNode<Object> t1306 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1305)));
      return implicit_cast<TNode<Object>>(t1306);
    };
    auto t1303 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1307_788_impl);
    auto t1307_788 = &t1307_788_impl;
    USE(t1307_788);
    {
      Label label__True_388_impl(this);
      Label* label__True_388 = &label__True_388_impl;
      USE(label__True_388);
      Label label__False_389_impl(this);
      Label* label__False_389 = &label__False_389_impl;
      USE(label__False_389);
      Label label__done_789_1260_impl(this, {t1307_788});
      Label* label__done_789_1260 = &label__done_789_1260_impl;
      USE(label__done_789_1260);
      TNode<IntPtrT> t1308 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1309 = 0;
      TNode<IntPtrT> t1310 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1309)));
      TNode<BoolT> t1311 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1308), implicit_cast<TNode<IntPtrT>>(t1310)));
      USE(implicit_cast<TNode<BoolT>>(t1311));
      Branch(implicit_cast<TNode<BoolT>>(t1311), label__True_388, label__False_389);
      BIND(label__True_388);
            *t1307_788 = implicit_cast<TNode<Object>>(t1302());
      Goto(label__done_789_1260);
      BIND(label__False_389);
            *t1307_788 = implicit_cast<TNode<Object>>(t1303());
      Goto(label__done_789_1260);
      BIND(label__done_789_1260);
    }
    TVARIABLE(Object, offset_267_impl);
    auto offset_267 = &offset_267_impl;
    USE(offset_267);
    *offset_267 = implicit_cast<TNode<Object>>((*t1307_788).value());
    // ../../src/builtins/data-view.tq:550:7
    auto t1312 = [=]() {
      int31_t t1314 = 1;
      TNode<IntPtrT> t1315 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1314)));
      TNode<Object> t1316 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1315)));
      return implicit_cast<TNode<Object>>(t1316);
    };
    auto t1313 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1317_790_impl);
    auto t1317_790 = &t1317_790_impl;
    USE(t1317_790);
    {
      Label label__True_390_impl(this);
      Label* label__True_390 = &label__True_390_impl;
      USE(label__True_390);
      Label label__False_391_impl(this);
      Label* label__False_391 = &label__False_391_impl;
      USE(label__False_391);
      Label label__done_791_1261_impl(this, {t1317_790});
      Label* label__done_791_1261 = &label__done_791_1261_impl;
      USE(label__done_791_1261);
      TNode<IntPtrT> t1318 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1319 = 1;
      TNode<IntPtrT> t1320 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1319)));
      TNode<BoolT> t1321 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1318), implicit_cast<TNode<IntPtrT>>(t1320)));
      USE(implicit_cast<TNode<BoolT>>(t1321));
      Branch(implicit_cast<TNode<BoolT>>(t1321), label__True_390, label__False_391);
      BIND(label__True_390);
            *t1317_790 = implicit_cast<TNode<Object>>(t1312());
      Goto(label__done_791_1261);
      BIND(label__False_391);
            *t1317_790 = implicit_cast<TNode<Object>>(t1313());
      Goto(label__done_791_1261);
      BIND(label__done_791_1261);
    }
    TVARIABLE(Object, is_little_endian_268_impl);
    auto is_little_endian_268 = &is_little_endian_268_impl;
    USE(is_little_endian_268);
    *is_little_endian_268 = implicit_cast<TNode<Object>>((*t1317_790).value());
    // ../../src/builtins/data-view.tq:553:7
    TNode<Numeric> t1322 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_267).value()), implicit_cast<TNode<Object>>((*is_little_endian_268).value()), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1322));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1322));
  }
}

TF_BUILTIN(DataViewPrototypeGetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:558:63
  {
    // ../../src/builtins/data-view.tq:559:7
    auto t1323 = [=]() {
      int31_t t1325 = 0;
      TNode<IntPtrT> t1326 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1325)));
      TNode<Object> t1327 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1326)));
      return implicit_cast<TNode<Object>>(t1327);
    };
    auto t1324 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1328_792_impl);
    auto t1328_792 = &t1328_792_impl;
    USE(t1328_792);
    {
      Label label__True_392_impl(this);
      Label* label__True_392 = &label__True_392_impl;
      USE(label__True_392);
      Label label__False_393_impl(this);
      Label* label__False_393 = &label__False_393_impl;
      USE(label__False_393);
      Label label__done_793_1262_impl(this, {t1328_792});
      Label* label__done_793_1262 = &label__done_793_1262_impl;
      USE(label__done_793_1262);
      TNode<IntPtrT> t1329 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1330 = 0;
      TNode<IntPtrT> t1331 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1330)));
      TNode<BoolT> t1332 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1329), implicit_cast<TNode<IntPtrT>>(t1331)));
      USE(implicit_cast<TNode<BoolT>>(t1332));
      Branch(implicit_cast<TNode<BoolT>>(t1332), label__True_392, label__False_393);
      BIND(label__True_392);
            *t1328_792 = implicit_cast<TNode<Object>>(t1323());
      Goto(label__done_793_1262);
      BIND(label__False_393);
            *t1328_792 = implicit_cast<TNode<Object>>(t1324());
      Goto(label__done_793_1262);
      BIND(label__done_793_1262);
    }
    TVARIABLE(Object, offset_269_impl);
    auto offset_269 = &offset_269_impl;
    USE(offset_269);
    *offset_269 = implicit_cast<TNode<Object>>((*t1328_792).value());
    // ../../src/builtins/data-view.tq:562:7
    auto t1333 = [=]() {
      int31_t t1335 = 1;
      TNode<IntPtrT> t1336 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1335)));
      TNode<Object> t1337 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1336)));
      return implicit_cast<TNode<Object>>(t1337);
    };
    auto t1334 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1338_794_impl);
    auto t1338_794 = &t1338_794_impl;
    USE(t1338_794);
    {
      Label label__True_394_impl(this);
      Label* label__True_394 = &label__True_394_impl;
      USE(label__True_394);
      Label label__False_395_impl(this);
      Label* label__False_395 = &label__False_395_impl;
      USE(label__False_395);
      Label label__done_795_1263_impl(this, {t1338_794});
      Label* label__done_795_1263 = &label__done_795_1263_impl;
      USE(label__done_795_1263);
      TNode<IntPtrT> t1339 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1340 = 1;
      TNode<IntPtrT> t1341 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1340)));
      TNode<BoolT> t1342 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1339), implicit_cast<TNode<IntPtrT>>(t1341)));
      USE(implicit_cast<TNode<BoolT>>(t1342));
      Branch(implicit_cast<TNode<BoolT>>(t1342), label__True_394, label__False_395);
      BIND(label__True_394);
            *t1338_794 = implicit_cast<TNode<Object>>(t1333());
      Goto(label__done_795_1263);
      BIND(label__False_395);
            *t1338_794 = implicit_cast<TNode<Object>>(t1334());
      Goto(label__done_795_1263);
      BIND(label__done_795_1263);
    }
    TVARIABLE(Object, is_little_endian_270_impl);
    auto is_little_endian_270 = &is_little_endian_270_impl;
    USE(is_little_endian_270);
    *is_little_endian_270 = implicit_cast<TNode<Object>>((*t1338_794).value());
    // ../../src/builtins/data-view.tq:565:7
    TNode<Numeric> t1343 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_269).value()), implicit_cast<TNode<Object>>((*is_little_endian_270).value()), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1343));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1343));
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value) {
  Label label_macro_end_1264_impl(this, {});
  Label* label_macro_end_1264 = &label_macro_end_1264_impl;
  USE(label_macro_end_1264);
  // ../../src/builtins/data-view.tq:577:39
  {
    // ../../src/builtins/data-view.tq:578:5
    TNode<RawPtrT> t1344 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    int31_t t1345 = 0xFF;
    TNode<Uint32T> t1346 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1345)));
    TNode<Uint32T> t1347 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1346)));
    USE(implicit_cast<TNode<Uint32T>>(t1347));
    StoreWord8(implicit_cast<TNode<RawPtrT>>(t1344), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>(t1347));
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_1265_impl(this, {});
  Label* label_macro_end_1265 = &label_macro_end_1265_impl;
  USE(label_macro_end_1265);
  // ../../src/builtins/data-view.tq:582:56
  {
    // ../../src/builtins/data-view.tq:583:5
    TNode<RawPtrT> t1348 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_271_impl);
    auto data_pointer_271 = &data_pointer_271_impl;
    USE(data_pointer_271);
    *data_pointer_271 = implicit_cast<TNode<RawPtrT>>(t1348);
    // ../../src/builtins/data-view.tq:585:5
    int31_t t1349 = 0xFF;
    TNode<Uint32T> t1350 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1349)));
    TNode<Uint32T> t1351 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1350)));
    USE(implicit_cast<TNode<Uint32T>>(t1351));
    TVARIABLE(Uint32T, b0_272_impl);
    auto b0_272 = &b0_272_impl;
    USE(b0_272);
    *b0_272 = implicit_cast<TNode<Uint32T>>(t1351);
    // ../../src/builtins/data-view.tq:586:5
    int31_t t1352 = 8;
    TNode<Uint32T> t1353 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1352)));
    TNode<Uint32T> t1354 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1353)));
    USE(implicit_cast<TNode<Uint32T>>(t1354));
    int31_t t1355 = 0xFF;
    TNode<Uint32T> t1356 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1355)));
    TNode<Uint32T> t1357 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1354), implicit_cast<TNode<Uint32T>>(t1356)));
    USE(implicit_cast<TNode<Uint32T>>(t1357));
    TVARIABLE(Uint32T, b1_273_impl);
    auto b1_273 = &b1_273_impl;
    USE(b1_273);
    *b1_273 = implicit_cast<TNode<Uint32T>>(t1357);
    // ../../src/builtins/data-view.tq:588:5
    {
      Label label__True_396_impl(this);
      Label* label__True_396 = &label__True_396_impl;
      USE(label__True_396);
      Label label__False_397_impl(this);
      Label* label__False_397 = &label__False_397_impl;
      USE(label__False_397);
      Label label_if_done_label_796_1266_impl(this, {});
      Label* label_if_done_label_796_1266 = &label_if_done_label_796_1266_impl;
      USE(label_if_done_label_796_1266);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_396, label__False_397);
      if (label__True_396->is_used())
      {
        BIND(label__True_396);
        // ../../src/builtins/data-view.tq:588:34
        {
          // ../../src/builtins/data-view.tq:589:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_271).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_272).value()));
          // ../../src/builtins/data-view.tq:590:7
          int31_t t1358 = 1;
          TNode<IntPtrT> t1359 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1358)));
          TNode<IntPtrT> t1360 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1359)));
          USE(implicit_cast<TNode<IntPtrT>>(t1360));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_271).value()), implicit_cast<TNode<IntPtrT>>(t1360), implicit_cast<TNode<Uint32T>>((*b1_273).value()));
        }
        Goto(label_if_done_label_796_1266);
      }
      if (label__False_397->is_used())
      {
        BIND(label__False_397);
        // ../../src/builtins/data-view.tq:591:12
        {
          // ../../src/builtins/data-view.tq:592:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_271).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b1_273).value()));
          // ../../src/builtins/data-view.tq:593:7
          int31_t t1361 = 1;
          TNode<IntPtrT> t1362 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1361)));
          TNode<IntPtrT> t1363 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1362)));
          USE(implicit_cast<TNode<IntPtrT>>(t1363));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_271).value()), implicit_cast<TNode<IntPtrT>>(t1363), implicit_cast<TNode<Uint32T>>((*b0_272).value()));
        }
        Goto(label_if_done_label_796_1266);
      }
      BIND(label_if_done_label_796_1266);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_1267_impl(this, {});
  Label* label_macro_end_1267 = &label_macro_end_1267_impl;
  USE(label_macro_end_1267);
  // ../../src/builtins/data-view.tq:598:56
  {
    // ../../src/builtins/data-view.tq:599:5
    TNode<RawPtrT> t1364 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_274_impl);
    auto data_pointer_274 = &data_pointer_274_impl;
    USE(data_pointer_274);
    *data_pointer_274 = implicit_cast<TNode<RawPtrT>>(t1364);
    // ../../src/builtins/data-view.tq:601:5
    int31_t t1365 = 0xFF;
    TNode<Uint32T> t1366 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1365)));
    TNode<Uint32T> t1367 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1366)));
    USE(implicit_cast<TNode<Uint32T>>(t1367));
    TVARIABLE(Uint32T, b0_275_impl);
    auto b0_275 = &b0_275_impl;
    USE(b0_275);
    *b0_275 = implicit_cast<TNode<Uint32T>>(t1367);
    // ../../src/builtins/data-view.tq:602:5
    int31_t t1368 = 8;
    TNode<Uint32T> t1369 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1368)));
    TNode<Uint32T> t1370 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1369)));
    USE(implicit_cast<TNode<Uint32T>>(t1370));
    int31_t t1371 = 0xFF;
    TNode<Uint32T> t1372 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1371)));
    TNode<Uint32T> t1373 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1370), implicit_cast<TNode<Uint32T>>(t1372)));
    USE(implicit_cast<TNode<Uint32T>>(t1373));
    TVARIABLE(Uint32T, b1_276_impl);
    auto b1_276 = &b1_276_impl;
    USE(b1_276);
    *b1_276 = implicit_cast<TNode<Uint32T>>(t1373);
    // ../../src/builtins/data-view.tq:603:5
    int31_t t1374 = 16;
    TNode<Uint32T> t1375 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1374)));
    TNode<Uint32T> t1376 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1375)));
    USE(implicit_cast<TNode<Uint32T>>(t1376));
    int31_t t1377 = 0xFF;
    TNode<Uint32T> t1378 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1377)));
    TNode<Uint32T> t1379 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1376), implicit_cast<TNode<Uint32T>>(t1378)));
    USE(implicit_cast<TNode<Uint32T>>(t1379));
    TVARIABLE(Uint32T, b2_277_impl);
    auto b2_277 = &b2_277_impl;
    USE(b2_277);
    *b2_277 = implicit_cast<TNode<Uint32T>>(t1379);
    // ../../src/builtins/data-view.tq:604:5
    int31_t t1380 = 24;
    TNode<Uint32T> t1381 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1380)));
    TNode<Uint32T> t1382 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1381)));
    USE(implicit_cast<TNode<Uint32T>>(t1382));
    TVARIABLE(Uint32T, b3_278_impl);
    auto b3_278 = &b3_278_impl;
    USE(b3_278);
    *b3_278 = implicit_cast<TNode<Uint32T>>(t1382);
    // ../../src/builtins/data-view.tq:606:5
    {
      Label label__True_398_impl(this);
      Label* label__True_398 = &label__True_398_impl;
      USE(label__True_398);
      Label label__False_399_impl(this);
      Label* label__False_399 = &label__False_399_impl;
      USE(label__False_399);
      Label label_if_done_label_797_1268_impl(this, {});
      Label* label_if_done_label_797_1268 = &label_if_done_label_797_1268_impl;
      USE(label_if_done_label_797_1268);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_398, label__False_399);
      if (label__True_398->is_used())
      {
        BIND(label__True_398);
        // ../../src/builtins/data-view.tq:606:34
        {
          // ../../src/builtins/data-view.tq:607:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_274).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_275).value()));
          // ../../src/builtins/data-view.tq:608:7
          int31_t t1383 = 1;
          TNode<IntPtrT> t1384 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1383)));
          TNode<IntPtrT> t1385 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1384)));
          USE(implicit_cast<TNode<IntPtrT>>(t1385));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_274).value()), implicit_cast<TNode<IntPtrT>>(t1385), implicit_cast<TNode<Uint32T>>((*b1_276).value()));
          // ../../src/builtins/data-view.tq:609:7
          int31_t t1386 = 2;
          TNode<IntPtrT> t1387 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1386)));
          TNode<IntPtrT> t1388 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1387)));
          USE(implicit_cast<TNode<IntPtrT>>(t1388));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_274).value()), implicit_cast<TNode<IntPtrT>>(t1388), implicit_cast<TNode<Uint32T>>((*b2_277).value()));
          // ../../src/builtins/data-view.tq:610:7
          int31_t t1389 = 3;
          TNode<IntPtrT> t1390 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1389)));
          TNode<IntPtrT> t1391 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1390)));
          USE(implicit_cast<TNode<IntPtrT>>(t1391));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_274).value()), implicit_cast<TNode<IntPtrT>>(t1391), implicit_cast<TNode<Uint32T>>((*b3_278).value()));
        }
        Goto(label_if_done_label_797_1268);
      }
      if (label__False_399->is_used())
      {
        BIND(label__False_399);
        // ../../src/builtins/data-view.tq:611:12
        {
          // ../../src/builtins/data-view.tq:612:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_274).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b3_278).value()));
          // ../../src/builtins/data-view.tq:613:7
          int31_t t1392 = 1;
          TNode<IntPtrT> t1393 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1392)));
          TNode<IntPtrT> t1394 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1393)));
          USE(implicit_cast<TNode<IntPtrT>>(t1394));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_274).value()), implicit_cast<TNode<IntPtrT>>(t1394), implicit_cast<TNode<Uint32T>>((*b2_277).value()));
          // ../../src/builtins/data-view.tq:614:7
          int31_t t1395 = 2;
          TNode<IntPtrT> t1396 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1395)));
          TNode<IntPtrT> t1397 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1396)));
          USE(implicit_cast<TNode<IntPtrT>>(t1397));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_274).value()), implicit_cast<TNode<IntPtrT>>(t1397), implicit_cast<TNode<Uint32T>>((*b1_276).value()));
          // ../../src/builtins/data-view.tq:615:7
          int31_t t1398 = 3;
          TNode<IntPtrT> t1399 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1398)));
          TNode<IntPtrT> t1400 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1399)));
          USE(implicit_cast<TNode<IntPtrT>>(t1400));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_274).value()), implicit_cast<TNode<IntPtrT>>(t1400), implicit_cast<TNode<Uint32T>>((*b0_275).value()));
        }
        Goto(label_if_done_label_797_1268);
      }
      BIND(label_if_done_label_797_1268);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_1269_impl(this, {});
  Label* label_macro_end_1269 = &label_macro_end_1269_impl;
  USE(label_macro_end_1269);
  // ../../src/builtins/data-view.tq:621:56
  {
    // ../../src/builtins/data-view.tq:622:5
    TNode<RawPtrT> t1401 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_279_impl);
    auto data_pointer_279 = &data_pointer_279_impl;
    USE(data_pointer_279);
    *data_pointer_279 = implicit_cast<TNode<RawPtrT>>(t1401);
    // ../../src/builtins/data-view.tq:624:5
    int31_t t1402 = 0xFF;
    TNode<Uint32T> t1403 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1402)));
    TNode<Uint32T> t1404 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1403)));
    USE(implicit_cast<TNode<Uint32T>>(t1404));
    TVARIABLE(Uint32T, b0_280_impl);
    auto b0_280 = &b0_280_impl;
    USE(b0_280);
    *b0_280 = implicit_cast<TNode<Uint32T>>(t1404);
    // ../../src/builtins/data-view.tq:625:5
    int31_t t1405 = 8;
    TNode<Uint32T> t1406 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1405)));
    TNode<Uint32T> t1407 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1406)));
    USE(implicit_cast<TNode<Uint32T>>(t1407));
    int31_t t1408 = 0xFF;
    TNode<Uint32T> t1409 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1408)));
    TNode<Uint32T> t1410 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1407), implicit_cast<TNode<Uint32T>>(t1409)));
    USE(implicit_cast<TNode<Uint32T>>(t1410));
    TVARIABLE(Uint32T, b1_281_impl);
    auto b1_281 = &b1_281_impl;
    USE(b1_281);
    *b1_281 = implicit_cast<TNode<Uint32T>>(t1410);
    // ../../src/builtins/data-view.tq:626:5
    int31_t t1411 = 16;
    TNode<Uint32T> t1412 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1411)));
    TNode<Uint32T> t1413 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1412)));
    USE(implicit_cast<TNode<Uint32T>>(t1413));
    int31_t t1414 = 0xFF;
    TNode<Uint32T> t1415 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1414)));
    TNode<Uint32T> t1416 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1413), implicit_cast<TNode<Uint32T>>(t1415)));
    USE(implicit_cast<TNode<Uint32T>>(t1416));
    TVARIABLE(Uint32T, b2_282_impl);
    auto b2_282 = &b2_282_impl;
    USE(b2_282);
    *b2_282 = implicit_cast<TNode<Uint32T>>(t1416);
    // ../../src/builtins/data-view.tq:627:5
    int31_t t1417 = 24;
    TNode<Uint32T> t1418 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1417)));
    TNode<Uint32T> t1419 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1418)));
    USE(implicit_cast<TNode<Uint32T>>(t1419));
    TVARIABLE(Uint32T, b3_283_impl);
    auto b3_283 = &b3_283_impl;
    USE(b3_283);
    *b3_283 = implicit_cast<TNode<Uint32T>>(t1419);
    // ../../src/builtins/data-view.tq:629:5
    int31_t t1420 = 0xFF;
    TNode<Uint32T> t1421 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1420)));
    TNode<Uint32T> t1422 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1421)));
    USE(implicit_cast<TNode<Uint32T>>(t1422));
    TVARIABLE(Uint32T, b4_284_impl);
    auto b4_284 = &b4_284_impl;
    USE(b4_284);
    *b4_284 = implicit_cast<TNode<Uint32T>>(t1422);
    // ../../src/builtins/data-view.tq:630:5
    int31_t t1423 = 8;
    TNode<Uint32T> t1424 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1423)));
    TNode<Uint32T> t1425 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1424)));
    USE(implicit_cast<TNode<Uint32T>>(t1425));
    int31_t t1426 = 0xFF;
    TNode<Uint32T> t1427 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1426)));
    TNode<Uint32T> t1428 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1425), implicit_cast<TNode<Uint32T>>(t1427)));
    USE(implicit_cast<TNode<Uint32T>>(t1428));
    TVARIABLE(Uint32T, b5_285_impl);
    auto b5_285 = &b5_285_impl;
    USE(b5_285);
    *b5_285 = implicit_cast<TNode<Uint32T>>(t1428);
    // ../../src/builtins/data-view.tq:631:5
    int31_t t1429 = 16;
    TNode<Uint32T> t1430 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1429)));
    TNode<Uint32T> t1431 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1430)));
    USE(implicit_cast<TNode<Uint32T>>(t1431));
    int31_t t1432 = 0xFF;
    TNode<Uint32T> t1433 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1432)));
    TNode<Uint32T> t1434 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1431), implicit_cast<TNode<Uint32T>>(t1433)));
    USE(implicit_cast<TNode<Uint32T>>(t1434));
    TVARIABLE(Uint32T, b6_286_impl);
    auto b6_286 = &b6_286_impl;
    USE(b6_286);
    *b6_286 = implicit_cast<TNode<Uint32T>>(t1434);
    // ../../src/builtins/data-view.tq:632:5
    int31_t t1435 = 24;
    TNode<Uint32T> t1436 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1435)));
    TNode<Uint32T> t1437 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1436)));
    USE(implicit_cast<TNode<Uint32T>>(t1437));
    TVARIABLE(Uint32T, b7_287_impl);
    auto b7_287 = &b7_287_impl;
    USE(b7_287);
    *b7_287 = implicit_cast<TNode<Uint32T>>(t1437);
    // ../../src/builtins/data-view.tq:635:5
    {
      Label label__True_400_impl(this);
      Label* label__True_400 = &label__True_400_impl;
      USE(label__True_400);
      Label label__False_401_impl(this);
      Label* label__False_401 = &label__False_401_impl;
      USE(label__False_401);
      Label label_if_done_label_798_1270_impl(this, {});
      Label* label_if_done_label_798_1270 = &label_if_done_label_798_1270_impl;
      USE(label_if_done_label_798_1270);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_400, label__False_401);
      if (label__True_400->is_used())
      {
        BIND(label__True_400);
        // ../../src/builtins/data-view.tq:635:34
        {
          // ../../src/builtins/data-view.tq:636:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_280).value()));
          // ../../src/builtins/data-view.tq:637:7
          int31_t t1438 = 1;
          TNode<IntPtrT> t1439 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1438)));
          TNode<IntPtrT> t1440 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1439)));
          USE(implicit_cast<TNode<IntPtrT>>(t1440));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1440), implicit_cast<TNode<Uint32T>>((*b1_281).value()));
          // ../../src/builtins/data-view.tq:638:7
          int31_t t1441 = 2;
          TNode<IntPtrT> t1442 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1441)));
          TNode<IntPtrT> t1443 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1442)));
          USE(implicit_cast<TNode<IntPtrT>>(t1443));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1443), implicit_cast<TNode<Uint32T>>((*b2_282).value()));
          // ../../src/builtins/data-view.tq:639:7
          int31_t t1444 = 3;
          TNode<IntPtrT> t1445 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1444)));
          TNode<IntPtrT> t1446 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1445)));
          USE(implicit_cast<TNode<IntPtrT>>(t1446));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1446), implicit_cast<TNode<Uint32T>>((*b3_283).value()));
          // ../../src/builtins/data-view.tq:640:7
          int31_t t1447 = 4;
          TNode<IntPtrT> t1448 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1447)));
          TNode<IntPtrT> t1449 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1448)));
          USE(implicit_cast<TNode<IntPtrT>>(t1449));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1449), implicit_cast<TNode<Uint32T>>((*b4_284).value()));
          // ../../src/builtins/data-view.tq:641:7
          int31_t t1450 = 5;
          TNode<IntPtrT> t1451 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1450)));
          TNode<IntPtrT> t1452 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1451)));
          USE(implicit_cast<TNode<IntPtrT>>(t1452));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1452), implicit_cast<TNode<Uint32T>>((*b5_285).value()));
          // ../../src/builtins/data-view.tq:642:7
          int31_t t1453 = 6;
          TNode<IntPtrT> t1454 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1453)));
          TNode<IntPtrT> t1455 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1454)));
          USE(implicit_cast<TNode<IntPtrT>>(t1455));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1455), implicit_cast<TNode<Uint32T>>((*b6_286).value()));
          // ../../src/builtins/data-view.tq:643:7
          int31_t t1456 = 7;
          TNode<IntPtrT> t1457 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1456)));
          TNode<IntPtrT> t1458 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1457)));
          USE(implicit_cast<TNode<IntPtrT>>(t1458));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1458), implicit_cast<TNode<Uint32T>>((*b7_287).value()));
        }
        Goto(label_if_done_label_798_1270);
      }
      if (label__False_401->is_used())
      {
        BIND(label__False_401);
        // ../../src/builtins/data-view.tq:644:12
        {
          // ../../src/builtins/data-view.tq:645:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b7_287).value()));
          // ../../src/builtins/data-view.tq:646:7
          int31_t t1459 = 1;
          TNode<IntPtrT> t1460 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1459)));
          TNode<IntPtrT> t1461 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1460)));
          USE(implicit_cast<TNode<IntPtrT>>(t1461));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1461), implicit_cast<TNode<Uint32T>>((*b6_286).value()));
          // ../../src/builtins/data-view.tq:647:7
          int31_t t1462 = 2;
          TNode<IntPtrT> t1463 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1462)));
          TNode<IntPtrT> t1464 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1463)));
          USE(implicit_cast<TNode<IntPtrT>>(t1464));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1464), implicit_cast<TNode<Uint32T>>((*b5_285).value()));
          // ../../src/builtins/data-view.tq:648:7
          int31_t t1465 = 3;
          TNode<IntPtrT> t1466 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1465)));
          TNode<IntPtrT> t1467 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1466)));
          USE(implicit_cast<TNode<IntPtrT>>(t1467));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1467), implicit_cast<TNode<Uint32T>>((*b4_284).value()));
          // ../../src/builtins/data-view.tq:649:7
          int31_t t1468 = 4;
          TNode<IntPtrT> t1469 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1468)));
          TNode<IntPtrT> t1470 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1469)));
          USE(implicit_cast<TNode<IntPtrT>>(t1470));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1470), implicit_cast<TNode<Uint32T>>((*b3_283).value()));
          // ../../src/builtins/data-view.tq:650:7
          int31_t t1471 = 5;
          TNode<IntPtrT> t1472 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1471)));
          TNode<IntPtrT> t1473 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1472)));
          USE(implicit_cast<TNode<IntPtrT>>(t1473));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1473), implicit_cast<TNode<Uint32T>>((*b2_282).value()));
          // ../../src/builtins/data-view.tq:651:7
          int31_t t1474 = 6;
          TNode<IntPtrT> t1475 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1474)));
          TNode<IntPtrT> t1476 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1475)));
          USE(implicit_cast<TNode<IntPtrT>>(t1476));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1476), implicit_cast<TNode<Uint32T>>((*b1_281).value()));
          // ../../src/builtins/data-view.tq:652:7
          int31_t t1477 = 7;
          TNode<IntPtrT> t1478 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1477)));
          TNode<IntPtrT> t1479 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1478)));
          USE(implicit_cast<TNode<IntPtrT>>(t1479));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_279).value()), implicit_cast<TNode<IntPtrT>>(t1479), implicit_cast<TNode<Uint32T>>((*b0_280).value()));
        }
        Goto(label_if_done_label_798_1270);
      }
      BIND(label_if_done_label_798_1270);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BigInt> p_bigint_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_1271_impl(this, {});
  Label* label_macro_end_1271 = &label_macro_end_1271_impl;
  USE(label_macro_end_1271);
  // ../../src/builtins/data-view.tq:665:60
  {
    // ../../src/builtins/data-view.tq:667:5
    TNode<UintPtrT> t1480 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntLength(implicit_cast<TNode<BigInt>>(p_bigint_value)));
    USE(implicit_cast<TNode<UintPtrT>>(t1480));
    TVARIABLE(UintPtrT, length_288_impl);
    auto length_288 = &length_288_impl;
    USE(length_288);
    *length_288 = implicit_cast<TNode<UintPtrT>>(t1480);
    // ../../src/builtins/data-view.tq:668:5
    TNode<UintPtrT> t1481 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntSign(implicit_cast<TNode<BigInt>>(p_bigint_value)));
    USE(implicit_cast<TNode<UintPtrT>>(t1481));
    TVARIABLE(UintPtrT, sign_289_impl);
    auto sign_289 = &sign_289_impl;
    USE(sign_289);
    *sign_289 = implicit_cast<TNode<UintPtrT>>(t1481);
    // ../../src/builtins/data-view.tq:672:5
    int31_t t1482 = 0;
    TVARIABLE(Uint32T, low_word_290_impl);
    auto low_word_290 = &low_word_290_impl;
    USE(low_word_290);
    TNode<Uint32T> t1483 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1482)));
    *low_word_290 = implicit_cast<TNode<Uint32T>>(t1483);
    // ../../src/builtins/data-view.tq:673:5
    int31_t t1484 = 0;
    TVARIABLE(Uint32T, high_word_291_impl);
    auto high_word_291 = &high_word_291_impl;
    USE(high_word_291);
    TNode<Uint32T> t1485 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1484)));
    *high_word_291 = implicit_cast<TNode<Uint32T>>(t1485);
    // ../../src/builtins/data-view.tq:676:5
    {
      Label label__True_402_impl(this);
      Label* label__True_402 = &label__True_402_impl;
      USE(label__True_402);
      Label label__False_403_impl(this, {high_word_291, low_word_290});
      Label* label__False_403 = &label__False_403_impl;
      USE(label__False_403);
      int31_t t1486 = 0;
      TNode<UintPtrT> t1487 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1486)));
      TNode<BoolT> t1488 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<UintPtrT>>((*length_288).value()), implicit_cast<TNode<UintPtrT>>(t1487)));
      USE(implicit_cast<TNode<BoolT>>(t1488));
      Branch(implicit_cast<TNode<BoolT>>(t1488), label__True_402, label__False_403);
      if (label__True_402->is_used())
      {
        BIND(label__True_402);
        // ../../src/builtins/data-view.tq:676:22
        {
          // ../../src/builtins/data-view.tq:677:7
          {
            bool t1489 = Is64();
            USE(implicit_cast<bool>(t1489));
            if ((implicit_cast<bool>(t1489))) {
              // ../../src/builtins/data-view.tq:677:29
              {
                // ../../src/builtins/data-view.tq:679:9
                int31_t t1490 = 0;
                TNode<UintPtrT> t1491 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigint_value), implicit_cast<int31_t>(t1490)));
                USE(implicit_cast<TNode<UintPtrT>>(t1491));
                TVARIABLE(UintPtrT, value_292_impl);
                auto value_292 = &value_292_impl;
                USE(value_292);
                *value_292 = implicit_cast<TNode<UintPtrT>>(t1491);
                // ../../src/builtins/data-view.tq:680:9
                TNode<Uint32T> t1492 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>((*value_292).value())));
                USE(implicit_cast<TNode<Uint32T>>(t1492));
                *low_word_290 = implicit_cast<TNode<Uint32T>>(t1492);
                // ../../src/builtins/data-view.tq:681:9
                int31_t t1493 = 32;
                TNode<UintPtrT> t1494 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1493)));
                TNode<UintPtrT> t1495 = UncheckedCast<UintPtrT>(WordShr(implicit_cast<TNode<UintPtrT>>((*value_292).value()), implicit_cast<TNode<UintPtrT>>(t1494)));
                USE(implicit_cast<TNode<UintPtrT>>(t1495));
                TNode<Uint32T> t1496 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1495)));
                USE(implicit_cast<TNode<Uint32T>>(t1496));
                *high_word_291 = implicit_cast<TNode<Uint32T>>(t1496);
              }
            } else {
              // ../../src/builtins/data-view.tq:683:12
              {
                // ../../src/builtins/data-view.tq:684:9
                int31_t t1497 = 0;
                TNode<UintPtrT> t1498 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigint_value), implicit_cast<int31_t>(t1497)));
                USE(implicit_cast<TNode<UintPtrT>>(t1498));
                TNode<Uint32T> t1499 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1498)));
                USE(implicit_cast<TNode<Uint32T>>(t1499));
                *low_word_290 = implicit_cast<TNode<Uint32T>>(t1499);
                // ../../src/builtins/data-view.tq:685:9
                {
                  Label label__True_406_impl(this);
                  Label* label__True_406 = &label__True_406_impl;
                  USE(label__True_406);
                  Label label__False_407_impl(this, {high_word_291});
                  Label* label__False_407 = &label__False_407_impl;
                  USE(label__False_407);
                  int31_t t1500 = 2;
                  TNode<UintPtrT> t1501 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1500)));
                  TNode<BoolT> t1502 = UncheckedCast<BoolT>(UintPtrGreaterThanOrEqual(implicit_cast<TNode<UintPtrT>>((*length_288).value()), implicit_cast<TNode<UintPtrT>>(t1501)));
                  USE(implicit_cast<TNode<BoolT>>(t1502));
                  Branch(implicit_cast<TNode<BoolT>>(t1502), label__True_406, label__False_407);
                  if (label__True_406->is_used())
                  {
                    BIND(label__True_406);
                    // ../../src/builtins/data-view.tq:685:26
                    {
                      // ../../src/builtins/data-view.tq:686:11
                      int31_t t1503 = 1;
                      TNode<UintPtrT> t1504 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigint_value), implicit_cast<int31_t>(t1503)));
                      USE(implicit_cast<TNode<UintPtrT>>(t1504));
                      TNode<Uint32T> t1505 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1504)));
                      USE(implicit_cast<TNode<Uint32T>>(t1505));
                      *high_word_291 = implicit_cast<TNode<Uint32T>>(t1505);
                    }
                    Goto(label__False_407);
                  }
                  BIND(label__False_407);
                }
              }
            }
          }
        }
        Goto(label__False_403);
      }
      BIND(label__False_403);
    }
    // ../../src/builtins/data-view.tq:691:5
    {
      Label label__True_408_impl(this);
      Label* label__True_408 = &label__True_408_impl;
      USE(label__True_408);
      Label label__False_409_impl(this, {high_word_291, low_word_290});
      Label* label__False_409 = &label__False_409_impl;
      USE(label__False_409);
      int31_t t1506 = 0;
      TNode<UintPtrT> t1507 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1506)));
      TNode<BoolT> t1508 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<UintPtrT>>((*sign_289).value()), implicit_cast<TNode<UintPtrT>>(t1507)));
      USE(implicit_cast<TNode<BoolT>>(t1508));
      Branch(implicit_cast<TNode<BoolT>>(t1508), label__True_408, label__False_409);
      if (label__True_408->is_used())
      {
        BIND(label__True_408);
        // ../../src/builtins/data-view.tq:691:20
        {
          // ../../src/builtins/data-view.tq:692:7
          int31_t t1509 = 0;
          TNode<Int32T> t1510 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*high_word_291).value())));
          USE(implicit_cast<TNode<Int32T>>(t1510));
          TNode<Int32T> t1511 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1509)));
          TNode<Int32T> t1512 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1511), implicit_cast<TNode<Int32T>>(t1510)));
          USE(implicit_cast<TNode<Int32T>>(t1512));
          TNode<Uint32T> t1513 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1512)));
          USE(implicit_cast<TNode<Uint32T>>(t1513));
          *high_word_291 = implicit_cast<TNode<Uint32T>>(t1513);
          // ../../src/builtins/data-view.tq:693:7
          {
            Label label__True_410_impl(this);
            Label* label__True_410 = &label__True_410_impl;
            USE(label__True_410);
            Label label__False_411_impl(this, {high_word_291});
            Label* label__False_411 = &label__False_411_impl;
            USE(label__False_411);
            int31_t t1514 = 0;
            TNode<Uint32T> t1515 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1514)));
            TNode<BoolT> t1516 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Uint32T>>((*low_word_290).value()), implicit_cast<TNode<Uint32T>>(t1515)));
            USE(implicit_cast<TNode<BoolT>>(t1516));
            Branch(implicit_cast<TNode<BoolT>>(t1516), label__True_410, label__False_411);
            if (label__True_410->is_used())
            {
              BIND(label__True_410);
              // ../../src/builtins/data-view.tq:693:26
              {
                // ../../src/builtins/data-view.tq:694:9
                TNode<Int32T> t1517 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*high_word_291).value())));
                USE(implicit_cast<TNode<Int32T>>(t1517));
                int31_t t1518 = 1;
                TNode<Int32T> t1519 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1518)));
                TNode<Int32T> t1520 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1517), implicit_cast<TNode<Int32T>>(t1519)));
                USE(implicit_cast<TNode<Int32T>>(t1520));
                TNode<Uint32T> t1521 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1520)));
                USE(implicit_cast<TNode<Uint32T>>(t1521));
                *high_word_291 = implicit_cast<TNode<Uint32T>>(t1521);
              }
              Goto(label__False_411);
            }
            BIND(label__False_411);
          }
          // ../../src/builtins/data-view.tq:696:7
          int31_t t1522 = 0;
          TNode<Int32T> t1523 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*low_word_290).value())));
          USE(implicit_cast<TNode<Int32T>>(t1523));
          TNode<Int32T> t1524 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1522)));
          TNode<Int32T> t1525 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1524), implicit_cast<TNode<Int32T>>(t1523)));
          USE(implicit_cast<TNode<Int32T>>(t1525));
          TNode<Uint32T> t1526 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1525)));
          USE(implicit_cast<TNode<Uint32T>>(t1526));
          *low_word_290 = implicit_cast<TNode<Uint32T>>(t1526);
        }
        Goto(label__False_409);
      }
      BIND(label__False_409);
    }
    // ../../src/builtins/data-view.tq:699:5
    StoreDataView64(implicit_cast<TNode<JSArrayBuffer>>(p_buffer), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*low_word_290).value()), implicit_cast<TNode<Uint32T>>((*high_word_291).value()), implicit_cast<TNode<BoolT>>(p_requested_little_endian));
  }
}

compiler::TNode<Object> DataViewBuiltinsFromDSLAssembler::DataViewSet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_value, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Object, _return_293_impl);
  auto _return_293 = &_return_293_impl;
  USE(_return_293);
  Label label_macro_end_1272_impl(this, {_return_293});
  Label* label_macro_end_1272 = &label_macro_end_1272_impl;
  USE(label_macro_end_1272);
  // ../../src/builtins/data-view.tq:708:59
  {
    // ../../src/builtins/data-view.tq:710:5
    TNode<String> t1527 = UncheckedCast<String>(MakeDataViewSetterNameString(implicit_cast<ElementsKind>(p_kind)));
    USE(implicit_cast<TNode<String>>(t1527));
    TNode<JSDataView> t1528 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t1527)));
    USE(implicit_cast<TNode<JSDataView>>(t1528));
    TVARIABLE(JSDataView, data_view_294_impl);
    auto data_view_294 = &data_view_294_impl;
    USE(data_view_294);
    *data_view_294 = implicit_cast<TNode<JSDataView>>(t1528);
    // ../../src/builtins/data-view.tq:713:5
    TVARIABLE(Number, getIndex_295_impl);
    auto getIndex_295 = &getIndex_295_impl;
    USE(getIndex_295);
    // ../../src/builtins/data-view.tq:714:5
    {
      Label label_try_done_799_1273_impl(this);
      Label* label_try_done_799_1273 = &label_try_done_799_1273_impl;
      USE(label_try_done_799_1273);
      Label label_RangeError_412_impl(this);
      Label* label_RangeError_412 = &label_RangeError_412_impl;
      USE(label_RangeError_412);
      Label label_try_begin_800_1274_impl(this);
      Label* label_try_begin_800_1274 = &label_try_begin_800_1274_impl;
      USE(label_try_begin_800_1274);
      Goto(label_try_begin_800_1274);
      if (label_try_begin_800_1274->is_used())
      {
        BIND(label_try_begin_800_1274);
        // ../../src/builtins/data-view.tq:714:9
        {
          // ../../src/builtins/data-view.tq:715:7
          TNode<Number> t1529 = UncheckedCast<Number>(ToIndex(implicit_cast<TNode<Object>>(p_offset), implicit_cast<TNode<Context>>(p_context), label_RangeError_412));
          USE(implicit_cast<TNode<Number>>(t1529));
          *getIndex_295 = implicit_cast<TNode<Number>>(t1529);
        }
        Goto(label_try_done_799_1273);
      }
      if (label_RangeError_412->is_used())
      {
        BIND(label_RangeError_412);
        // ../../src/builtins/data-view.tq:717:22
        {
          // ../../src/builtins/data-view.tq:718:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label_try_done_799_1273);
    }
    // ../../src/builtins/data-view.tq:721:5
    TNode<BoolT> t1530 = UncheckedCast<BoolT>(ToBoolean(implicit_cast<TNode<Object>>(p_requested_little_endian)));
    USE(implicit_cast<TNode<BoolT>>(t1530));
    TVARIABLE(BoolT, littleEndian_296_impl);
    auto littleEndian_296 = &littleEndian_296_impl;
    USE(littleEndian_296);
    *littleEndian_296 = implicit_cast<TNode<BoolT>>(t1530);
    // ../../src/builtins/data-view.tq:722:5
    TNode<JSArrayBuffer> t1531 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*data_view_294).value())));
    TVARIABLE(JSArrayBuffer, buffer_297_impl);
    auto buffer_297 = &buffer_297_impl;
    USE(buffer_297);
    *buffer_297 = implicit_cast<TNode<JSArrayBuffer>>(t1531);
    // ../../src/builtins/data-view.tq:724:5
    TVARIABLE(BigInt, bigint_value_298_impl);
    auto bigint_value_298 = &bigint_value_298_impl;
    USE(bigint_value_298);
    // ../../src/builtins/data-view.tq:725:5
    TVARIABLE(Number, num_value_299_impl);
    auto num_value_299 = &num_value_299_impl;
    USE(num_value_299);
    // ../../src/builtins/data-view.tq:728:5
    {
      Label label__False_415_impl(this);
      Label* label__False_415 = &label__False_415_impl;
      USE(label__False_415);
      bool t1532 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1532));
      bool t1533 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1533));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1532) || implicit_cast<bool>(t1533))))) {
        // ../../src/builtins/data-view.tq:728:76
        {
          // ../../src/builtins/data-view.tq:729:7
          TNode<BigInt> t1534 = UncheckedCast<BigInt>(ToBigInt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_value)));
          USE(implicit_cast<TNode<BigInt>>(t1534));
          *bigint_value_298 = implicit_cast<TNode<BigInt>>(t1534);
        }
      } else {
        // ../../src/builtins/data-view.tq:730:12
        {
          // ../../src/builtins/data-view.tq:731:7
          TNode<Number> t1535 = UncheckedCast<Number>(ToNumber(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_value)));
          USE(implicit_cast<TNode<Number>>(t1535));
          *num_value_299 = implicit_cast<TNode<Number>>(t1535);
        }
      }
    }
    // ../../src/builtins/data-view.tq:734:5
    {
      Label label__True_416_impl(this);
      Label* label__True_416 = &label__True_416_impl;
      USE(label__True_416);
      Label label__False_417_impl(this, {});
      Label* label__False_417 = &label__False_417_impl;
      USE(label__False_417);
      TNode<BoolT> t1536 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>((*buffer_297).value())));
      USE(implicit_cast<TNode<BoolT>>(t1536));
      Branch(implicit_cast<TNode<BoolT>>(t1536), label__True_416, label__False_417);
      if (label__True_416->is_used())
      {
        BIND(label__True_416);
        // ../../src/builtins/data-view.tq:734:35
        {
          // ../../src/builtins/data-view.tq:735:7
          TNode<String> t1537 = UncheckedCast<String>(MakeDataViewSetterNameString(implicit_cast<ElementsKind>(p_kind)));
          USE(implicit_cast<TNode<String>>(t1537));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t1537));
        }
      }
      BIND(label__False_417);
    }
    // ../../src/builtins/data-view.tq:739:5
    TNode<Number> t1538 = UncheckedCast<Number>(LoadDataViewByteOffset(implicit_cast<TNode<JSDataView>>((*data_view_294).value())));
    TVARIABLE(Number, viewOffset_300_impl);
    auto viewOffset_300 = &viewOffset_300_impl;
    USE(viewOffset_300);
    *viewOffset_300 = implicit_cast<TNode<Number>>(t1538);
    // ../../src/builtins/data-view.tq:740:5
    TNode<Number> t1539 = UncheckedCast<Number>(LoadDataViewByteLength(implicit_cast<TNode<JSDataView>>((*data_view_294).value())));
    TVARIABLE(Number, viewSize_301_impl);
    auto viewSize_301 = &viewSize_301_impl;
    USE(viewSize_301);
    *viewSize_301 = implicit_cast<TNode<Number>>(t1539);
    // ../../src/builtins/data-view.tq:741:5
    int31_t t1540 = DataViewElementSize(implicit_cast<ElementsKind>(p_kind));
    USE(implicit_cast<int31_t>(t1540));
    TVARIABLE(Number, elementSize_302_impl);
    auto elementSize_302 = &elementSize_302_impl;
    USE(elementSize_302);
    TNode<Number> t1541 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t1540)));
    *elementSize_302 = implicit_cast<TNode<Number>>(t1541);
    // ../../src/builtins/data-view.tq:743:5
    {
      Label label__True_418_impl(this);
      Label* label__True_418 = &label__True_418_impl;
      USE(label__True_418);
      Label label__False_419_impl(this, {});
      Label* label__False_419 = &label__False_419_impl;
      USE(label__False_419);
      TNode<Number> t1542 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*getIndex_295).value()), implicit_cast<TNode<Number>>((*elementSize_302).value())));
      USE(implicit_cast<TNode<Number>>(t1542));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t1542), implicit_cast<TNode<Number>>((*viewSize_301).value()), label__True_418, label__False_419);
      if (label__True_418->is_used())
      {
        BIND(label__True_418);
        // ../../src/builtins/data-view.tq:743:44
        {
          // ../../src/builtins/data-view.tq:744:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label__False_419);
    }
    // ../../src/builtins/data-view.tq:747:5
    TNode<Float64T> t1543 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*getIndex_295).value())));
    USE(implicit_cast<TNode<Float64T>>(t1543));
    TVARIABLE(Float64T, getIndexFloat_303_impl);
    auto getIndexFloat_303 = &getIndexFloat_303_impl;
    USE(getIndexFloat_303);
    *getIndexFloat_303 = implicit_cast<TNode<Float64T>>(t1543);
    // ../../src/builtins/data-view.tq:748:5
    TNode<UintPtrT> t1544 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*getIndexFloat_303).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1544));
    TNode<IntPtrT> t1545 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1544)));
    USE(implicit_cast<TNode<IntPtrT>>(t1545));
    TVARIABLE(IntPtrT, getIndexIntptr_304_impl);
    auto getIndexIntptr_304 = &getIndexIntptr_304_impl;
    USE(getIndexIntptr_304);
    *getIndexIntptr_304 = implicit_cast<TNode<IntPtrT>>(t1545);
    // ../../src/builtins/data-view.tq:749:5
    TNode<Float64T> t1546 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*viewOffset_300).value())));
    USE(implicit_cast<TNode<Float64T>>(t1546));
    TVARIABLE(Float64T, viewOffsetFloat_305_impl);
    auto viewOffsetFloat_305 = &viewOffsetFloat_305_impl;
    USE(viewOffsetFloat_305);
    *viewOffsetFloat_305 = implicit_cast<TNode<Float64T>>(t1546);
    // ../../src/builtins/data-view.tq:750:5
    TNode<UintPtrT> t1547 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*viewOffsetFloat_305).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1547));
    TNode<IntPtrT> t1548 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1547)));
    USE(implicit_cast<TNode<IntPtrT>>(t1548));
    TVARIABLE(IntPtrT, viewOffsetIntptr_306_impl);
    auto viewOffsetIntptr_306 = &viewOffsetIntptr_306_impl;
    USE(viewOffsetIntptr_306);
    *viewOffsetIntptr_306 = implicit_cast<TNode<IntPtrT>>(t1548);
    // ../../src/builtins/data-view.tq:752:5
    TNode<IntPtrT> t1549 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*getIndexIntptr_304).value()), implicit_cast<TNode<IntPtrT>>((*viewOffsetIntptr_306).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t1549));
    TVARIABLE(IntPtrT, bufferIndex_307_impl);
    auto bufferIndex_307 = &bufferIndex_307_impl;
    USE(bufferIndex_307);
    *bufferIndex_307 = implicit_cast<TNode<IntPtrT>>(t1549);
    // ../../src/builtins/data-view.tq:754:5
    {
      Label label__False_422_impl(this);
      Label* label__False_422 = &label__False_422_impl;
      USE(label__False_422);
      bool t1550 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1550));
      bool t1551 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1551));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1550) || implicit_cast<bool>(t1551))))) {
        // ../../src/builtins/data-view.tq:754:76
        {
          // ../../src/builtins/data-view.tq:755:7
          StoreDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_297).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_307).value()), implicit_cast<TNode<BigInt>>((*bigint_value_298).value()), implicit_cast<TNode<BoolT>>((*littleEndian_296).value()));
        }
      } else {
        // ../../src/builtins/data-view.tq:758:10
        {
          // ../../src/builtins/data-view.tq:759:7
          TNode<Float64T> t1552 = UncheckedCast<Float64T>(ChangeNumberToFloat64(implicit_cast<TNode<Number>>((*num_value_299).value())));
          USE(implicit_cast<TNode<Float64T>>(t1552));
          TVARIABLE(Float64T, double_value_308_impl);
          auto double_value_308 = &double_value_308_impl;
          USE(double_value_308);
          *double_value_308 = implicit_cast<TNode<Float64T>>(t1552);
          // ../../src/builtins/data-view.tq:761:7
          {
            Label label__False_425_impl(this);
            Label* label__False_425 = &label__False_425_impl;
            USE(label__False_425);
            bool t1553 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
            USE(implicit_cast<bool>(t1553));
            bool t1554 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
            USE(implicit_cast<bool>(t1554));
            if ((implicit_cast<bool>((implicit_cast<bool>(t1553) || implicit_cast<bool>(t1554))))) {
              // ../../src/builtins/data-view.tq:761:70
              {
                // ../../src/builtins/data-view.tq:762:9
                TNode<Uint32T> t1555 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*double_value_308).value())));
                USE(implicit_cast<TNode<Uint32T>>(t1555));
                StoreDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_297).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_307).value()), implicit_cast<TNode<Uint32T>>(t1555));
              }
            } else {
              // ../../src/builtins/data-view.tq:765:12
              {
                Label label__False_428_impl(this);
                Label* label__False_428 = &label__False_428_impl;
                USE(label__False_428);
                bool t1556 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
                USE(implicit_cast<bool>(t1556));
                bool t1557 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                USE(implicit_cast<bool>(t1557));
                if ((implicit_cast<bool>((implicit_cast<bool>(t1556) || implicit_cast<bool>(t1557))))) {
                  // ../../src/builtins/data-view.tq:765:77
                  {
                    // ../../src/builtins/data-view.tq:766:9
                    TNode<Uint32T> t1558 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*double_value_308).value())));
                    USE(implicit_cast<TNode<Uint32T>>(t1558));
                    StoreDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_297).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_307).value()), implicit_cast<TNode<Uint32T>>(t1558), implicit_cast<TNode<BoolT>>((*littleEndian_296).value()));
                  }
                } else {
                  // ../../src/builtins/data-view.tq:769:12
                  {
                    Label label__False_431_impl(this);
                    Label* label__False_431 = &label__False_431_impl;
                    USE(label__False_431);
                    bool t1559 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                    USE(implicit_cast<bool>(t1559));
                    bool t1560 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                    USE(implicit_cast<bool>(t1560));
                    if ((implicit_cast<bool>((implicit_cast<bool>(t1559) || implicit_cast<bool>(t1560))))) {
                      // ../../src/builtins/data-view.tq:769:77
                      {
                        // ../../src/builtins/data-view.tq:770:9
                        TNode<Uint32T> t1561 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*double_value_308).value())));
                        USE(implicit_cast<TNode<Uint32T>>(t1561));
                        StoreDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_297).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_307).value()), implicit_cast<TNode<Uint32T>>(t1561), implicit_cast<TNode<BoolT>>((*littleEndian_296).value()));
                      }
                    } else {
                      // ../../src/builtins/data-view.tq:773:12
                      {
                        bool t1562 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                        USE(implicit_cast<bool>(t1562));
                        if ((implicit_cast<bool>(t1562))) {
                          // ../../src/builtins/data-view.tq:773:52
                          {
                            // ../../src/builtins/data-view.tq:774:9
                            TNode<Float32T> t1563 = UncheckedCast<Float32T>(TruncateFloat64ToFloat32(implicit_cast<TNode<Float64T>>((*double_value_308).value())));
                            USE(implicit_cast<TNode<Float32T>>(t1563));
                            TVARIABLE(Float32T, float_value_309_impl);
                            auto float_value_309 = &float_value_309_impl;
                            USE(float_value_309);
                            *float_value_309 = implicit_cast<TNode<Float32T>>(t1563);
                            // ../../src/builtins/data-view.tq:775:9
                            TNode<Uint32T> t1564 = UncheckedCast<Uint32T>(BitcastFloat32ToInt32(implicit_cast<TNode<Float32T>>((*float_value_309).value())));
                            USE(implicit_cast<TNode<Uint32T>>(t1564));
                            StoreDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_297).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_307).value()), implicit_cast<TNode<Uint32T>>(t1564), implicit_cast<TNode<BoolT>>((*littleEndian_296).value()));
                          }
                        } else {
                          // ../../src/builtins/data-view.tq:778:12
                          {
                            bool t1565 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                            USE(implicit_cast<bool>(t1565));
                            if ((implicit_cast<bool>(t1565))) {
                              // ../../src/builtins/data-view.tq:778:52
                              {
                                // ../../src/builtins/data-view.tq:779:9
                                TNode<Uint32T> t1566 = UncheckedCast<Uint32T>(Float64ExtractLowWord32(implicit_cast<TNode<Float64T>>((*double_value_308).value())));
                                USE(implicit_cast<TNode<Uint32T>>(t1566));
                                TVARIABLE(Uint32T, low_word_310_impl);
                                auto low_word_310 = &low_word_310_impl;
                                USE(low_word_310);
                                *low_word_310 = implicit_cast<TNode<Uint32T>>(t1566);
                                // ../../src/builtins/data-view.tq:780:9
                                TNode<Uint32T> t1567 = UncheckedCast<Uint32T>(Float64ExtractHighWord32(implicit_cast<TNode<Float64T>>((*double_value_308).value())));
                                USE(implicit_cast<TNode<Uint32T>>(t1567));
                                TVARIABLE(Uint32T, high_word_311_impl);
                                auto high_word_311 = &high_word_311_impl;
                                USE(high_word_311);
                                *high_word_311 = implicit_cast<TNode<Uint32T>>(t1567);
                                // ../../src/builtins/data-view.tq:781:9
                                StoreDataView64(implicit_cast<TNode<JSArrayBuffer>>((*buffer_297).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_307).value()), implicit_cast<TNode<Uint32T>>((*low_word_310).value()), implicit_cast<TNode<Uint32T>>((*high_word_311).value()), implicit_cast<TNode<BoolT>>((*littleEndian_296).value()));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    // ../../src/builtins/data-view.tq:785:5
    *_return_293 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1272);
  }
  BIND(label_macro_end_1272);
  return implicit_cast<TNode<Object>>((*_return_293).value());
}

TF_BUILTIN(DataViewPrototypeSetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:789:63
  {
    // ../../src/builtins/data-view.tq:790:7
    auto t1568 = [=]() {
      int31_t t1570 = 0;
      TNode<IntPtrT> t1571 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1570)));
      TNode<Object> t1572 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1571)));
      return implicit_cast<TNode<Object>>(t1572);
    };
    auto t1569 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1573_801_impl);
    auto t1573_801 = &t1573_801_impl;
    USE(t1573_801);
    {
      Label label__True_436_impl(this);
      Label* label__True_436 = &label__True_436_impl;
      USE(label__True_436);
      Label label__False_437_impl(this);
      Label* label__False_437 = &label__False_437_impl;
      USE(label__False_437);
      Label label__done_802_1275_impl(this, {t1573_801});
      Label* label__done_802_1275 = &label__done_802_1275_impl;
      USE(label__done_802_1275);
      TNode<IntPtrT> t1574 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1575 = 0;
      TNode<IntPtrT> t1576 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1575)));
      TNode<BoolT> t1577 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1574), implicit_cast<TNode<IntPtrT>>(t1576)));
      USE(implicit_cast<TNode<BoolT>>(t1577));
      Branch(implicit_cast<TNode<BoolT>>(t1577), label__True_436, label__False_437);
      BIND(label__True_436);
            *t1573_801 = implicit_cast<TNode<Object>>(t1568());
      Goto(label__done_802_1275);
      BIND(label__False_437);
            *t1573_801 = implicit_cast<TNode<Object>>(t1569());
      Goto(label__done_802_1275);
      BIND(label__done_802_1275);
    }
    TVARIABLE(Object, offset_312_impl);
    auto offset_312 = &offset_312_impl;
    USE(offset_312);
    *offset_312 = implicit_cast<TNode<Object>>((*t1573_801).value());
    // ../../src/builtins/data-view.tq:793:7
    auto t1578 = [=]() {
      int31_t t1580 = 1;
      TNode<IntPtrT> t1581 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1580)));
      TNode<Object> t1582 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1581)));
      return implicit_cast<TNode<Object>>(t1582);
    };
    auto t1579 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1583_803_impl);
    auto t1583_803 = &t1583_803_impl;
    USE(t1583_803);
    {
      Label label__True_438_impl(this);
      Label* label__True_438 = &label__True_438_impl;
      USE(label__True_438);
      Label label__False_439_impl(this);
      Label* label__False_439 = &label__False_439_impl;
      USE(label__False_439);
      Label label__done_804_1276_impl(this, {t1583_803});
      Label* label__done_804_1276 = &label__done_804_1276_impl;
      USE(label__done_804_1276);
      TNode<IntPtrT> t1584 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1585 = 1;
      TNode<IntPtrT> t1586 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1585)));
      TNode<BoolT> t1587 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1584), implicit_cast<TNode<IntPtrT>>(t1586)));
      USE(implicit_cast<TNode<BoolT>>(t1587));
      Branch(implicit_cast<TNode<BoolT>>(t1587), label__True_438, label__False_439);
      BIND(label__True_438);
            *t1583_803 = implicit_cast<TNode<Object>>(t1578());
      Goto(label__done_804_1276);
      BIND(label__False_439);
            *t1583_803 = implicit_cast<TNode<Object>>(t1579());
      Goto(label__done_804_1276);
      BIND(label__done_804_1276);
    }
    TVARIABLE(Object, value_313_impl);
    auto value_313 = &value_313_impl;
    USE(value_313);
    *value_313 = implicit_cast<TNode<Object>>((*t1583_803).value());
    // ../../src/builtins/data-view.tq:796:7
    TNode<Object> t1588 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_312).value()), implicit_cast<TNode<Object>>((*value_313).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1588));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1588));
  }
}

TF_BUILTIN(DataViewPrototypeSetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:801:63
  {
    // ../../src/builtins/data-view.tq:802:7
    auto t1589 = [=]() {
      int31_t t1591 = 0;
      TNode<IntPtrT> t1592 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1591)));
      TNode<Object> t1593 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1592)));
      return implicit_cast<TNode<Object>>(t1593);
    };
    auto t1590 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1594_805_impl);
    auto t1594_805 = &t1594_805_impl;
    USE(t1594_805);
    {
      Label label__True_440_impl(this);
      Label* label__True_440 = &label__True_440_impl;
      USE(label__True_440);
      Label label__False_441_impl(this);
      Label* label__False_441 = &label__False_441_impl;
      USE(label__False_441);
      Label label__done_806_1277_impl(this, {t1594_805});
      Label* label__done_806_1277 = &label__done_806_1277_impl;
      USE(label__done_806_1277);
      TNode<IntPtrT> t1595 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1596 = 0;
      TNode<IntPtrT> t1597 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1596)));
      TNode<BoolT> t1598 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1595), implicit_cast<TNode<IntPtrT>>(t1597)));
      USE(implicit_cast<TNode<BoolT>>(t1598));
      Branch(implicit_cast<TNode<BoolT>>(t1598), label__True_440, label__False_441);
      BIND(label__True_440);
            *t1594_805 = implicit_cast<TNode<Object>>(t1589());
      Goto(label__done_806_1277);
      BIND(label__False_441);
            *t1594_805 = implicit_cast<TNode<Object>>(t1590());
      Goto(label__done_806_1277);
      BIND(label__done_806_1277);
    }
    TVARIABLE(Object, offset_314_impl);
    auto offset_314 = &offset_314_impl;
    USE(offset_314);
    *offset_314 = implicit_cast<TNode<Object>>((*t1594_805).value());
    // ../../src/builtins/data-view.tq:805:7
    auto t1599 = [=]() {
      int31_t t1601 = 1;
      TNode<IntPtrT> t1602 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1601)));
      TNode<Object> t1603 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1602)));
      return implicit_cast<TNode<Object>>(t1603);
    };
    auto t1600 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1604_807_impl);
    auto t1604_807 = &t1604_807_impl;
    USE(t1604_807);
    {
      Label label__True_442_impl(this);
      Label* label__True_442 = &label__True_442_impl;
      USE(label__True_442);
      Label label__False_443_impl(this);
      Label* label__False_443 = &label__False_443_impl;
      USE(label__False_443);
      Label label__done_808_1278_impl(this, {t1604_807});
      Label* label__done_808_1278 = &label__done_808_1278_impl;
      USE(label__done_808_1278);
      TNode<IntPtrT> t1605 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1606 = 1;
      TNode<IntPtrT> t1607 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1606)));
      TNode<BoolT> t1608 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1605), implicit_cast<TNode<IntPtrT>>(t1607)));
      USE(implicit_cast<TNode<BoolT>>(t1608));
      Branch(implicit_cast<TNode<BoolT>>(t1608), label__True_442, label__False_443);
      BIND(label__True_442);
            *t1604_807 = implicit_cast<TNode<Object>>(t1599());
      Goto(label__done_808_1278);
      BIND(label__False_443);
            *t1604_807 = implicit_cast<TNode<Object>>(t1600());
      Goto(label__done_808_1278);
      BIND(label__done_808_1278);
    }
    TVARIABLE(Object, value_315_impl);
    auto value_315 = &value_315_impl;
    USE(value_315);
    *value_315 = implicit_cast<TNode<Object>>((*t1604_807).value());
    // ../../src/builtins/data-view.tq:808:7
    TNode<Object> t1609 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_314).value()), implicit_cast<TNode<Object>>((*value_315).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(INT8_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1609));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1609));
  }
}

TF_BUILTIN(DataViewPrototypeSetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:813:63
  {
    // ../../src/builtins/data-view.tq:814:7
    auto t1610 = [=]() {
      int31_t t1612 = 0;
      TNode<IntPtrT> t1613 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1612)));
      TNode<Object> t1614 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1613)));
      return implicit_cast<TNode<Object>>(t1614);
    };
    auto t1611 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1615_809_impl);
    auto t1615_809 = &t1615_809_impl;
    USE(t1615_809);
    {
      Label label__True_444_impl(this);
      Label* label__True_444 = &label__True_444_impl;
      USE(label__True_444);
      Label label__False_445_impl(this);
      Label* label__False_445 = &label__False_445_impl;
      USE(label__False_445);
      Label label__done_810_1279_impl(this, {t1615_809});
      Label* label__done_810_1279 = &label__done_810_1279_impl;
      USE(label__done_810_1279);
      TNode<IntPtrT> t1616 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1617 = 0;
      TNode<IntPtrT> t1618 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1617)));
      TNode<BoolT> t1619 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1616), implicit_cast<TNode<IntPtrT>>(t1618)));
      USE(implicit_cast<TNode<BoolT>>(t1619));
      Branch(implicit_cast<TNode<BoolT>>(t1619), label__True_444, label__False_445);
      BIND(label__True_444);
            *t1615_809 = implicit_cast<TNode<Object>>(t1610());
      Goto(label__done_810_1279);
      BIND(label__False_445);
            *t1615_809 = implicit_cast<TNode<Object>>(t1611());
      Goto(label__done_810_1279);
      BIND(label__done_810_1279);
    }
    TVARIABLE(Object, offset_316_impl);
    auto offset_316 = &offset_316_impl;
    USE(offset_316);
    *offset_316 = implicit_cast<TNode<Object>>((*t1615_809).value());
    // ../../src/builtins/data-view.tq:817:7
    auto t1620 = [=]() {
      int31_t t1622 = 1;
      TNode<IntPtrT> t1623 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1622)));
      TNode<Object> t1624 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1623)));
      return implicit_cast<TNode<Object>>(t1624);
    };
    auto t1621 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1625_811_impl);
    auto t1625_811 = &t1625_811_impl;
    USE(t1625_811);
    {
      Label label__True_446_impl(this);
      Label* label__True_446 = &label__True_446_impl;
      USE(label__True_446);
      Label label__False_447_impl(this);
      Label* label__False_447 = &label__False_447_impl;
      USE(label__False_447);
      Label label__done_812_1280_impl(this, {t1625_811});
      Label* label__done_812_1280 = &label__done_812_1280_impl;
      USE(label__done_812_1280);
      TNode<IntPtrT> t1626 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1627 = 1;
      TNode<IntPtrT> t1628 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1627)));
      TNode<BoolT> t1629 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1626), implicit_cast<TNode<IntPtrT>>(t1628)));
      USE(implicit_cast<TNode<BoolT>>(t1629));
      Branch(implicit_cast<TNode<BoolT>>(t1629), label__True_446, label__False_447);
      BIND(label__True_446);
            *t1625_811 = implicit_cast<TNode<Object>>(t1620());
      Goto(label__done_812_1280);
      BIND(label__False_447);
            *t1625_811 = implicit_cast<TNode<Object>>(t1621());
      Goto(label__done_812_1280);
      BIND(label__done_812_1280);
    }
    TVARIABLE(Object, value_317_impl);
    auto value_317 = &value_317_impl;
    USE(value_317);
    *value_317 = implicit_cast<TNode<Object>>((*t1625_811).value());
    // ../../src/builtins/data-view.tq:820:7
    auto t1630 = [=]() {
      int31_t t1632 = 2;
      TNode<IntPtrT> t1633 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1632)));
      TNode<Object> t1634 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1633)));
      return implicit_cast<TNode<Object>>(t1634);
    };
    auto t1631 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1635_813_impl);
    auto t1635_813 = &t1635_813_impl;
    USE(t1635_813);
    {
      Label label__True_448_impl(this);
      Label* label__True_448 = &label__True_448_impl;
      USE(label__True_448);
      Label label__False_449_impl(this);
      Label* label__False_449 = &label__False_449_impl;
      USE(label__False_449);
      Label label__done_814_1281_impl(this, {t1635_813});
      Label* label__done_814_1281 = &label__done_814_1281_impl;
      USE(label__done_814_1281);
      TNode<IntPtrT> t1636 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1637 = 2;
      TNode<IntPtrT> t1638 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1637)));
      TNode<BoolT> t1639 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1636), implicit_cast<TNode<IntPtrT>>(t1638)));
      USE(implicit_cast<TNode<BoolT>>(t1639));
      Branch(implicit_cast<TNode<BoolT>>(t1639), label__True_448, label__False_449);
      BIND(label__True_448);
            *t1635_813 = implicit_cast<TNode<Object>>(t1630());
      Goto(label__done_814_1281);
      BIND(label__False_449);
            *t1635_813 = implicit_cast<TNode<Object>>(t1631());
      Goto(label__done_814_1281);
      BIND(label__done_814_1281);
    }
    TVARIABLE(Object, is_little_endian_318_impl);
    auto is_little_endian_318 = &is_little_endian_318_impl;
    USE(is_little_endian_318);
    *is_little_endian_318 = implicit_cast<TNode<Object>>((*t1635_813).value());
    // ../../src/builtins/data-view.tq:823:7
    TNode<Object> t1640 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_316).value()), implicit_cast<TNode<Object>>((*value_317).value()), implicit_cast<TNode<Object>>((*is_little_endian_318).value()), implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1640));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1640));
  }
}

TF_BUILTIN(DataViewPrototypeSetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:828:63
  {
    // ../../src/builtins/data-view.tq:829:7
    auto t1641 = [=]() {
      int31_t t1643 = 0;
      TNode<IntPtrT> t1644 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1643)));
      TNode<Object> t1645 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1644)));
      return implicit_cast<TNode<Object>>(t1645);
    };
    auto t1642 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1646_815_impl);
    auto t1646_815 = &t1646_815_impl;
    USE(t1646_815);
    {
      Label label__True_450_impl(this);
      Label* label__True_450 = &label__True_450_impl;
      USE(label__True_450);
      Label label__False_451_impl(this);
      Label* label__False_451 = &label__False_451_impl;
      USE(label__False_451);
      Label label__done_816_1282_impl(this, {t1646_815});
      Label* label__done_816_1282 = &label__done_816_1282_impl;
      USE(label__done_816_1282);
      TNode<IntPtrT> t1647 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1648 = 0;
      TNode<IntPtrT> t1649 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1648)));
      TNode<BoolT> t1650 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1647), implicit_cast<TNode<IntPtrT>>(t1649)));
      USE(implicit_cast<TNode<BoolT>>(t1650));
      Branch(implicit_cast<TNode<BoolT>>(t1650), label__True_450, label__False_451);
      BIND(label__True_450);
            *t1646_815 = implicit_cast<TNode<Object>>(t1641());
      Goto(label__done_816_1282);
      BIND(label__False_451);
            *t1646_815 = implicit_cast<TNode<Object>>(t1642());
      Goto(label__done_816_1282);
      BIND(label__done_816_1282);
    }
    TVARIABLE(Object, offset_319_impl);
    auto offset_319 = &offset_319_impl;
    USE(offset_319);
    *offset_319 = implicit_cast<TNode<Object>>((*t1646_815).value());
    // ../../src/builtins/data-view.tq:832:7
    auto t1651 = [=]() {
      int31_t t1653 = 1;
      TNode<IntPtrT> t1654 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1653)));
      TNode<Object> t1655 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1654)));
      return implicit_cast<TNode<Object>>(t1655);
    };
    auto t1652 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1656_817_impl);
    auto t1656_817 = &t1656_817_impl;
    USE(t1656_817);
    {
      Label label__True_452_impl(this);
      Label* label__True_452 = &label__True_452_impl;
      USE(label__True_452);
      Label label__False_453_impl(this);
      Label* label__False_453 = &label__False_453_impl;
      USE(label__False_453);
      Label label__done_818_1283_impl(this, {t1656_817});
      Label* label__done_818_1283 = &label__done_818_1283_impl;
      USE(label__done_818_1283);
      TNode<IntPtrT> t1657 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1658 = 1;
      TNode<IntPtrT> t1659 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1658)));
      TNode<BoolT> t1660 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1657), implicit_cast<TNode<IntPtrT>>(t1659)));
      USE(implicit_cast<TNode<BoolT>>(t1660));
      Branch(implicit_cast<TNode<BoolT>>(t1660), label__True_452, label__False_453);
      BIND(label__True_452);
            *t1656_817 = implicit_cast<TNode<Object>>(t1651());
      Goto(label__done_818_1283);
      BIND(label__False_453);
            *t1656_817 = implicit_cast<TNode<Object>>(t1652());
      Goto(label__done_818_1283);
      BIND(label__done_818_1283);
    }
    TVARIABLE(Object, value_320_impl);
    auto value_320 = &value_320_impl;
    USE(value_320);
    *value_320 = implicit_cast<TNode<Object>>((*t1656_817).value());
    // ../../src/builtins/data-view.tq:835:7
    auto t1661 = [=]() {
      int31_t t1663 = 2;
      TNode<IntPtrT> t1664 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1663)));
      TNode<Object> t1665 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1664)));
      return implicit_cast<TNode<Object>>(t1665);
    };
    auto t1662 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1666_819_impl);
    auto t1666_819 = &t1666_819_impl;
    USE(t1666_819);
    {
      Label label__True_454_impl(this);
      Label* label__True_454 = &label__True_454_impl;
      USE(label__True_454);
      Label label__False_455_impl(this);
      Label* label__False_455 = &label__False_455_impl;
      USE(label__False_455);
      Label label__done_820_1284_impl(this, {t1666_819});
      Label* label__done_820_1284 = &label__done_820_1284_impl;
      USE(label__done_820_1284);
      TNode<IntPtrT> t1667 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1668 = 2;
      TNode<IntPtrT> t1669 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1668)));
      TNode<BoolT> t1670 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1667), implicit_cast<TNode<IntPtrT>>(t1669)));
      USE(implicit_cast<TNode<BoolT>>(t1670));
      Branch(implicit_cast<TNode<BoolT>>(t1670), label__True_454, label__False_455);
      BIND(label__True_454);
            *t1666_819 = implicit_cast<TNode<Object>>(t1661());
      Goto(label__done_820_1284);
      BIND(label__False_455);
            *t1666_819 = implicit_cast<TNode<Object>>(t1662());
      Goto(label__done_820_1284);
      BIND(label__done_820_1284);
    }
    TVARIABLE(Object, is_little_endian_321_impl);
    auto is_little_endian_321 = &is_little_endian_321_impl;
    USE(is_little_endian_321);
    *is_little_endian_321 = implicit_cast<TNode<Object>>((*t1666_819).value());
    // ../../src/builtins/data-view.tq:838:7
    TNode<Object> t1671 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_319).value()), implicit_cast<TNode<Object>>((*value_320).value()), implicit_cast<TNode<Object>>((*is_little_endian_321).value()), implicit_cast<ElementsKind>(INT16_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1671));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1671));
  }
}

TF_BUILTIN(DataViewPrototypeSetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:843:63
  {
    // ../../src/builtins/data-view.tq:844:7
    auto t1672 = [=]() {
      int31_t t1674 = 0;
      TNode<IntPtrT> t1675 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1674)));
      TNode<Object> t1676 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1675)));
      return implicit_cast<TNode<Object>>(t1676);
    };
    auto t1673 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1677_821_impl);
    auto t1677_821 = &t1677_821_impl;
    USE(t1677_821);
    {
      Label label__True_456_impl(this);
      Label* label__True_456 = &label__True_456_impl;
      USE(label__True_456);
      Label label__False_457_impl(this);
      Label* label__False_457 = &label__False_457_impl;
      USE(label__False_457);
      Label label__done_822_1285_impl(this, {t1677_821});
      Label* label__done_822_1285 = &label__done_822_1285_impl;
      USE(label__done_822_1285);
      TNode<IntPtrT> t1678 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1679 = 0;
      TNode<IntPtrT> t1680 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1679)));
      TNode<BoolT> t1681 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1678), implicit_cast<TNode<IntPtrT>>(t1680)));
      USE(implicit_cast<TNode<BoolT>>(t1681));
      Branch(implicit_cast<TNode<BoolT>>(t1681), label__True_456, label__False_457);
      BIND(label__True_456);
            *t1677_821 = implicit_cast<TNode<Object>>(t1672());
      Goto(label__done_822_1285);
      BIND(label__False_457);
            *t1677_821 = implicit_cast<TNode<Object>>(t1673());
      Goto(label__done_822_1285);
      BIND(label__done_822_1285);
    }
    TVARIABLE(Object, offset_322_impl);
    auto offset_322 = &offset_322_impl;
    USE(offset_322);
    *offset_322 = implicit_cast<TNode<Object>>((*t1677_821).value());
    // ../../src/builtins/data-view.tq:847:7
    auto t1682 = [=]() {
      int31_t t1684 = 1;
      TNode<IntPtrT> t1685 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1684)));
      TNode<Object> t1686 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1685)));
      return implicit_cast<TNode<Object>>(t1686);
    };
    auto t1683 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1687_823_impl);
    auto t1687_823 = &t1687_823_impl;
    USE(t1687_823);
    {
      Label label__True_458_impl(this);
      Label* label__True_458 = &label__True_458_impl;
      USE(label__True_458);
      Label label__False_459_impl(this);
      Label* label__False_459 = &label__False_459_impl;
      USE(label__False_459);
      Label label__done_824_1286_impl(this, {t1687_823});
      Label* label__done_824_1286 = &label__done_824_1286_impl;
      USE(label__done_824_1286);
      TNode<IntPtrT> t1688 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1689 = 1;
      TNode<IntPtrT> t1690 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1689)));
      TNode<BoolT> t1691 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1688), implicit_cast<TNode<IntPtrT>>(t1690)));
      USE(implicit_cast<TNode<BoolT>>(t1691));
      Branch(implicit_cast<TNode<BoolT>>(t1691), label__True_458, label__False_459);
      BIND(label__True_458);
            *t1687_823 = implicit_cast<TNode<Object>>(t1682());
      Goto(label__done_824_1286);
      BIND(label__False_459);
            *t1687_823 = implicit_cast<TNode<Object>>(t1683());
      Goto(label__done_824_1286);
      BIND(label__done_824_1286);
    }
    TVARIABLE(Object, value_323_impl);
    auto value_323 = &value_323_impl;
    USE(value_323);
    *value_323 = implicit_cast<TNode<Object>>((*t1687_823).value());
    // ../../src/builtins/data-view.tq:850:7
    auto t1692 = [=]() {
      int31_t t1694 = 2;
      TNode<IntPtrT> t1695 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1694)));
      TNode<Object> t1696 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1695)));
      return implicit_cast<TNode<Object>>(t1696);
    };
    auto t1693 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1697_825_impl);
    auto t1697_825 = &t1697_825_impl;
    USE(t1697_825);
    {
      Label label__True_460_impl(this);
      Label* label__True_460 = &label__True_460_impl;
      USE(label__True_460);
      Label label__False_461_impl(this);
      Label* label__False_461 = &label__False_461_impl;
      USE(label__False_461);
      Label label__done_826_1287_impl(this, {t1697_825});
      Label* label__done_826_1287 = &label__done_826_1287_impl;
      USE(label__done_826_1287);
      TNode<IntPtrT> t1698 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1699 = 2;
      TNode<IntPtrT> t1700 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1699)));
      TNode<BoolT> t1701 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1698), implicit_cast<TNode<IntPtrT>>(t1700)));
      USE(implicit_cast<TNode<BoolT>>(t1701));
      Branch(implicit_cast<TNode<BoolT>>(t1701), label__True_460, label__False_461);
      BIND(label__True_460);
            *t1697_825 = implicit_cast<TNode<Object>>(t1692());
      Goto(label__done_826_1287);
      BIND(label__False_461);
            *t1697_825 = implicit_cast<TNode<Object>>(t1693());
      Goto(label__done_826_1287);
      BIND(label__done_826_1287);
    }
    TVARIABLE(Object, is_little_endian_324_impl);
    auto is_little_endian_324 = &is_little_endian_324_impl;
    USE(is_little_endian_324);
    *is_little_endian_324 = implicit_cast<TNode<Object>>((*t1697_825).value());
    // ../../src/builtins/data-view.tq:853:7
    TNode<Object> t1702 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_322).value()), implicit_cast<TNode<Object>>((*value_323).value()), implicit_cast<TNode<Object>>((*is_little_endian_324).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1702));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1702));
  }
}

TF_BUILTIN(DataViewPrototypeSetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:858:63
  {
    // ../../src/builtins/data-view.tq:859:7
    auto t1703 = [=]() {
      int31_t t1705 = 0;
      TNode<IntPtrT> t1706 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1705)));
      TNode<Object> t1707 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1706)));
      return implicit_cast<TNode<Object>>(t1707);
    };
    auto t1704 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1708_827_impl);
    auto t1708_827 = &t1708_827_impl;
    USE(t1708_827);
    {
      Label label__True_462_impl(this);
      Label* label__True_462 = &label__True_462_impl;
      USE(label__True_462);
      Label label__False_463_impl(this);
      Label* label__False_463 = &label__False_463_impl;
      USE(label__False_463);
      Label label__done_828_1288_impl(this, {t1708_827});
      Label* label__done_828_1288 = &label__done_828_1288_impl;
      USE(label__done_828_1288);
      TNode<IntPtrT> t1709 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1710 = 0;
      TNode<IntPtrT> t1711 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1710)));
      TNode<BoolT> t1712 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1709), implicit_cast<TNode<IntPtrT>>(t1711)));
      USE(implicit_cast<TNode<BoolT>>(t1712));
      Branch(implicit_cast<TNode<BoolT>>(t1712), label__True_462, label__False_463);
      BIND(label__True_462);
            *t1708_827 = implicit_cast<TNode<Object>>(t1703());
      Goto(label__done_828_1288);
      BIND(label__False_463);
            *t1708_827 = implicit_cast<TNode<Object>>(t1704());
      Goto(label__done_828_1288);
      BIND(label__done_828_1288);
    }
    TVARIABLE(Object, offset_325_impl);
    auto offset_325 = &offset_325_impl;
    USE(offset_325);
    *offset_325 = implicit_cast<TNode<Object>>((*t1708_827).value());
    // ../../src/builtins/data-view.tq:862:7
    auto t1713 = [=]() {
      int31_t t1715 = 1;
      TNode<IntPtrT> t1716 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1715)));
      TNode<Object> t1717 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1716)));
      return implicit_cast<TNode<Object>>(t1717);
    };
    auto t1714 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1718_829_impl);
    auto t1718_829 = &t1718_829_impl;
    USE(t1718_829);
    {
      Label label__True_464_impl(this);
      Label* label__True_464 = &label__True_464_impl;
      USE(label__True_464);
      Label label__False_465_impl(this);
      Label* label__False_465 = &label__False_465_impl;
      USE(label__False_465);
      Label label__done_830_1289_impl(this, {t1718_829});
      Label* label__done_830_1289 = &label__done_830_1289_impl;
      USE(label__done_830_1289);
      TNode<IntPtrT> t1719 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1720 = 1;
      TNode<IntPtrT> t1721 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1720)));
      TNode<BoolT> t1722 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1719), implicit_cast<TNode<IntPtrT>>(t1721)));
      USE(implicit_cast<TNode<BoolT>>(t1722));
      Branch(implicit_cast<TNode<BoolT>>(t1722), label__True_464, label__False_465);
      BIND(label__True_464);
            *t1718_829 = implicit_cast<TNode<Object>>(t1713());
      Goto(label__done_830_1289);
      BIND(label__False_465);
            *t1718_829 = implicit_cast<TNode<Object>>(t1714());
      Goto(label__done_830_1289);
      BIND(label__done_830_1289);
    }
    TVARIABLE(Object, value_326_impl);
    auto value_326 = &value_326_impl;
    USE(value_326);
    *value_326 = implicit_cast<TNode<Object>>((*t1718_829).value());
    // ../../src/builtins/data-view.tq:865:7
    auto t1723 = [=]() {
      int31_t t1725 = 2;
      TNode<IntPtrT> t1726 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1725)));
      TNode<Object> t1727 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1726)));
      return implicit_cast<TNode<Object>>(t1727);
    };
    auto t1724 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1728_831_impl);
    auto t1728_831 = &t1728_831_impl;
    USE(t1728_831);
    {
      Label label__True_466_impl(this);
      Label* label__True_466 = &label__True_466_impl;
      USE(label__True_466);
      Label label__False_467_impl(this);
      Label* label__False_467 = &label__False_467_impl;
      USE(label__False_467);
      Label label__done_832_1290_impl(this, {t1728_831});
      Label* label__done_832_1290 = &label__done_832_1290_impl;
      USE(label__done_832_1290);
      TNode<IntPtrT> t1729 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1730 = 2;
      TNode<IntPtrT> t1731 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1730)));
      TNode<BoolT> t1732 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1729), implicit_cast<TNode<IntPtrT>>(t1731)));
      USE(implicit_cast<TNode<BoolT>>(t1732));
      Branch(implicit_cast<TNode<BoolT>>(t1732), label__True_466, label__False_467);
      BIND(label__True_466);
            *t1728_831 = implicit_cast<TNode<Object>>(t1723());
      Goto(label__done_832_1290);
      BIND(label__False_467);
            *t1728_831 = implicit_cast<TNode<Object>>(t1724());
      Goto(label__done_832_1290);
      BIND(label__done_832_1290);
    }
    TVARIABLE(Object, is_little_endian_327_impl);
    auto is_little_endian_327 = &is_little_endian_327_impl;
    USE(is_little_endian_327);
    *is_little_endian_327 = implicit_cast<TNode<Object>>((*t1728_831).value());
    // ../../src/builtins/data-view.tq:868:7
    TNode<Object> t1733 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_325).value()), implicit_cast<TNode<Object>>((*value_326).value()), implicit_cast<TNode<Object>>((*is_little_endian_327).value()), implicit_cast<ElementsKind>(INT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1733));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1733));
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:873:63
  {
    // ../../src/builtins/data-view.tq:874:7
    auto t1734 = [=]() {
      int31_t t1736 = 0;
      TNode<IntPtrT> t1737 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1736)));
      TNode<Object> t1738 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1737)));
      return implicit_cast<TNode<Object>>(t1738);
    };
    auto t1735 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1739_833_impl);
    auto t1739_833 = &t1739_833_impl;
    USE(t1739_833);
    {
      Label label__True_468_impl(this);
      Label* label__True_468 = &label__True_468_impl;
      USE(label__True_468);
      Label label__False_469_impl(this);
      Label* label__False_469 = &label__False_469_impl;
      USE(label__False_469);
      Label label__done_834_1291_impl(this, {t1739_833});
      Label* label__done_834_1291 = &label__done_834_1291_impl;
      USE(label__done_834_1291);
      TNode<IntPtrT> t1740 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1741 = 0;
      TNode<IntPtrT> t1742 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1741)));
      TNode<BoolT> t1743 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1740), implicit_cast<TNode<IntPtrT>>(t1742)));
      USE(implicit_cast<TNode<BoolT>>(t1743));
      Branch(implicit_cast<TNode<BoolT>>(t1743), label__True_468, label__False_469);
      BIND(label__True_468);
            *t1739_833 = implicit_cast<TNode<Object>>(t1734());
      Goto(label__done_834_1291);
      BIND(label__False_469);
            *t1739_833 = implicit_cast<TNode<Object>>(t1735());
      Goto(label__done_834_1291);
      BIND(label__done_834_1291);
    }
    TVARIABLE(Object, offset_328_impl);
    auto offset_328 = &offset_328_impl;
    USE(offset_328);
    *offset_328 = implicit_cast<TNode<Object>>((*t1739_833).value());
    // ../../src/builtins/data-view.tq:877:7
    auto t1744 = [=]() {
      int31_t t1746 = 1;
      TNode<IntPtrT> t1747 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1746)));
      TNode<Object> t1748 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1747)));
      return implicit_cast<TNode<Object>>(t1748);
    };
    auto t1745 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1749_835_impl);
    auto t1749_835 = &t1749_835_impl;
    USE(t1749_835);
    {
      Label label__True_470_impl(this);
      Label* label__True_470 = &label__True_470_impl;
      USE(label__True_470);
      Label label__False_471_impl(this);
      Label* label__False_471 = &label__False_471_impl;
      USE(label__False_471);
      Label label__done_836_1292_impl(this, {t1749_835});
      Label* label__done_836_1292 = &label__done_836_1292_impl;
      USE(label__done_836_1292);
      TNode<IntPtrT> t1750 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1751 = 1;
      TNode<IntPtrT> t1752 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1751)));
      TNode<BoolT> t1753 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1750), implicit_cast<TNode<IntPtrT>>(t1752)));
      USE(implicit_cast<TNode<BoolT>>(t1753));
      Branch(implicit_cast<TNode<BoolT>>(t1753), label__True_470, label__False_471);
      BIND(label__True_470);
            *t1749_835 = implicit_cast<TNode<Object>>(t1744());
      Goto(label__done_836_1292);
      BIND(label__False_471);
            *t1749_835 = implicit_cast<TNode<Object>>(t1745());
      Goto(label__done_836_1292);
      BIND(label__done_836_1292);
    }
    TVARIABLE(Object, value_329_impl);
    auto value_329 = &value_329_impl;
    USE(value_329);
    *value_329 = implicit_cast<TNode<Object>>((*t1749_835).value());
    // ../../src/builtins/data-view.tq:880:7
    auto t1754 = [=]() {
      int31_t t1756 = 2;
      TNode<IntPtrT> t1757 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1756)));
      TNode<Object> t1758 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1757)));
      return implicit_cast<TNode<Object>>(t1758);
    };
    auto t1755 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1759_837_impl);
    auto t1759_837 = &t1759_837_impl;
    USE(t1759_837);
    {
      Label label__True_472_impl(this);
      Label* label__True_472 = &label__True_472_impl;
      USE(label__True_472);
      Label label__False_473_impl(this);
      Label* label__False_473 = &label__False_473_impl;
      USE(label__False_473);
      Label label__done_838_1293_impl(this, {t1759_837});
      Label* label__done_838_1293 = &label__done_838_1293_impl;
      USE(label__done_838_1293);
      TNode<IntPtrT> t1760 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1761 = 2;
      TNode<IntPtrT> t1762 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1761)));
      TNode<BoolT> t1763 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1760), implicit_cast<TNode<IntPtrT>>(t1762)));
      USE(implicit_cast<TNode<BoolT>>(t1763));
      Branch(implicit_cast<TNode<BoolT>>(t1763), label__True_472, label__False_473);
      BIND(label__True_472);
            *t1759_837 = implicit_cast<TNode<Object>>(t1754());
      Goto(label__done_838_1293);
      BIND(label__False_473);
            *t1759_837 = implicit_cast<TNode<Object>>(t1755());
      Goto(label__done_838_1293);
      BIND(label__done_838_1293);
    }
    TVARIABLE(Object, is_little_endian_330_impl);
    auto is_little_endian_330 = &is_little_endian_330_impl;
    USE(is_little_endian_330);
    *is_little_endian_330 = implicit_cast<TNode<Object>>((*t1759_837).value());
    // ../../src/builtins/data-view.tq:883:7
    TNode<Object> t1764 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_328).value()), implicit_cast<TNode<Object>>((*value_329).value()), implicit_cast<TNode<Object>>((*is_little_endian_330).value()), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1764));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1764));
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:888:63
  {
    // ../../src/builtins/data-view.tq:889:7
    auto t1765 = [=]() {
      int31_t t1767 = 0;
      TNode<IntPtrT> t1768 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1767)));
      TNode<Object> t1769 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1768)));
      return implicit_cast<TNode<Object>>(t1769);
    };
    auto t1766 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1770_839_impl);
    auto t1770_839 = &t1770_839_impl;
    USE(t1770_839);
    {
      Label label__True_474_impl(this);
      Label* label__True_474 = &label__True_474_impl;
      USE(label__True_474);
      Label label__False_475_impl(this);
      Label* label__False_475 = &label__False_475_impl;
      USE(label__False_475);
      Label label__done_840_1294_impl(this, {t1770_839});
      Label* label__done_840_1294 = &label__done_840_1294_impl;
      USE(label__done_840_1294);
      TNode<IntPtrT> t1771 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1772 = 0;
      TNode<IntPtrT> t1773 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1772)));
      TNode<BoolT> t1774 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1771), implicit_cast<TNode<IntPtrT>>(t1773)));
      USE(implicit_cast<TNode<BoolT>>(t1774));
      Branch(implicit_cast<TNode<BoolT>>(t1774), label__True_474, label__False_475);
      BIND(label__True_474);
            *t1770_839 = implicit_cast<TNode<Object>>(t1765());
      Goto(label__done_840_1294);
      BIND(label__False_475);
            *t1770_839 = implicit_cast<TNode<Object>>(t1766());
      Goto(label__done_840_1294);
      BIND(label__done_840_1294);
    }
    TVARIABLE(Object, offset_331_impl);
    auto offset_331 = &offset_331_impl;
    USE(offset_331);
    *offset_331 = implicit_cast<TNode<Object>>((*t1770_839).value());
    // ../../src/builtins/data-view.tq:892:7
    auto t1775 = [=]() {
      int31_t t1777 = 1;
      TNode<IntPtrT> t1778 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1777)));
      TNode<Object> t1779 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1778)));
      return implicit_cast<TNode<Object>>(t1779);
    };
    auto t1776 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1780_841_impl);
    auto t1780_841 = &t1780_841_impl;
    USE(t1780_841);
    {
      Label label__True_476_impl(this);
      Label* label__True_476 = &label__True_476_impl;
      USE(label__True_476);
      Label label__False_477_impl(this);
      Label* label__False_477 = &label__False_477_impl;
      USE(label__False_477);
      Label label__done_842_1295_impl(this, {t1780_841});
      Label* label__done_842_1295 = &label__done_842_1295_impl;
      USE(label__done_842_1295);
      TNode<IntPtrT> t1781 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1782 = 1;
      TNode<IntPtrT> t1783 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1782)));
      TNode<BoolT> t1784 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1781), implicit_cast<TNode<IntPtrT>>(t1783)));
      USE(implicit_cast<TNode<BoolT>>(t1784));
      Branch(implicit_cast<TNode<BoolT>>(t1784), label__True_476, label__False_477);
      BIND(label__True_476);
            *t1780_841 = implicit_cast<TNode<Object>>(t1775());
      Goto(label__done_842_1295);
      BIND(label__False_477);
            *t1780_841 = implicit_cast<TNode<Object>>(t1776());
      Goto(label__done_842_1295);
      BIND(label__done_842_1295);
    }
    TVARIABLE(Object, value_332_impl);
    auto value_332 = &value_332_impl;
    USE(value_332);
    *value_332 = implicit_cast<TNode<Object>>((*t1780_841).value());
    // ../../src/builtins/data-view.tq:895:7
    auto t1785 = [=]() {
      int31_t t1787 = 2;
      TNode<IntPtrT> t1788 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1787)));
      TNode<Object> t1789 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1788)));
      return implicit_cast<TNode<Object>>(t1789);
    };
    auto t1786 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1790_843_impl);
    auto t1790_843 = &t1790_843_impl;
    USE(t1790_843);
    {
      Label label__True_478_impl(this);
      Label* label__True_478 = &label__True_478_impl;
      USE(label__True_478);
      Label label__False_479_impl(this);
      Label* label__False_479 = &label__False_479_impl;
      USE(label__False_479);
      Label label__done_844_1296_impl(this, {t1790_843});
      Label* label__done_844_1296 = &label__done_844_1296_impl;
      USE(label__done_844_1296);
      TNode<IntPtrT> t1791 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1792 = 2;
      TNode<IntPtrT> t1793 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1792)));
      TNode<BoolT> t1794 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1791), implicit_cast<TNode<IntPtrT>>(t1793)));
      USE(implicit_cast<TNode<BoolT>>(t1794));
      Branch(implicit_cast<TNode<BoolT>>(t1794), label__True_478, label__False_479);
      BIND(label__True_478);
            *t1790_843 = implicit_cast<TNode<Object>>(t1785());
      Goto(label__done_844_1296);
      BIND(label__False_479);
            *t1790_843 = implicit_cast<TNode<Object>>(t1786());
      Goto(label__done_844_1296);
      BIND(label__done_844_1296);
    }
    TVARIABLE(Object, is_little_endian_333_impl);
    auto is_little_endian_333 = &is_little_endian_333_impl;
    USE(is_little_endian_333);
    *is_little_endian_333 = implicit_cast<TNode<Object>>((*t1790_843).value());
    // ../../src/builtins/data-view.tq:898:7
    TNode<Object> t1795 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_331).value()), implicit_cast<TNode<Object>>((*value_332).value()), implicit_cast<TNode<Object>>((*is_little_endian_333).value()), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1795));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1795));
  }
}

TF_BUILTIN(DataViewPrototypeSetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:903:63
  {
    // ../../src/builtins/data-view.tq:904:7
    auto t1796 = [=]() {
      int31_t t1798 = 0;
      TNode<IntPtrT> t1799 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1798)));
      TNode<Object> t1800 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1799)));
      return implicit_cast<TNode<Object>>(t1800);
    };
    auto t1797 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1801_845_impl);
    auto t1801_845 = &t1801_845_impl;
    USE(t1801_845);
    {
      Label label__True_480_impl(this);
      Label* label__True_480 = &label__True_480_impl;
      USE(label__True_480);
      Label label__False_481_impl(this);
      Label* label__False_481 = &label__False_481_impl;
      USE(label__False_481);
      Label label__done_846_1297_impl(this, {t1801_845});
      Label* label__done_846_1297 = &label__done_846_1297_impl;
      USE(label__done_846_1297);
      TNode<IntPtrT> t1802 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1803 = 0;
      TNode<IntPtrT> t1804 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1803)));
      TNode<BoolT> t1805 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1802), implicit_cast<TNode<IntPtrT>>(t1804)));
      USE(implicit_cast<TNode<BoolT>>(t1805));
      Branch(implicit_cast<TNode<BoolT>>(t1805), label__True_480, label__False_481);
      BIND(label__True_480);
            *t1801_845 = implicit_cast<TNode<Object>>(t1796());
      Goto(label__done_846_1297);
      BIND(label__False_481);
            *t1801_845 = implicit_cast<TNode<Object>>(t1797());
      Goto(label__done_846_1297);
      BIND(label__done_846_1297);
    }
    TVARIABLE(Object, offset_334_impl);
    auto offset_334 = &offset_334_impl;
    USE(offset_334);
    *offset_334 = implicit_cast<TNode<Object>>((*t1801_845).value());
    // ../../src/builtins/data-view.tq:907:7
    auto t1806 = [=]() {
      int31_t t1808 = 1;
      TNode<IntPtrT> t1809 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1808)));
      TNode<Object> t1810 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1809)));
      return implicit_cast<TNode<Object>>(t1810);
    };
    auto t1807 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1811_847_impl);
    auto t1811_847 = &t1811_847_impl;
    USE(t1811_847);
    {
      Label label__True_482_impl(this);
      Label* label__True_482 = &label__True_482_impl;
      USE(label__True_482);
      Label label__False_483_impl(this);
      Label* label__False_483 = &label__False_483_impl;
      USE(label__False_483);
      Label label__done_848_1298_impl(this, {t1811_847});
      Label* label__done_848_1298 = &label__done_848_1298_impl;
      USE(label__done_848_1298);
      TNode<IntPtrT> t1812 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1813 = 1;
      TNode<IntPtrT> t1814 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1813)));
      TNode<BoolT> t1815 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1812), implicit_cast<TNode<IntPtrT>>(t1814)));
      USE(implicit_cast<TNode<BoolT>>(t1815));
      Branch(implicit_cast<TNode<BoolT>>(t1815), label__True_482, label__False_483);
      BIND(label__True_482);
            *t1811_847 = implicit_cast<TNode<Object>>(t1806());
      Goto(label__done_848_1298);
      BIND(label__False_483);
            *t1811_847 = implicit_cast<TNode<Object>>(t1807());
      Goto(label__done_848_1298);
      BIND(label__done_848_1298);
    }
    TVARIABLE(Object, value_335_impl);
    auto value_335 = &value_335_impl;
    USE(value_335);
    *value_335 = implicit_cast<TNode<Object>>((*t1811_847).value());
    // ../../src/builtins/data-view.tq:910:7
    auto t1816 = [=]() {
      int31_t t1818 = 2;
      TNode<IntPtrT> t1819 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1818)));
      TNode<Object> t1820 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1819)));
      return implicit_cast<TNode<Object>>(t1820);
    };
    auto t1817 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1821_849_impl);
    auto t1821_849 = &t1821_849_impl;
    USE(t1821_849);
    {
      Label label__True_484_impl(this);
      Label* label__True_484 = &label__True_484_impl;
      USE(label__True_484);
      Label label__False_485_impl(this);
      Label* label__False_485 = &label__False_485_impl;
      USE(label__False_485);
      Label label__done_850_1299_impl(this, {t1821_849});
      Label* label__done_850_1299 = &label__done_850_1299_impl;
      USE(label__done_850_1299);
      TNode<IntPtrT> t1822 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1823 = 2;
      TNode<IntPtrT> t1824 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1823)));
      TNode<BoolT> t1825 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1822), implicit_cast<TNode<IntPtrT>>(t1824)));
      USE(implicit_cast<TNode<BoolT>>(t1825));
      Branch(implicit_cast<TNode<BoolT>>(t1825), label__True_484, label__False_485);
      BIND(label__True_484);
            *t1821_849 = implicit_cast<TNode<Object>>(t1816());
      Goto(label__done_850_1299);
      BIND(label__False_485);
            *t1821_849 = implicit_cast<TNode<Object>>(t1817());
      Goto(label__done_850_1299);
      BIND(label__done_850_1299);
    }
    TVARIABLE(Object, is_little_endian_336_impl);
    auto is_little_endian_336 = &is_little_endian_336_impl;
    USE(is_little_endian_336);
    *is_little_endian_336 = implicit_cast<TNode<Object>>((*t1821_849).value());
    // ../../src/builtins/data-view.tq:913:7
    TNode<Object> t1826 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_334).value()), implicit_cast<TNode<Object>>((*value_335).value()), implicit_cast<TNode<Object>>((*is_little_endian_336).value()), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1826));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1826));
  }
}

TF_BUILTIN(DataViewPrototypeSetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:918:63
  {
    // ../../src/builtins/data-view.tq:919:7
    auto t1827 = [=]() {
      int31_t t1829 = 0;
      TNode<IntPtrT> t1830 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1829)));
      TNode<Object> t1831 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1830)));
      return implicit_cast<TNode<Object>>(t1831);
    };
    auto t1828 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1832_851_impl);
    auto t1832_851 = &t1832_851_impl;
    USE(t1832_851);
    {
      Label label__True_486_impl(this);
      Label* label__True_486 = &label__True_486_impl;
      USE(label__True_486);
      Label label__False_487_impl(this);
      Label* label__False_487 = &label__False_487_impl;
      USE(label__False_487);
      Label label__done_852_1300_impl(this, {t1832_851});
      Label* label__done_852_1300 = &label__done_852_1300_impl;
      USE(label__done_852_1300);
      TNode<IntPtrT> t1833 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1834 = 0;
      TNode<IntPtrT> t1835 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1834)));
      TNode<BoolT> t1836 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1833), implicit_cast<TNode<IntPtrT>>(t1835)));
      USE(implicit_cast<TNode<BoolT>>(t1836));
      Branch(implicit_cast<TNode<BoolT>>(t1836), label__True_486, label__False_487);
      BIND(label__True_486);
            *t1832_851 = implicit_cast<TNode<Object>>(t1827());
      Goto(label__done_852_1300);
      BIND(label__False_487);
            *t1832_851 = implicit_cast<TNode<Object>>(t1828());
      Goto(label__done_852_1300);
      BIND(label__done_852_1300);
    }
    TVARIABLE(Object, offset_337_impl);
    auto offset_337 = &offset_337_impl;
    USE(offset_337);
    *offset_337 = implicit_cast<TNode<Object>>((*t1832_851).value());
    // ../../src/builtins/data-view.tq:922:7
    auto t1837 = [=]() {
      int31_t t1839 = 1;
      TNode<IntPtrT> t1840 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1839)));
      TNode<Object> t1841 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1840)));
      return implicit_cast<TNode<Object>>(t1841);
    };
    auto t1838 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1842_853_impl);
    auto t1842_853 = &t1842_853_impl;
    USE(t1842_853);
    {
      Label label__True_488_impl(this);
      Label* label__True_488 = &label__True_488_impl;
      USE(label__True_488);
      Label label__False_489_impl(this);
      Label* label__False_489 = &label__False_489_impl;
      USE(label__False_489);
      Label label__done_854_1301_impl(this, {t1842_853});
      Label* label__done_854_1301 = &label__done_854_1301_impl;
      USE(label__done_854_1301);
      TNode<IntPtrT> t1843 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1844 = 1;
      TNode<IntPtrT> t1845 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1844)));
      TNode<BoolT> t1846 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1843), implicit_cast<TNode<IntPtrT>>(t1845)));
      USE(implicit_cast<TNode<BoolT>>(t1846));
      Branch(implicit_cast<TNode<BoolT>>(t1846), label__True_488, label__False_489);
      BIND(label__True_488);
            *t1842_853 = implicit_cast<TNode<Object>>(t1837());
      Goto(label__done_854_1301);
      BIND(label__False_489);
            *t1842_853 = implicit_cast<TNode<Object>>(t1838());
      Goto(label__done_854_1301);
      BIND(label__done_854_1301);
    }
    TVARIABLE(Object, value_338_impl);
    auto value_338 = &value_338_impl;
    USE(value_338);
    *value_338 = implicit_cast<TNode<Object>>((*t1842_853).value());
    // ../../src/builtins/data-view.tq:925:7
    auto t1847 = [=]() {
      int31_t t1849 = 2;
      TNode<IntPtrT> t1850 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1849)));
      TNode<Object> t1851 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1850)));
      return implicit_cast<TNode<Object>>(t1851);
    };
    auto t1848 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1852_855_impl);
    auto t1852_855 = &t1852_855_impl;
    USE(t1852_855);
    {
      Label label__True_490_impl(this);
      Label* label__True_490 = &label__True_490_impl;
      USE(label__True_490);
      Label label__False_491_impl(this);
      Label* label__False_491 = &label__False_491_impl;
      USE(label__False_491);
      Label label__done_856_1302_impl(this, {t1852_855});
      Label* label__done_856_1302 = &label__done_856_1302_impl;
      USE(label__done_856_1302);
      TNode<IntPtrT> t1853 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1854 = 2;
      TNode<IntPtrT> t1855 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1854)));
      TNode<BoolT> t1856 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1853), implicit_cast<TNode<IntPtrT>>(t1855)));
      USE(implicit_cast<TNode<BoolT>>(t1856));
      Branch(implicit_cast<TNode<BoolT>>(t1856), label__True_490, label__False_491);
      BIND(label__True_490);
            *t1852_855 = implicit_cast<TNode<Object>>(t1847());
      Goto(label__done_856_1302);
      BIND(label__False_491);
            *t1852_855 = implicit_cast<TNode<Object>>(t1848());
      Goto(label__done_856_1302);
      BIND(label__done_856_1302);
    }
    TVARIABLE(Object, is_little_endian_339_impl);
    auto is_little_endian_339 = &is_little_endian_339_impl;
    USE(is_little_endian_339);
    *is_little_endian_339 = implicit_cast<TNode<Object>>((*t1852_855).value());
    // ../../src/builtins/data-view.tq:928:7
    TNode<Object> t1857 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_337).value()), implicit_cast<TNode<Object>>((*value_338).value()), implicit_cast<TNode<Object>>((*is_little_endian_339).value()), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1857));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1857));
  }
}

}  // namespace internal
}  // namespace v8

