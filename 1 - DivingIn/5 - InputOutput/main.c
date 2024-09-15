#include <stdio.h>
#include <string.h>

int main()
{
    // Printing data
    /*
    printf("Hello C\n");

    int age = 21;
    printf("Age : %d\n", age);

    fprintf(stderr, "Error message : Something is wrong\n");
    printf("Log message : Something happened\n");

    */

    // Data input

    /*
    int age1;
    char name[50];

    printf("Please type your name and age : \n");

    scanf("%s", name);
    scanf("%d", &age1);

    printf("Hello %s, you are %d years old!\n", name, age1);
    */

    // Data with spaces

    char full_name[100];
    int age3;

    printf("Please type in your full name and age:\n");

    fgets(full_name, sizeof(full_name), stdin); // Reading the full name including spaces
    full_name[strcspn(full_name, "\n")] = '\0'; // Remove newline character if present

    scanf("%d", &age3); // Read the age

    printf("Hello %s, you are %d years old!\n", full_name, age3);

    return 0;
}
