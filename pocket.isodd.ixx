export module pocket.isodd;

import pocket.iseven;

export namespace kuma
{
	template <class IntegerType>
	constexpr bool isOdd(IntegerType x)noexcept
	{
		return !isEven(x);
	}
}