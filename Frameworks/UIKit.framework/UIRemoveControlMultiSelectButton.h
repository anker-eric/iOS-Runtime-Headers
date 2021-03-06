/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {
    unsigned int  _isHighlighted;
    unsigned int  _isSelected;
}

+ (float)defaultWidth;
+ (id)minusCenterImage;
+ (id)minusImage;
+ (id)plusImage;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithRemoveControl:(id)arg1;
- (BOOL)isHiding;
- (BOOL)isHighlighted;
- (BOOL)isRotated;
- (BOOL)isRotating;
- (void)setHiding:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (void)toggleRotate:(BOOL)arg1;

@end
