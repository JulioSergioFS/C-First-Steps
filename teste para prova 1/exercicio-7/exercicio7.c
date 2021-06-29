#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Você precisa fazer um programa para verificar a consistência das
    // medidas dos ângulos internos de um triângulo. Para isto sabemos que
    // a soma dos três ângulos do triângulo é igual 180º. Seu
    // programa deverá receber os três ângulo, fazer a verificação e
    // informar ao usuário se os dados entrados estão corretos.

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