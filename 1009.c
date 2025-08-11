#include <stdio.h>
 
int main() {
 
 char nome[20];
 double salario=0.00;
 double vendas=0.00;
 double salario_final=0.00;
 
 scanf("%s", nome);
 scanf("%lf",&salario);
 scanf("%lf",&vendas);
 
 salario_final=salario+(vendas*0.15);
 
 printf("TOTAL = R$ %.2lf\n",salario_final);
 
    return 0;
}