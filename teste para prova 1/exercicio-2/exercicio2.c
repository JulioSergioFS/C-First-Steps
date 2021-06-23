#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo

    float num1, num2;

    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);

    printf("A diferença de %.2f menos %.2f é %.2f.\n", num1, num2, num1 - num2);
    return 0;
}