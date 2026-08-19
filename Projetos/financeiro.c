#include <stdio.h>

typedef struct {
  const char *nome;
  float percentual;
} Categoria;

int main(void) {
  float salario;

  Categoria categorias[] = {{"Reserva", 0.40},           {"Notebook", 0.30}, {"Qualidade de vida", 0.10},
                            {"Livros e Jogos", 0.05},    {"Cinema", 0.05},   {"Lazer Diário", 0.05},
                            {"Manter na carteira", 0.05}};

  int quantidade = sizeof(categorias) / sizeof(categorias[0]);

  printf("Quanto sobrou esse mês? ");
  scanf("%f", &salario);

  printf("\n--- Distribuição ---\n");

  for (int i = 0; i < quantidade; i++) {
    printf("%-25s R$ %.2f\n", categorias[i].nome, salario * categorias[i].percentual);
  }

  return 0;
}
