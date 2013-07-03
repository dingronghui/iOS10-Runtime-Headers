/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIAlphaAnimation, TPBottomLockBar;

@interface TPLockKnobView : UIImageView  {
    TPBottomLockBar *_track;
    UIAlphaAnimation *_animation;
    float _centerDelta;
    BOOL _tracking;
}

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)setLockView:(id)arg1;
- (void)beginTracking:(id)arg1;
- (BOOL)shouldBeginTracking:(id)arg1;
- (id)initWithImage:(id)arg1;
- (void)dealloc;
- (BOOL)isTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end