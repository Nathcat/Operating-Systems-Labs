#include <stdio.h>

int main() {
    puts("----- FIBONACCI -----");

    // Input an integer to the variable "n".
    // Note that we pass &n to scanf, this is because the function takes a pointer
    // as an argument, and places the input from the user into the variable using its pointer.
    int n;
    printf("n > "); 
    scanf("%d", &n);

    // Check if n is 0, 1, or 2, and handle those special cases accordingly
    if (n == 0) return 0;
    else if (n == 1) { puts("0"); return 0; }
    else if (n == 2) { puts("0\n1"); return 0; }

    // Calculate the Fibonacci sequence up to n, this will only be reached if n is not in (0, 1, 2).
    int a, b; a = 0; b = 1;
    puts("0\n1");

    for (int i = 3; i <= n; i++) {
        int c = a + b;
        printf("%d\n", c);

        a = b;
        b = c;
    }

    // Return 0 to the caller
    return 0;
}