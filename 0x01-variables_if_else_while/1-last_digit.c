#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(0)); // Initialize the random number generator with the current time

    // Generate a random number between 0 and RAND_MAX (a large number defined in stdlib.h)
    n = rand();

    // Get the last digit of the number
    int last_digit = n % 10;

    // Print the desired output
    printf("The string Last digit of %d is ", n);

    if (last_digit > 5) {
        printf("and is greater than 5\n");
    } else if (last_digit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
