#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


// Estrutura principal

typedef struct Produto
{
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
} prod;


// Protótipos das funções

void Menu();
void ZerarString(char *texto, int tamanho);
void NullStruct(prod *vetor);
void CadastrarProduto(prod *estoque);
void ListarProdutos(prod *estoque);
void BuscarProduto(prod *estoque);
void AtualizarQuantidade(prod *estoque);
void CalcularValorTotal(prod *estoque);
void OrdenarProdutos(prod *estoque);
void BubbleSortCodigo(prod *v, int tam, int crescente);
void BubbleSortPreco(prod *v, int tam, int crescente);


// Função principal

int main()
{
    prod estoque[1000];
    int opcao = 0;

    NullStruct(estoque);

    do
    {
        Menu();
        scanf("%d", &opcao);
        system("cls");

        switch(opcao)
        {
            case 1:
                CadastrarProduto(estoque);
                break;

            case 2:
                ListarProdutos(estoque);
                break;

            case 3:
                BuscarProduto(estoque);
                break;

            case 4:
                AtualizarQuantidade(estoque);
                break;

            case 5:
                CalcularValorTotal(estoque);
                break;

            case 6:
                OrdenarProdutos(estoque);
                break;

            case 7:
                printf("Encerrando o sistema...\n");
                break;

            default:
                printf("Opcao invalida! Escolha novamente.\n");
        }

        system("pause");
        system("cls");

    } while(opcao != 7);

    return 0;
}


// Implementações das funções

void Menu()
{
    printf("|***********************************************|\n");
    printf("|*      SISTEMA DE GERENCIAMENTO DE ESTOQUE    *|\n");
    printf("|***********************************************|\n");
    printf("|   1 - Cadastrar produto                      |\n");
    printf("|   2 - Listar todos os produtos               |\n");
    printf("|   3 - Buscar produto por codigo              |\n");
    printf("|   4 - Atualizar quantidade em estoque        |\n");
    printf("|   5 - Calcular valor total do estoque        |\n");
    printf("|   6 - Ordenar produtos                       |\n");
    printf("|   7 - Encerrar programa                      |\n");
    printf("|***********************************************|\n");
    printf("Escolha uma opcao: ");
}

void ZerarString(char *texto, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        texto[i] = '\0';
    }
}

void NullStruct(prod *vetor)
{
    for (int i = 0; i < 1000; i++)
    {
        ZerarString(vetor[i].nome, 50);
        vetor[i].codigo = -1;
        vetor[i].quantidade = -1;
        vetor[i].preco = -1.0;
    }
}

void CadastrarProduto(prod *estoque)
{
    FILE *arq = fopen("estoque.txt", "a");
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int qtd;
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++)
    {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", estoque[i].nome);
        printf("Codigo: ");
        scanf("%d", &estoque[i].codigo);
        printf("Quantidade: ");
        scanf("%d", &estoque[i].quantidade);
        printf("Preco: ");
        scanf("%f", &estoque[i].preco);

        fprintf(arq, "%s\n%d\n%d\n%.2f\n", estoque[i].nome, estoque[i].codigo, estoque[i].quantidade, estoque[i].preco);
    }

    fclose(arq);
    printf("\nProdutos cadastrados com sucesso!\n");
}

void ListarProdutos(prod *estoque)
{
    FILE *arq = fopen("estoque.txt", "r");
    if (arq == NULL)
    {
        printf("Nenhum arquivo encontrado.\n");
        return;
    }

    int i = 0;
    printf("|==============================================================|\n");
    printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");

    while (fscanf(arq, "%[^\n]\n%d\n%d\n%f\n", estoque[i].nome, &estoque[i].codigo, &estoque[i].quantidade, &estoque[i].preco) != EOF)
    {
        printf("|%5d|%26s|%12d|%16.2f|\n", estoque[i].codigo, estoque[i].nome, estoque[i].quantidade, estoque[i].preco);
        i++;
    }

    printf("|==============================================================|\n");
    fclose(arq);
}

