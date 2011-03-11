/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, UIImage;

@interface CKGenericFileBalloonView : CKBalloonView  {
    UIImage *_icon;
    NSString *_text;
    NSString *_subtext;
    float _originalWidth;
}

@property(retain) UIImage * icon;
@property(copy) NSString * subtext;
@property(copy) NSString * text;

+ (struct CGPoint { float x1; float x2; })offsetForBubbleInsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (float)fixedHeight;
+ (float)additionalHeightForBubbleWhenInsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (BOOL)shouldHaveAccessoryDiclosure;
+ (void)_initializeSafeCategory;

- (void)setIcon:(id)arg1;
- (id)icon;
- (void)setText:(id)arg1;
- (id)text;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSubtext:(id)arg1;
- (id)_titleFont;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_iconRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_subtextRect;
- (id)subtext;
- (void)tighten;
- (float)tightenedWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (id)_subtitleFont;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end