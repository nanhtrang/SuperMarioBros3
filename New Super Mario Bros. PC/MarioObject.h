#ifndef _MARIO_OBJECT_H
#define _MARIO_OBJECT_H

#include <string>
#include"object.h"
#include"MarioState.h"
using namespace std;
class Mario :public Object{
	MarioState* marioState;
public:
	Mario(int x, int y, int width, int height, int vx, int vy, int vx_last, CSprite * image = NULL, MarioState* state = NULL) :Object(x, y, width, height, vx, vy, vx_last, image);
	const string OBJECT_NAME = "Mario";
	void moveLeft();
	void moveRight();
	void onAPress();
	void onBPress();
	void onCollision(Object* object);
	void setState(MarioState* state);
	string getName();
	void update();
};

#endif