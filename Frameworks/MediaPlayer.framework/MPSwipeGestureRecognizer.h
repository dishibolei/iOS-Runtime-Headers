/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UITouch;



@interface MPSwipeGestureRecognizer : UIGestureRecognizer 
{
    struct CGPoint { 
        float x; 
        float y; 
    } _startLocation;
    double _startTime;
    UITouch *_trackingTouch;
    NSInteger _swipeDirection;
}

@property(readonly) NSInteger swipeDirection;


- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (NSInteger)swipeDirection;

@end