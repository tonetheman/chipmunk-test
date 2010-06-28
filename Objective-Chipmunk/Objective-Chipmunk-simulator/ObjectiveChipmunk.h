#if TARGET_OS_IPHONE && !TARGET_IPHONE_SIMULATOR
#error Objective-Chipmunk cannot be used on the iPhone device without buying a license.
#endif

#import <Foundation/Foundation.h>

// Override the Chipmunk types for Objective-Chipmunk
#define CP_DATA_POINTER_TYPE id
#define CP_GROUP_TYPE id
#define CP_COLLISION_TYPE_TYPE id

#import "chipmunk/chipmunk.h"

#import "ChipmunkObject.h"
#import "ChipmunkBody.h"
#import "ChipmunkShape.h"
#import "ChipmunkConstraint.h"
#import "ChipmunkSpace.h"
#import "ChipmunkExtras.h"
