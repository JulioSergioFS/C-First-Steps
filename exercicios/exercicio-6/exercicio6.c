#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio;
    float pi = 3.141592653589793238;

    printf("Digite o raio de uma esfera: ");
    scanf("%f", &raio);
    
    printf("O comprimento da esfera é %.2f.\n", 2.0 * raio * pi);
    printf("A área da esfera é %.2f.\n", 4.0 * pi * (raio*raio));
    printf("O volume da esfera é %.2f.\n", (4.0*pi*(raio*raio*raio))/3.0);
    return 0;
}