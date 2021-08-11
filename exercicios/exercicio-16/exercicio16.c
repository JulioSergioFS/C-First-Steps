#include <stdio.h>
#include <stdlib.h>

int tabuada(n) {
    int num, i;
    for (i = 1; i < n + 1; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }
    return 0;
}

int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    tabuada(numero);
    return 0;
}