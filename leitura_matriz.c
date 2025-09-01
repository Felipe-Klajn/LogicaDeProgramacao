#include <stdio.h>
int main()
{
	int m[3][3];
	printf("Vamos realizar uma leitura de uma matriz 3x3\n");
	for(int l = 0; l<3; l++)
	{
		for(int c = 0; c<3; c++)
		{
			printf("[%d][%d]",l,c);
			scanf ("%d", &m[l][c]);
		}
	}
	
	for(int l = 0; l<3; l++)
	{
		printf("|");
		for(int c = 0; c<3; c++)
		{
			printf("%d", m[l][c]);
		}
		printf("|\n");
	}
	
	
	
	
	return (0);
}