#include "LogCategory.h"
#include <stdio.h>

LogCategory::LogCategory(const hxChar* name)
{
	// mode w to create or override the file
	FILE* file;
	fopen_s(&file, name, "w");

	if (file == nullptr)
	{
		hxAssert(false, "Error creating the file %s", name);
	}

	fclose(file);
}

LogCategory::~LogCategory()
{
}
