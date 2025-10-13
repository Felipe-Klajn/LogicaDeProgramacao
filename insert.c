#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>

int main() {
	// Variáveis
    char nome[15];
	int codigo = 0;
    int quantidade = 0;
    double preco = 0.0;
	
    // String de conexão — ajuste os dados conforme seu banco
    const char *conninfo = "host=localhost port=5432 dbname=Estoque user=postgres password=123456";

    // Conecta ao banco
    PGconn *conn = PQconnectdb(conninfo);

    // Verifica se a conexão deu certo
    if (PQstatus(conn) != CONNECTION_OK) {
        fprintf(stderr, "Erro de conexão: %s\n", PQerrorMessage(conn));
        PQfinish(conn);
        return 1;
    }
	
	// Executa uma consulta simples
    PGresult *res = PQexec(conn, "SELECT * FROM produto;");

    printf("Conectado ao banco com sucesso!\n");

	printf("informe o nome: ");
	scanf("%s",nome);
	printf("digite o codigo: ");
	scanf("%d",&codigo);
	printf("informe a quantidade: ");
	scanf("%d",&quantidade);
	printf("informe o valor: ");
	scanf("%lf",&preco);
	
    char *sql = malloc(256 * sizeof(char));
	
	sprintf(sql,"INSERT INTO produto (nome, codigo, quantidade, preco) VALUES ('%s', %d, %d, %2.lf);", nome, codigo, quantidade, preco); 
    res = PQexec(conn, sql);

    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "Erro no INSERT: %s\n", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        return 1;
    }

    printf("Insercao realizada com sucesso!\n");
	free(sql);
    PQclear(res);
    PQfinish(conn);
    return 0;
}	