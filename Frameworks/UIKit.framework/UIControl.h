/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIControl : UIView  {
    NSMutableArray *_targetActions;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousPoint;
    double _downTime;
    struct { 
        unsigned int disabled : 1; 
        unsigned int tracking : 1; 
        unsigned int touchInside : 1; 
        unsigned int touchDragged : 1; 
        unsigned int requiresDisplayOnTracking : 1; 
        unsigned int highlighted : 1; 
        unsigned int dontHighlightOnTouchDown : 1; 
        unsigned int delayActions : 1; 
        unsigned int allowActionsToQueue : 1; 
        unsigned int pendingUnhighlight : 1; 
        unsigned int selected : 1; 
        unsigned int verticalAlignment : 2; 
        unsigned int horizontalAlignment : 2; 
    } _controlFlags;
}

@property(getter=isEnabled) BOOL enabled;
@property(getter=isSelected) BOOL selected;
@property(getter=isHighlighted) BOOL highlighted;
@property int contentVerticalAlignment;
@property int contentHorizontalAlignment;
@property(readonly) unsigned int state;
@property(getter=isTracking,readonly) BOOL tracking;
@property(getter=isTouchInside,readonly) BOOL touchInside;


- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (BOOL)mouseInside;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (BOOL)hasOneOrMoreTargets;
- (BOOL)touchDragged;
- (void)_sendDelayedActions;
- (void)_delayActions;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (BOOL)_hasActionForEventMask:(int)arg1;
- (void)sendAction:(SEL)arg1 toTarget:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)_sendDelayedActions:(BOOL)arg1;
- (void)sendActionsForControlEvents:(unsigned int)arg1;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned int)arg2;
- (unsigned int)allControlEvents;
- (id)allTargets;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (int)contentHorizontalAlignment;
- (int)contentVerticalAlignment;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)isTouchInside;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)requiresDisplayOnTracking;
- (void)_unhighlight;
- (void)_sendActionsForEvents:(int)arg1 withEvent:(id)arg2;
- (void)_sendActionsForEventMask:(int)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_cancelDelayedActions;
- (void)setTracking:(BOOL)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (BOOL)beginTrackingAt:(struct CGPoint { float x1; float x2; })arg1 withEvent:(struct __GSEvent { }*)arg2;
- (BOOL)shouldTrack;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setRequiresDisplayOnTracking:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)setHighlighted:(BOOL)arg1;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setContentHorizontalAlignment:(int)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)isEnabled;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)isTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (unsigned int)state;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end