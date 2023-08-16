module;

#include <cstdint>

export module pocket.powofnagative1;

export namespace kuma
{
	using namespace std;

	constexpr int8_t powOfNegative1(int64_t n)noexcept
	{
		return 1 - ((n & 1) << 1);
	}
}