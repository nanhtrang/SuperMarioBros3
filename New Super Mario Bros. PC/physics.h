#ifndef _PHYSICS_H
#define _PHYSICS_H
#include "object.h"
#include <limits>
#include <stdlib.h>
#include "mario.h"

float SweptAABB(Object b1, Object b2, float& normalx, float& normaly);
bool AABBCheck(Object b1, Object b2);
#endif