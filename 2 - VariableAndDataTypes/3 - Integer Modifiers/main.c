#include <stdio.h>

int main()
{

    signed int value1 = 10;
    signed int value2 = -300;

    printf("value1 : %d\n", value1);
    printf("value2 : %d\n", value2);
    printf("sizeof(value1) : %u bytes\n", sizeof(value1));
    printf("sizeof(value2) : %u bytes\n", sizeof(value2));

    unsigned int value3 = 4;
    // unsigned int value4 = -5; // Compiler error

    // Short and long
    short short_var = -32768; // 2 Bytes
    short int short_int = 455;
    signed short signed_short = 122;
    signed short int signed_short_int = -456;
    unsigned short int unsigned_short_int = 456;

    int int_var = 55; // 4 bytes
    signed signed_var = 66;
    signed int signed_int = 77;
    unsigned int unsigned_int = 77;

    long long_var = 88; // 4 OR 8 Bytes
    long int long_int = 33;
    signed long signed_long = 44;
    signed long int signed_long_int = 44;
    unsigned long int unsigned_long_int = 44;

    long long long_long = 888; // 8 Bytes
    long long int long_long_int = 999;
    signed long long signed_long_long = 444;
    signed long long int signed_long_long_int = 1234;
    unsigned long long int unsigned_long_long_int = 1234;

    printf("Short variable : %d , size : %lu bytes\n", short_var, sizeof(short));
    printf("Short Int : %d , size : %lu bytes\n", short_int, sizeof(short int));
    printf("Signed short : %d , size : %lu bytes\n", signed_short, sizeof(signed short));
    printf("Signed short int : %d , size : %lu bytes\n", signed_short_int, sizeof(signed short int));
    printf("Unsigned short int : %d , size : %lu bytes\n", unsigned_short_int, sizeof(unsigned short int));
    printf("---------------------\n");

    printf("Int variable : %d , size : %lu bytes\n", int_var, sizeof(int));
    printf("Signed variable : %d , size : %lu bytes\n", signed_var, sizeof(signed));
    printf("Signed int : %d , size : %lu bytes\n", signed_int, sizeof(signed int));
    printf("Unsigned int : %u , size : %lu bytes\n", unsigned_int, sizeof(unsigned int));
    printf("---------------------\n");

    printf("Long variable : %ld , size : %lu bytes\n", long_var, sizeof(long));
    printf("Long int : %ld , size : %lu bytes\n", long_int, sizeof(long int));
    printf("Signed long : %ld , size : %lu bytes\n", signed_long, sizeof(signed long));
    printf("Signed long int : %ld , size : %lu bytes\n", signed_long_int, sizeof(signed long int));
    printf("Unsigned long int : %lu , size : %lu bytes\n", unsigned_long_int, sizeof(unsigned long int));
    printf("---------------------\n");

    printf("Long long : %lld , size : %lu bytes\n", long_long, sizeof(long long));
    printf("Long long int : %lld , size : %lu bytes\n", long_long_int, sizeof(long long int));
    printf("Signed long long : %lld , size : %lu bytes\n", signed_long_long, sizeof(signed long long));
    printf("Signed long long int : %lld , size : %lu bytes\n", signed_long_long_int, sizeof(signed long long int));
    printf("Unsigned long long int : %llu , size : %lu bytes\n", unsigned_long_long_int, sizeof(unsigned long long int));
    printf("---------------------\n");

    return 0;
}
