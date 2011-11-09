/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CAMeshTransform, NSString, NSArray, CALayer, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
        void *unused1[8]; 
    } _attr;
}

@property(readonly) CALayer * currentLayer;
@property(readonly) CALayer * _mapKit_mapLayer;
@property(copy) CAMeshTransform * meshTransform;
@property BOOL needsLayoutOnGeometryChange;
@property BOOL canDrawConcurrently;
@property BOOL acceleratesDrawing;
@property(getter=isFrozen) BOOL frozen;
@property BOOL allowsHitTesting;
@property BOOL clearsContext;
@property BOOL contentsOpaque;
@property(copy) NSString * contentsScaling;
@property struct CGAffineTransform { float a; float b; float c; float d; float tx; float ty; } contentsTransform;
@property BOOL invertsShadow;
@property BOOL sortsSublayers;
@property BOOL preloadsCache;
@property BOOL allowsDisplayCompositing;
@property struct CGSize { float width; float height; } sizeRequisition;
@property(copy) NSArray * lights;
@property BOOL acceptsLights;
@property float ambientReflectance;
@property float diffuseReflectance;
@property float specularReflectance;
@property float shininess;
@property float metallicity;
@property(copy) NSArray * behaviors;
@property float velocityStretch;
@property float mass;
@property float momentOfInertia;
@property float coefficientOfRestitution;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } visibleRect;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } bounds;
@property struct CGPoint { float x; float y; } position;
@property float zPosition;
@property struct CGPoint { float x; float y; } anchorPoint;
@property float anchorPointZ;
@property struct CATransform3D { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } transform;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } frame;
@property(getter=isHidden) BOOL hidden;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(getter=isGeometryFlipped) BOOL geometryFlipped;
@property(readonly) CALayer * superlayer;
@property(copy) NSArray * sublayers;
@property struct CATransform3D { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } sublayerTransform;
@property(retain) CALayer * mask;
@property BOOL masksToBounds;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } contentsRect;
@property(copy) NSString * contentsGravity;
@property float contentsScale;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } contentsCenter;
@property(copy) NSString * minificationFilter;
@property(copy) NSString * magnificationFilter;
@property float minificationFilterBias;
@property(getter=isOpaque) BOOL opaque;
@property BOOL needsDisplayOnBoundsChange;
@property unsigned int edgeAntialiasingMask;
@property struct CGColor { }* backgroundColor;
@property float cornerRadius;
@property float borderWidth;
@property struct CGColor { }* borderColor;
@property float opacity;
@property(retain) id compositingFilter;
@property(copy) NSArray * filters;
@property(copy) NSArray * backgroundFilters;
@property BOOL shouldRasterize;
@property float rasterizationScale;
@property struct CGColor { }* shadowColor;
@property float shadowOpacity;
@property struct CGSize { float width; float height; } shadowOffset;
@property float shadowRadius;
@property struct CGPath { }* shadowPath;
@property(copy) NSDictionary * actions;
@property(copy) NSString * name;
@property id delegate;
@property(copy) NSDictionary * style;
@property(copy) NSString * fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double duration;
@property double beginTime;

+ (id)defaultValueForKey:(id)arg1;
+ (id)layer;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (int (*)())CA_setterForType:(int)arg1;
+ (int (*)())CA_getterForType:(int)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;

- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (id)initWithLayer:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)setMasksToBounds:(BOOL)arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentsGravity:(id)arg1;
- (id)valueForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setContentsChanged;
- (void)setFillMode:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void)removeFromSuperlayer;
- (id)superlayer;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setBeginTime:(double)arg1;
- (float)speed;
- (double)timeOffset;
- (void)setSpeed:(float)arg1;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setClearsContext:(BOOL)arg1;
- (void)setContents:(id)arg1;
- (void)addSublayer:(id)arg1;
- (void)setNeedsLayout;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)contentsAreFlipped;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (void)setActions:(id)arg1;
- (id)actions;
- (void)reloadValueForKeyPath:(id)arg1;
- (BOOL)isDescendantOf:(id)arg1;
- (void*)regionBeingDrawn;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (float)zPosition;
- (float)anchorPointZ;
- (void)setAnchorPointZ:(float)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })sublayerTransform;
- (BOOL)isGeometryFlipped;
- (void)setGeometryFlipped:(BOOL)arg1;
- (BOOL)acceleratesDrawing;
- (void)setAcceleratesDrawing:(BOOL)arg1;
- (double)beginTime;
- (float)repeatCount;
- (BOOL)autoreverses;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)fillMode;
- (struct CGColor { }*)borderColor;
- (float)borderWidth;
- (void)display;
- (BOOL)isDoubleSided;
- (void)setCompositingFilter:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (BOOL)hidden;
- (float)cornerRadius;
- (void)clearHasBeenCommitted;
- (void)setBorderWidth:(float)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(float)arg1;
- (float)rasterizationScale;
- (BOOL)opaque;
- (void)_display;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)actionForKey:(id)arg1;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)setCornerRadius:(float)arg1;
- (void)setMask:(id)arg1;
- (void)setDoubleSided:(BOOL)arg1;
- (void)setZPosition:(float)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setSortsSublayers:(BOOL)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)_dealloc;
- (void)setFlipped:(BOOL)arg1;
- (id)contentsScaling;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)setFrozen:(BOOL)arg1;
- (void)setPreloadsCache:(BOOL)arg1;
- (BOOL)shouldRasterize;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)context;
- (void)setDoublePosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (struct CADoublePoint { double x1; double x2; })doublePosition;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (void)setDoubleBounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (void)setNeedsLayoutOnGeometryChange:(BOOL)arg1;
- (BOOL)needsLayoutOnGeometryChange;
- (void)setSublayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (BOOL)isFrozen;
- (id)valueForKeyPath:(id)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (BOOL)hasBeenCommitted;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (id)mask;
- (void)setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)invalidateContents;
- (void)removeAllAnimations;
- (id)name;
- (id)filters;
- (void)displayIfNeeded;
- (BOOL)clearsContext;
- (float)opacity;
- (void)setOpacity:(float)arg1;
- (BOOL)masksToBounds;
- (BOOL)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShouldRasterize:(BOOL)arg1;
- (void)setContentsScale:(float)arg1;
- (float)contentsScale;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsCenter;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentsScaling:(id)arg1;
- (id)contentsGravity;
- (BOOL)needsDisplayOnBoundsChange;
- (void)layoutIfNeeded;
- (void)setSublayers:(id)arg1;
- (id)presentationLayer;
- (void)layoutBelowIfNeeded;
- (struct CGPoint { float x1; float x2; })position;
- (void)setMagnificationFilter:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setFilters:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (id)sublayers;
- (BOOL)isOpaque;
- (struct CGColor { }*)backgroundColor;
- (id)contents;
- (void)removeAnimationForKey:(id)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (void)setRasterizationScale:(float)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)shadowColor;
- (id)delegate;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)needsLayout;
- (void)setAllowsDisplayCompositing:(BOOL)arg1;
- (BOOL)doubleSided;
- (BOOL)isFlipped;
- (void)setBehaviors:(id)arg1;
- (unsigned int)edgeAntialiasingMask;
- (void)setName:(id)arg1;
- (unsigned int)retainCount;
- (id)debugDescription;
- (id)retain;
- (id)init;
- (void)release;
- (void)dealloc;
- (float)shadowRadius;
- (float)shadowOpacity;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (BOOL)_canDisplayConcurrently;
- (void)setMeshTransform:(id)arg1;
- (BOOL)layoutIsActive;
- (id)layerBeingDrawn;
- (id)layerAtTime:(double)arg1;
- (void)setAllowsHitTesting:(BOOL)arg1;
- (void)setCanDrawConcurrently:(BOOL)arg1;
- (void)setInvertsShadow:(BOOL)arg1;
- (BOOL)contentsOpaque;
- (void)setContentsOpaque:(BOOL)arg1;
- (void)setLights:(id)arg1;
- (void)setAcceptsLights:(BOOL)arg1;
- (void)setAmbientReflectance:(float)arg1;
- (void)setDiffuseReflectance:(float)arg1;
- (void)setSpecularReflectance:(float)arg1;
- (void)setShininess:(float)arg1;
- (void)setMetallicity:(float)arg1;
- (void)setVelocityStretch:(float)arg1;
- (void)setMass:(float)arg1;
- (void)setMomentOfInertia:(float)arg1;
- (void)setCoefficientOfRestitution:(float)arg1;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setBackgroundFilters:(id)arg1;
- (id)minificationFilter;
- (id)ancestorSharedWithLayer:(id)arg1;
- (BOOL)ignoresHitTesting;
- (BOOL)allowsHitTesting;
- (BOOL)sortsSublayers;
- (id)modelLayer;
- (BOOL)_scheduleAnimationTimer;
- (void)_cancelAnimationTimer;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })contentsTransform;
- (BOOL)drawsMipmapLevels;
- (void)setSizeRequisition:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeRequisition;
- (struct CGSize { float x1; float x2; })_preferredSize;
- (BOOL)canDrawConcurrently;
- (id)backgroundFilters;
- (id)compositingFilter;
- (id)meshTransform;
- (id)lights;
- (id)behaviors;
- (id)magnificationFilter;
- (float)minificationFilterBias;
- (BOOL)acceptsLights;
- (float)ambientReflectance;
- (float)diffuseReflectance;
- (float)specularReflectance;
- (float)shininess;
- (float)metallicity;
- (float)velocityStretch;
- (float)mass;
- (float)momentOfInertia;
- (float)coefficientOfRestitution;
- (BOOL)preloadsCache;
- (BOOL)allowsDisplayCompositing;
- (struct CGPath { }*)shadowPath;
- (BOOL)invertsShadow;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer*,uint32_t*> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CA::Layer*,CA::Layer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; }*)arg1;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; unsigned short x4; unsigned short x5; float x6; struct LayerExt {} *x7; struct Handle {} *x8; struct Object {} *x9; struct Vec2<double> { double x_10_1_1; double x_10_1_2; } x10; struct Rect { double x_11_1_1; double x_11_1_2; double x_11_1_3; double x_11_1_4; } x11; struct TypedArray<CA::Render::Layer> {} *x12; struct TypedArray<CA::Render::Animation> {} *x13; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer*,uint32_t*> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CA::Layer*,CA::Layer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_scrollPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (int)compareTextEffectsOrdering:(id)arg1;
- (BOOL)uiHasFilterWithName:(id)arg1;
- (id)currentLayer;
- (BOOL)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4;
- (id)_mapKit_mapLayer;
- (BOOL)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3;

@end