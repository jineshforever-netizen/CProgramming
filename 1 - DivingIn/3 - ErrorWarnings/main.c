#include <stdio.h>

int main()
{

    // Compile time error
    printf("Hello World!");

    // Run time error
    int value = 7 / 0;
    printf("Value is: %d", value);

    return 0;
}