#include <stdio.h>

typedef struct
{
	char nome[50];
	float nota_p1;
	float nota_p2;
	float nota_final;
} Aluno;

int calcula_desempenho(Aluno alunos[], int num_alunos);

int main()
{
	Aluno alunos[50];
	int num_alunos = 0;
	int aprovados = 0;

	printf("Digite a quantidade de alunos: ");
	scanf("%d", &num_alunos);

	for (int i = 0; i < num_alunos; i++)
	{
		printf("Digite o nome do aluno %d ", i + 1);
		scanf(" %[^\n]", alunos[i].nome);

		printf("Digite a nota 1 do aluno %d ", i + 1);
		scanf("%f", &alunos[i].nota_p1);

		printf("Digite a nota 2 do aluno %d ", i + 1);
		scanf("%f", &alunos[i].nota_p2);
	}
	aprovados = calcula_desempenho(alunos, num_alunos);
	printf("Quantidade de aprovados: %d ", aprovados);

	return 0;
}

int calcula_desempenho(Aluno alunos[], int num_alunos)
{
	int aprovados = 0;
	for (int i = 0; i < num_alunos; i++)
	{
		alunos[i].nota_final = (alunos[i].nota_p1 + alunos[i].nota_p2) / 2;
		if (alunos[i].nota_final >= 7)
		{
			printf("Média %2.f, %s aprovado! ", alunos[i].nota_final, alunos[i].nome);
			aprovados++;
		}
		else
		{
			printf("Média %2.f, %s reprovado :(", alunos[i].nota_final, alunos[i].nome);
		}
	}
	return aprovados;
}
