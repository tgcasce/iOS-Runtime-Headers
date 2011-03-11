/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UIPushButton, NSMutableArray, NSTimer, MFComposeRecipientAtom, UIImage, UITextField, NSMutableDictionary, NSArray;

@interface _MFComposeRecipientView : MFComposeHeaderView <UITextFieldDelegate, ABPeoplePickerNavigationControllerDelegate, MFComposeRecipientAtomDelegate> {
    NSMutableArray *_recipients;
    NSMutableDictionary *_atoms;
    MFComposeRecipientAtom *_selectedAtom;
    UIPushButton *_addButton;
    BOOL _editable;
    BOOL _picking;
    NSArray *_properties;
    UIImage *_buttonImage;
    UIImage *_pressedImage;
    int _maxRecipients;
    BOOL _parentIsClosing;
    NSTimer *_delayTimer;
    double _inputDelay;
    UITextField *_textField;
}

+ (void)_initializeSafeCategory;

- (void)removeRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)recipientWasUpdated:(id)arg1;
- (void)addRecord:(void*)arg1 identifier:(int)arg2;
- (void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)removeAddresses;
- (BOOL)_addable;
- (void)setMaxRecipients:(int)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (BOOL)shouldShowCardForPerson:(void*)arg1;
- (void)_dismissPicker:(id)arg1;
- (BOOL)textFieldShouldBecomeFirstResponder:(id)arg1;
- (void)_cancelDelayTimer;
- (void)_delayTimerFired:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)_deselectAtom;
- (void)_deleteSelectedAtom;
- (void)parentWillClose;
- (void)parentDidClose;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)setAddresses:(id)arg1;
- (void)removeAddressAtIndex:(int)arg1;
- (void)addAddress:(id)arg1;
- (void)addButtonClicked:(id)arg1;
- (void)reflow;
- (int)maxRecipients;
- (id)recipients;
- (id)textField;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)hasContent;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)textChanged:(id)arg1;
- (void)setLabel:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)clearText;
- (BOOL)becomeFirstResponder;
- (id)text;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setProperty:(int)arg1;
- (void)setProperties:(id)arg1;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)setInputDelay:(double)arg1;
- (float)offsetForRowWithTextField;
- (float)textFieldOffsetForNumberOfRowsToScroll:(unsigned int)arg1 numberOfRowsAboveField:(int)arg2;
- (int)numberOfRowsOfTextInField;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)showAtoms;
- (id)addButton;
- (BOOL)editable;
- (id)addresses;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)addButton;

@end