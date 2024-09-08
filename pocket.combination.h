#ifndef KUMATARO_INCLUDE_POCKET_COMBINATION_H
#define KUMATARO_INCLUDE_POCKET_COMBINATION_H

#include <cstdint>
#include "pocket.permutation.h"
#include "pocket.factorial.h"


namespace kuma
{
	using namespace std;

	constexpr uint64_t combination(uint64_t n, uint64_t r)noexcept
	{
		return permutation(n, r) / factorial(r);
	}
}


#endif