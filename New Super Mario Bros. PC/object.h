#ifndef _OBJECT_H
#define _OBJECT_H
#include <string>
#include "sprite.h"
#include "game.h"

class Object {
public:
	int x, y;
	int width, height;
	int vx, vy;
	int vx_last; //// last vx of mario before stop ( to determine the direction of mario )
	CSprite * image;
	Object(int x, int y, int width, int height, int vx, int vy,int vx_last, CSprite * image);
	~Object();
	void setSprite(CSprite* sprite);
	virtual void onCollision(Object ob);
	virtual std::string getName();
	
};
#endif