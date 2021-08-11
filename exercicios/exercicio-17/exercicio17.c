#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    else {
        if (num2 < 0) {
            ++num2;
            num1 -= 1;
        } else {
            ++num1;
            num2 -= 1;
        }
        return soma(num1, num2);
    }
}

int main()
{
    int n1, n2;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    printf("A soma de %d mais %d é %d.\n", n1, n2, soma(n1, n2));
    return 0;
}