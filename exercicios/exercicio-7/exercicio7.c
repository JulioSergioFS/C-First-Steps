#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, soma;

    printf("Digite a medida do primeiro ângulo do triângulo: ");
    scanf("%f", &num1);

    printf("Digite a segunda medida: ");
    scanf("%f", &num2);

    printf("Digite a terceira medida: ");
    scanf("%f", &num3);

    soma = num1 + num2 + num3;
    if (soma == 180.0)
    {
        printf("Os números formam um triângulo\n");
    }
    else {
        printf("Os números não formam um triângulo\n");
    }
    return 0;
}