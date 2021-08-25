#include <stdlib.h>
#include <stdio.h>

int main()
{
  int *ponteiroComNumeros, tamanhoDoPonteiro;

  printf("\nDigite o tamanho do ponteiro: ");
  scanf("%i", &tamanhoDoPonteiro);

  ponteiroComNumeros = malloc(tamanhoDoPonteiro * sizeof(int));

  for (int i = 0; i < tamanhoDoPonteiro; i++)
  {
    printf("\nDigite o número inteiro de posição %i: ", i + 1);
    scanf("%i", &ponteiroComNumeros[i]);
  }

  printf("\nNúmeros pares: ");

  for (int i = 0; i < tamanhoDoPonteiro; i++)
  {
    if (ponteiroComNumeros[i] % 2 == 0)
    {
      printf(" %i ", ponteiroComNumeros[i]);
    }
  }

  return 0;
}