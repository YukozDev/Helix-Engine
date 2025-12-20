#pragma once
#include <HelixCore/CoreEngine.h>

class IShader
{
	virtual void Bind() = 0;
	virtual void UnBind() = 0;
	virtual void Execute() = 0;
};