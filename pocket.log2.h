#ifndef KUMATARO_INCLUDE_POCKET_LOG2_H
#define KUMATARO_INCLUDE_POCKET_LOG2_H

#include <cstdint>
#include <bit>


namespace kuma
{
	using namespace std;

	constexpr uint8_t log2(uint8_t x)noexcept
	{
		return static_cast<uint8_t>(std::bit_width(x) - 1);
	}

	constexpr uint8_t log2(uint16_t x)noexcept
	{
		return static_cast<uint8_t>(std::bit_width(x) - 1);
	}

	constexpr uint8_t log2(uint32_t x)noexcept
	{
		return static_cast<uint8_t>(std::bit_width(x) - 1);
	}

	constexpr uint8_t log2(uint64_t x)noexcept
	{
		return static_cast<uint8_t>(std::bit_width(x) - 1);
	}
}


#endif