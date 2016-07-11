/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDevice : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _activeAirPlayRoute;
    bool  _appLocked;
    NSArray * _availableAirPlayRoutes;
    unsigned long long  _availableBytes;
    float  _batteryLevel;
    NSString * _buildVersion;
    long long  _chargingState;
    long long  _deviceOrientation;
    bool  _ephemeralMultiUser;
    NSString * _identifier;
    NSArray * _installedApplications;
    long long  _interfaceOrientation;
    long long  _lockState;
    long long  _loginState;
    NSString * _managementLockPasscode;
    NSString * _model;
    NSString * _name;
    bool  _orientationLocked;
    bool  _passcodeEnabled;
    long long  _platform;
    NSString * _primaryOpenApplication;
    long long  _screenState;
    NSString * _secondaryOpenApplication;
    NSString * _serialNumber;
    bool  _supervised;
    NSString * _systemName;
    NSString * _systemVersion;
    NSString * _userDisplayName;
    NSString * _userFamilyName;
    NSString * _userGivenName;
    NSString * _userIdentifier;
    NSString * _userImageURL;
    float  _volume;
}

@property (nonatomic, copy) NSDictionary *activeAirPlayRoute;
@property (getter=isAppLocked, nonatomic) bool appLocked;
@property (nonatomic, copy) NSArray *availableAirPlayRoutes;
@property (nonatomic) unsigned long long availableBytes;
@property (nonatomic) float batteryLevel;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic) long long chargingState;
@property (nonatomic) long long deviceOrientation;
@property (getter=isEphemeralMultiUser, nonatomic) bool ephemeralMultiUser;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *installedApplications;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long lockState;
@property (nonatomic) long long loginState;
@property (nonatomic, copy) NSString *managementLockPasscode;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (getter=isOrientationLocked, nonatomic) bool orientationLocked;
@property (getter=isPasscodeEnabled, nonatomic) bool passcodeEnabled;
@property (nonatomic) long long platform;
@property (nonatomic, copy) NSString *primaryOpenApplication;
@property (nonatomic) long long screenState;
@property (nonatomic, copy) NSString *secondaryOpenApplication;
@property (nonatomic, copy) NSString *serialNumber;
@property (getter=isSupervised, nonatomic) bool supervised;
@property (nonatomic, copy) NSString *systemName;
@property (nonatomic, copy) NSString *systemVersion;
@property (nonatomic, copy) NSString *userDisplayName;
@property (nonatomic, copy) NSString *userFamilyName;
@property (nonatomic, copy) NSString *userGivenName;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *userImageURL;
@property (nonatomic) float volume;

+ (id)allPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeAirPlayRoute;
- (id)availableAirPlayRoutes;
- (unsigned long long)availableBytes;
- (float)batteryLevel;
- (id)buildVersion;
- (long long)chargingState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceOrientation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)installedApplications;
- (long long)interfaceOrientation;
- (bool)isAppLocked;
- (bool)isEphemeralMultiUser;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)isOrientationLocked;
- (bool)isPasscodeEnabled;
- (bool)isSupervised;
- (long long)lockState;
- (long long)loginState;
- (id)managementLockPasscode;
- (id)model;
- (id)name;
- (long long)platform;
- (id)primaryOpenApplication;
- (long long)screenState;
- (id)secondaryOpenApplication;
- (id)serialNumber;
- (void)setActiveAirPlayRoute:(id)arg1;
- (void)setAppLocked:(bool)arg1;
- (void)setAvailableAirPlayRoutes:(id)arg1;
- (void)setAvailableBytes:(unsigned long long)arg1;
- (void)setBatteryLevel:(float)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setChargingState:(long long)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setEphemeralMultiUser:(bool)arg1;
- (void)setInstalledApplications:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLockState:(long long)arg1;
- (void)setLoginState:(long long)arg1;
- (void)setManagementLockPasscode:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOrientationLocked:(bool)arg1;
- (void)setPasscodeEnabled:(bool)arg1;
- (void)setPlatform:(long long)arg1;
- (void)setPrimaryOpenApplication:(id)arg1;
- (void)setScreenState:(long long)arg1;
- (void)setSecondaryOpenApplication:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSupervised:(bool)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setUserDisplayName:(id)arg1;
- (void)setUserFamilyName:(id)arg1;
- (void)setUserGivenName:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUserImageURL:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)systemName;
- (id)systemVersion;
- (id)userDisplayName;
- (id)userFamilyName;
- (id)userGivenName;
- (id)userIdentifier;
- (id)userImageURL;
- (float)volume;

@end