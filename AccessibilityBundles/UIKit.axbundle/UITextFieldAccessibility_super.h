/* Generated by RuntimeBrowser.
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@interface UITextFieldAccessibility_super : UIAccessibilitySafeCategory  {
}


- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (id)accessibilityPlaceholderValue;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)_clearButtonClicked:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)_updateButtons;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)selectAll:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)paste:(id)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)copy:(id)arg1;

@end