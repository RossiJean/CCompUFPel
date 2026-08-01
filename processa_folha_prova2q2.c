#include <stdio.h>

typedef struct
{
    char nome[50];
    float salario_bruto;
    float desconto;
    float salario_liquido;
} Funcionario;

float processa_folha(Funcionario funcionarios[], int qtd_funcionarios);

int main()
{
    int n;
    float media;

    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &n);

    Funcionario funcionarios[n];

    for (int i = 0; i < n; i++)
    {
        printf("Nome: ");
        scanf("%s", funcionarios[i].nome);
        printf("Salário bruto: ");
        scanf("%f", &funcionarios[i].salario_bruto);
        printf("Desconto: ");
        scanf("%f", &funcionarios[i].desconto);
    }

    media = processa_folha(funcionarios, n);
    printf("Media dos salarios liquidos: %.2f\n", media);

    return 0;
}

float processa_folha(Funcionario funcionarios[], int qtd_funcionarios)
{
    float soma = 0;
    for (int i = 0; i < qtd_funcionarios; i++)
    {
        funcionarios[i].salario_liquido = funcionarios[i].salario_bruto - funcionarios[i].desconto;
        soma += funcionarios[i].salario_liquido;
        printf("%s: Bruto R$ %.2f, Desconto R$ %.2f => Liquido calculado: R$ %.2f\n", funcionarios[i].nome,
               funcionarios[i].salario_bruto,
               funcionarios[i].desconto,
               funcionarios[i].salario_liquido);
    }
    return soma / qtd_funcionarios;
}