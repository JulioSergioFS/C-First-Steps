#include <stdio.h>
#include <stdlib.h>

int main()
{
  int quantidadeDeAlunos, linhas, colunas;

  printf("Digite o total de alunos: ");
  scanf("%d", &quantidadeDeAlunos);

  char nome[quantidadeDeAlunos][50];
  float notas[quantidadeDeAlunos][3], media[quantidadeDeAlunos], diferenca;

  // pergunta dos alunos
  for (linhas = 0; linhas < quantidadeDeAlunos; linhas++)
  {
    printf("\nDigite o nome do(a) aluno(a): ");
    scanf(" %s", &nome[linhas]);

    for (colunas = 0; colunas < 3; colunas++)
    {
      printf("Digite a nota %d de %s: ", colunas + 1, nome[linhas]);
      scanf("%f", &notas[linhas][colunas]);
    }
  }

  // armazena as medias
  for (linhas = 0; linhas < quantidadeDeAlunos; linhas++)
    media[linhas] = (notas[linhas][0] + notas[linhas][1] + notas[linhas][2]) / 3;

  //printa os alunos e suas situacoes
  for (linhas = 0; linhas < quantidadeDeAlunos; linhas++)
  {
    printf("\nO(a) aluno(a) %s recebeu a media %.1f\n", nome[linhas], media[linhas]);

    if (media[linhas] < 6)
    {
      diferenca = (6 - media[linhas]);
      printf("%s necessita de mais %.1f pontos para ser aprovado(a)!\n", nome[linhas], diferenca);
    }
  }
  system("pause");
  return 0;
}