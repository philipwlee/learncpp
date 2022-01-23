#include "add.h" // include header file here? Why?
// we include add.h here because it allows for checking errors.
// e.g. add returns an int according to the header but is declared
// to return a float. Or add takes 2 params in the header while taking
// 3 params in this file...

int add(int x, int y)
{
	return x + y;
}
