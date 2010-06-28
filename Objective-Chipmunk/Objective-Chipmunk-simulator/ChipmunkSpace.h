@interface ChipmunkSpace : NSObject {
	cpSpace _space;
	NSMutableSet *_children;
	
	NSMutableArray *_handlers;
}

- (id)init;

@property (readonly) cpSpace *space;
@property int iterations;
@property int elasticIterations;
@property cpVect gravity;
@property cpFloat damping;

#define CHIPMUNK_ARBITER_GET_SHAPES(arb, a, b) ChipmunkShape *a, *b; { \
	cpShape *shapeA, *shapeB; \
	cpArbiterGetShapes(arb, &shapeA, &shapeB); \
	a = shapeA->data; b = shapeB->data; \
}

// TODO document selector types
- (void)setDefaultCollisionHandler:(id)target
	begin:(SEL)begin
	preSolve:(SEL)preSolve
	postSolve:(SEL)postSolve
	separate:(SEL)separate;

- (void)addCollisionHandler:(id)target
	typeA:(id)a typeB:(id)b
	begin:(SEL)begin
	preSolve:(SEL)preSolve
	postSolve:(SEL)postSolve
	separate:(SEL)separate;

// The following two methods use the [shape data] object as the collision handler.
// In order to cache the method lookups, it needs to know the class of the object.
// This means that [shape data] objects _must_ be an instance of klass.
// See OneWay.m for an example.
- (void)addShapeAHandler:(Class)klass
	typeA:(id)a typeB:(id)b
	begin:(SEL)begin
	preSolve:(SEL)preSolve
	postSolve:(SEL)postSolve
	separate:(SEL)separate;

- (void)addShapeBHandler:(Class)klass
	typeA:(id)a typeB:(id)b
	begin:(SEL)begin
	preSolve:(SEL)preSolve
	postSolve:(SEL)postSolve
	separate:(SEL)separate;

- (void)removeCollisionHandlerForTypeA:(id)a andB:(id)b;

- (id)add:(id <ChipmunkObject>)obj;
- (void)addObjects:(id <NSFastEnumeration>)objects;

- (id)remove:(id <ChipmunkObject>)obj;
- (void)removeObjects:(id <NSFastEnumeration>)objects;

// Calls the selector on the given target. Selectors should be of the form:
// - (void)mySelector:(id)context
// This makes it trivial to remove objects from your game controller which can then remove things from the space:
// [space addPostStepCallback:gameWorld selector:@selector(remove:) context:gameObject];
- (void)addPostStepCallback:(id)target selector:(SEL)selector context:(id)context;

// Remove the Chipmunk Object from the space at the end of the step:
- (void)addPostStepRemoval:(id <ChipmunkObject>)obj;

- (NSArray *)pointQueryAll:(cpVect)point layers:(cpLayers)layers group:(id)group;
//- (void)pointQuery:(cpVect)point layers:(cpLayers)layers group:(id)group target:(id)target selector:(SEL)selector;
- (ChipmunkShape *)pointQueryFirst:(cpVect)point layers:(cpLayers)layers group:(id)group;

- (NSArray *)segmentQueryAllFrom:(cpVect)start to:(cpVect)end layers:(cpLayers)layers group:(id)group;
//- (void)segmentQueryFrom:(cpVect)start to:(cpVect)end layers:(cpLayers)layers group:(id)group target:(id)target selector:(SEL)selector;
- (ChipmunkSegmentQueryInfo *)segmentQueryFirstFrom:(cpVect)start to:(cpVect)end layers:(cpLayers)layers group:(id)group;

- (NSArray *)bbQueryAll:(cpBB)bb layers:(cpLayers)layers group:(id)group;
//- (void)bbQuery:(cpBB)bb layers:(cpLayers)layers group:(id)group target:(id)target selector:(SEL)selector;

- (void)resizeStaticHashWithDim:(cpFloat)dim andCount:(int)count;
- (void)resizeActiveHashWithDim:(cpFloat)dim andCount:(int)count;
- (void)rehashStatic;

- (void)step:(cpFloat)dt;

@end
