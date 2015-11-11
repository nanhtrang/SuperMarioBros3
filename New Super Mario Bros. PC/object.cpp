#include "object.h"

Object::Object(int X, int Y, int Width, int Height, int Vx, int Vy, CSprite * Image) {
	x = X;
	y = Y;
	width = Width;
	height = Height;
	vx = Vx;
	vy = Vy;
	image = Image;
}

Object::~Object() {
	delete image;
}