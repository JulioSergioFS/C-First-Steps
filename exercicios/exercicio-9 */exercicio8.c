#include <stdio.h>
#include <stdlib.h>

int main()
{
    // IMCOMPLETO
    // IMCOMPLETO
    // IMCOMPLETO
    
    
    
    
    
    int canal, numPessoas, totalDePessoas=0;
    float porcentagem;
    char parar = 'n';

    while (parar == 'n') {
        printf("=====NOVA CASA=====\n");
        printf("Insira o canal assistido na casa: ");
        scanf("%d", &canal);

        printf("Insira a quantidade de pessoas vendo: ");
        scanf("%d", &numPessoas);

        totalDePessoas = totalDePessoas + numPessoas;
        porcentagem = (numPessoas / totalDePessoas) * 100;

        printf("Você deseja parar de inserir casas? s ou n ");
        scanf("%c", &parar);
    }

    printf("A porcentagem da audiência do canal 2 é %.2f%.\n");
    return 0;
}