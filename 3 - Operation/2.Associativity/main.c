#include <stdio.h>

int main() {
    int a = 6;
    int b = 3;
    int c = 8;
    int d = 9;
    int e = 3;
    int f = 2;
    int g = 5;

    int result = a + b * c - d / e - f + g; // 6 + 24 - 3 - 2 + 5
    printf("result: %d\n", result);

    result = a / b * c + d - e + f; // 6 + 9 - 3 + 2
    printf("result: %d\n", result);

    result = (a + b) * c - d / e - f + g; // 72 - 3 - 2 + 5
    printf("result (): %d\n", result);

    return 0;
}
