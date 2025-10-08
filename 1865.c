#include <stdio.h>

int iguais(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i])
            return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}

int main() {
    int C, forca;
    char nome[100];

    scanf("%d", &C);

    for (int i = 0; i < C; i++) {
        scanf("%s %d", nome, &forca);
        if (iguais(nome, "Thor"))
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}