/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIStarView : NUIContainerStackView {
    float  _currentStarRating;
}

@property float currentStarRating;

+ (id)emptyStar;
+ (id)fullStar;
+ (id)halfStar;
+ (id)starImageWithName:(id)arg1;

- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (float)currentStarRating;
- (id)init;
- (void)setCurrentStarRating:(float)arg1;
- (void)updateStarRating:(float)arg1;

@end