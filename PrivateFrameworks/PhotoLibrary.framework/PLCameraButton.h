/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIImage, UIView, NSArray;

@interface PLCameraButton : UIButton  {
    UIView *_rotationHolder;
    UIImageView *_iconView;
    BOOL _lockEnabled;
    BOOL _isLandscape;
    BOOL _dontDrawDisabled;
    UIImage *_cameraIcon;
    UIImage *_cameraIconLandscape;
    NSArray *_videoRecordingIcons;
    BOOL _videoMode;
    BOOL _videoIsRecording;
    int _orientation;
    BOOL _watchingOrientationChanges;
}

+ (void)_initializeSafeCategory;

- (void)setEnabled:(BOOL)arg1;
- (id)initWithDefaultSize;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (int)orientation;
- (void)dealloc;
- (void)setLockEnabled:(BOOL)arg1;
- (void)setVideoIsRecording:(BOOL)arg1;
- (void)setButtonOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_setIcon:(id)arg1;
- (void)setVideoMode:(BOOL)arg1;
- (void)setDontShowDisabledState:(BOOL)arg1;
- (void)_startWatchingDeviceOrientationChanges;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;

@end