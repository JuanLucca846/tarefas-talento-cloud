#include <stdio.h>

int main()
{
    int rodas, pessoas;
    float peso;

    printf("Informe a quantidade de rodas do veiculo: ");
    scanf("%d", &rodas);

    printf("Informe o peso bruto do veiculo em kg: ");
    scanf("%f", &peso);

    printf("Informe a quantidade de pessoas no veiculo: ");
    scanf("%d", &pessoas);

    if (rodas == 2 || rodas == 3)
    {
        printf("Categoria de habilitacao: A\n");
    }
    else if (rodas == 4 && pessoas <= 8 && peso <= 3500)
    {
        printf("Categoria de habilitacao: B\n");
    }
    else if (rodas >= 4 && peso > 3500 && peso <= 6000)
    {
        printf("Categoria de habilitacao: C\n");
    }
    else if (rodas >= 4 && pessoas > 8)
    {
        printf("Categoria de habilitacao: D\n");
    }
    else if (rodas >= 4 && peso > 6000)
    {
        printf("Categoria de habilitacao: E\n");
    }
    else
    {
        printf("Nao foi possivel determinar a categoria de habilitacao para este veiculo.\n");
    }

    return 0;
}
