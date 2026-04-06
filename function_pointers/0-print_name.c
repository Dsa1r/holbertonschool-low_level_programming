#include "function_pointers.h"

/**
 * print_name - lllll
 * @name: kkkk
 * @f: jjjj
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
