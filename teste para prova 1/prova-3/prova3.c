#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, porcentagemOlhosPretos, mediaMenosQue170cm;
    int idade, i;
    int acima30AnosE50kg=0, quantMenosQue170cm=0,
    idadeTotalMenosQue170cm=0, quantLourasOlhosNaoCastanhos=0;
    float quantOlhosPretos=0;
    char corOlhos, corCabelo;

    for (i = 1; i < 11; i++) {

        printf("=====================\n");
        printf("Digite seu peso: ");
        scanf("%f", &peso);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite a cor dos seus olhos: ");
        scanf(" %c", &corOlhos);
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite a cor dos seus cabelos: ");
        scanf(" %c", &corCabelo);

        if (idade > 30 && peso > 50) {
            acima30AnosE50kg++;
        }
        if (altura < 1.7) {
            quantMenosQue170cm++;
            idadeTotalMenosQue170cm = idadeTotalMenosQue170cm + idade;
            mediaMenosQue170cm = idadeTotalMenosQue170cm / quantMenosQue170cm;
        }
        if (corOlhos == 'P') {
            quantOlhosPretos++;
            porcentagemOlhosPretos = (quantOlhosPretos / 10.0) * 100.0;
        }
        if (corCabelo == 'L'  && corOlhos != 'C') {
            quantLourasOlhosNaoCastanhos++;
        }
    }
    printf("São %d pessoas que têm mais de 30 e peso superior a 50kg.\n", acima30AnosE50kg);
    printf("A média das idades das pessoas com altura inferior a 1,70m é %.2f.\n", mediaMenosQue170cm);
    printf("A porcentagem de pessoas com olhos pretos é %.2f %.\n", porcentagemOlhosPretos);
    printf("A quantidade de pessoas louras e que não possuem olhos castanhos é %d pessoa(s).\n", quantLourasOlhosNaoCastanhos);
    return 0;
}