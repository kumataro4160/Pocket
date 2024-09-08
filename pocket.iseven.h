#ifndef KUMATARO_INCLUDE_POCKET_ISEVEN_H
#define KUMATARO_INCLUDE_POCKET_ISEVEN_H


namespace kuma
{
	template <class IntegerType>
	constexpr bool isEven(IntegerType x)noexcept
	{
		return (x & 1) == 0;
	}
}


#endif