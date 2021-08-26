#include <stdio.h>
#include <stdlib.h>

int main()
{
    // delaracao de variaveis
    int produtos1, produtos2, *codigo, *estoque, i;

    // perguntando dos produtos
    printf("Quantos produtos vao ser registrados?");
    scanf("%d", &produtos1);
    printf("\nQuantos codigos de estoque serao registrados?");
    scanf("%d", &produtos2);

    codigo = malloc(produtos1 * sizeof(int));

    estoque = malloc(produtos2 * sizeof(int));

    // pede codigo do(s) produtos(s)
    for (i = 0; i < produtos1; i++)
    {
        printf("\nDigite o codigo do produto %d: ", i);
        scanf("%d", &codigo[i]);

        if (i <= produtos2)
        {
            printf("\nDigite o estoque do produto %d: ", i);
            scanf("%d", &estoque[i]);
        }
    }

    int codigoDoCliente = -1, codigoDoProduto, quantidadeDoProduto;

    // continua perguntando o codigo ate o cliente digitar 0
    while (codigoDoCliente != 0)
    {
        printf("\nDigite o codigo do cliente:");
        scanf("%d", &codigoDoCliente);

        if (codigoDoCliente < 0)
            printf("\ncodigo e invalido!");

        if (codigoDoCliente > 0)
        {
            printf("\nDigite o codigo do produto desejado:");
            scanf("%d", &codigoDoProduto);
            for (i = 0; i < produtos1; i++)
            {
                if (codigo[i] == codigoDoProduto)
                {
                    printf("\nDigite a quantidade de produto desejado:");
                    scanf("%d", &quantidadeDoProduto);

                    // verificando se o produto pode ser atendido integralmente
                    if (estoque[i] <= quantidadeDoProduto)
                        printf("\nPedido atendido!");
                    else
                        printf("\nNao temos estoque suficiente.");
                }
                else
                {
                    system("cls");
                    printf("\nO codigo nao existe.");
                }
            }
        }
    }

    printf("\n\nFim do programa.", codigoDoCliente);
    return 0;
}
