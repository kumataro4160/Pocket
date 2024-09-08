#ifndef KUMATARO_INCLUDE_POCKET_BITREVERSAL_H
#define KUMATARO_INCLUDE_POCKET_BITREVERSAL_H

#include "pocket.bitarr.h"


namespace kuma
{
	constexpr bitarr8_t bitReversal(bitarr8_t n)noexcept
	{
		n = ((n & 0x0f) << 4) | ((n >> 4) & 0x0f);
		n = ((n & 0x33) << 2) | ((n >> 2) & 0x33);
		n = ((n & 0x55) << 1) | ((n >> 1) & 0x55);
		return n;
	}

	constexpr bitarr16_t bitReversal(bitarr16_t n)noexcept
	{
		n = ((n & 0x00ff) << 8) | ((n >> 8) & 0x00ff);
		n = ((n & 0x0f0f) << 4) | ((n >> 4) & 0x0f0f);
		n = ((n & 0x3333) << 2) | ((n >> 2) & 0x3333);
		n = ((n & 0x5555) << 1) | ((n >> 1) & 0x5555);
		return n;
	}

	constexpr bitarr32_t bitReversal(bitarr32_t n)noexcept
	{
		n = ((n & 0x0000ffffUL) << 16) | ((n >> 16) & 0x0000ffffUL);
		n = ((n & 0x00ff00ffUL) << 8) | ((n >> 8) & 0x00ff00ffUL);
		n = ((n & 0x0f0f0f0fUL) << 4) | ((n >> 4) & 0x0f0f0f0fUL);
		n = ((n & 0x33333333UL) << 2) | ((n >> 2) & 0x33333333UL);
		n = ((n & 0x55555555UL) << 1) | ((n >> 1) & 0x55555555UL);
		return n;
	}

	constexpr bitarr64_t bitReversal(bitarr64_t n)noexcept
	{
		n = ((n & 0x00000000ffffffffULL) << 32) | ((n >> 32) & 0xffffffff00000000ULL);
		n = ((n & 0x0000ffff0000ffffULL) << 16) | ((n >> 16) & 0x0000ffff0000ffffULL);
		n = ((n & 0x00ff00ff00ff00ffULL) << 8) | ((n >> 8) & 0x00ff00ff00ff00ffULL);
		n = ((n & 0x0f0f0f0f0f0f0f0fULL) << 4) | ((n >> 4) & 0x0f0f0f0f0f0f0f0fULL);
		n = ((n & 0x3333333333333333ULL) << 2) | ((n >> 2) & 0x3333333333333333ULL);
		n = ((n & 0x5555555555555555ULL) << 1) | ((n >> 1) & 0x5555555555555555ULL);
		return n;
	}
}


#endif