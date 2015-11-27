#include "MarioState.h"
#include "MarioObject.h"
#include "object.h"
#include <string>
using namespace std;

string MarioStateSmall::getName(){
	return STATE_NAME;
}

MarioStateSmall::MarioStateSmall(Mario* ob){//contructor
	MarioStateSmall::mMario = ob;
}
void MarioStateSmall::moveLeft(){
	//set vx vy
	//set animation
}
void MarioStateSmall::moveRight(){
	//set vx vy
	//set animation
}
void MarioStateSmall::onAPress(){
	//jump
}
void MarioStateSmall::onBPress(){
	//do nothing
}
void MarioStateSmall::onCollision(Object* ob){
	//xử lý va chạm khi mario ở trạng thái Small
}

