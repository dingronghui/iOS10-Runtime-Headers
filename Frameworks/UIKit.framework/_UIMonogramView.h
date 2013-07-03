/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UILabel;

@interface _UIMonogramView : UIView  {
    NSString *_name;
    NSString *_monogram;
    UILabel *_label;
}

@property(copy) NSString * name;
@property(copy) NSString * monogram;
@property(retain) UILabel * label;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (id)name;
- (id)labelForMonogram:(id)arg1;
- (id)monogram;
- (void)setMonogram:(id)arg1;
- (id)monogramForName:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)layoutSubviews;
- (void)setName:(id)arg1;

@end