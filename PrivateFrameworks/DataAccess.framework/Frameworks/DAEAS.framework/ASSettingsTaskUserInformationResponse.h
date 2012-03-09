/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSNumber, ASSettingsTaskUserInformationGetResponse;

@interface ASSettingsTaskUserInformationResponse : ASItem  {
    NSNumber *_status;
    ASSettingsTaskUserInformationGetResponse *_getResponse;
}

@property(retain) NSNumber * status;
@property(retain) ASSettingsTaskUserInformationGetResponse * getResponse;

+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)description;
- (void)dealloc;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)setGetResponse:(id)arg1;
- (id)getResponse;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end