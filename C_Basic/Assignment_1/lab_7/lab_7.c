#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    long long fac = 1;

    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &a);

    if (a < 0) {
        printf("Error!!! Factorial of negative number doesn't exist.");
    }
    else if (a == 0) {
        printf("Factorial = 1");
    }
    else {
        for (int i = a; i > 0; i--) {
            fac *= i;
        }
        printf("Factorial = %lld", fac);
    }

    return EXIT_SUCCESS;
}

