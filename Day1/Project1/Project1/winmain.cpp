#pragma once
#include "DXApp.h"

class TestApp : public DXApp
{
public:
	TestApp(HINSTANCE hInstance);
	~TestApp();

	bool Init() override;
	void Update(float dt) override;
	void Render(float dt) override;
};

TestApp::TestApp(HINSTANCE hInstance) : DXApp(hInstance)
{
}

TestApp::~TestApp()
{
}

bool TestApp::Init()
{
	return DXApp::Init();
}

void TestApp::Update(float dt)
{
}

void TestApp::Render(float dt)
{
}

int WINAPI WinMain( __in HINSTANCE hInstance, __in HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd)
{
	//MessageBox(NULL, "Test", "Hello World", NULL);
	TestApp tApp(hInstance);
	if (!tApp.Init()) return 1;
	return tApp.Run();
}
