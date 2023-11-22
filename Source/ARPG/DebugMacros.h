#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Blue, true)
#define DRAW_SPHERE_SINGLE_FRAME(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Blue, false, -1.f)

#define DRAW_LINE(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, true, -1.f, 0, 1.f)
#define DRAW_LINE_SINGLE_FRAME(StartLocation, EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, false, -1.f, 0, 1.f)

#define DRAW_POINT(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Blue, true)
#define DRAW_POINT_SINGLE_FRAME(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Blue, false, -1.f)

#define DRAW_VECTOR(StartLocation, EndLocation) if(GetWorld()) \
{ \
	DRAW_LINE(StartLocation, EndLocation);\
	DRAW_POINT(EndLocation);\
}
#define DRAW_VECTOR_SINGLE_FRAME(StartLocation, EndLocation) if(GetWorld()) \
{ \
	DRAW_LINE_SINGLE_FRAME(StartLocation, EndLocation);\
	DRAW_POINT_SINGLE_FRAME(EndLocation);\
}