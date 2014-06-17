/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation> {
}

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 completionHandler:(id)arg3;

- (id)proxyLibraryManager;
- (void)dispatchBlockWhenLibraryIsOpen:(id)arg1;
- (id)proxyWithErrorHandler:(id)arg1;
- (void)finalizeWithCompletionHandler:(id)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (void)tearDownWithCompletionHandler:(id)arg1;

@end