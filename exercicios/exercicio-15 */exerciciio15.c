#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[1][20] = {0};
    int codigo[1] = {0};
    float preco[1] = {0};
    float porcentagem[1] = {0};
    float lucro[1] = {0};
    int i, codigoComMaiorLucro, codigoComMenorLucro;
    float lucroTotal = 0.0, produtoComMaiorLucro, produtoComMenorLucro;

    for (i = 0; i < 1; i++)
    {
        printf("Digite o nome do produto %i: ", i + 1);
        scanf("%s", &nome[i]);

        printf("Digite o código do produto %i: ", i + 1);
        scanf("%d", &codigo[i]);

        printf("Digite o preço do produto %i: R$ ", i + 1);
        scanf("%f", &preco[i]);

        printf("Digite a porcentagem de lucro do produto %i: ", i + 1);
        scanf("%f", &porcentagem[i]);

        lucro[i] = (preco[i] * porcentagem[i]) / 100.00;
        lucroTotal += lucro[i];

        if (i == 0)
        {
            codigoComMaiorLucro = codigo[i];
            codigoComMenorLucro = codigo[i];
            produtoComMaiorLucro = lucro[i];
            produtoComMenorLucro = lucro[i];
        }
        else
        {
            if (lucro[i] > produtoComMaiorLucro)
            {
                produtoComMaiorLucro = lucro[i];
            }
            else if (lucro[i] < produtoComMenorLucro) {
                produtoComMenorLucro = lucro[i];
            }
        }
        printf("===============================================\n");
    }

    printf("Nome      Código      Preço      Lucro\n");
    for (i = 0; i < 1; i++)
    {
        printf("%s         %d         %.2f         %.2f\n",
               nome[i], codigo[i], preco[i], lucro[i]);
    }
    printf("O lucro total foi %.2f", lucroTotal);
    printf("O código do produto com maior lucro é %.2f", produtoComMaiorLucro);
    printf("O código do produto com menor lucro é %.2f", produtoComMenorLucro);
    return 0;
}