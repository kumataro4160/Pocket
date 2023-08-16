module;

#include <cstdint>

export module pocket.ceilpowof2;

import pocket.floorpowof2;

export namespace kuma
{
	using namespace std;

	constexpr uint8_t ceilPowOf2(uint8_t n)noexcept
	{
		return floorPowOf2(static_cast<uint8_t>((n << 1) - 1));
	}

	constexpr uint16_t ceilPowOf2(uint16_t n)noexcept
	{
		return floorPowOf2(static_cast<uint16_t>((n << 1) - 1));
	}

	constexpr uint32_t ceilPowOf2(uint32_t n)noexcept
	{
		return floorPowOf2(static_cast<uint32_t>((n << 1) - 1));
	}

	constexpr uint64_t ceilPowOf2(uint64_t n)noexcept
	{
		return floorPowOf2(static_cast<uint64_t>((n << 1) - 1));
	}
}