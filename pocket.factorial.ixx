module;

#include <cstdint>

export module pocket.factorial;

export namespace kuma
{
	using namespace std;

	constexpr uint64_t factorial(uint64_t n)noexcept
	{
		uint64_t ret = 1ULL;
		for(uint64_t i = 2ULL; i <= n; ++i)
		{
			ret *= i;
		}
		return ret;
	}
}