#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char op;
    float num1, num2;

    printf("Enter operator either + or - or * or divide : ");
    fflush(stdout);
    scanf(" %c", &op);

    printf("Enter two operands: ");
    fflush(stdout);
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+':
            printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero.");
            }
            break;
        default:
            printf("Error! Operator is not correct.");
    }

    return EXIT_SUCCESS;
}
