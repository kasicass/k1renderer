#pragma once

#include "GUI/Window/K1RWindow.hpp"
#include "GUI/Platform/Win32/K1RWin32Platform.hpp"
#include <string>

namespace K1R {

class PropList;

class WindowWin32 : public Window
{
public:
	WindowWin32(PropList& ParamList);
	virtual ~WindowWin32();

	virtual void Initialize();
	virtual void Run();
	virtual void Release();

	HWND GetHWND();

private:
	int m_iWidth, m_iHeight;
	std::string m_sTitle;

	HWND m_hWnd;
};

}
