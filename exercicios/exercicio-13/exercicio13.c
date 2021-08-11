#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, contador = 0;
    char stringArray[100] = {0};
    printf("Digite uma palavra: ");
    fgets(stringArray, 100, stdin);

    for (i = 0; stringArray[i] != '\0'; i++) {
        if (stringArray[i] == 'a' || stringArray[i] == 'e' 
        || stringArray[i] == 'i' || stringArray[i] == 'o' 
        || stringArray[i] == 'u' || stringArray[i] == 'A' 
        || stringArray[i] == 'E' || stringArray[i] == 'I' 
        || stringArray[i] == 'O' || stringArray[i] == 'U') {
            contador++;
        }
    }
    printf("A quantidade de vogais da palavra é %d vogal(is).\n", contador);
    return 0;
}