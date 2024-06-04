#include <stdio.h>

int main()
{
    int contador = 20;

    while (contador >= 0)
    {
        if (contador != 13)
        {
            printf("(%d)\n", contador);
        }
        contador--;
    }

    return 0;
}