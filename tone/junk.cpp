#include <iostream>
#include <chipmunk/chipmunk.h>

using namespace std;

cpSpace * space;
cpBody * staticBody;

int main() {

	// make a space
	staticBody = cpBodyNew(INFINITY, INFINITY);
	space = cpSpaceNew();
	space->iterations = 10;
	cpSpaceResizeStaticHash(space, 30.0f, 1000);
	cpSpaceResizeActiveHash(space, 30.0f, 1000);
	space->gravity = cpv(0, -100);

	cpShape * ground =
		cpSegmentShapeNew(staticBody, cpv(-320,-240), cpv(320,-240),  0.0f);
	ground->e = 1.0f;
	ground->u = 1.0f;
	ground->layers = 0; // used by demo code... not sure if i need it
	cpSpaceAddStaticShape(space,ground);

	cpFloat radius = 15.0f;
	cpFloat mass = 10.0f;

	cpBody * ballBody = cpBodyNew(mass, cpMomentForCircle(mass, 0.0f, radius, cpvzero));
	ballBody->p = cpv(0, -240 + radius+5);
	cpSpaceAddBody(space, ballBody);

	cpShape * ballShape = cpSpaceAddShape(space,
		cpCircleShapeNew(ballBody, radius, cpvzero));
	ballShape->e = 0.0f;
	ballShape->u = 0.9f;

	for(int i=0;i<10;i++) {
		// update the space
		cpSpaceStep(space, 1.0f/60.0f);

		cpVect v = cpBodyGetPos(ballBody);
		cout << v.x << " " << v.y << endl;
	}


	cpBodyFree(staticBody);
	cpSpaceFreeChildren(space);
	cpSpaceFree(space);

	return 0;
}
