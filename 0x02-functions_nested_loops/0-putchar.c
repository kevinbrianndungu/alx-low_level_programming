#include"main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c in stduot
 * @:The character to print
 *
 * return: On succcess 1.
 * On error -1 is returned and error number is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
