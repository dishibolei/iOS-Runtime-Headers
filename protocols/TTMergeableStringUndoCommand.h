/* Generated by RuntimeBrowser.
 */

@protocol TTMergeableStringUndoCommand <NSObject, TTMergeableStringIDTracker>

@required

- (BOOL)addToGroup:(TTMergeableStringUndoGroup *)arg1;
- (void)applyToString:(TTMergeableUndoString *)arg1;

@end