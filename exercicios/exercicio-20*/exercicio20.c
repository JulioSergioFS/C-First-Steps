#include <stdio.h>
#include <stdlib.h>

int main()
{
  int lugarParaJanela[24] = {0}, lugarParaCorredor[24] = {0}, i, ocupado = 0,
      escolha = 0, escolhaJanelaOuNao, poltronaEscolhida, localEscolhido;

  while (escolha != 3)
  {
    // Checando se ainda tem lugares disponíveis no ônibus
    for (i = 0; i < 24; i++) {
      if (lugarParaCorredor[i] == 1 && lugarParaJanela[i] == 1)
        ocupado++;
      if (ocupado > 24+1)
        return printf("Ônibus lotado.");
    }

    // Perguntando o uqe o usuário quer fazer 
    printf("==============\n");
    printf("1 - Vender passagem;\n2 - mostrar mapa de ocupação do ônibus\n3 - Encerrar\n");
    printf("Escolha uma dentre as seguintes opções: ");
    scanf("%d", &escolha);

    // se ele quiser escolher uma poltrona
    if (escolha == 1)
    {
      printf("Deseja se sentar na janela?\n Digite 1 para Sim e 2 para não ");
      scanf("%d", &escolhaJanelaOuNao);

      printf("Qual o número da poltrona que deseja? ");
      scanf("%d", &poltronaEscolhida);

      // veriicar se a poltrona escolhida foi da fileira da janela ou do corredor
      if (escolhaJanelaOuNao == 1)
      {
        localEscolhido = lugarParaJanela[poltronaEscolhida];
      } else {
        localEscolhido = lugarParaCorredor[poltronaEscolhida];
      }

      printf("==============\n");

      // verificando se o local está disponível
      if (localEscolhido == 0) {
        printf("Venda efetivada.\n");
        if (escolhaJanelaOuNao == 1)
          lugarParaJanela[poltronaEscolhida] = 1;
        else
          lugarParaCorredor[poltronaEscolhida] = 1;
      } else if (localEscolhido == 1) { 
        printf("Poltrona ocupada.\n");
      }
    }

    // se ele quiser ver o mapa
    else if (escolha == 2)
    {
      printf("Mapa de Ocupação: \n");
      for (i = 0; i < 24; i++) {
        printf("============\n");

        printf("Vaga %d dos lugares da janela: ", i);
        if (lugarParaCorredor[i]  == 0)
          printf("Vaga livre.\n");
        else
          printf("Vaga ocupada.\n");


        printf("Vaga %d dos lugares da corredor: ", i);
        if (lugarParaJanela[i]  == 0)
          printf("Vaga livre.\n");
        else
          printf("Vaga ocupada.\n");
      }
    }
  }
  return 0;
}