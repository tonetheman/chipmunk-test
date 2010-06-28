#import <CoreGraphics/CoreGraphics.h>

@interface ChipmunkBody ()

// Get the affine transform to match this body
- (CGAffineTransform)affineTransform;

@end

// Redundant API used to implement higher level functionality such as addObject.
@interface ChipmunkSpace ()

// Add a border of collision segments around the screen.
- (void)addBounds:(CGRect)bounds thickness:(cpFloat)radius
	elasticity:(cpFloat)elasticity friction:(cpFloat)friction
	layers:(cpLayers)layers group:(id)group
	collisionType:(id)collisionType;

// Specific add/remove methods used by the add/remove object methods.
- (ChipmunkBody *)addBody:(ChipmunkBody *)obj;
- (ChipmunkBody *)removeBody:(ChipmunkBody *)obj;

- (ChipmunkShape *)addShape:(ChipmunkShape *)obj;
- (ChipmunkShape *)removeShape:(ChipmunkShape *)obj;

- (ChipmunkShape *)addStaticShape:(ChipmunkShape *)obj;
- (ChipmunkShape *)removeStaticShape:(ChipmunkShape *)obj;

- (ChipmunkConstraint *)addConstraint:(ChipmunkConstraint *)obj;
- (ChipmunkConstraint *)removeConstraint:(ChipmunkConstraint *)obj;

@end
