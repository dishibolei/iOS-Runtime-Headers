/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKUnexpectedlyLoggedOutNotificationView : UIView <CKTwoButtonInlineNotificationViewDelegate> {
    <CKUnexpectedlyLoggedOutNotificationViewDelegate> * _delegate;
    CKTwoButtonInlineNotificationView * _inlineNotificationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKUnexpectedlyLoggedOutNotificationViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CKTwoButtonInlineNotificationView *inlineNotificationView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL visible;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inlineNotificationView;
- (void)inlineNotificationView:(id)arg1 didChangeRequestedHeight:(float)arg2;
- (void)inlineNotificationViewDidReceiveLeftButtonTap:(id)arg1;
- (void)inlineNotificationViewDidReceiveRightButtonTap:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setInlineNotificationView:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)visible;

@end
