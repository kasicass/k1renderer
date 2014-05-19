#ifndef K1R_WINDOW_WINDOW_H
#define K1R_WINDOW_WINDOW_H

#include "Core/Base/K1RBase.hpp"
#include "Core/Util/K1RPropList.hpp"
#include "K1RController.h"
#include "Renderer/K1RRenderer.hpp"

namespace K1R {

// base class, interface definition of window system
class Window
{
public:
	Window();
	virtual ~Window();

	void SetController(ControllerPtr pCtrl);
	ControllerPtr GetController();

	void SetRenderer(RendererPtr pRenderer);
	RendererPtr GetRenderer();

	virtual void Initialize() = 0;
	virtual void Run() = 0;
	virtual void Release() = 0;

private:
	Window(Window&);
	Window& operator= (const Window&);

private:
	ControllerPtr m_pController;
	RendererPtr m_pRenderer;
};


// global func
// ParamList = {
//   "winHeight" : 800,
//   "winWidth"  : 600,
//   "winTitle"  : "��������",
// }
Window *MakeWindow(PropList& ParamList);

};

#endif