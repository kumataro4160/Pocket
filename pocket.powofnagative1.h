#ifndef KUMATARO_INCLUDE_POCKET_POWOFNAGATIVE1_H
#define KUMATARO_INCLUDE_POCKET_POWOFNAGATIVE1_H

#include <cstdint>


namespace kuma
{
	using namespace std;

	constexpr int8_t powOfNegative1(int64_t n)noexcept
	{
		return 1 - ((n & 1) << 1);
	}
}


#endif