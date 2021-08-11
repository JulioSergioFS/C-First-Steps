#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanhoVetor, elementoAtual, multiplicacoesDosElementos, multiplicacoesDosElementosPositiva,
        somaDasMultiplicacoesDosElementos = 0, somaDasMultiplicacoesDosElementosPositiva = 0;
    printf("Quantos elementos tem no vetor? ");
    scanf("%d", &tamanhoVetor);
    int vetorV[tamanhoVetor];
    int i;

    for (i = 0; i < tamanhoVetor; i++)
    {
        printf("Digite o elemento %d do vetor: ", i);
        scanf("%d", &elementoAtual);
        vetorV[i] = elementoAtual;
    }

    for (i = 0; i < tamanhoVetor; i++)
    {
        multiplicacoesDosElementos = vetorV[i] * vetorV[i];
        if (multiplicacoesDosElementos < 0)
        {
            multiplicacoesDosElementosPositiva = multiplicacoesDosElementos * -1;
        }
        else
        {
            multiplicacoesDosElementosPositiva = multiplicacoesDosElementos;
        }
        somaDasMultiplicacoesDosElementos = somaDasMultiplicacoesDosElementos + multiplicacoesDosElementos;
        somaDasMultiplicacoesDosElementosPositiva = somaDasMultiplicacoesDosElementosPositiva + multiplicacoesDosElementosPositiva;
    }

    printf("O produto escalar dos vetores é %d.\n", somaDasMultiplicacoesDosElementos);
    printf("O produto escalar dos vetores p é %d.\n", somaDasMultiplicacoesDosElementosPositiva);

    if (somaDasMultiplicacoesDosElementos == somaDasMultiplicacoesDosElementosPositiva 
        && somaDasMultiplicacoesDosElementos >= 0)
    {
        printf("A propriedade é válida.\n");
    }
    else
    {
        printf("A propriedade não é válida.\n");
    }
    return 0;
}