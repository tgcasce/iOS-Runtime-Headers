/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicNowPlayingPlaybackControlsView : RUNowPlayingPlaybackControlsView

@property (nonatomic, readonly) UIView *viewForPresentingRepeat;

+ (unsigned long long)defaultVisibleParts;

- (void)_applyRepeatSettingsToButton:(id)arg1;
- (void)_applyShuffleSettingsToButton:(id)arg1;
- (id)_availableCreateActionsForItem:(id)arg1;
- (void)_cloudControllerIsJaliscoGeniusEnabledDidChangeNotification:(id)arg1;
- (void)_repeatTypeChangedNotification:(id)arg1;
- (void)_shuffleTypeChangedNotification:(id)arg1;
- (id)_titleForCreateAction:(int)arg1;
- (Class)_transportControlsClass;
- (void)_updateForItemDidChangeAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)playbackSpeedButtonImageForPlaybackSpeed:(unsigned int)arg1;
- (id)playbackSpeedTitleForPlaybackSpeed:(unsigned int)arg1;
- (void)registerForPlayerNotifications;
- (void)reloadView;
- (void)unregisterForPlayerNotifications;
- (id)viewForPresentingRepeat;

@end
