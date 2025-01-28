#include <stdio.h>

int main() {
    puts("----- PRIME -----");
    // Input a value n
    int n;
    printf("n > ");
    scanf("%d", &n);

    // Booleans are not a standard type in C, instead we can use an integer with the value of 0 or 1
    int is_prime = 1;

    // Check if n is even, if so, it is not prime (i.e. if the least signifcant bit of n is 1, it is odd)
    if ((n & 1) == 0) {
        is_prime = 0;
    }

    // If n is odd, then check if n is divisible by any numbers from 3 -> (n - 1),
    // if so, n is not prime
    if (is_prime) {
        for (int i = 3; i < n; i++) {
            if ((n % i) == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    // Output result accordingly
    if (is_prime) {
        printf("%d is prime.", n);
    }
    else {
        printf("%d is not prime.", n);
    }

    // Return 0 to caller
    return 0;
}