#include <stdio.h>
#include <stdbool.h>

int main() {
    int number1 = 20;
    int number2 = 20;

    printf("number1: %d\n", number1);
    printf("number2: %d\n", number2);

    printf("\nComparing variables\n");

    // Print comparisons
    printf("number1 < number2: %s\n", number1 < number2 ? "true" : "false");
    printf("number1 <= number2: %s\n", number1 <= number2 ? "true" : "false");
    printf("number1 > number2: %s\n", number1 > number2 ? "true" : "false");
    printf("number1 >= number2: %s\n", number1 >= number2 ? "true" : "false");
    printf("number1 == number2: %s\n", number1 == number2 ? "true" : "false");
    printf("number1 != number2: %s\n", number1 != number2 ? "true" : "false");

    printf("\nStore comparison result and use it later\n");

    bool result = (number1 == number2);
    printf("%d == %d: %s\n", number1, number2, result ? "true" : "false");

    return 0;
}
