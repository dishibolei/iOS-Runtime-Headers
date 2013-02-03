/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    UIColor *_backgroundColor;
    UIColor *_bottomShadowColor;
    UIColor *_fillColor;
    float _leftPhase;
    BOOL _opaque;
    float _rightPhase;
    UIColor *_sectionBorderColor;
    NSInteger _sectionLocation;
    BOOL _selected;
    UIColor *_separatorColor;
    } _size;
    UIColor *_topShadowColor;
}

@property(retain) UIColor *backgroundColor;
@property(retain) UIColor *bottomShadowColor;
@property(retain) UIColor *fillColor;
@property(retain) UIColor *sectionBorderColor;
@property(retain) UIColor *separatorColor;
@property(retain) UIColor *topShadowColor;
@property float leftPhase;
@property BOOL opaque;
@property float rightPhase;
@property NSInteger sectionLocation;
@property BOOL selected;
@property CGSize size;

- (id)backgroundColor;
- (id)bottomShadowColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fillColor;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (float)leftPhase;
- (BOOL)opaque;
- (float)rightPhase;
- (id)sectionBorderColor;
- (NSInteger)sectionLocation;
- (BOOL)selected;
- (id)separatorColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setBottomShadowColor:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLeftPhase:(float)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setRightPhase:(float)arg1;
- (void)setSectionBorderColor:(id)arg1;
- (void)setSectionLocation:(NSInteger)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTopShadowColor:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)topShadowColor;

@end