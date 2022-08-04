#ifndef V8_TORQUE_ARRAY_FROM_DSL_BASE_H__
#define V8_TORQUE_ARRAY_FROM_DSL_BASE_H__

#include "src/builtins/builtins-array-gen.h"


 namespace v8 {
namespace internal {

class ArrayBuiltinsFromDSLAssembler: public ArrayBuiltinsAssembler {
 public:
  explicit ArrayBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : ArrayBuiltinsAssembler(state) {}

  using Node = compiler::Node;
  template <class T>
  using TNode = compiler::TNode<T>;
  template <class T>
  using SloppyTNode = compiler::SloppyTNode<T>;

  TNode<Number> GetLengthProperty(TNode<Context> p_context, TNode<Object> p_o);
  TNode<Object> FastArraySplice(TNode<Context> p_context, CodeStubArguments* p_args, TNode<Object> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, Label* label_Bailout_28);
  TNode<Number> ConvertToRelativeIndex(TNode<Number> p_index, TNode<Number> p_length);
  TNode<Object> ArrayForEachTorqueContinuation(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, TNode<Smi> p_initial_k);
  TNode<Object> FastArrayForEach(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_103, TVariable<Smi>* Bailout0_127);
  TNode<Object> LoadWithHoleCheck12ATFixedArray(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, Label* label_IfHole_120);
  TNode<Object> LoadWithHoleCheck18ATFixedDoubleArray(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, Label* label_IfHole_123);
  TNode<Number> GetFromIndex(TNode<Context> p_context, TNode<Number> p_length, CodeStubArguments* p_arguments);
  TNode<Object> TryFastArrayLastIndexOf(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<Object> p_searchElement, TNode<Number> p_from, Label* label_Slow_128);
  TNode<Object> GenericArrayLastIndexOf(TNode<Context> p_context, TNode<JSReceiver> p_object, TNode<Object> p_searchElement, TNode<Number> p_from);
  TNode<Smi> LoadElement23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index);
  TNode<Object> LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index);
  TNode<Float64T> LoadElement26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index);
  void StoreElement23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Smi> p_value);
  void StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Object> p_value);
  void StoreElement26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Float64T> p_value);
  TNode<Object> GenericArrayReverse(TNode<Context> p_context, TNode<Object> p_receiver);
  void EnsureWriteableFastElements(TNode<JSArray> p_array);
  void TryFastPackedArrayReverse(TNode<Object> p_receiver, Label* label_Slow_160);
  TNode<Smi> kGenericElementsAccessorId();
  TNode<Smi> kFastElementsAccessorId();
  int31_t kReceiverIdx();
  int31_t kInitialReceiverMapIdx();
  int31_t kInitialReceiverLengthIdx();
  int31_t kUserCmpFnIdx();
  int31_t kSortComparePtrIdx();
  int31_t kLoadFnIdx();
  int31_t kStoreFnIdx();
  int31_t kCanUseSameAccessorFnIdx();
  int31_t kBailoutStatusIdx();
  int31_t kMinGallopIdx();
  int31_t kPendingRunsSizeIdx();
  int31_t kPendingRunsIdx();
  int31_t kTempArraySizeIdx();
  int31_t kTempArrayIdx();
  int31_t kAccessorIdx();
  TNode<IntPtrT> kSortStateSize();
  TNode<Smi> kFailure();
  TNode<Smi> kSuccess();
  int31_t kMaxMergePending();
  int31_t kMinGallopWins();
  TNode<Smi> kSortStateTempSize();
  TNode<Number> CallCompareFn(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Object> p_x, TNode<Object> p_y, Label* label_Bailout_695);
  TNode<HeapObject> ReloadElements(TNode<FixedArray> p_sortState);
  TNode<Code> GetLoadFn(TNode<FixedArray> p_sortState);
  TNode<Code> GetStoreFn(TNode<FixedArray> p_sortState);
  TNode<Code> GetCanUseSameAccessorFn(TNode<FixedArray> p_sortState);
  TNode<JSReceiver> GetReceiver(TNode<FixedArray> p_sortState);
  TNode<FixedArray> GetTempArray(TNode<FixedArray> p_sortState);
  TNode<Smi> GetPendingRunsSize(TNode<FixedArray> p_sortState);
  void SetPendingRunsSize(TNode<FixedArray> p_sortState, TNode<Smi> p_value);
  TNode<Smi> GetPendingRunBase(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run);
  void SetPendingRunBase(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value);
  TNode<Smi> GetPendingRunLength(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run);
  void SetPendingRunLength(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value);
  void PushRun(TNode<FixedArray> p_sortState, TNode<Smi> p_base, TNode<Smi> p_length);
  TNode<FixedArray> GetTempArray(TNode<FixedArray> p_sortState, TNode<Smi> p_requestedSize);
  void EnsureSuccess(TNode<FixedArray> p_sortState, Label* label_Bailout_702);
  TNode<Smi> Failure(TNode<FixedArray> p_sortState);
  TNode<Object> CallLoad(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<HeapObject> p_elements, TNode<Smi> p_index, Label* label_Bailout_705);
  void CallStore(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Store, TNode<HeapObject> p_elements, TNode<Smi> p_index, TNode<Object> p_value, Label* label_Bailout_706);
  void CallCopyFromTempArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<HeapObject> p_dstElements, TNode<Smi> p_dstPos, TNode<FixedArray> p_tempArray, TNode<Smi> p_srcPos, TNode<Smi> p_length, Label* label_Bailout_707);
  void CallCopyWithinSortArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<HeapObject> p_elements, TNode<Smi> p_srcPos, TNode<Smi> p_dstPos, TNode<Smi> p_length, Label* label_Bailout_708);
  TNode<Smi> CallGallopRight(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Object> p_key, TNode<Smi> p_base, TNode<Smi> p_length, TNode<Smi> p_hint, TNode<Oddball> p_useTempArray, Label* label_Bailout_709);
  TNode<Smi> CallGallopLeft(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Object> p_key, TNode<Smi> p_base, TNode<Smi> p_length, TNode<Smi> p_hint, TNode<Oddball> p_useTempArray, Label* label_Bailout_710);
  void CallMergeAt(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_i, Label* label_Bailout_711);
  TNode<Smi> GetReceiverLengthProperty(TNode<Context> p_context, TNode<FixedArray> p_sortState);
  void CopyToTempArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<HeapObject> p_srcElements, TNode<Smi> p_srcPos, TNode<FixedArray> p_tempArray, TNode<Smi> p_dstPos, TNode<Smi> p_length, Label* label_Bailout_714);
  TNode<Smi> CountAndMakeRun(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_lowArg, TNode<Smi> p_high, Label* label_Bailout_738);
  void ReverseRange(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Code> p_Store, TNode<HeapObject> p_elements, TNode<Smi> p_from, TNode<Smi> p_to, Label* label_Bailout_753);
  void CopyElement(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Code> p_Store, TNode<HeapObject> p_elements, TNode<Smi> p_from, TNode<Smi> p_to, Label* label_Bailout_831);
  void MergeLow(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthA, TNode<Smi> p_baseB, TNode<Smi> p_lengthB, Label* label_Bailout_832);
  void MergeHigh(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthA, TNode<Smi> p_baseB, TNode<Smi> p_lengthB, Label* label_Bailout_873);
  TNode<Smi> ComputeMinRunLength(TNode<Smi> p_nArg);
  TNode<BoolT> RunInvariantEstablished(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_n);
  void MergeCollapse(TNode<Context> p_context, TNode<FixedArray> p_sortState, Label* label_Bailout_918);
  void MergeForceCollapse(TNode<Context> p_context, TNode<FixedArray> p_sortState, Label* label_Bailout_928);
  void InitializeSortState(TNode<FixedArray> p_sortState);
  void InitializeSortStateAccessor25ATGenericElementsAccessor(TNode<FixedArray> p_sortState);
  void ArrayTimSortImpl(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_length, Label* label_Bailout_934);
  void VisitAllElements18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_974, TVariable<Smi>* Bailout0_540);
  void VisitAllElements12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_985, TVariable<Smi>* Bailout0_542);
  TNode<Smi> FastArrayLastIndexOf12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_length, TNode<Smi> p_from, TNode<Object> p_searchElement);
  TNode<Smi> FastArrayLastIndexOf18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_length, TNode<Smi> p_from, TNode<Object> p_searchElement);
  void FastPackedArrayReverse23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length);
  void FastPackedArrayReverse26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length);
  void FastPackedArrayReverse26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length);
  void InitializeSortStateAccessor20ATFastDoubleElements(TNode<FixedArray> p_sortState);
  void InitializeSortStateAccessor23ATFastPackedSmiElements(TNode<FixedArray> p_sortState);
  void InitializeSortStateAccessor25ATFastSmiOrObjectElements(TNode<FixedArray> p_sortState);
  void InitializeSortStateAccessor20ATDictionaryElements(TNode<FixedArray> p_sortState);
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_ARRAY_FROM_DSL_BASE_H__
