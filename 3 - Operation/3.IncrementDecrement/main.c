#include <stdio.h>

int main() {
    int value = 5;

    // Increment by one
    value = value + 1; // 6
    printf("The value is: %d\n", value); // 6

    value = 5; // Reset value to 5

    // Decrement by one
    value = value - 1; // 4
    printf("The value is: %d\n", value); // 4

    //===================================================================

    printf("======Postfix increment and decrement======\n");
    // Reset value to 5
    value = 5;

    printf("The value is (incrementing): %d\n", value++); // 5
    printf("The value is: %d\n", value); // 6

    printf("\n");

    // Decrement with postfix

    // Reset value to 5
    value = 5;

    printf("The value is (decrementing): %d\n", value--); // 5
    printf("The value is: %d\n", value); // 4

    //===================================================================

    printf("======Prefix increment and decrement======\n");

    // Reset value to 5
    value = 5;

    ++value;
    printf("The value is (prefix++): %d\n", value); // 6

    // Reset value to 5
    value = 5;
    printf("The value is (prefix++ in place): %d\n", ++value); // 6

    printf("\n");

    // Prefix: Decrementing

    // Reset value to 5;
    value = 5;
    --value;
    printf("The value is (prefix--): %d\n", value); // 4

    // Reset value to 5;
    value = 5;
    printf("The value is (prefix-- in place): %d\n", --value); // 4

    return 0;
}
