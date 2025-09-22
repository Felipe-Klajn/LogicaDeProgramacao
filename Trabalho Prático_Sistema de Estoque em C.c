#include <stdio.h>
#include <stdlib.h>

#define maximo_produtos 100

struct Produto {
    int codigo;
    char nome[100];
    int quantidade;
    float preco;
};

struct Produto estoque [maximo_produtos];
int total_produtos = 0;

void cadastrar_produto();
void listar_produtos();
void buscar_produto();
void atualizar_quantidade();
void calcular_valor_total();
void carregar_dados();
void salvar_dados();

int main() {
    int opcao;

    carregar_dados();

    do {
        printf("\n----- SISTEMA DE ESTOQUE -----\n");
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
                cadastrar_produto();
                break;
            case 2:
                listar_produtos();
                break;
            case 3:
                buscar_produto();
                break;
            case 4:
                atualizar_quantidade();
                break;
            case 5:
                calcular_valor_total();
                break;
            case 6:
                salvar_dados();
                printf("Dados salvos!\n");
                break;
            case 7:
                salvar_dados();
                printf("Encerrando o programa!\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 7);

    return 0;
}

// Cadastrar produto
void cadastrar_produto() {
    if (total_produtos >= maximo_produtos) {
        printf("Nao e possivel mais cadastrar produtos, estoque cheio!\n");
        return;
    }

    struct Produto novo;
    printf("Digite o codigo do produto:\n");
    scanf("%d", &novo.codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (estoque[i].codigo == novo.codigo) {
            printf("Erro: Codigo ja existente!\n");
            return;
        }
    }

    printf("Digite o nome do produto:\n ");
    scanf(" %[^\n]", novo.nome);

    printf("Digite a quantidade:\n ");
    scanf("%d", &novo.quantidade);

    printf("Digite o preco unitario:\n ");
    scanf("%f", &novo.preco);

    estoque[total_produtos] = novo;
    total_produtos++;

    printf("Produto cadastrado com sucesso!\n");
}

//Listar os produtos
void listar_produtos(){
	if (total_produtos == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("----- LISTA DE PRODUTOS -----\n");
    for (int i = 0; i < total_produtos; i++) {
        printf("Codigo: %d\n", estoque[i].codigo);
        printf("Nome: %s\n", estoque[i].nome);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("Preco: R$ %.2f\n", estoque[i].preco);
		printf("---------------\n");
    }
}

// Buscar produto pelo código
void buscar_produto() {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (estoque[i].codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Codigo: %d\n", estoque[i].codigo);
            printf("Nome: %s\n", estoque[i].nome);
            printf("Quantidade: %d\n", estoque[i].quantidade);
            printf("Preco: R$ %.2f\n", estoque[i].preco);
            return;
        }
		else{
			printf("produto nao encontrado!\n");
    }
	}
}

// Atualizar quantidade em estoque

void atualizar_quantidade() {
    int codigo;
	int quantidade;
    char opcao;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (estoque[i].codigo == codigo) {
            printf("Produto encontrado: %s\n", estoque[i].nome);
            printf("Quantidade atual: %d\n", estoque[i].quantidade);

            printf("Deseja adicionar (A) ou retirar (R) unidades?\n ");
            scanf(" %c", &opcao);

            if (opcao == 'A' || opcao == 'a') {
                printf("Digite a quantidade a adicionar:\n ");
                scanf("%d", &quantidade);
                estoque[i].quantidade += quantidade;
                printf("Quantidade atualizada!\n");
            }
            else if (opcao == 'R' || opcao == 'r') {
                printf("Digite a quantidade a retirar:\n ");
                scanf("%d", &quantidade);
                if (quantidade > estoque[i].quantidade) {
                    printf("Erro: nao ha quantidade suficiente em estoque!\n");
                } else {
                    estoque[i].quantidade -= quantidade;
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

// calcular valor total do estoque
void calcular_valor_total() {
    float total = 0;
    for (int i = 0; i < total_produtos; i++) {
        total += estoque[i].quantidade * estoque[i].preco;
    }

    printf("Valor total do estoque: R$ %.2f\n", total);
}

// carregar dados em arquivo
void carregar_dados() {
    FILE *arquivo = fopen("estoque.txt", "r");
    if (arquivo == NULL) {
        printf("Criando um novo arquivo\n");
        return;
    }

    total_produtos = 0;
    while (fscanf(arquivo, "%d;%99[^;];%d;%f\n",
                  &estoque[total_produtos].codigo,
                  estoque[total_produtos].nome,
                  &estoque[total_produtos].quantidade,
                  &estoque[total_produtos].preco) == 4) {
        total_produtos++;
    }

    fclose(arquivo);
}

// salvar dados em arquivo
void salvar_dados() {
    FILE *arquivo = fopen("estoque.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para salvar!\n");
        return;
    }

    for (int i = 0; i < total_produtos; i++) {
        fprintf(arquivo, "%d;%s;%d;%.2f\n",
                estoque[i].codigo,
                estoque[i].nome,
                estoque[i].quantidade,
                estoque[i].preco);
    }

    fclose(arquivo);
}