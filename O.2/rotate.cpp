#include <bitset>
#include <iostream>

std::bitset<4> rotl(std::bitset<4> bits)
{
	bool left{ bits.test(3) };
	bits <<= 1;
	bits = (left? bits.set(0) : bits);
	return bits;
}

std::bitset<4> rotl_no_meth(std::bitset<4> bits)
{
	std::bitset<4> lbit{ (static_cast<std::bitset<4>>(0b1000) & bits) >> 3 };
	return (bits << 1) | lbit;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl_no_meth(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl_no_meth(bits2) << '\n';

	return 0;
}
