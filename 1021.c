#include <stdio.h>
 
int main() {

double valor=0.0;
int nota_100=0;
int nota_50=0;
int nota_20=0;
int nota_10=0;
int nota_5=0;
int nota_2=0;
int moeda_1=0;
int moeda0_50=0;
int moeda0_25=0;
int moeda0_10=0;
int moeda0_05=0;
int moeda0_01=0;


scanf("%lf",&valor);


if(valor >=100){
    nota_100=valor/100;
    valor=valor-(nota_100*100);
}

if(valor <100 && valor >=50){
    nota_50=valor/50;
    valor=valor-(nota_50*50);
}
 
if(valor <50 && valor >=20){
    nota_20=valor/20;
    valor=valor-(nota_20*20);
}

if(valor <20 && valor >=10){
    nota_10=valor/10;
    valor=valor-(nota_10*10);
}

if(valor <10 && valor >=5){
    nota_5=valor/5;
    valor=valor-(nota_5*5);
}

if(valor <5 && valor >=2){
    nota_2=valor/2;
    valor=valor-(nota_2*2);
}

if(valor <2 && valor >=1){
    moeda_1=valor/1;
    valor=valor-(moeda_1*1);
}

if(valor <1 && valor >=0.50){
    moeda0_50=valor/0.50;
    valor=valor-(moeda0_50*0.5);
}

if(valor <0.50 && valor >=0.25){
    moeda0_25=valor/0.25;
    valor=valor-(moeda0_25*0.25);
}

if(valor <0.25 && valor >=0.10){
    moeda0_10=valor/0.10;
    valor=valor-(moeda0_10*0.1);
}

if(valor <0.10 && valor >=0.05){
    moeda0_05=valor/0.05;
    valor=valor-(moeda0_05*0.05);
}

if(valor <0.05 && valor >=0.01){
    moeda0_01=valor/0.01;
    valor=valor-(moeda0_01*0.01);
}


printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", nota_100);
printf("%d nota(s) de R$ 50.00\n", nota_50);
printf("%d nota(s) de R$ 20.00\n", nota_20);
printf("%d nota(s) de R$ 10.00\n", nota_10);
printf("%d nota(s) de R$ 5.00\n", nota_5);
printf("%d nota(s) de R$ 2.00\n", nota_2);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", moeda_1);
printf("%d moeda(s) de R$ 0.50\n", moeda0_50);
printf("%d moeda(s) de R$ 0.25\n", moeda0_25);
printf("%d moeda(s) de R$ 0.10\n", moeda0_10);
printf("%d moeda(s) de R$ 0.05\n", moeda0_05);
printf("%d moeda(s) de R$ 0.01\n", moeda0_01);

    return 0;
}