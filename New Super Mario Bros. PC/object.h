#ifndef _OBJECT_H
#define _OBJECT_H
#include "sprite.h"
#include "game.h"
class Object {
public:
	int x, y;
	int width, height;
	int vx, vy;
	CSprite * image;
	Object(int x, int y, int width, int height, int vx, int vy, CSprite * image);
	~Object();
};
#endif