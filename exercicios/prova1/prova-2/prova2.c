#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1=0, num2=0, raiz1, raiz2;
    int opcao;

    printf("======Calculadora======\n");
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);

    printf("Menu de opções:\n");
    printf("1. Somar dois números\n");
    printf("2. Raiz quadrada de cada número\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("A soma de %.2f com %.2f é igual a %.2f.", num1, num2, num1 + num2);
    } else if (opcao == 2) {
        if (num1 >= 0 && num2 >= 0) {
            raiz1 = sqrt(num1);
            raiz2 = sqrt(num2);
            printf("A raiz de %.2f é %f e a raiz de %.2f é %.2f.", num1, raiz1, num2, raiz2);
        } else {
            printf("Não existe raiz de número negativo.");
        }
    } else {
        printf("Opcao inválida!");
    }

    return 0;
}