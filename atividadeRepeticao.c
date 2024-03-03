#include <stdio.h>

int main()
{
    int contador;
    char equipe[50];

    printf("Digite o nome da equipe: ");
    scanf(" %s", equipe);

    for (contador = 1; contador <= 5; contador++)
    {
        printf("Etiqueta = %s  - %d \n", equipe, contador);
    }

    return 0;
}