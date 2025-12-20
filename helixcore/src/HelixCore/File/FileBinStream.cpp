#include "FileBinStream.h"

FileBinStream::FileBinStream(const char* name, hxBool writting = false, const FileAccess mode = FileAccess::ReadWrite)
{
	const char* access = FileAccessToString(mode);

	m_IsWritting = writting;

	hxInt8 result = fopen_s(&m_File, name, access);

	if (result != 0)
	{
		hxAssert(false, "Open file failed");
	}
}

FileBinStream::~FileBinStream()
{
	Close();
}

size_t FileBinStream::Size()
{
	fseek(m_File, 0, SEEK_END);
	m_Size = static_cast<size_t>(ftell(m_File));
	fseek(m_File, 0, SEEK_SET);

	return m_Size;
}

void FileBinStream::Read(void* buffer, size_t size)
{
	std::ignore = fread(buffer, size, 1, m_File);
}

void FileBinStream::Write(void* buffer, size_t bytes)
{
	std::ignore = fwrite(buffer, bytes, 1, m_File);
}

void FileBinStream::Close()
{
	fclose(m_File);
}