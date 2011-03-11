/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, CALayerArray, NSString, CALayer, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int flags; 
        unsigned int parent; 
        CALayerArray *sublayers; 
        CALayer *mask; 
        struct _CALayerState {} *state; 
        struct _CALayerState {} *previous_state; 
        struct _CALayerAnimation {} *animations; 
        unsigned int slots[3]; 
    } _attr;
}

@property(readonly) CALayer * currentLayer;
@property(readonly) CALayer * _mapKit_mapLayer;
@property BOOL needsLayoutOnGeometryChange;
@property BOOL canDrawConcurrently;
@property(getter=isFrozen) BOOL frozen;
@property BOOL allowsHitTesting;
@property BOOL clearsContext;
@property struct CGAffineTransform { float a; float b; float c; float d; float tx; float ty; } contentsTransform;
@property BOOL invertsShadow;
@property BOOL sortsSublayers;
@property BOOL preloadsCache;
@property BOOL allowsDisplayCompositing;
@property struct CGSize { float width; float height; } sizeRequisition;
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

+ (int (*)())CA_setterForType:(int)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (int (*)())CA_getterForType:(int)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)layer;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (void)_initializeSafeCategory;

- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (void)setAllowsDisplayCompositing:(BOOL)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (BOOL)allowsDisplayCompositing;
- (BOOL)allowsHitTesting;
- (BOOL)preloadsCache;
- (id)minificationFilter;
- (void)_dealloc;
- (BOOL)isGeometryFlipped;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (BOOL)_scheduleAnimationTimer;
- (void)_cancelAnimationTimer;
- (id)modelLayer;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (struct CGSize { float x1; float x2; })_preferredSize;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (float)zPosition;
- (id)magnificationFilter;
- (id)backgroundFilters;
- (void)setBackgroundFilters:(id)arg1;
- (id)compositingFilter;
- (void)setCompositingFilter:(id)arg1;
- (void)setActions:(id)arg1;
- (struct CGPath { }*)shadowPath;
- (float)rasterizationScale;
- (struct CGSize { float x1; float x2; })sizeRequisition;
- (BOOL)sortsSublayers;
- (void)reloadValueForKeyPath:(id)arg1;
- (BOOL)_canDisplayConcurrently;
- (BOOL)drawsMipmapLevels;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (BOOL)layoutIsActive;
- (BOOL)ignoresHitTesting;
- (id)ancestorSharedWithLayer:(id)arg1;
- (id)layerBeingDrawn;
- (id)layerAtTime:(double)arg1;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CALayer*,uintptr_t*> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CALayer*,CALayer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; }*)arg1;
- (BOOL)doubleSided;
- (void)setAllowsHitTesting:(BOOL)arg1;
- (BOOL)canDrawConcurrently;
- (BOOL)needsLayoutOnGeometryChange;
- (BOOL)invertsShadow;
- (void)setInvertsShadow:(BOOL)arg1;
- (void)setSizeRequisition:(struct CGSize { float x1; float x2; })arg1;
- (id)behaviors;
- (float)velocityStretch;
- (void)setVelocityStretch:(float)arg1;
- (float)coefficientOfRestitution;
- (float)momentOfInertia;
- (float)mass;
- (void)setMass:(float)arg1;
- (void)setMomentOfInertia:(float)arg1;
- (void)setCoefficientOfRestitution:(float)arg1;
- (id)_implicitActionForKey:(id)arg1;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; unsigned short x4; unsigned short x5; float x6; struct LayerExt {} *x7; struct Handle {} *x8; struct Object {} *x9; struct Vec2<double> { double x_10_1_1; double x_10_1_2; } x10; struct Rect { double x_11_1_1; double x_11_1_2; double x_11_1_3; double x_11_1_4; } x11; struct TypedArray<CA::Render::Layer> {} *x12; struct TypedArray<CA::Render::Animation> {} *x13; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CALayer*,uintptr_t*> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CALayer*,CALayer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })contentsTransform;
- (void)_scrollPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setFilters:(id)arg1;
- (void)setShadowRadius:(float)arg1;
- (float)cornerRadius;
- (void)setRepeatCount:(float)arg1;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setShadowOpacity:(float)arg1;
- (BOOL)shouldRasterize;
- (void)setNeedsLayoutOnGeometryChange:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (id)initWithLayer:(id)arg1;
- (void)clearHasBeenCommitted;
- (void)layoutBelowIfNeeded;
- (double)duration;
- (void)setRasterizationScale:(float)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)mask;
- (void)setCornerRadius:(float)arg1;
- (void)setMask:(id)arg1;
- (BOOL)opaque;
- (void)_display;
- (void)addSublayer:(id)arg1;
- (struct CGColor { }*)shadowColor;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)removeAllAnimations;
- (BOOL)needsDisplay;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setSortsSublayers:(BOOL)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setFillMode:(id)arg1;
- (void)setZPosition:(float)arg1;
- (void)setDoubleSided:(BOOL)arg1;
- (id)superlayer;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)presentationLayer;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)layoutIfNeeded;
- (void)setContentsScale:(float)arg1;
- (void)setFlipped:(BOOL)arg1;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setName:(id)arg1;
- (void)setClearsContext:(BOOL)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (BOOL)hidden;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)setPreloadsCache:(BOOL)arg1;
- (void)setFrozen:(BOOL)arg1;
- (id)style;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (id)valueForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setSublayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (void)setDoubleBounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })doublePosition;
- (void)setDoublePosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (id)sublayers;
- (void)setBeginTime:(double)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)release;
- (void)setMagnificationFilter:(id)arg1;
- (void)setContents:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (void)setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (void)setSublayers:(id)arg1;
- (void)setContentsGravity:(id)arg1;
- (id)contentsGravity;
- (float)contentsScale;
- (void)setShouldRasterize:(BOOL)arg1;
- (BOOL)masksToBounds;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (BOOL)clearsContext;
- (void)displayIfNeeded;
- (id)filters;
- (void)invalidateContents;
- (float)speed;
- (void)setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)hasBeenCommitted;
- (BOOL)isFrozen;
- (id)animationKeys;
- (void)encodeWithCoder:(id)arg1;
- (void)setTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)needsDisplayOnBoundsChange;
- (BOOL)isHidden;
- (id)name;
- (struct CGColor { }*)backgroundColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsCenter;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (struct CGPoint { float x1; float x2; })position;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMasksToBounds:(BOOL)arg1;
- (id)init;
- (void)removeFromSuperlayer;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (void)removeAnimationForKey:(id)arg1;
- (id)contents;
- (BOOL)isOpaque;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)retain;
- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)retainCount;
- (void)setDuration:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (void)setNeedsLayout;
- (void)setHidden:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setSpeed:(float)arg1;
- (float)repeatCount;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (id)fillMode;
- (struct CGColor { }*)borderColor;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (float)minificationFilterBias;
- (void)setCanDrawConcurrently:(BOOL)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (double)timeOffset;
- (BOOL)contentsAreFlipped;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)debugDescription;
- (float)shadowOpacity;
- (void)setBorderWidth:(float)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (BOOL)isFlipped;
- (void)setBehaviors:(id)arg1;
- (unsigned int)edgeAntialiasingMask;
- (void)layoutSublayers;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (BOOL)needsLayout;
- (BOOL)isDescendantOf:(id)arg1;
- (id)actionForKey:(id)arg1;
- (void*)regionBeingDrawn;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (double)beginTime;
- (void)setContentsChanged;
- (void)setAnchorPointZ:(float)arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setGeometryFlipped:(BOOL)arg1;
- (void)setTimeOffset:(double)arg1;
- (BOOL)autoreverses;
- (float)anchorPointZ;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })sublayerTransform;
- (BOOL)isDoubleSided;
- (float)borderWidth;
- (void)display;
- (id)actions;
- (float)shadowRadius;
- (void)setPositionWithValue:(id)arg1;
- (void)setBoundsWithValue:(id)arg1;
- (int)compareTextEffectsOrdering:(id)arg1;
- (int)compareTextEffectsOrdering:(id)arg1;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)currentLayer;
- (id)_mapKit_mapLayer;
- (BOOL)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4;
- (BOOL)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3;

@end