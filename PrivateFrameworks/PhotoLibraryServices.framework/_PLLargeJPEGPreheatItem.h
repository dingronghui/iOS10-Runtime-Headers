/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLLargeJPEGPreheatItem : PLJPEGPreheatItem {
    bool  _forceBGRA;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
}

- (struct __CFDictionary { }*)decodeSessionOptions;
- (struct __CFDictionary { }*)decodeSessionOptionsApplyRotationTransform:(bool)arg1;
- (id)initWithImagePath:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 format:(int)arg3 imageType:(long long)arg4 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg5 options:(unsigned int)arg6;

@end
