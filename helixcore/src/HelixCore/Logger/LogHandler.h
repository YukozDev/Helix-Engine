#pragma once
#include <HelixCore/Logger/LogCategory.h>


#ifdef HX_DEBUG
	#define hxLogInfo(category, message) LogHandler(category, message, LogType::Info)
	#define hxLogDebug(category, message) LogHandler(category, message, LogType::Debug)
	#define hxLogWarning(category, message) LogHandler(category, message, LogType::Warning)
	#define hxLogError(category, message) LogHandler(category, message, LogType::Error)
	#define hxLogCritical(category, message) LogHandler(category, message, LogType::Critical)
#else
	#define hxLogInfo(category, message) ((void)0)
	#define hxLogDebug(category, message) ((void)0)
	#define hxLogWarning(category, message) ((void)0)
	#define hxLogError(category, message) ((void)0)
	#define hxLogCritical(category, message) ((void)0)
#endif // HX_DEBUG

class LogHandler
{
public:
	LogHandler(LogCategory category, const char* message, LogType verbose);
	~LogHandler();
};

