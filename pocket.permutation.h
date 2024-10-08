﻿#ifndef KUMATARO_INCLUDE_POCKET_PERMUTATION_H
#define KUMATARO_INCLUDE_POCKET_PERMUTATION_H

#include <cstdint>


namespace kuma
{
	using namespace std;

	constexpr uint64_t permutation(uint64_t n, uint64_t r)noexcept
	{
		uint64_t ret = 1ULL;
		for(uint64_t i = n - r + 1ULL; i <= n; ++i)
		{
			ret *= i;
		}
		return ret;
	}
}


#endif