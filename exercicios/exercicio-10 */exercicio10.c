#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, quantMenorDe24=0, acima75kg=0;
    float idadeTotal=0, alturaTotal=0;
    float peso, altura;
    float mediaTime1, mediaTime2, mediaTime3, mediaTime4, mediaTime5;
    float mediaAltura, porcentagemAcima75kg;
    int time, i;

    for (i = 1; i < 56; i++)
    {
        if (i < 12) {time = 1;}
        else if (i > 11 && i < 23) {time = 2;}
        else if (i > 22 && i < 34) {time = 3;}
        else if (i > 33 && i < 45) {time = 4;}
        else if (i > 44) {time = 5;}
        
        printf("Jogador %d.\n", i);
        printf("Jogador do time %d\n.", time);
    
        printf("Digite a idade do jogador: ");
        scanf("%d", &idade);
        printf("Digite o peso do jogador: ");
        scanf("%f", &peso);
        printf("Digite a altura do jogador: ");
        scanf("%f", &altura);

        idadeTotal = idadeTotal + idade;
        if (idade < 24) { quantMenorDe24++; }

        if (i == 11) { mediaTime1 = idadeTotal/11; idadeTotal = 0; }
        if (i == 22) { mediaTime2 = idadeTotal/11; idadeTotal = 0; }
        if (i == 33) { mediaTime3 = idadeTotal/11; idadeTotal = 0; }
        if (i == 44) { mediaTime4 = idadeTotal/11; idadeTotal = 0; }
        if (i == 55) { mediaTime5 = idadeTotal/11; idadeTotal = 0; }

        alturaTotal = alturaTotal + altura;

        if (peso > 75) { acima75kg++; }
    }
    mediaAltura = alturaTotal/55;
    porcentagemAcima75kg = (acima75kg / 55) * 100;

    printf("A quantidade de jogadores com menos de 24 anos é %d.\n", quantMenorDe24);
    printf("A média da idade dos jogadores do time 1 é %f, do time 2 é %f,do time 3 é %f, do time 4 é %f e do time 5 é %f.\n",
           mediaTime1, mediaTime2, mediaTime3, mediaTime4, mediaTime5);
    printf("A média das alturas de todos jogadores é %f.\n", mediaAltura);
    printf("A porcentagem de jogadores que estão acima de 75kg é %f %.\n", porcentagemAcima75kg);
    return 0;
}