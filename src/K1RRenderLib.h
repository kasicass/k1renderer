#ifndef K1R_RENDER_LIB_H
#define K1R_RENDER_LIB_H

// Architecture
// +----------------------------------------+
// |              Your  App                 |
// +------------+------------+--------------+
// | Controller |    Scene   |              |
// |            +------------+              |
// |            |         Renderer          |
// +------------+---------------------------+
// |                 Window                 |
// +----------------------------------------+
// |               Core/Asset               |
// +----------------------------------------+

// core/util
#include "Core/Base/K1RBase.hpp"
#include "Core/Util/K1RPropList.hpp"
#include "Asset/K1RAsset.hpp"

// gui
#include "GUI/Controller/K1RController.hpp"
#include "K1RWindow.h"

// renderer
#include "Renderer/K1RShader.hpp"
#include "Renderer/K1RRenderer.hpp"
#include "Renderer/K1RRenderableObject.hpp"

// scene

#endif