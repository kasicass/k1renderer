#pragma once

#include "Renderer/K1RShader.hpp"
#include "Renderer/DX9/K1RDX9Defines.hpp"

namespace K1R {

class DX9VertexShader : public VertexShader
{
public:
	DX9VertexShader();
	virtual ~DX9VertexShader();

	virtual void setMatrix(const std::string &name, const Matrix &mat);
	virtual void useMe();

	bool createFromString(const char *data, unsigned int len);

private:
	DX9::VertexShader shader_;
	DX9::ShaderConstantTable table_;
};

class DX9PixelShader : public PixelShader
{
public:
	DX9PixelShader();
	virtual ~DX9PixelShader();

	virtual void setMatrix(const std::string &name, const Matrix &mat);
	virtual void useMe();

	bool createFromString(const char *data, unsigned int len);

private:
	DX9::PixelShader shader_;
	DX9::ShaderConstantTable table_;
};


VertexShaderPtr MakeDX9VertexShader(const std::string &resourceID);
PixelShaderPtr MakeDX9PixelShader(const std::string &resourceID);

}
