#include <stdio.h>
#include <float.h> // for float limits

int main()
{

    // Declare and initialize the variables
    float number1 = 1.12345678901234567890f; // Precision: 7
    double number2 = 1.12345678901234567890; // Precision: 15

    // Print out the sizes
    printf("sizeof float : %lu\n", sizeof(float));
    printf("sizeof double : %lu\n", sizeof(double));

    // Precision: Control precision using `%.*f` for floats
    printf("number1 is : %.20f\n", number1);  // 7 digits
    printf("number2 is : %.20lf\n", number2); // 15'ish digits

    // Float problems: The precision is usually too limited for a lot of applications
    float number4 = 192400023.0f;

    printf("number4 : %.20f\n", number4);

    // Scientific notation
    printf("-------------------------\n");

    double number5 = 192400023;
    double number6 = 1.92400023e8;
    double number7 = 1.924e8; // Omitting lower digits for simplicity
    double number8 = 0.00000000003498;
    double number9 = 3.498e-11; // Multiply with 10^(-11)

    printf("number5 is : %.20lf\n", number5);
    printf("number6 is : %.20lf\n", number6);
    printf("number7 is : %.20lf\n", number7);
    printf("number8 is : %.20lf\n", number8);
    printf("number9 is : %.20lf\n", number9);

    // Infinity and NaN
    printf("\nInfinity and NaN\n");

    double number10 = -5.6;
    double number11 = 0.0; // Initialized to 0
    double number12 = 0.0; // Initialized to 0

    // Infinity
    double result = number10 / number11;

    printf("%.2lf / %.2lf yields %lf\n", number10, number11, result);
    printf("%lf + %.2lf yields %lf\n", result, number10, result + number10);

    // NaN
    result = number11 / number12;

    printf("%.2lf / %.2lf = %lf\n", number11, number12, result);

    return 0;
}
