#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanhoDosVetores, i, digitoAtual;

    printf("Qual o tamanho dos vetores? ");
    scanf("%d", &tamanhoDosVetores);

    int vetor1[1000], vetor2[1000], resultadoFinal;

    for (i = 0; i < tamanhoDosVetores; i++)
    {
        printf("Digite o %dº digito do vetor 1? ", i + 1);
        scanf("%d", &digitoAtual);
        vetor1[i] = digitoAtual;
    }

    for (i = 0; i < tamanhoDosVetores; i++)
    {
        printf("Digite o %dº digito do vetor 2? ", i + 1);
        scanf("%d", &digitoAtual);
        vetor2[i] = digitoAtual;
    }

    for (i = 0; i < tamanhoDosVetores; i++)
    {
        resultadoFinal += vetor1[i] * vetor2[i];
    }

    printf("O resultado final é %d.\n", resultadoFinal);
    return 0;
}