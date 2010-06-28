// Abstract base class for collsion shape.
@interface ChipmunkShape : NSObject <ChipmunkBaseObject> {
@public
	id data;
}

// Get a pointer to the base Chipmunk shape struct.
@property (readonly) cpShape *shape;

@property (retain) ChipmunkBody *body;
@property (readonly) cpBB bb;
@property BOOL sensor;
@property cpFloat elasticity;
@property cpFloat friction;
@property cpVect surfaceVel;
@property (assign) id collisionType;  // weak reference
@property (assign) id group; // weak reference
@property (assign) cpLayers layers;
@property (assign) id data; // weak reference

- (cpBB)cacheBB;
- (bool)pointQuery:(cpVect)point;

@end

@interface ChipmunkSegmentQueryInfo : NSObject {
	cpSegmentQueryInfo _info;
	cpVect _start, _end;
}

- (id)initWithStart:(cpVect)start end:(cpVect)end;

@property (readonly) cpSegmentQueryInfo *info;
@property (readonly) ChipmunkShape *shape;
@property (readonly) cpFloat t;
@property (readonly) cpVect normal;
@property (readonly) cpVect point;
@property (readonly) cpFloat dist;
@property (readonly) cpVect start;
@property (readonly) cpVect end;

@end

@interface ChipmunkCircleShape : ChipmunkShape {
	cpCircleShape _shape;
}

+ (id)circleWithBody:(ChipmunkBody *)body radius:(cpFloat)radius offset:(cpVect)offset;
- (id)initWithBody:(ChipmunkBody *)body radius:(cpFloat)radius offset:(cpVect)offset;

@property (readonly) cpFloat radius;
@property (readonly) cpVect offset;

@end


@interface ChipmunkSegmentShape : ChipmunkShape {
	cpSegmentShape _shape;
}

+ (id)segmentWithBody:(ChipmunkBody *)body from:(cpVect)a to:(cpVect)b radius:(cpFloat)radius;
- (id)initWithBody:(ChipmunkBody *)body from:(cpVect)a to:(cpVect)b radius:(cpFloat)radius;

@property (readonly) cpVect a;
@property (readonly) cpVect b;
@property (readonly) cpVect normal;
@property (readonly) cpFloat radius;

@end


@interface ChipmunkPolyShape : ChipmunkShape {
	cpPolyShape _shape;
}

+ (id)polyWithBody:(ChipmunkBody *)body count:(int)count verts:(cpVect *)verts offset:(cpVect)offset;
+ (id)boxWithBody:(ChipmunkBody *)body width:(cpFloat)width height:(cpFloat)height;
- (id)initWithBody:(ChipmunkBody *)body count:(int)count verts:(cpVect *)verts offset:(cpVect)offset;
- (id)initBoxWithBody:(ChipmunkBody *)body width:(cpFloat)width height:(cpFloat)height;

@property (readonly) int count;
- (cpVect)getVertex:(int)index;

@end

@interface ChipmunkStaticCircleShape : ChipmunkCircleShape
@end

@interface ChipmunkStaticSegmentShape : ChipmunkSegmentShape
@end

@interface ChipmunkStaticPolyShape : ChipmunkPolyShape
@end
