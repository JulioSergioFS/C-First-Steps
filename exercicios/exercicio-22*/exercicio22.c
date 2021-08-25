#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vetor[100000], tamanhoDoVetor, digitoAtual,
      i, vetorUnitario[100000], norma;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanhoDoVetor);

  for (i = 0; i < tamanhoDoVetor; i++)
  {
    printf("Digite o %dº digito do vetor: ", i + 1);
    scanf("%d", &digitoAtual);
    vetor[i] = digitoAtual;
  }

  for (i = 0; i < tamanhoDoVetor; i++)
  {
    vetorUnitario[i] = vetor[i] * vetor[i];
    printf("%d  ", vetorUnitario[i]);
  }

  printf("\n");

  for (i = 0; i < tamanhoDoVetor; i++)
  {
    norma += vetor[i] * vetor[i];
  }
  printf("A norma do vetor unitário é %d.", norma);
  return 0;
}