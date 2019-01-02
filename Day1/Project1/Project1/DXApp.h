#pragma once
#define WIN32_LEARN_AND_MEAN
#include <Windows.h>
#include <string>

using namespace std;

class DXApp
{
public:
	DXApp(HINSTANCE hInstance);
	virtual ~DXApp(void);

	// Main Application Loop
	int Run();

	//FRAMEWORK METHODS
	virtual bool Init();
	virtual void Update(float dt) = 0;
	virtual void Render(float dt) = 0;
	virtual LRESULT MsgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

protected:

	//Win32 Attributes
	HWND			m_hAppWnd;
	HINSTANCE		m_hAppInstance;
	UINT			m_ClientWidth;
	UINT			m_ClientHeigth;
	string			m_AppTitle;
	DWORD			m_WndStyle;

protected:

	//INITIALIZE WIN32 WINDOW
	bool InitWindow();
};

