export module pocket.iseven;

export namespace kuma
{
	template <class IntegerType>
	constexpr bool isEven(IntegerType x)noexcept
	{
		return (x & 1) == 0;
	}
}