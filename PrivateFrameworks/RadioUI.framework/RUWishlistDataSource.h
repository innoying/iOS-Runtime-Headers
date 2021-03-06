/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUWishlistDataSourceDelegate>, NSArray, RadioModel;

@interface RUWishlistDataSource : NSObject {
    <RUWishlistDataSourceDelegate> *_delegate;
    RadioModel *_model;
    NSArray *_wishlistedTracks;
}

@property <RUWishlistDataSourceDelegate> * delegate;
@property(readonly) NSArray * wishlistedTracks;

- (void).cxx_destruct;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteAllWishlistedTracks;
- (void)deleteWishlistedTrack:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)wishlistedTracks;

@end
