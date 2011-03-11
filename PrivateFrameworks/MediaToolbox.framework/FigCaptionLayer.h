/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer  {
    FigCaptionLayerPrivate *_priv;
}


- (void)resetCaptions;
- (void)setFontName:(const char *)arg1;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)_renderer:(struct OpaqueFigCFCaptionRenderer { }*)arg1 didChangeRows:(struct { int x1; int x2; })arg2;
- (void)finalize;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (void)dealloc;
- (void)layoutSublayers;

@end