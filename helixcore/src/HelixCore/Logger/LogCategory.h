#pragma once
#include <HelixCore/CoreEngine.h>

enum class LogType : hxByte
{
	Info,
	Debug,
	Warning,
	Error,
	Critical
};

class LogCategory
{
public:
	LogCategory(const char* name);
	~LogCategory();
};

