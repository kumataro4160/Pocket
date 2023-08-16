module;

#include <cstdint>

export module pocket.combination;

import pocket.permutation;
import pocket.factorial;

export namespace kuma
{
	using namespace std;

	constexpr uint64_t combination(uint64_t n, uint64_t r)noexcept
	{
		return permutation(n, r) / factorial(r);
	}
}