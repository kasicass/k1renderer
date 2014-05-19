#include "Core/Base/K1RBase.hpp"

#if K1R_WIN32
#include "Renderer/DX9/K1RDX9Shader.hpp"
#endif

namespace K1R {

VertexShaderPtr MakeVertexShader(const std::string &resourceID)
{
#if K1R_WIN32
	return MakeDX9VertexShader(resourceID);
#endif
}

PixelShaderPtr MakePixelShader(const std::string &resourceID)
{
#if K1R_WIN32
	return MakeDX9PixelShader(resourceID);
#endif
}

}