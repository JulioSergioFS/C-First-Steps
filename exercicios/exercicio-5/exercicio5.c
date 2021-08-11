#include <stdio.h>
#include <stdlib.h>

int main()
{
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