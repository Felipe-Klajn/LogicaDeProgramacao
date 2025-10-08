#include <stdio.h>
 
int main() {
 
int dias_idade=0;
int anos=0;
int meses=0;
int dias=0;

scanf("%d",&dias_idade);

if(dias_idade>=365){
    anos=dias_idade/365;
    dias_idade=dias_idade-(anos*365);
}

if(dias_idade<365 && dias_idade>=30){
    meses=dias_idade/30;
    dias_idade=dias_idade-(meses*30);
}

if(dias_idade<30 && dias_idade>=0){
    dias=dias_idade;
}

printf("%d ano(s)\n",anos);
printf("%d mes(es)\n",meses);
printf("%d dia(s)\n",dias);

    return 0;
}