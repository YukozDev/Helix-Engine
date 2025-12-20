#pragma once
#include <cstdio>
#include <HelixCore/File/FileAccess.h>
#include <utility>

class FileBinStream
{
public:
	FileBinStream(const char* name, hxBool writting, const FileAccess mode);
	~FileBinStream();

	void Read(void* buffer, size_t bytes);
	void Write(void* buffer, size_t bytes);

	size_t Size();

	[[nodiscard]] inline hxBool IsValid()
	{
		return m_File != nullptr;
	}

	void Close();

private:
	FILE* m_File = nullptr;
	hxBool m_IsWritting = false;
	size_t m_Size = 0;
};