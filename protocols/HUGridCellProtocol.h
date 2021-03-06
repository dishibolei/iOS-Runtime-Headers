/* Generated by RuntimeBrowser.
 */

@protocol HUGridCellProtocol <NSObject, HUCellProtocol>

@required

+ (Class)layoutOptionsClass;

- (BOOL)areCellContentsHidden;
- (HUGridCellLayoutOptions *)layoutOptions;
- (void)setCellContentsHidden:(BOOL)arg1;
- (void)setLayoutOptions:(HUGridCellLayoutOptions *)arg1;

@optional

- (BOOL)isRearranging;
- (void)setRearranging:(BOOL)arg1;

@end
