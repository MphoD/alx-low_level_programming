#include "main.h"
#include <unistd.h>
/**
 * putchar - writes the character c to stdout
 * @c The character to print
 *
 * Return on Success 1
 * On error _1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
