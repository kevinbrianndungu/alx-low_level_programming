#include "main.h"
/**
 * _puts_recursion - print a string fllowed by a new line 
 * @s: the string to print
 * Return: nothing 
 */
void _puts_recursion(char *s)
{
	if (*S == '\0')
	{
		_putchar('\n');
		return;
	}
	
	_putchar(*s);
	s++;
	_puts_recursion(S);
}
