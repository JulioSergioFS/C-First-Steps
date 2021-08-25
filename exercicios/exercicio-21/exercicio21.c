#include <stdio.h>
#include <stdlib.h>

float soma(float i)
{
  if (i == 1.0)
    return 1;
  else
    return ((1 / i) + soma(i - 1));
}

int main()
{
  float n1;

  printf("Digite um número: ");
  scanf("%f", &n1);

  printf("O resultado é %.2f.\n", soma(n1));
  return 0;
}