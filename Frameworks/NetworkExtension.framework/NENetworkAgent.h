/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NENetworkAgent : NSObject <NWNetworkAgent> {
    NSString * _configurationName;
    int  _internalSessionType;
    id /* block */  _internalStartHandler;
    NSUUID * _internalUUID;
    int  _lastStatus;
    BOOL  active;
    NSString * agentDescription;
    NSUUID * agentUUID;
    BOOL  kernelActivated;
    BOOL  userActivated;
    BOOL  voluntary;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic, copy) NSString *agentDescription;
@property (nonatomic, copy) NSUUID *agentUUID;
@property (copy) NSString *configurationName;
@property (readonly, copy) NSUUID *configurationUUID;
@property int internalSessionType;
@property (copy) id /* block */ internalStartHandler;
@property (copy) NSUUID *internalUUID;
@property (getter=isKernelActivated, nonatomic) BOOL kernelActivated;
@property int lastStatus;
@property (getter=isNetworkProvider, nonatomic) BOOL networkProvider;
@property (getter=isNexusProvider, nonatomic) BOOL nexusProvider;
@property (readonly) int sessionType;
@property (getter=isSpecificUseOnly, nonatomic) BOOL specificUseOnly;
@property (getter=isUserActivated, nonatomic) BOOL userActivated;
@property (getter=isVoluntary, nonatomic) BOOL voluntary;

+ (id)agentDomain;
+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)agentUUID;
- (id)configurationName;
- (id)configurationUUID;
- (id)copyAgentData;
- (id)initWithConfigUUID:(id)arg1 sessionType:(int)arg2;
- (int)internalSessionType;
- (id /* block */)internalStartHandler;
- (id)internalUUID;
- (BOOL)isActive;
- (BOOL)isKernelActivated;
- (BOOL)isUserActivated;
- (BOOL)isVoluntary;
- (int)lastStatus;
- (int)sessionType;
- (void)setActive:(BOOL)arg1;
- (void)setAgentDescription:(id)arg1;
- (void)setAgentUUID:(id)arg1;
- (void)setConfigurationName:(id)arg1;
- (void)setInternalSessionType:(int)arg1;
- (void)setInternalStartHandler:(id /* block */)arg1;
- (void)setInternalUUID:(id)arg1;
- (void)setKernelActivated:(BOOL)arg1;
- (void)setLastStatus:(int)arg1;
- (void)setStartHandler:(id /* block */)arg1;
- (void)setUserActivated:(BOOL)arg1;
- (void)setVoluntary:(BOOL)arg1;
- (BOOL)startAgentWithOptions:(id)arg1;

@end