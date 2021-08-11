#include <stdio.h>
#include <stdlib.h>

int main()
{
    float idades[15], mediaDasIdadesRegular, somaDasIdadesRegular = 0, porcentagemBom, 
          quantidadeDePessoasBom = 0, quantidadeDePessoasRegular = 0;
    int opinioes[15], i, quantidadeDePessoasOtimo = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Digite a idade do espectador %d: ", i+1);
        scanf("%f", &idades[i]);
        printf("Digite a opinião do espectador %d: ", i+1); 
        scanf("%d", &opinioes[i]);

        if (opinioes[i] == 1) {
            quantidadeDePessoasRegular++;
            somaDasIdadesRegular += idades[i];
            mediaDasIdadesRegular = somaDasIdadesRegular/quantidadeDePessoasRegular;
        }
        else if (opinioes[i] == 2) { quantidadeDePessoasBom++;}
        else if (opinioes[i] == 3) { quantidadeDePessoasOtimo++;}

        printf("=========================================\n");
    }

    porcentagemBom = (quantidadeDePessoasBom / 15) * 100;

    printf("A média das idades das pessoas que responderam Regular é: %.1f.\n", mediaDasIdadesRegular);
    printf("A quantidade de pessoas que responderam Ótimo é: %d.\n", quantidadeDePessoasOtimo);
    printf("A porcentagem de pessoas que responderam Bom entre todos os espectadores é: %.1f por cento.\n", porcentagemBom);
    return 0;
}