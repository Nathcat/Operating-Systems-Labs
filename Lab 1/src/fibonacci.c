#include <stdio.h>

int main() {
    puts("----- FIBONACCI -----");
    int n;
    printf("n > "); scanf("%d", &n);

    if (n == 0) return 0;
    else if (n == 1) { puts("0"); return 0; }
    else if (n == 2) { puts("0\n1"); return 0; }

    int a, b; a = 0; b = 1;
    puts("0\n1");

    for (int i = 3; i <= n; i++) {
        int c = a + b;
        printf("%d\n", c);

        a = b;
        b = c;
    }

    return 0;
}