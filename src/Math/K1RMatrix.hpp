#pragma once

#include "Core/Base/K1RBase.hpp"

#if K1R_WIN32
#include <d3dx9.h>
#endif

namespace K1R {

#if K1R_WIN32
	typedef D3DXMATRIX Matrix;
#endif

}
