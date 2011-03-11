/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface UITableViewCellSelectedBackground : UIView  {
    int _selectionStyle;
    UIColor *_multiselectBackgroundColor;
    BOOL _multiselect;
}

@property(getter=isMultiselect) BOOL multiselect;
@property(retain) UIColor * multiselectBackgroundColor;
@property int selectionStyle;


- (int)selectionStyle;
- (id)multiselectBackgroundColor;
- (void)setMultiselect:(BOOL)arg1;
- (BOOL)isMultiselect;
- (void)setMultiselectBackgroundColor:(id)arg1;
- (void)setSelectionStyle:(int)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end