#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Lezax {

	class LEZAX_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

//Core log macros
#define LZ_CORE_TRACE(...)   ::Lezax::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LZ_CORE_INFO(...)    ::Lezax::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LZ_CORE_WARN(...)    ::Lezax::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LZ_CORE_ERROR(...)   ::Lezax::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LZ_CORE_FATAL(...)   ::Lezax::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macors
#define LZ_TRACE(...)   ::Lezax::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LZ_INFO(...)    ::Lezax::Log::GetClientLogger()->info(__VA_ARGS__)
#define LZ_WARN(...)    ::Lezax::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LZ_ERROR(...)   ::Lezax::Log::GetClientLogger()->error(__VA_ARGS__)
#define LZ_FATAL(...)   ::Lezax::Log::GetClientLogger()->fatal(__VA_ARGS__)