/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject  {
    struct _MRContentItem { } *_mrContentItem;
    MPMediaItemArtwork *_artwork;
}

@property(copy,readonly) NSString * identifier;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property(retain) MPMediaItemArtwork * artwork;
@property(getter=isContainer) bool container;
@property(getter=isPlayable) bool playable;
@property float playbackProgress;


- (void)setPlaybackProgress:(float)arg1;
- (void)setPlayable:(bool)arg1;
- (id)_initWithMediaRemoteContentItem:(struct _MRContentItem { }*)arg1;
- (float)playbackProgress;
- (bool)isContainer;
- (void)_postItemChangedNotification;
- (void)setArtwork:(id)arg1;
- (struct _MRContentItem { }*)_mediaRemoteContentItem;
- (id)artwork;
- (bool)isPlayable;
- (id)identifier;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setContainer:(bool)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end