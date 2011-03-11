/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUOverlayTransition, UIViewController;

@interface SUOverlayAction : NSObject  {
    int _animationCount;
    UIViewController *_otherViewController;
    SUOverlayTransition *_transition;
    int _type;
    UIViewController *_viewController;
}

@property(retain) UIViewController * viewController;
@property(retain) SUOverlayTransition * transition;
@property(retain) UIViewController * otherViewController;
@property int animationCount;
@property int actionType;


- (void)setAnimationCount:(int)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (int)animationCount;
- (void)dealloc;
- (id)transition;
- (void)setTransition:(id)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (id)otherViewController;
- (void)setOtherViewController:(id)arg1;

@end