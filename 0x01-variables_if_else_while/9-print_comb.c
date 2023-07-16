#include <stdio.h>
/**
 * main - Entry point
 * description: 'print comb of numbers'
 * Return: always 0
 */
int main(void)
{
int n;

for (n = 10; n <= 20; n++)
{
putchar((n % 10) + '0');
if (n != 19)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
