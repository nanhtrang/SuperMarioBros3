#include "object.h"

Object::Object(int X, int Y, int Width, int Height, int Vx, int Vy,int vx_last, CSprite * Image) {
	x = X;
	y = Y;
	width = Width;
	height = Height;
	vx = Vx;
	vy = Vy;
	Object::vx_last = vx_last;
	image = Image;
}
void Object::setSprite(CSprite* sprite){
	image = sprite;
}
Object::~Object() {
	delete image;
}