void BuscarProduto(prod *estoque)
{
    FILE *arq = fopen("estoque.txt", "r");
    if (arq == NULL)
    {
        printf("Arquivo nao encontrado.\n");
        return;
    }

    int cod;
    int encontrado = 0;
    printf("Informe o codigo do produto: ");
    scanf("%d", &cod);

    while (fscanf(arq, "%[^\n]\n%d\n%d\n%f\n", estoque[0].nome, &estoque[0].codigo, &estoque[0].quantidade, &estoque[0].preco) != EOF)
    {
        if (estoque[0].codigo == cod)
        {
            printf("\nProduto encontrado:\n");
            printf("Nome: %s\nCodigo: %d\nQuantidade: %d\nPreco: %.2f\n", estoque[0].nome, estoque[0].codigo, estoque[0].quantidade, estoque[0].preco);
            encontrado = 1;
        }
    }

    if (!encontrado)
        printf("Produto nao encontrado.\n");

    fclose(arq);
}

void AtualizarQuantidade(prod *estoque)
{
    FILE *arq = fopen("estoque.txt", "r");
    if (arq == NULL)
    {
        printf("Arquivo nao encontrado.\n");
        return;
    }

    int i = 0;
    while (fscanf(arq, "%[^\n]\n%d\n%d\n%f\n", estoque[i].nome, &estoque[i].codigo, &estoque[i].quantidade, &estoque[i].preco) != EOF)
    {
        i++;
    }
    fclose(arq);

    int cod, novaQtd;
    printf("Informe o codigo do produto que deseja atualizar: ");
    scanf("%d", &cod);

    for (int j = 0; j < i; j++)
    {
        if (estoque[j].codigo == cod)
        {
            printf("Quantidade atual: %d\n", estoque[j].quantidade);
            printf("Nova quantidade: ");
            scanf("%d", &novaQtd);
            estoque[j].quantidade = novaQtd;
        }
    }

    arq = fopen("estoque.txt", "w");
    for (int j = 0; j < i; j++)
    {
        fprintf(arq, "%s\n%d\n%d\n%.2f\n", estoque[j].nome, estoque[j].codigo, estoque[j].quantidade, estoque[j].preco);
    }
    fclose(arq);
    printf("\nQuantidade atualizada com sucesso!\n");
}

void CalcularValorTotal(prod *estoque)
{
    FILE *arq = fopen("estoque.txt", "r");
    if (arq == NULL)
    {
        printf("Arquivo nao encontrado.\n");
        return;
    }

    float total = 0.0;
    while (fscanf(arq, "%[^\n]\n%d\n%d\n%f\n", estoque[0].nome, &estoque[0].codigo, &estoque[0].quantidade, &estoque[0].preco) != EOF)
    {
        total += estoque[0].quantidade * estoque[0].preco;
    }

    fclose(arq);
    printf("Valor total do estoque: R$ %.2f\n", total);
}


// Bubble Sort

void BubbleSortCodigo(prod *v, int tam, int crescente)
{
    prod aux;
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if ((crescente && v[j].codigo > v[j + 1].codigo) || (!crescente && v[j].codigo < v[j + 1].codigo))
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void BubbleSortPreco(prod *v, int tam, int crescente)
{
    prod aux;
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if ((crescente && v[j].preco > v[j + 1].preco) || (!crescente && v[j].preco < v[j + 1].preco))
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void OrdenarProdutos(prod *estoque)
{
    FILE *arq = fopen("estoque.txt", "r");
    if (arq == NULL)
    {
        printf("Arquivo nao encontrado.\n");
        return;
    }

    int i = 0;
    while (fscanf(arq, "%[^\n]\n%d\n%d\n%f\n", estoque[i].nome, &estoque[i].codigo, &estoque[i].quantidade, &estoque[i].preco) != EOF)
    {
        i++;
    }
    fclose(arq);

    int criterio, ordem;
    printf("Escolha o criterio de ordenacao:\n1 - Codigo\n2 - Preco\n");
    scanf("%d", &criterio);
    printf("Escolha a ordem:\n1 - Crescente\n2 - Decrescente\n");
    scanf("%d", &ordem);

    if (criterio == 1)
        BubbleSortCodigo(estoque, i, ordem == 1);
    else
        BubbleSortPreco(estoque, i, ordem == 1);

    printf("\nProdutos ordenados:\n");
    for (int j = 0; j < i; j++)
    {
        printf("%d - %s | Qtd: %d | R$ %.2f\n", estoque[j].codigo, estoque[j].nome, estoque[j].quantidade, estoque[j].preco);
    }
}
