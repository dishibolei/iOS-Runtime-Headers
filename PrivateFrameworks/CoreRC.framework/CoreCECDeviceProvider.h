/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class CoreCECDevice;

@interface CoreCECDeviceProvider : CoreCECDevice {
    struct { 
        unsigned char destination; 
        struct CECUserControl { 
            unsigned char command; 
            union CECUICommandOperand { 
                struct CECChannelIdentifier { 
                    unsigned int channelNumberFormat : 6; 
                    unsigned int majorChannelNumber : 10; 
                    unsigned int minorChannelNumber : 16; 
                } channelIdentifier; 
                unsigned char playMode; 
                unsigned char broadcastType; 
                unsigned char mediaNumber; 
                unsigned char avInput; 
                unsigned char audioInput; 
                unsigned char soundPresentationControl; 
            } operand; 
        } control; 
        boolisValid; 
    struct { 
        CoreCECDevice *sender; 
        struct CECUserControl { 
            unsigned char command; 
            union CECUICommandOperand { 
                struct CECChannelIdentifier { 
                    unsigned int channelNumberFormat : 6; 
                    unsigned int majorChannelNumber : 10; 
                    unsigned int minorChannelNumber : 16; 
                } channelIdentifier; 
                unsigned char playMode; 
                unsigned char broadcastType; 
                unsigned char mediaNumber; 
                unsigned char avInput; 
                unsigned char audioInput; 
                unsigned char soundPresentationControl; 
            } operand; 
        } control; 
        boolisValid; 
    unsigned short _deckStatusRequestMask;
    unsigned char _sendFromAddress;
    unsigned int _userControlFollowerSafetyTimeoutGeneration;
    } _userControlFollowerState;
    unsigned int _userControlInitiatorRepetitionTimeoutGeneration;
    } _userControlInitiatorState;
}

@property(readonly) unsigned short deckStatusRequestMask;
@property unsigned char sendFromAddress;

+ (bool)supportsSecureCoding;

