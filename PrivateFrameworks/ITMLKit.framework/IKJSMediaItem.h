/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem> {
    IKAppMediaItemBridge *_bridge;
}

@property (nonatomic, readonly) IKAppMediaItemBridge *bridge;
@property (nonatomic, retain) NSString *description;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *url;

- (void).cxx_destruct;
- (id)bridge;
- (id)description;
- (id)initWithArgument:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)startLoadingCertificateDataForURI:(id)arg1 withCallback:(id /* block */)arg2;
- (void)startLoadingContentIdentifierDataForURI:(id)arg1 withCallback:(id /* block */)arg2;
- (void)startLoadingKeyDataForURI:(id)arg1 requestData:(id)arg2 withCallback:(id /* block */)arg3;
- (id)subtitle;
- (id)title;
- (id)url;

@end