#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = true;
    bool b = false;
    bool c = true;

    printf("a: %s\n", a ? "true" : "false");
    printf("b: %s\n", b ? "true" : "false");
    printf("c: %s\n", c ? "true" : "false");

    // AND: Evaluates to true when all operands are true.
    printf("\nBasic AND operations\n");
    printf(" a && b: %s\n", (a && b) ? "true" : "false");           // false
    printf(" a && c: %s\n", (a && c) ? "true" : "false");           // true
    printf(" a && b && c: %s\n", (a && b && c) ? "true" : "false"); // false

    // OR: Evaluates to true when at least one operand is true.
    printf("\nBasic OR operations\n");
    printf(" a || b: %s\n", (a || b) ? "true" : "false");
    printf(" a || c: %s\n", (a || c) ? "true" : "false");
    printf(" a || b || c: %s\n", (a || b || c) ? "true" : "false");

    // NOT: Negates whatever operand you put it with
    printf("\nBasic NOT operations\n");
    printf(" !a: %s\n", !a ? "true" : "false");
    printf(" !b: %s\n", !b ? "true" : "false");
    printf(" !c: %s\n", !c ? "true" : "false");

    // Combinations of all these operators
    printf("\nCombining logical operators\n");
    // !(a && b) || c
    printf("!(a && b) || c: %s\n", (!(a && b) || c) ? "true" : "false"); // true

    // Combining logical operators with relational operators
    int d = 45;
    int e = 20;
    int f = 11;

    printf("\nRelational and logic operations on integers\n");
    printf("d: %d\n", d);
    printf("e: %d\n", e);
    printf("f: %d\n", f);

    printf("\n");

    printf("(d > e) && (d > f): %s\n", ((d > e) && (d > f)) ? "true" : "false"); // true
    printf("(d == e) || (e <= f): %s\n", ((d == e) || (e <= f)) ? "true" : "false");
    printf("(d < e) || (d > f): %s\n", ((d < e) || (d > f)) ? "true" : "false");
    printf("(f > e) || (d < f): %s\n", ((f > e) || (d < f)) ? "true" : "false");
    printf("(d > f) && (f <= d): %s\n", ((d > f) && (f <= d)) ? "true" : "false");
    printf("(d > e) && (d <= f): %s\n", ((d > e) && (d <= f)) ? "true" : "false");
    printf("(!a) && (d == e): %s\n", ((!a) && (d == e)) ? "true" : "false");
    printf("(!a) && (d == e): %s\n", ((!a) && (d == e)) ? "true" : "false");

    return 0;
}
