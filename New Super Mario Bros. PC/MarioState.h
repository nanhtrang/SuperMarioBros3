#ifndef _MARIO_STATE_H
#define _MARIO_STATE_H
#include <string>
#include "MarioObject.h"
#include "object.h"
#include <string>
using namespace std;
class MarioState{
public:
	virtual void onAPress();
	virtual void onBPress() ;
	virtual void moveLeft();
	virtual void moveRight();
	virtual void onCollision(Object* ob) ;
	virtual std::string getName();
};

class MarioStateSmall :public MarioState{
	Mario* mMario;
public:
	const string STATE_NAME = "mario_small";
	MarioStateSmall(Mario* mario);
	void onAPress();//jump
	void onBPress();//do nothing
	void onCollision(Object* ob);
	void moveLeft();
	void moveRight();

	string getName();//return OBJECT_NAME
};

class MarioStateLarge  :public MarioState{
	Mario* mMario;
public:
	static const string OBJECT_NAME = "mario_large";
	MarioStateLarge(Mario* mario);
	void onAPress();//jump
	void onBPress();//do nothing
	void onCollision(Object* ob);
	void moveLeft();
	void moveRight();

	string getName();//return OBJECT_NAME
};

class MarioStateRacon : public MarioState{
	Mario mMario;
public:
	static const string OBJECT_NAME = "mario_racon";
	MarioStateRacon(Mario* mario);
	void onAPress();//jump and fly
	void onBPress();//turn around
	void onCollision(Object* ob);
	void moveLeft();
	void moveRight();

	string getName();//return OBJECT_NAME
};

#endif