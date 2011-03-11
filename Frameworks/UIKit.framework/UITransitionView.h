/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, UIView, UIWindow, NSMutableArray;

@interface UITransitionView : UIView <NSCoding> {
    UIView *_fromView;
    UIView *_toView;
    NSMutableArray *_frozenSubviews;
    UIResponder *_firstResponderToRemember;
    id _delegate;
    UIWindow *_originalWindow;
    struct { 
        unsigned int animationInProgress : 1; 
        unsigned int ignoresInteractionEvents : 1; 
        unsigned int shouldNotifyDidCompleteImmediately : 1; 
        unsigned int shouldRestoreFromViewAlpha : 1; 
        unsigned int shouldRasterize : 1; 
        unsigned int reserved : 27; 
    } _transitionViewFlags;
}

@property BOOL shouldNotifyDidCompleteImmediately;

+ (double)defaultDurationForTransition:(int)arg1;
+ (void)_initializeSafeCategory;

- (BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
- (BOOL)isTransitioning;
- (double)durationForTransition:(int)arg1;
- (BOOL)shouldNotifyDidCompleteImmediately;
- (void)_didStartTransition;
- (void)setShouldNotifyDidCompleteImmediately:(BOOL)arg1;
- (void)_didCompleteTransition:(BOOL)arg1;
- (BOOL)transition:(int)arg1 toView:(id)arg2;
- (void)notifyDidCompleteTransition:(id)arg1;
- (BOOL)_isTransitioningFromFromView:(id)arg1;
- (void)setRasterizesOnTransition:(BOOL)arg1;
- (BOOL)rasterizesOnTransition;
- (void)_startTransition:(int)arg1 withDuration:(float)arg2;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (id)toView;
- (id)fromView;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (BOOL)ignoresInteractionEvents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end