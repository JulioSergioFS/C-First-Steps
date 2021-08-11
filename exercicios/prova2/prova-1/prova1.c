#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioFixo, valorDasVendas, comissao, salarioFinal;

    printf("Digite o salário fixo do funcionário: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor das vendas do funcionário: R$ ");
    scanf("%f", &valorDasVendas);

    if (valorDasVendas <= 1000.00) {
        comissao = 4.0;
    } if (1000.00 < valorDasVendas && valorDasVendas < 2000.00) {
        comissao = 5.0;
    } if (2000.00 <= valorDasVendas) {
        comissao = 6.0;
    }

    salarioFinal = salarioFixo + ((valorDasVendas*comissao) / 100);

    printf("A comissão é %.0f por cento.\n", comissao);
    printf("O salário final é R$ %.2f.\n", salarioFinal);
    return 0;
}