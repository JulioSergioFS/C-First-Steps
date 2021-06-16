#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    printf("\n");

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);
    printf("\n");
    
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);
    printf("\n");

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s.\n", name);
    printf("\n");*/

    char fullName[20];
    printf("Enter your name: ");
    fgets(fullName, 20, stdin);
    printf("Your name is %s.\n", fullName);
    printf("\n");

    return 0;
}