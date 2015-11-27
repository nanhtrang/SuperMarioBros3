#include<string>
#include"object.h"
#include"MarioObject.h"
#include"MarioState.h"
#include"sprite.h"
#include "marioGame.h"//to access global variable such at _SpriteHandler 
using namespace std;

//contructor already in mario.h
Mario::Mario(int x, int y, int width, int height, int vx, int vy, int vx_last, CSprite * image = NULL, MarioState* state = NULL) :Object(x, y, width, height, vx, vy, vx_last, image){
	if (image == NULL){
		image = new CSprite(CMarioGame::_SpriteHandler,)
	}
}
void Mario::moveLeft(){
	Mario::marioState->moveLeft();
}
void Mario::moveRight(){
	Mario::marioState->moveRight();
}
void Mario::onAPress(){
	Mario::marioState->onAPress();
}
void Mario::onBPress(){
	Mario::marioState->onBPress();
}
void Mario::onCollision(Object* ob){
	Mario::marioState->onCollision(ob);
}
string Mario::getName(){
	return Mario::OBJECT_NAME;
}
