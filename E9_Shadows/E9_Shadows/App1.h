// Application.h
#ifndef _APP1_H
#define _APP1_H

// Includes
#include "DXF.h"	// include dxframework
#include "TextureShader.h"
#include "ShadowShader.h"
#include "DepthShader.h"

class App1 : public BaseApplication
{
public:

	App1();
	~App1();
	void init(HINSTANCE hinstance, HWND hwnd, int screenWidth, int screenHeight, Input* in, bool VSYNC, bool FULL_SCREEN);

	bool frame();

protected:
	bool render();
	void depthPass();
	void finalPass();
	void orthoDepthPass();
	void gui();

private:
	TextureShader* textureShader;

	PlaneMesh* mesh;
	OrthoMesh* orthoMesh;
	CubeMesh* cube;
	SphereMesh* sphere;


	Light* light;
	AModel* model;
	ShadowShader* shadowShader;
	DepthShader* depthShader;
	RenderTexture* orthoRenderTexture;

	ShadowMap* shadowMap;
	float time = 0;
};

#endif