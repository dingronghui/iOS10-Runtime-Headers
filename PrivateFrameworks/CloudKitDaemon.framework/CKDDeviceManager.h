/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface CKDDeviceManager : NSObject  {
    NSString *_deviceIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requests;
    NSMutableDictionary *_callbackGroups;
    NSMutableDictionary *_deviceIDs;
}

@property(readonly) NSString * deviceIdentifier;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) NSMutableDictionary * requests;
@property(retain) NSMutableDictionary * callbackGroups;
@property(retain) NSMutableDictionary * deviceIDs;

+ (id)sharedManager;

- (void)setDeviceIDs:(id)arg1;
- (void)setCallbackGroups:(id)arg1;
- (id)callbackGroups;
- (void)setRequests:(id)arg1;
- (void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2;
- (id)_savedDeviceIdentifierForContext:(id)arg1;
- (id)deviceIDs;
- (id)_lookupKeyForContext:(id)arg1;
- (id)_serviceForContext:(id)arg1;
- (void)fetchDeviceIdentifierForContext:(id)arg1 withCompletionHandler:(id)arg2;
- (id)requests;
- (id)deviceIdentifier;
- (void)setQueue:(id)arg1;
- (id)queue;
- (id)init;
- (void).cxx_destruct;

@end