#include <stdio.h>
 
int main() {
 
int cod1=0;
int num1=0;
float value1=0.0;
float result1=0.0;
int cod2=0;
int num2=0;
float value2=0.0;
float result2=0.0;
float result_final=0.0;

scanf("%d",&cod1);
scanf("%d",&num1);
scanf("%f",&value1);
result1=num1*value1;

scanf("%d",&cod2);
scanf("%d",&num2);
scanf("%f",&value2);
result2=num2*value2;

result_final=result1+result2;

printf("VALOR A PAGAR: R$ %.2f\n",result_final);
 
    return 0;
}