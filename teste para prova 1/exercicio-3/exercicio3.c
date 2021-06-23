#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um programa que receba dois números, calcule e mostre a divisão do.
    // primeiro número pelo segundo. Sabe-se que o segundo número não pode ser
    // zero, portanto, será necessário fazer a validações.

    float num1, num2;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("Digite outro número (que não seja zero): ");
    scanf("%f", &num2);

    if (num2 == 0)
    {
        while (num2 == 0)
        {
            printf("Digite outro número (QUE NÃO SEJA ZERO): ");
            scanf("%f", &num2);
        }
    }

    printf("O quociente da divisão de %.2f por %.2f é %.2f.\n", num1, num2, num1 / num2);
    return 0;
}