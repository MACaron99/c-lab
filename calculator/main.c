#include <stdio.h>
#include "calculator.h"

int main() {
    double num1, num2;
    char operator;

    printf("Enter exression ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("Result: %lf\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %lf\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %lf\n", multiply(num1, num2));
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %lf\n", divide(num1, num2));
            } else {
                printf("Error: division by zero!\n");
            }
            break;
        default:
            printf("Error: invalid operator!\n");
    }

    return 0;
}
