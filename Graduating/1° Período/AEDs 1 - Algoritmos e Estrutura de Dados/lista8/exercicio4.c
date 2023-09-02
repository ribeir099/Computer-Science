#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Criando a struct para cadastro dos livros;
struct Livro
{
  int codigo;
  char doacao;
  char obra[100];
  char autor[100];
  char editora[100];
  char area[100];
};

typedef struct Livro livro;

// Função para cadastros dos livros;
void cadastroLivros(livro livros[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("\n Livro %d \n", i + 1);
    printf("\n Codigo: ");
    scanf("%d", &livros[i].codigo);
    printf("\n Doacao: ");
    scanf(" %c", &livros[i].doacao);
    printf("\n Obra: ");
    scanf("%s", &livros[i].obra);
    printf("\n Autor: ");
    scanf("%s", &livros[i].autor);
    printf("\n Editora: ");
    scanf("%s", &livros[i].editora);
    printf("\n Area: ");
    scanf("%s", &livros[i].area);
  }
}

int main()
{
  int livrosExatas, livrosHumanas, livrosBiologicas;

  // Recebendo a quantidade de livros que serao cadastrados para cada area;
  printf("\n\n Quantos livros de Exatas deseja cadastrar: ");
  scanf("%d", &livrosExatas);
  printf("\n\n Quantos livros de Humanas deseja cadastrar: ");
  scanf("%d", &livrosHumanas);
  printf("\n\n Quantos livros de Biologicas deseja cadastrar: ");
  scanf("%d", &livrosBiologicas);

  // Criando os Livros;
  livro exatas[livrosExatas], humanas[livrosHumanas], biologicas[livrosBiologicas];

  // Preenchendo os livros;
  printf("\n Cadastro de Livros de Exatas.");
  cadastroLivros(exatas, livrosExatas);
  printf("\n Cadastro de Livros de Humanas.");
  cadastroLivros(humanas, livrosHumanas);
  printf("\n Cadastro de Livros de Biologicas.");
  cadastroLivros(biologicas, livrosBiologicas);

  int codigo = 0;
  char area[100];
  int achou = 0;
  do
  {
    printf("\n Digite o codigo do livro: ");
    scanf("%d", &codigo);
    printf("\n Digite a area do livro: ");
    scanf("%s", &area);

    achou = 0;
    // Verificando se o usuario deseja sair do programa ;
    if (codigo != -1)
    { 
      // Verificando se o livro procurado é de exatas;
      if (!(strcmp(exatas[0].area, area)))
      { 
        // Procurando o livro no array da area selecionada;
        for (int i = 0; i < livrosExatas; i++)
        { 
          // Encontrando e exibindo as informaçoes do livro procurado;
          if (exatas[i].codigo == codigo)
          {
            achou = 1;
            printf("\n Livro: %s.", exatas[i].obra);
            printf("\n Codigo: %d", exatas[i].codigo);
            printf("\n Autor: %s.", exatas[i].autor);
            printf("\n Editora: %s.", exatas[i].editora);
            printf("\n Doacao: %c.", exatas[i].doacao);
            printf("\n Area: %s.\n\n", exatas[i].area);
            break;
          }
        }
        // Caso não encontre o livro é exibido uma mensagem de erro;
        if (!achou)
        {
          printf("\n Erro, livro nao encontado.\n Tente novamente.\n");
        }
      }
      // Verificando se o livro procurado é de humanas;
      else if (!(strcmp(humanas[0].area, area)))
      {
        for (int i = 0; i < livrosHumanas; i++)
        {
          if (humanas[i].codigo == codigo)
          {
            achou = 1;
            printf("\n Livro: %s.", humanas[i].obra);
            printf("\n Codigo: %d", humanas[i].codigo);
            printf("\n Autor: %s.", humanas[i].autor);
            printf("\n Editora: %s.", humanas[i].editora);
            printf("\n Doacao: %c.", humanas[i].doacao);
            printf("\n Area: %s.\n\n", humanas[i].area);
            break;
          }
        }
        if (!achou)
        {
          printf("\n Erro, livro nao encontado.\n Tente novamente.\n");
        }
      }
      // Verificando se o livro procurado é de biologicas;
      else if (!(strcmp(biologicas[0].area, area)))
      {
        for (int i = 0; i < livrosBiologicas; i++)
        {
          if (biologicas[i].codigo == codigo)
          {
            achou = 1;
            printf("\n Livro: %s.", biologicas[i].obra);
            printf("\n Codigo: %d", biologicas[i].codigo);
            printf("\n Autor: %s.", biologicas[i].autor);
            printf("\n Editora: %s.", biologicas[i].editora);
            printf("\n Doacao: %c.", biologicas[i].doacao);
            printf("\n Area: %s.\n\n", biologicas[i].area);
            break;
          }
        }
        // Mensagem de erro caso não encontre o livro;
        if (!achou)
        {
          printf("\n Erro, livro nao encontado.\n Tente novamente.\n");
        }
      } else {
        // Mensagem de erro caso não encontre o livro;
        printf("\n Erro, livro nao encontado.\n Tente novamente.\n");
      }
    }
  } while (codigo != -1);

  return 0;
}