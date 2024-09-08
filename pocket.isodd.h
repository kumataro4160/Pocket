#ifndef KUMATARO_INCLUDE_POCKET_ISODD_H
#define KUMATARO_INCLUDE_POCKET_ISODD_H

#include "pocket.iseven.h"


namespace kuma
{
	template <class IntegerType>
	constexpr bool isOdd(IntegerType x)noexcept
	{
		return !isEven(x);
	}
}


#endif