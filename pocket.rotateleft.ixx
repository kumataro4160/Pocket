module;

#include <cstdint>

export module pocket.rotateleft;

export import pocket.bitarr;

export namespace kuma
{
	using namespace std;

	constexpr bitarr8_t rotateLeft(bitarr8_t x, uint8_t n)noexcept//0 <= n <= 8
	{
		return (x << n) | (x >> (8 - n));
	}

	constexpr bitarr16_t rotateLeft(bitarr16_t x, uint8_t n)noexcept//0 <= n <= 16
	{
		return (x << n) | (x >> (16 - n));
	}

	constexpr bitarr32_t rotateLeft(bitarr32_t x, uint8_t n)noexcept//0 <= n <= 32
	{
		return (x << n) | (x >> (32 - n));
	}

	constexpr bitarr64_t rotateLeft(bitarr64_t x, uint8_t n)noexcept//0 <= n <= 64
	{
		return (x << n) | (x >> (64 - n));
	}
}