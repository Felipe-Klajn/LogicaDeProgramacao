#include <stdio.h>
#include <stdlib.h>

#define MAX_PRODUTOS 100

// Definição da struct (sem typedef)
struct Produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

// Vetor global de produtos
struct Produto estoque[MAX_PRODUTOS];
int totalProdutos = 0;

// Protótipos das funções
void carregarDados();
void salvarDados();
void cadastrarProduto();
void listarProdutos();
void buscarProduto();
void atualizarQuantidade();
void calcularValorTotal();

int main() {
    int opcao;

    // Carregar os dados do arquivo ao iniciar o programa
    carregarDados();

    do {
        printf("\n===== SISTEMA DE ESTOQUE =====\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar todos os produtos\n");
        printf("3. Buscar produto por codigo\n");
        printf("4. Atualizar quantidade em estoque\n");
        printf("5. Calcular valor total do estoque\n");
        printf("6. Salvar dados\n");
        printf("7. Encerrar programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                buscarProduto();
                break;
            case 4:
                atualizarQuantidade();
                break;
            case 5:
                calcularValorTotal();
                break;
            case 6:
                salvarDados();
                printf("Dados salvos com sucesso!\n");
                break;
            case 7:
                salvarDados(); // Salva antes de sair
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 7);

    return 0;
}

// Função para carregar os dados do arquivo
void carregarDados() {
    FILE *arquivo = fopen("estoque.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum dado encontrado. Criando novo arquivo...\n");
        return;
    }

    totalProdutos = 0;
    while (fscanf(arquivo, "%d;%49[^;];%d;%f\n",
                  &estoque[totalProdutos].codigo,
                  estoque[totalProdutos].nome,
                  &estoque[totalProdutos].quantidade,
                  &estoque[totalProdutos].preco) == 4) {
        totalProdutos++;
    }

    fclose(arquivo);
}

// Função para salvar os dados no arquivo
void salvarDados() {
    FILE *arquivo = fopen("estoque.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para salvar!\n");
        return;
    }

    for (int i = 0; i < totalProdutos; i++) {
        fprintf(arquivo, "%d;%s;%d;%.2f\n",
                estoque[i].codigo,
                estoque[i].nome,
                estoque[i].quantidade,
                estoque[i].preco);
    }

    fclose(arquivo);
}

// Função para cadastrar um novo produto
void cadastrarProduto() {
    if (totalProdutos >= MAX_PRODUTOS) {
        printf("Estoque cheio! Nao e possivel cadastrar mais produtos.\n");
        return;
    }

    struct Produto novo;  // agora precisa escrever "struct Produto"
    printf("Digite o codigo do produto: ");
    scanf("%d", &novo.codigo);

    // Verificar se o código já existe
    for (int i = 0; i < totalProdutos; i++) {
        if (estoque[i].codigo == novo.codigo) {
            printf("Erro: Codigo ja existente!\n");
            return;
        }
    }

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", novo.nome); // lê string com espaços até Enter

    printf("Digite a quantidade: ");
    scanf("%d", &novo.quantidade);

    printf("Digite o preco unitario: ");
    scanf("%f", &novo.preco);

    estoque[totalProdutos] = novo;
    totalProdutos++;

    printf("Produto cadastrado com sucesso!\n");
}

// Função para listar todos os produtos
void listarProdutos() {
    if (totalProdutos == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("\n===== LISTA DE PRODUTOS =====\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("Codigo: %d\n", estoque[i].codigo);
        printf("Nome: %s\n", estoque[i].nome);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("Preco: R$ %.2f\n", estoque[i].preco);
        printf("-----------------------------\n");
    }
}

// Função para buscar um produto pelo código
void buscarProduto() {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < totalProdutos; i++) {
        if (estoque[i].codigo == codigo) {
            printf("\nProduto encontrado:\n");
            printf("Codigo: %d\n", estoque[i].codigo);
            printf("Nome: %s\n", estoque[i].nome);
            printf("Quantidade: %d\n", estoque[i].quantidade);
            printf("Preco: R$ %.2f\n", estoque[i].preco);
            return;
        }
    }

    printf("Produto nao encontrado!\n");
}

// Função para atualizar a quantidade em estoque
void atualizarQuantidade() {
    int codigo, qtd;
    char opcao;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < totalProdutos; i++) {
        if (estoque[i].codigo == codigo) {
            printf("Produto encontrado: %s\n", estoque[i].nome);
            printf("Quantidade atual: %d\n", estoque[i].quantidade);

            printf("Deseja adicionar (E) ou retirar (S) unidades? ");
            scanf(" %c", &opcao);

            if (opcao == 'E' || opcao == 'e') {
                printf("Digite a quantidade a adicionar: ");
                scanf("%d", &qtd);
                estoque[i].quantidade += qtd;
                printf("Quantidade atualizada com sucesso!\n");
            }
            else if (opcao == 'S' || opcao == 's') {
                printf("Digite a quantidade a retirar: ");
                scanf("%d", &qtd);
                if (qtd > estoque[i].quantidade) {
                    printf("Erro: quantidade insuficiente em estoque!\n");
                } else {
                    estoque[i].quantidade -= qtd;
                    printf("Quantidade atualizada com sucesso!\n");
                }
            } else {
                printf("Opcao invalida!\n");
            }
            return;
        }
    }

    printf("Produto nao encontrado!\n");
}

// Função para calcular o valor total do estoque
void calcularValorTotal() {
    float total = 0;
    for (int i = 0; i < totalProdutos; i++) {
        total += estoque[i].quantidade * estoque[i].preco;
    }

    printf("Valor total do estoque: R$ %.2f\n", total);
}