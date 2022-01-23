#include "io.h"
#include <iostream>

int readNumber()
{
	std::cout << "Enter a number >";
	int ret{};
	std::cin >> ret;
	return ret;
}

void writeAnswer(int ans)
{
	std::cout << ans << '\n';
}
