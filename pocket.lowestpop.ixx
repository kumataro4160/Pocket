module;

#include <cstdint>

export module pocket.lowestpop;

export import pocket.bitarr;

export namespace kuma
{
	using namespace std;

	constexpr bitarr8_t lowestPop(bitarr8_t n)noexcept
	{
		return n & static_cast<bitarr8_t>(-static_cast<int8_t>(n));
	}

	constexpr bitarr16_t lowestPop(bitarr16_t n)noexcept
	{
		return n & static_cast<bitarr16_t>(-static_cast<int16_t>(n));
	}

	constexpr bitarr32_t lowestPop(bitarr32_t n)noexcept
	{
		return n & static_cast<bitarr32_t>(-static_cast<int32_t>(n));
	}

	constexpr bitarr64_t lowestPop(bitarr64_t n)noexcept
	{
		return n & static_cast<bitarr64_t>(-static_cast<int64_t>(n));
	}
}