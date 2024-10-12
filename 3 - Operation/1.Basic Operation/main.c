#include <stdio.h>

int main()
{
    // Addition
    int number1 = 2;
    int number2 = 7;

    int result = number1 + number2;
    printf("result : %d\n", result);

    // Subtraction
    result = number2 - number1;
    printf("result : %d\n", result);

    result = number1 - number2;
    printf("result : %d\n", result);

    // Multiplication
    result = number1 * number2;
    printf("result : %d\n", result);

    // Division
    result = number2 / number1;
    printf("result : %d\n", result);

    // Modulus
    result = number2 % number1;      // 7 % 2
    printf("result : %d\n", result); // 1

    result = 31 % 10;
    printf("result : %d\n", result); // 1

    return 0;
}
