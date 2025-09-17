#include <stdio.h>
#include <stdlib.h>

struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;


void carregarDados(Produto produtos[], int *qtd);
void salvarDados(Produto produtos[], int qtd);
void cadastrarProduto(Produto produtos[], int *qtd);
void listarProdutos(Produto produtos[], int qtd);
void buscarProduto(Produto produtos[], int qtd);
void atualizarQuantidade(Produto produtos[], int qtd);
void calcularValorTotal(Produto produtos[], int qtd);

int main() {
    Produto produtos[MAX_PRODUTOS];
    int qtd = 0;
    int opcao;

    carregarDados(produtos, &qtd);

    do {
        printf("\n===== SISTEMA DE ESTOQUE =====\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar todos os produtos\n");
        printf("3. Buscar produto por codigo\n");
        printf("4. Atualizar quantidade em estoque\n");
        printf("5. Calcular valor total do estoque\n");
        printf("6. Salvar dados\n");
        printf("7. Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrarProduto(produtos, &qtd); break;
            case 2: listarProdutos(produtos, qtd); break;
            case 3: buscarProduto(produtos, qtd); break;
            case 4: atualizarQuantidade(produtos, qtd); break;
            case 5: calcularValorTotal(produtos, qtd); break;
            case 6: salvarDados(produtos, qtd); break;
            case 7: salvarDados(produtos, qtd); printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while(opcao != 7);

    return 0;
}

// Implementações
void carregarDados(Produto produtos[], int *qtd) {
    FILE *file = fopen("estoque.txt", "r");
    if (file == NULL) {
        printf("Nenhum arquivo encontrado. Criando novo...\n");
        return;
    }
    while (fscanf(file, "%d %s %d %f", 
                  &produtos[*qtd].codigo, 
                  produtos[*qtd].nome, 
                  &produtos[*qtd].quantidade, 
                  &produtos[*qtd].preco) == 4) {
        (*qtd)++;
    }
    fclose(file);
}

void salvarDados(Produto produtos[], int qtd) {
    FILE *file = fopen("estoque.txt", "w");
    if (file == NULL) {
        printf("Erro ao salvar arquivo!\n");
        return;
    }
    for (int i = 0; i < qtd; i++) {
        fprintf(file, "%d %s %d %.2f\n", 
                produtos[i].codigo, 
                produtos[i].nome, 
                produtos[i].quantidade, 
                produtos[i].preco);
    }
    fclose(file);
    printf("Dados salvos com sucesso!\n");
}

void cadastrarProduto(Produto produtos[], int *qtd) {
    if (*qtd >= MAX_PRODUTOS) {
        printf("Estoque cheio!\n");
        return;
    }
    printf("Digite o codigo do produto: ");
    scanf("%d", &produtos[*qtd].codigo);
    printf("Digite o nome do produto: ");
    scanf("%s", produtos[*qtd].nome);
    printf("Digite a quantidade: ");
    scanf("%d", &produtos[*qtd].quantidade);
    printf("Digite o preco unitario: ");
    scanf("%f", &produtos[*qtd].preco);

    (*qtd)++;
    printf("Produto cadastrado com sucesso!\n");
}