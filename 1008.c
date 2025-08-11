#include <stdio.h>
 
int main() {
 
 int number=0;
 int horas=0;
 double valor=0.0;
 double salario=0.0;
 
 scanf("%d",&number);
 scanf("%d",&horas);
 scanf("%lf",&valor);
 
 salario=horas*valor;
 
 printf("NUMBER = %d\n",number);
 printf("SALARY = U$ %.2lf\n",salario);
    return 0;
}