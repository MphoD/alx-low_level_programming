#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 *
 *
 * Return: 0 on success.
 */
int main(void)
{
    int n;

    srand(time(NULL));

    /* Generate a random number between 0 and RAND_MAX and store it in n */
    n = rand();

    /* Print the last digit of the number stored in n */
    int lastDigit = n % 10;

    printf("The string Last digit of %d is ", n);

    if (lastDigit > 5)
    {
        printf("%d and is greater than 5\n", lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("%d and is 0\n", lastDigit);
    }
    else
    {
        printf("%d and is less than 6 and not 0\n", lastDigit);
    }

    return 0;
}
