/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUKeybagPreventLockAssertion : NSObject <BSInvalidatable> {
    struct __MKBAssertion { } * _assertion;
    BOOL  _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithKeybagAssertion:(struct __MKBAssertion { }*)arg1;
- (void)invalidate;

@end
