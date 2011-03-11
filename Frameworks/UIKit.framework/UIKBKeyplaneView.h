/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBCandidateView, NSString, UIKBKeyplane, UIKBKeyboard, UIKBHandwritingView;

@interface UIKBKeyplaneView : UIView  {
    UIKBKeyboard *_keyboard;
    UIKBKeyplane *_keyplane;
    NSString *_visualStyle;
    UIKBHandwritingView *_handwritingView;
    UIKBCandidateView *_candidateView;
    BOOL _redrawBackground;
}

@property BOOL backgroundNeedsRedraw;
@property UIKBHandwritingView * handwritingView;
@property UIKBCandidateView * candidateView;
@property(readonly) NSString * visualStyle;
@property(retain) UIKBKeyplane * keyplane;


- (id)cacheKey;
- (id)candidateView;
- (id)handwritingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 keyplane:(id)arg3;
- (BOOL)validForKeyplane:(id)arg1 withVisualStyle:(id)arg2;
- (BOOL)backgroundNeedsRedraw;
- (void)setBackgroundNeedsRedraw:(BOOL)arg1;
- (void)setHandwritingView:(id)arg1;
- (void)setCandidateView:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (id)keyplane;
- (id)visualStyle;
- (void)displayLayer:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end