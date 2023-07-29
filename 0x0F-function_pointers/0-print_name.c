#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print name using pointer to function
 * @name: String for add
 * @fx: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*fx)(char *))
{
	if (name == NULL || fx == NULL)
		return;
	fx(name);
}
