#include <stdio.h>

int main()
{
    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal
    int number3 = 0x0F;       // Hexadecimal
    int number4 = 0b00001111; // Binary (note: this requires C99 or later)

    printf("number1 : %d\n", number1); // 15
    printf("number2 : %d\n", number2); // 15 (octal 017 is decimal 15)
    printf("number3 : %d\n", number3); // 15 (hexadecimal 0x0F is decimal 15)
    printf("number4 : %d\n", number4); // 15 (binary 0b00001111 is decimal 15)

    return 0;
}
