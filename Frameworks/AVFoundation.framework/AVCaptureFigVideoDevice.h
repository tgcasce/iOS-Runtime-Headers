/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
    NSDictionary *_deviceProperties;
    int _focusMode;
    struct CGPoint { 
        float x; 
        float y; 
    } _focusPointOfInterest;
    int _focusInFlightCount;
    BOOL _adjustingFocus;
    int _exposureMode;
    struct CGPoint { 
        float x; 
        float y; 
    } _exposurePointOfInterest;
    BOOL _adjustingExposure;
    int _wbMode;
    BOOL _adjustingWB;
    BOOL _automaticallyAdjustsImageControlMode;
    int _imageControlMode;
    int _flashMode;
    BOOL _flashActive;
    BOOL _flashAvailable;
    int _torchMode;
    float _torchLevel;
    BOOL _torchAvailable;
    BOOL _isConnected;
}

+ (void)initialize;
+ (BOOL)_cameraAccessIsEnabled;
+ (id)_devices;

- (id)localizedName;
- (id)initWithProperties:(id)arg1;
- (int)position;
- (id)init;
- (void)dealloc;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)isExposureModeSupported:(int)arg1;
- (void)setSession:(id)arg1;
- (BOOL)isFlashActive;
- (BOOL)isFocusPointOfInterestSupported;
- (BOOL)isExposurePointOfInterestSupported;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFocusMode:(int)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setExposureMode:(int)arg1;
- (int)focusMode;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (BOOL)isAdjustingFocus;
- (BOOL)isAdjustingExposure;
- (int)exposureMode;
- (float)torchLevel;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)hasTorch;
- (BOOL)isTorchModeSupported:(int)arg1;
- (void)setTorchMode:(int)arg1;
- (BOOL)isTorchAvailable;
- (int)flashMode;
- (BOOL)hasFlash;
- (void)setFlashMode:(int)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_applyPendingPropertiesToRecorder;
- (void)_sessionDidStart;
- (BOOL)_setFocusWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (void)_setAdjustingFocus:(BOOL)arg1;
- (void)_setAdjustingExposure:(BOOL)arg1;
- (BOOL)_setExposureWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (BOOL)isAdjustingWhiteBalance;
- (void)_setAdjustingWhiteBalance:(BOOL)arg1;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (int)_whiteBalanceMode;
- (BOOL)_setWhiteBalanceMode:(int)arg1;
- (void)setWhiteBalanceMode:(int)arg1;
- (void)_setFlashActive:(BOOL)arg1;
- (BOOL)_setFlashMode:(int)arg1;
- (BOOL)isFlashAvailable;
- (BOOL)_setTorchMode:(int)arg1;
- (void)_updateFlashAndTorchAvailability;
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (BOOL)_subjectAreaChangeMonitoringEnabled;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (BOOL)_setImageControlMode:(int)arg1;
- (void)_updateImageControlMode;
- (int)_torchMode;
- (int)_flashMode;
- (int)imageControlMode;
- (int)torchMode;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (BOOL)hasMediaType:(id)arg1;
- (BOOL)startUsingDevice:(id*)arg1;
- (id)devicePropertiesDictionary;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (id)modelID;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isConnected;
- (id)uniqueID;
- (void)stopUsingDevice;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (int)whiteBalanceMode;
- (BOOL)automaticallyAdjustsImageControlMode;
- (void)setImageControlMode:(int)arg1;
- (BOOL)doesHandleNotification:(id)arg1;

@end