#pragma once
#include <HelixCore/CoreEngine.h>

enum class FileAccess : hxByte
{
	Read,
	Write,
	ReadWrite
};

/*
	mode string |	Meaning	Explanation	|			Action if file already exists				|	Action if filedoes not exist
	"r"					read					Open a file for reading read from start					 failure to open
	"w"					write					Create a file for writing destroy contents				    create new
	"a"					append					Append to a file write to end								create new
	"r+"				read extended				Open a file for read/write							read from start	error
	"w+"				write extended			Create a file for read/write destroy contents				create new
	"a+"				append extended				Open a file for read/write	write to end				create new
	
	File access mode flag "b" can optionally be specified to open a file in binary mode
*/
static const char* FileAccessToString(FileAccess access)
{
	switch (access)
	{
	case FileAccess::Read:
		return "rb";

	case FileAccess::Write:
		return "wb";

	case FileAccess::ReadWrite:
		return "r+b";

	default:
		hxAssert(false, "Unknown FileAccess type");
		return "";
	}
}