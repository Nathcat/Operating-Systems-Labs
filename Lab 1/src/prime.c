#include <stdio.h>

int main() {
    puts("----- PRIME -----");
    int n;
    printf("n > ");
    scanf("%d", &n);

    int is_prime = 1;

    if ((n & 1) == 0) {
        is_prime = 0;
    }

    if (is_prime) {
        for (int i = 3; i < n; i++) {
            if ((n % i) == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d is prime.", n);
    }
    else {
        printf("%d is not prime.", n);
    }
}