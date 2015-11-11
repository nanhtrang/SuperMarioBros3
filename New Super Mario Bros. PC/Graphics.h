#ifndef _GRAPHICS_H
#define _GRAPHICS_H

class Graphics {
	LPDIRECT3D9 d3d;
	LPDIRECT3DDEVICE9 d3dDevice;
	LPDIRECT3DSURFACE9 backBuffer;
public:
	int initDirect3d(HWND hwnd, int width, int height, int fullscreen);
	LPDIRECT3DSURFACE9 LoadSurface(char * path, D3DCOLOR transColor);
	LPDIRECT3DTEXTURE9 LoadTexture(char * path, D3DCOLOR transColor);
};
#endif