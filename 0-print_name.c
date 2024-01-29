#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - name of the function
 *@name: 1st placeholder variable
 *@f: pointer function
 *Return:null
 **/
void print_name(char *name, void (*f)(char *))
{

if (f != NULL)
{
	f(name);
}
}
