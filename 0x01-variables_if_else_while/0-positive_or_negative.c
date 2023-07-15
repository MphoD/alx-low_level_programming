#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));
    
    // Generate a random number and store it in the variable n
    int n = rand() % (2 * RAND_MAX) - RAND_MAX;
    
    // Print the number
    printf("The number: %d\n", n);

    // Check if the number is positive, zero, or negative and print the appropriate message
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

