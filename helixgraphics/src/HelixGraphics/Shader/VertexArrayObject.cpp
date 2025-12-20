#include "VertexArrayObject.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

VertexArrayObject::VertexArrayObject()
{
	glGenVertexArrays(1, &m_VAO);
}

VertexArrayObject::~VertexArrayObject()
{
}

hxUInt16 VertexArrayObject::GetId()
{
	return m_VAO;
}

void VertexArrayObject::Bind()
{
	glBindVertexArray(m_VAO);	
}

void VertexArrayObject::UnBind()
{
	glBindVertexArray(0);
}

void VertexArrayObject::Execute()
{
}	

