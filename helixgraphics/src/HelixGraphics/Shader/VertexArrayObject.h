#pragma once  
#include "IShader.h"  

class VertexArrayObject : public IShader  
{
public:
	VertexArrayObject();
	~VertexArrayObject();

	void Bind() override;	
	void UnBind() override;
	void Execute() override;


	hxUInt16 GetId();

private:
	hxUInt32 m_VAO = 0;
	hxBool m_IsBind = false;

};
