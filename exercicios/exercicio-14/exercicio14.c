#include <stdio.h>
#include <stdlib.h>

int quant_negativos(n)
{
    int i, num, contNumNeg = 0;
    for (i = 0; i != n; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &num);
        if (num < 0) { contNumNeg++; }
    }
    return contNumNeg;
}

int main()
{
    int quantidade = quant_negativos(4);
    printf("A quantidade de números negativos digitados é %d.\n", quantidade);
    return 0;
}