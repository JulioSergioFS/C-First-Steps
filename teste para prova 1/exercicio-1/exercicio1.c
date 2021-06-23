#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

    int i;
    float num1, num2, num3, result;

    for (i = 1; i < 4; i++)
    {
        printf("Digite o valor %d: ", i);
        if (i == 1)
        {
            scanf("%f", &num1);
        }
        else if (i == 2)
        {
            scanf("%f", &num2);
        }
        else if (i == 3)
        {
            scanf("%f", &num3);
        }
    }

    result = num1 * num2 * num3;
    printf("O resultado da multiplicação é %.2f.\n", result);
    return 0;
}