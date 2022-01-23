#include <iostream>

int read()
{
	int x{};
	std::cin >> x;
	return  x;
} // x destroyed here

int main()
{
	std::cout << "Enter an integer: ";
	int smaller{ read() };
	std::cout << "Enter a larger integer: ";
	int larger{ read() };

	// Check if smaller < larger otherwise flip
	{
		int temp{smaller};
		if (smaller > larger)
		{
			std::cout << "Swapping the values\n";
			smaller = larger;
			larger = temp;
		}
	} // temp is destroyed here

	std::cout << "The smaller value is " << smaller << "\nThe larger value is " << larger << '\n';

	return 0;
} // smaller, larger destroyed here
