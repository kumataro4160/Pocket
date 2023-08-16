module;

#include <cstdint>

export module pocket.log2;

import pocket.floorpowof2;
import pocket.countnumshifts;

export namespace kuma
{
	using namespace std;

	constexpr uint8_t log2(uint8_t x)noexcept
	{
		return countNumShifts(floorPowOf2(x));
	}

	constexpr uint8_t log2(uint16_t x)noexcept
	{
		return countNumShifts(floorPowOf2(x));
	}

	constexpr uint8_t log2(uint32_t x)noexcept
	{
		return countNumShifts(floorPowOf2(x));
	}

	constexpr uint8_t log2(uint64_t x)noexcept
	{
		return countNumShifts(floorPowOf2(x));
	}
}