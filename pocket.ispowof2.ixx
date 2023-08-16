module;

#include <cstdint>

export module pocket.ispowof2;

export namespace kuma
{
	using namespace std;

	constexpr bool isPowOf2(uint8_t x)noexcept
	{
		return (x & (x - 1U)) == 0U;
	}

	constexpr bool isPowOf2(uint16_t x)noexcept
	{
		return (x & (x - 1U)) == 0U;
	}

	constexpr bool isPowOf2(uint32_t x)noexcept
	{
		return (x & (x - 1UL)) == 0UL;
	}

	constexpr bool isPowOf2(uint64_t x)noexcept
	{
		return (x & (x - 1ULL)) == 0ULL;
	}
}