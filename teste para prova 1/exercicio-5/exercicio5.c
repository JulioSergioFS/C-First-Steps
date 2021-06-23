#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um programa que receba o número de notas que o usuário digitar.
    // Calcule e mostre a média ponderada dessas notas. O usuário deverá entrar
    // com o peso de cada uma das notas que ele digitou. No final esta média deverá ser mostrada.

    float notaAtual, mediaP, numerador=0, denomimador=0, pesoAtual;
    char parar = 'n';

    while (parar != 's')
    {
        printf("Digite uma nota: ");
        scanf("%f", &notaAtual);
        printf("Digite o peso dessa nota: ");
        scanf("%f", &pesoAtual);
        numerador = numerador + notaAtual*pesoAtual;
        denomimador = denomimador + pesoAtual;

        printf("Deseja parar? [s / n] ");
        scanf("%c", &parar);
        scanf("%c", &parar);
    }

    mediaP = numerador/denomimador;
    printf("A média ponderada das suas notas é: %.2f.\n", mediaP);
    return 0;
}