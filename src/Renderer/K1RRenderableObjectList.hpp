#pragma once

#include "Renderer/K1RRenderableObject.hpp"
#include <vector>
#include <memory>

namespace K1R {

class RenderableObjectList
{
public:
	RenderableObjectList();
	~RenderableObjectList();

	void AddRenderableObject(RenderableObjectPtr obj);

	unsigned int RenderableObjectNum() const;
	RenderableObjectPtr GetRenderableObject(unsigned int i) const;

private:
	std::vector<RenderableObjectPtr> m_ObjList;
};
typedef std::shared_ptr<RenderableObjectList> RenderableObjectListPtr;


// global func
RenderableObjectListPtr MakeRenderableObjectList();

}
