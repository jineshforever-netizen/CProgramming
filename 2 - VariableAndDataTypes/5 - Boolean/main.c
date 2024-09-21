#include <stdio.h>
#include <stdbool.h>  // To use bool, true, false in C

int main() {

    // Declare boolean variables
    bool red_light = false;
    bool green_light = true;
    
    // Checking red_light
    if (red_light == true) {
        printf("Stop!\n");
    } else {
        printf("Go through!\n");
    }

    // Checking green_light
    if (green_light) {
        printf("The light is green!\n");
    } else {
        printf("The light is NOT green!\n");
    }

    // sizeof() function
    printf("sizeof(bool) : %lu\n", sizeof(bool));

    // Printing out a bool
    // 1 --> true, 0 --> false
    printf("\n");
    printf("red_light : %d\n", red_light);  // %d prints the integer (1 for true, 0 for false)
    printf("green_light : %d\n", green_light);

    // Printing bool with true/false text
    printf("red_light : %s\n", red_light ? "true" : "false");
    printf("green_light : %s\n", green_light ? "true" : "false");

    return 0;
}
