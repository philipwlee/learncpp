#include <iostream>

int main()
{
	double a{}, b{}, res{};
	char o{};

	std::cout << "Enter A: ";
	std::cin >> a;
	std::cout << "Enter B: ";
	std::cin >> b;

	std::cout << "Enter operation: ";
	std::cin >> o;

	if      (o=='+') res = a+b;
	else if (o=='-') res = a-b;
	else if (o=='*') res = a*b;
	else if (o=='/') res = a/b;
	else return 1;

	std::cout << a << o << b << '=' << res << '\n';
	return 0;
}
