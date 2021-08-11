#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanhoVetor, elementoAtual, multiplicacoesDosElementos, somaDasMultiplicacoesDosElementos = 0;
    printf("Quantos elementos há em cada vetor? ");
    scanf("%d", &tamanhoVetor);
    int vetorU[tamanhoVetor], vetorV[tamanhoVetor];
    int i;

    for (i = 0; i < tamanhoVetor; i++)
    {
        printf("Digite o elemento %d do vetor 1: ", i);
        scanf("%d", &elementoAtual);
        vetorU[i] = elementoAtual;
    }

    for (i = 0; i < tamanhoVetor; i++)
    {
        printf("Digite o elemento %d do vetor 2: ", i);
        scanf("%d", &elementoAtual);
        vetorV[i] = elementoAtual;
    }

    for (i = 0; i < tamanhoVetor; i++)
    {
        multiplicacoesDosElementos = vetorU[i] * vetorV[i];
        somaDasMultiplicacoesDosElementos = somaDasMultiplicacoesDosElementos + multiplicacoesDosElementos;
    }

    printf("O produto escalar dos vetores é %d.\n", somaDasMultiplicacoesDosElementos);

    if (somaDasMultiplicacoesDosElementos == 0)
    {
        printf("Os vetores são perpendiculares. \n");
    }
    else
    {
        printf("Os vetores NÃO são perpendiculares.\n");
    }
    return 0;
}