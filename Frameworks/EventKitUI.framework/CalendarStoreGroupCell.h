/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKStyleProvider>, UILabel;

@interface CalendarStoreGroupCell : UIView {
    UILabel *_nameLabel;
    <EKStyleProvider> *_styleProvider;
    UILabel *_typeLabel;
}

+ (float)standardHeightForStyleProvider:(id)arg1;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStoreName:(id)arg1;
- (void)setStoreType:(id)arg1;

@end
