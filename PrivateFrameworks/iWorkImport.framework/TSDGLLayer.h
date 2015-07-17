/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLLayer : CAEAGLLayer {
    <TSDGLLayerContext> *mContext;
    NSObject<TSDGLLayerDelegate> *mDelegate;
    CADisplayLink *mDisplayLink;
}

@property NSObject<TSDGLLayerDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (void)displayAtCurrentLayerTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isOpaque:(BOOL)arg2 delegate:(id)arg3;
- (void)lock;
- (void)p_drawFrameAtLayerTime:(double)arg1;
- (void)p_drawFrameFromDisplayLink:(id)arg1;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)setCurrentContext;
- (void)setDelegate:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)teardown;
- (void)unlock;

@end