#include <stdio.h>
#include <stdlib.h>

int main()
{
    float medida;

    printf("Digite a medida do lado de um quadrado: ");
    scanf("%f", &medida);

    printf("A área do lado é %.2f.\n", medida * medida);
    return 0;
}