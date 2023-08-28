module;

#include <cstdint>
#include <bit>

export module pocket.log2;

export namespace kuma
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