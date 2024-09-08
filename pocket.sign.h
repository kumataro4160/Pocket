#ifndef KUMATARO_INCLUDE_POCKET_SIGN_H
#define KUMATARO_INCLUDE_POCKET_SIGN_H

#include <cstdint>


namespace kuma
{
	using namespace std;

	constexpr int8_t sign(int64_t x)noexcept
	{
		return x > 0LL ? 1 : (x < 0LL ? -1 : 0);
	}
}


#endif