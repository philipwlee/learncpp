#include <iostream>

#define LOGRET

void def_func()
{
	std::cout << "This void function" << '\n';
}

int main()
{
#ifdef LOGRET
	std::cout << "Logging returns\n";
#endif

#ifdef NOTDEF
	std::cout << "This will not run because it is not defined.\n";
#endif

#ifdef def_func
	def_func();
	std::cout << "Does this work or raise an error?\n";
	std::cout << "This does not run because even though"
				 "void def_func is declared, it is not"
				 "defined using the preprocessor.\n";
#endif
	
#ifndef NOTDEF
	std::cout << "Print because NOTDEF is not defined.\n";
#endif

	return 0;
}
