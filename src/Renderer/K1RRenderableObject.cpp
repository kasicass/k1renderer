#include "Core/Base/K1RBase.hpp"

#if K1R_WIN32
#include "Renderer/DX9/K1RDX9RenderableObject.hpp"
#endif

namespace K1R {

RenderableObject::RenderableObject()
{}

RenderableObject::~RenderableObject()
{}

RenderableObjectPtr MakeRenderableObject(VERTEX_TYPE type)
{
#if K1R_WIN32
	return RenderableObjectPtr(new DX9RenderableObject(type));
#endif
}

}