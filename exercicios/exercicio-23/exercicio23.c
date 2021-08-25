#include <stdio.h>
#include <stdlib.h>

void combinacaoUteis(int vetor[], int n, int r, int indice, int vetorTemporario[], int i);

void printarCombinacao(int vetor[], int n, int r)
{
  int vetorTemporario[r];

  combinacaoUteis(vetor, n, r, 0, vetorTemporario, 0);
}
void combinacaoUteis(int vetor[], int n, int r, int indice, int vetorTemporario[], int i)
{
  if (indice == r)
  {
    for (int j = 0; j < r; j++)
      printf("%d ", vetorTemporario[j]);
    printf("\n");
    return;
  }

  if (i >= n)
    return;

  vetorTemporario[indice] = vetor[i];
  combinacaoUteis(vetor, n, r, indice + 1, vetorTemporario, i + 1);

  combinacaoUteis(vetor, n, r, indice, vetorTemporario, i + 1);
}

int main()
{
  int vetor[] = {1, 2, 3, 4, 5, 6};
  int r = 6;
  int n = sizeof(vetor) / sizeof(vetor[0]);
  printarCombinacao(vetor, n, r);
  return 0;
}