- (bool)abortTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)activeSource:(id*)arg1;
- (id)busProvider;
- (bool)cecVersion:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)deckControlCommandWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3;
- (bool)deckControlPlayWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3;
- (bool)deckControlRefreshStatus:(id)arg1 requestType:(unsigned long long)arg2 error:(id*)arg3;
- (bool)deckControlSetDeckStatus:(unsigned long long)arg1 error:(id*)arg2;
- (bool)deckControlWithMode:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (unsigned short)deckStatusRequestMask;
- (bool)deckStatusWithInfo:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (bool)deviceVendorID:(unsigned int)arg1 error:(id*)arg2;
- (void)didNotHandleMessage:(id)arg1 unsupportedOperand:(bool)arg2;
- (void)didReceiveMessage:(id)arg1 fromDevice:(id)arg2;
- (void)error:(id)arg1 handlingMessage:(id)arg2 fromDevice:(id)arg3;
- (bool)featureAbort:(unsigned char)arg1 reason:(unsigned char)arg2 to:(unsigned char)arg3 error:(id*)arg4;
- (id)filterMessage:(id)arg1 fromDevice:(id)arg2;
- (id)filterMessage:(id)arg1 toDevice:(id)arg2;
- (bool)getCECVersionTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)getMenuLanguageTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)getRemoteControlDestination:(id*)arg1 logicalAddress:(unsigned char*)arg2 forTargetDevice:(id)arg3 command:(unsigned char)arg4 error:(id*)arg5;
- (bool)giveDeckStatusWithRequest:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (bool)giveDevicePowerStatusTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)giveDeviceVendorIDTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)giveOSDNameTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)givePhysicalAddressTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)giveSystemAudioModeStatusTo:(unsigned char)arg1 error:(id*)arg2;
- (void)handleCECVersionMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleDeviceVendorIDMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGetCECVersionMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGiveDeckStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGiveDevicePowerStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGiveDeviceVendorIDMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleMessage:(id)arg1 fromDevice:(id)arg2 broadcast:(bool)arg3;
- (void)handleReportPowerStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleSetSystemAudioModeMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleSystemAudioModeStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (bool)handleUserControl:(struct CECUserControl { unsigned char x1; union CECUICommandOperand { struct CECChannelIdentifier { unsigned int x_1_2_1 : 6; unsigned int x_1_2_2 : 10; unsigned int x_1_2_3 : 16; } x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned char x_2_1_5; unsigned char x_2_1_6; unsigned char x_2_1_7; } x2; })arg1 pressed:(bool)arg2 fromDevice:(id)arg3 abortReason:(unsigned char*)arg4;
- (void)handleUserControlPressedMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleUserControlReleasedMessage:(id)arg1 fromDevice:(id)arg2;
- (unsigned long long)hash;
- (bool)imageViewOnTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)inactiveSourceTo:(unsigned char)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithBus:(id)arg1 logicalAddress:(unsigned char)arg2 physicalAddress:(unsigned long long)arg3 deviceType:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)makeActiveSourceWithTVMenus:(bool)arg1 error:(id*)arg2;
- (bool)oneTouchPlayWithMenu:(bool)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (bool)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2;
- (bool)playWithMode:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (bool)pollTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3;
- (bool)reportPhysicalAddress:(id*)arg1;
- (bool)reportPowerStatus:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (bool)requestActiveSource:(id*)arg1;
- (bool)resignActiveSource:(id*)arg1;
- (bool)routingChangeOriginalAddress:(unsigned long long)arg1 newAddress:(unsigned long long)arg2 error:(id*)arg3;
- (bool)routingInformationPhysicalAddress:(unsigned long long)arg1 error:(id*)arg2;
- (bool)sendActiveSourceStatus:(bool)arg1 error:(id*)arg2;
- (void)sendDeckStatusToDevice:(id)arg1;
- (void)sendFeatureAbort:(unsigned char)arg1 forMessage:(id)arg2;
- (unsigned char)sendFromAddress;
- (bool)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3;
- (bool)sendMessage:(id)arg1 error:(id*)arg2;
- (bool)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;
- (bool)setMenuLanguage:(struct CECLanguage { unsigned char x1[3]; })arg1 error:(id*)arg2;
- (bool)setOSDName:(union CECOSDName { unsigned char x1[15]; struct { unsigned char x_2_1_1; unsigned char x_2_1_2[14]; } x2; })arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (void)setSendFromAddress:(unsigned char)arg1;
- (bool)setStreamPathPhysicalAddress:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setSystemAudioControlEnabled:(bool)arg1 error:(id*)arg2;
- (bool)standbyTo:(unsigned char)arg1 error:(id*)arg2;
- (bool)systemAudioModeRequest:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (bool)systemAudioModeRequest:(unsigned long long)arg1 error:(id*)arg2;
- (bool)textViewOnTo:(unsigned char)arg1 error:(id*)arg2;
- (void)trackMessage:(id)arg1 fromDevice:(id)arg2;
- (void)trackMessage:(id)arg1 toDevice:(id)arg2;
- (bool)updateActiveSourceStatus:(bool)arg1 error:(id*)arg2;
- (void)userControlCancelFollowerSafetyTimeout;
- (void)userControlCancelInitiatorRepetitionTimeout;
- (void)userControlFollowerSafetyTimeoutExpired;
- (void)userControlFollowerSynthesizeRelease;
- (void)userControlInitiatorRepetitionTimeoutExpired;
- (bool)userControlPressed:(struct CECUserControl { unsigned char x1; union CECUICommandOperand { struct CECChannelIdentifier { unsigned int x_1_2_1 : 6; unsigned int x_1_2_2 : 10; unsigned int x_1_2_3 : 16; } x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4; unsigned char x_2_1_5; unsigned char x_2_1_6; unsigned char x_2_1_7; } x2; })arg1 to:(unsigned char)arg2 error:(id*)arg3;
- (bool)userControlReleasedTo:(unsigned char)arg1 error:(id*)arg2;
- (void)userControlScheduleFollowerSafetyTimeout;
- (void)userControlScheduleInitiatorRepetitionTimeout;

@end