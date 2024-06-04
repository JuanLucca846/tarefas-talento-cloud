/******************************************************************************

- Nome: José Almeida da Silva
- CPF: 12345678900
- RG: 9517530
- Altura: 1,78
- Endereço: Rua A, 380 – Centro – Recife/PE

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50], endereco[50];
    long int cpf;
    int rg;
    float altura;

    printf("Digite o NOME: ");
    scanf("%s", nome);

    printf("Digite o CPF: ");
    scanf("%ld", &cpf);

    printf("Digite o RG: ");
    scanf("%d", &rg);

    printf("Digite o Altura: ");
    scanf("%f", &altura);

    printf("Digite o NOME: ");
    scanf("%s", endereco);

    printf("Nome: %s \nCPF: %ld \nRG: %d \nAltura: %.2f \nEndereco: %s", nome, cpf, rg, altura, endereco);

    return 0;
}
