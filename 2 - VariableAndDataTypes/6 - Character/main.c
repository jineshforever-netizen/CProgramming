#include <stdio.h>

int main()
{
    // Declare characters
    char character1 = 'a';
    char character2 = 'r';
    char character3 = 'r';
    char character4 = 'o';
    char character5 = 'w';

    // Print each character
    printf("%c\n", character1);
    printf("%c\n", character2);
    printf("%c\n", character3);
    printf("%c\n", character4);
    printf("%c\n", character5);

    // One byte in memory: 2^8 = 256 different values (0 ~ 255)
    printf("\n");

    // ASCII value
    char value = 65;                         // ASCII character code for 'A'
    printf("value : %c\n", value);           // Print as character
    printf("value(int) : %d\n", (int)value); // Print as integer (ASCII code)

    return 0;
}
