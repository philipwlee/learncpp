#include <iostream>

int main()
{
	int number{}, pow{ 128 }, iter{ 8 };

	std::cout << "Enter a number between 0 and 255: ";
	std::cin >> number;

	std::cout << "Your number is 0b";

	while (iter)
	{
		std::cout << number / pow;
		number %= pow;
		pow /= 2;
		--iter;
	}

	std::cout << '\n';

	return 0;
}
