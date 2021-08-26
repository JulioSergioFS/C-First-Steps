#include <stdlib.h>
#include <stdio.h>

int main()
{
  float dividaAtual, vetorDeDividas[1000000],
      valorJuros, valorParcela;
  int i, tamanhoDovetor = 0, resposta = 0, parcela;

  // deixar o usuario digitar infinitas dividas
  while (resposta == 0)
  {
    printf("Digite o valor da divida: ");
    scanf("%f", &dividaAtual);
    printf("Digite a quantidade de parcelas (de 2 ate 13): ");
    scanf("%d", &parcela);

    vetorDeDividas[tamanhoDovetor] = dividaAtual;
    tamanhoDovetor++;

    printf("Deseja parar? 0 para Nao e 1 para Sim ");
    scanf("%d", &resposta);
  }

  // printando o cabecalho da tabela
  printf("Valor da divida   Valor dos juros   Quantidade de parcelas    Valor da parcela\n");

  // printar a tabela
  for (i = 0; i < tamanhoDovetor; i++)
  {

    if (parcela == 2)
    {
      valorJuros = vetorDeDividas[i] * 0.05;
      valorParcela = vetorDeDividas[i] / 2;
    }

    if (parcela == 4)
    {
      valorJuros = vetorDeDividas[i] * 0.15;
      valorParcela = vetorDeDividas[i] / 4;
    }

    if (parcela == 7)
    {
      valorJuros = vetorDeDividas[i] * 0.2;
      valorParcela = vetorDeDividas[i] / 7;
    }

    if (parcela == 10)
    {
      valorJuros = vetorDeDividas[i] * 0.25;
      valorParcela = vetorDeDividas[i] / 10;
    }

    if (parcela == 13)
    {
      valorJuros = vetorDeDividas[i] * 0.3;
      valorParcela = vetorDeDividas[i] / 13;
    }

    printf("%.2f            %.2f             %d                          %.2f\n", vetorDeDividas[i], valorJuros, parcela, valorParcela);
  }

  return 0;
}
