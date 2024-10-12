#include <stdio.h>

int main()
{
    int value = 45;

    printf("The value is: %d\n", value);

    printf("\n");
    value = value + 5;
    // value += 5; // equivalent to value = value + 5
    printf("The value is (after += 5): %d\n", value); // 50

    printf("\n");
    value -= 5;                                       // equivalent to value = value - 5
    printf("The value is (after -= 5): %d\n", value); // 45

    printf("\n");
    value *= 2;
    printf("The value is (after *= 2): %d\n", value); // 90

    printf("\n");
    value /= 3;
    printf("The value is (after /= 3): %d\n", value); // 30

    printf("\n");
    value %= 11;
    printf("The value is (after %%= 11): %d\n", value); // 8

    return 0;
}
