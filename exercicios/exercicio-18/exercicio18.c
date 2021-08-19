#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2;
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite outro número: ");
  scanf("%d", &num2);

  int *pointer1 = &num1, *pointer2 = &num2;

  printf("Seus respectivos espaços de memória são %p e %p.\n", (void *)&pointer1, (void *)&pointer2);

  if (*pointer1 > *pointer2)
    printf("O número com maior endereço dentre os digitados é %d\n", num1);
  else
    printf("O número com maior endereço dentre os digitados é %d\n", num2);
  return 0;
}