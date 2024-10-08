﻿#ifndef KUMATARO_INCLUDE_POCKET_ABS_H
#define KUMATARO_INCLUDE_POCKET_ABS_H

#include <cstdint>


namespace kuma
{
	using namespace std;

	//Do not input -128
	constexpr uint8_t abs(int8_t x)noexcept
	{
		return x >= 0 ? x : -x;
	}

	//Do not input -32768
	constexpr uint16_t abs(int16_t x)noexcept
	{
		return x >= 0 ? x : -x;
	}

	//Do not input -2147483648
	constexpr uint32_t abs(int32_t x)noexcept
	{
		return x >= 0L ? x : -x;
	}

	//Do not input -9223372036854775808
	constexpr uint64_t abs(int64_t x)noexcept
	{
		return x >= 0LL ? x : -x;
	}
}


#endif