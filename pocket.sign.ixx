module;

#include <cstdint>

export module pocket.sign;

export namespace kuma
{
	using namespace std;

	constexpr int8_t sign(int64_t x)noexcept
	{
		return x > 0LL ? 1 : (x < 0LL ? -1 : 0);
	}
}