#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idadeAtual, i;
    int ate15=0, entre16e30=0, entre31e45=0, entre46e60=0, acima60=0;
    float porcentagem1, porcentagem2;

    for (i = 1; i < 9; i++)
    {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idadeAtual);
    
        if (idadeAtual <= 15) ate15++;
        else if (idadeAtual >= 16 && idadeAtual <= 30) entre16e30++;
        else if (idadeAtual >= 31 && idadeAtual <= 45) entre31e45++;
        else if (idadeAtual >= 46 && idadeAtual <= 60) entre46e60++;
        else if (60 < idadeAtual) acima60++;

        printf("%d\n", idadeAtual);
    }

    porcentagem1 = ate15 / 8.0 * 100;
    porcentagem2 = acima60 / 8.0 * 100;

    printf("Tem %d pessoas com até 15 anos \n%d entre 16 a 30 anos \n%d entre 31 a 45 anos \n%d entre 46 a 60 anos \n%d acima de 60 anos\n",
             ate15, entre16e30, entre31e45, entre46e60, acima60);
    printf("A porcentagem de pessoas com até 15 anos é %.2f %.\n", porcentagem1);
    printf("A porcentagem de pessoas acima de 60 anos é %.2f %.\n", porcentagem2);
    return 0;
}