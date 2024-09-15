#include <stdio.h>

int main()
{

    // Compile time error
    printfs("Hello Word!");

    // Run time error
    int value = 7 / 0;
    printf("Value is: %d", value);

    return 0;
}