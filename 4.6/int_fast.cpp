#include <cstdint>
#include <iostream>

int main()
{
	std::cout << "fast 8\t" << sizeof(std::int_fast8_t)*8 << " bits\n";
	std::cout << "fast 16\t" << sizeof(std::int_fast16_t)*8 << " bits\n";
	std::cout << "fast 32\t" << sizeof(std::int_fast32_t)*8 << " bits\n";
	return 0;
}
