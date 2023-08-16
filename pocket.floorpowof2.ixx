module;

#include <cstdint>

export module pocket.floorpowof2;

import pocket.highestpop;

export namespace kuma
{
	using namespace std;

	constexpr uint8_t floorPowOf2(uint8_t n)noexcept
	{
		return highestPop(n);
	}

	constexpr uint16_t floorPowOf2(uint16_t n)noexcept
	{
		return highestPop(n);
	}

	constexpr uint32_t floorPowOf2(uint32_t n)noexcept
	{
		return highestPop(n);
	}

	constexpr uint64_t floorPowOf2(uint64_t n)noexcept
	{
		return highestPop(n);
	}
}