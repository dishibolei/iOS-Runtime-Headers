/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUFanIconContentView : HUIconContentView {
    UIImageView * _baseView;
    UIVisualEffectView * _baseVisualEffectView;
    HUNonAnimatingTintImageView * _bladesView;
    UIVisualEffectView * _bladesVisualEffectView;
    float  _rotationSpeed;
    unsigned int  _rotationState;
    HUApplier * _speedRampApplier;
}

@property (nonatomic, retain) UIImageView *baseView;
@property (nonatomic, retain) UIVisualEffectView *baseVisualEffectView;
@property (nonatomic, retain) HUNonAnimatingTintImageView *bladesView;
@property (nonatomic, retain) UIVisualEffectView *bladesVisualEffectView;
@property (nonatomic) float rotationSpeed;
@property (nonatomic) unsigned int rotationState;
@property (nonatomic, retain) HUApplier *speedRampApplier;

- (void).cxx_destruct;
- (void)_rampBladesLayerToSpeed:(float)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)_setBladesLayerSpeed:(float)arg1;
- (void)_updateImages;
- (void)_updateRotationAnimationFromState:(unsigned int)arg1 toState:(unsigned int)arg2 rotationSpeed:(float)arg3 shouldRampSpeed:(BOOL)arg4;
- (void)_updateVisualEffects;
- (id)baseView;
- (id)baseVisualEffectView;
- (id)bladesView;
- (id)bladesVisualEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)rotationSpeed;
- (unsigned int)rotationState;
- (void)setBaseView:(id)arg1;
- (void)setBaseVisualEffectView:(id)arg1;
- (void)setBladesView:(id)arg1;
- (void)setBladesVisualEffectView:(id)arg1;
- (void)setDisableContinuousAnimation:(BOOL)arg1;
- (void)setIconSize:(unsigned int)arg1;
- (void)setRotationSpeed:(float)arg1;
- (void)setRotationState:(unsigned int)arg1;
- (void)setSpeedRampApplier:(id)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (id)speedRampApplier;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned int)arg2 animated:(BOOL)arg3;
- (BOOL)wantsManagedVibrancyEffect;

@end