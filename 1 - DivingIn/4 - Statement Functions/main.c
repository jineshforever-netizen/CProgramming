#include <stdio.h>

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}

int main()
{
    int first_number = 13; // Statement
    int second_number = 7;

    printf("First number : %d\n", first_number);   // 13
    printf("Second number : %d\n", second_number); // 7

    int sum = first_number + second_number;
    printf("Sum : %d\n", sum); // 20

    sum = addNumbers(25, 7);
    printf("Sum : %d\n", sum); // 32

    sum = addNumbers(30, 54);
    printf("Sum : %d\n", sum); // 84

    printf("Sum : %d\n", addNumbers(3, 42)); // 45

    return 0;
}
