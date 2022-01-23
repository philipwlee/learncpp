#include "io.h"

int main()
{
	int a{ readNumber() }, b{ readNumber() };
	writeAnswer(a+b);
	return 0;
}
