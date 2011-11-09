/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextViewDelegate> {
    PSTextView *_textView;
}


- (id)textView;
- (void)setTextView:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)setValue:(id)arg1;
- (void)drawTitleInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;

@end