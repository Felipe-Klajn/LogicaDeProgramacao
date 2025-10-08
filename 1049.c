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
    char p1[20], p2[20], p3[20];
    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);

    if (iguais(p1, "vertebrado")) {
        if (iguais(p2, "ave")) {
            if (iguais(p3, "carnivoro"))
                printf("aguia\n");
            else
                printf("pomba\n");
        } else { // mamifero
            if (iguais(p3, "onivoro"))
                printf("homem\n");
            else
                printf("vaca\n");
        }
    } else { // invertebrado
        if (iguais(p2, "inseto")) {
            if (iguais(p3, "hematofago"))
                printf("pulga\n");
            else
                printf("lagarta\n");
        } else { // anelideo
            if (iguais(p3, "hematofago"))
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }

    return 0;
}