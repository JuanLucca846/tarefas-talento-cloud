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

    strcpy(nome, "José Almeida da Silva");
    cpf = 12345678900;
    rg = 9517530;
    altura = 1.78;
    strcpy(endereco, "Rua A, 380 – Centro – Recife/PE");

    printf("Nome: %s \nCPF: %ld \nRG: %d \nAltura: %f \nEndereco: %s", nome, cpf, rg, altura, endereco);

    return 0;
}
