@interface ChipmunkBody : NSObject <ChipmunkBaseObject> {
	cpBody _body;
@public
	id data;
}

+ (id)bodyWithMass:(cpFloat)mass andMoment:(cpFloat)moment;
+ (id)staticBody;

- (id)initWithMass:(cpFloat)mass andMoment:(cpFloat)moment;
- (id)initStaticBody;

@property (readonly) cpBody *body;

@property cpFloat mass;
@property cpFloat moment;
@property cpVect pos;
@property cpVect vel;
@property cpVect force;
@property cpFloat angle;
@property cpFloat angVel;
@property cpFloat torque;
@property (assign) id data; // weak reference

@property (readonly) cpVect rot;

- (cpVect)local2world:(cpVect)v;
- (cpVect)world2local:(cpVect)v;

- (void)resetForces;
- (void)applyForce:(cpVect)impulse offset:(cpVect)offset;
- (void)applyImpulse:(cpVect)impulse offset:(cpVect)offset;

- (void)addToSpace:(ChipmunkSpace *)space;
- (void)removeFromSpace:(ChipmunkSpace *)space;

@end
