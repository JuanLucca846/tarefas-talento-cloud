#include <stdio.h>

int main()
{
    int num_pessoas;
    char fumante, animais;

    printf("Você é fumante? (S/N): ");
    scanf(" %c", &fumante);
    printf("Você tem animais de estimação? (S/N): ");
    scanf(" %c", &animais);

    printf("Quantas pessoas estão no seu grupo? ");
    scanf("%d", &num_pessoas);

    if (fumante == 'S' || animais == 'S')
    {
        printf("Você será alocado na área externa.\n");
    }
    else if (num_pessoas >= 5)
    {
        printf("Você será alocado no 1º andar.\n");
    }
    else
    {
        printf("Você será alocado no térreo.\n");
    }

    return 0;
}