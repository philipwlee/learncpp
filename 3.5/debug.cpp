#include <iostream>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitiator.h>

int getUserInput()
{
	PLOD << "getUserInput() called";

	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	plog::init(plog::debug, "logfile.txt");

	PLOGD << "main() called";

	int x{ getUserInput() };
	std::cout << "You entered: " << x << '\n';

	return 0;
}
