/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATRemoteFileManager : NSObject {
    ATMessageLink * _messageLink;
}

@property (nonatomic, retain) ATMessageLink *messageLink;

- (void).cxx_destruct;
- (id)_readStreamData:(id)arg1 error:(id*)arg2;
- (id)_sendRequest:(id)arg1 error:(id*)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (BOOL)createDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)dataAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (BOOL)downloadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (BOOL)downloadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4;
- (BOOL)freeSpace:(unsigned long long*)arg1 error:(id*)arg2;
- (id)initWithMessageLink:(id)arg1;
- (id)messageLink;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (BOOL)moveItemsAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4;
- (void)progressUpdatedWithPercentage:(double)arg1 size:(unsigned long long)arg2;
- (BOOL)removeItemAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (BOOL)removeItemsAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4;
- (void)setMessageLink:(id)arg1;
- (BOOL)uploadData:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (BOOL)uploadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (BOOL)uploadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4;
- (BOOL)usageOfDirectoryAtPath:(id)arg1 count:(unsigned int*)arg2 size:(unsigned long long*)arg3 options:(id)arg4 error:(id*)arg5;

@end