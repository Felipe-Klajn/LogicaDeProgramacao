#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
char m[35][35];
int var;
srand(time (NULL));

for (int l=0; l<35; l++)
{
	for (int c=0; c<35; c++)
	{
		var = (rand() % 26) + 97;
		m[l][c] = (char)var;
	}
}

for (int l=0; l<35;l++)
{
	printf("|");
	for(int c=0; c<35; c++)
	{
		printf(" %c ", m[l][c]);
	}
	printf("|\n");
}
return 0;
}
