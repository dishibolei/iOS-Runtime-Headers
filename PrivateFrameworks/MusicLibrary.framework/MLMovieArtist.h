/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSNumber, NSMutableDictionary, NSString;

@interface MLMovieArtist : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property(copy) NSString * artistName;
@property(copy) NSNumber * ITunesStoreIdentifier;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)artistName;
- (id)ITunesStoreIdentifier;
- (void)setArtistName:(id)arg1;
- (id)copyMovieArtistDictionary;
- (void)setITunesStoreIdentifier:(id)arg1;
- (id)initWithMovieArtistDictionary:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;

@end