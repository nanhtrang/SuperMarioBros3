#ifndef _RECTANGLES_H_
#define _RECTANGLES_H_

#include <d3dx9.h>

#include "game.h"
#include "sprite.h"
#include "object.h"
#include "MarioObject.h"
#include "MarioState.h"

class CMarioGame : public CGame
{
public:
	CMarioGame(HINSTANCE hInstance, LPWSTR Name, int Mode, int IsFullScreen, int FrameRate);
	~CMarioGame();

	LPD3DXSPRITE _SpriteHandler;

	//int mario_x;			// position of kitty
	//int mario_y;

	//float mario_vx;			// velocity of kitty
	//float mario_vy;

	Mario* mario;



	DWORD last_time;		// this is to control the animate rate of kitty

							//LPDIRECT3DSURFACE9 Background;


	CSprite * ground_middle;
	CSprite * brick;
	CSprite * mountain;
	CSprite * fallDown;

	bool _IsOnGround;
	bool _IsFallOfGround;
	Object * fallBox;
	Object * _CollisionBox;

protected:
	LPDIRECT3DSURFACE9 _Background;

	virtual void RenderFrame(LPDIRECT3DDEVICE9 d3ddv, int Delta);
	virtual void ProcessInput(LPDIRECT3DDEVICE9 d3ddv, int Delta);
	virtual void LoadResources(LPDIRECT3DDEVICE9 d3ddv);

	virtual void OnKeyDown(int KeyCode);

	void RenderBackground(int view_port_x, int view_port_y);
};
#endif