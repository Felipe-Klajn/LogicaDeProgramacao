#include <stdio.h>
 
int main() {
 
int tempo=0;
int hora=0;
int minuto=0;
int segundo=0;

scanf("%d",&tempo);

if(tempo >=3600){
    hora=tempo/3600;
    tempo=tempo-(hora*3600);
}

if(tempo<3600 && tempo>=60){
    minuto=tempo/60;
    tempo=tempo-(minuto*60);
}

if(tempo<60 && tempo>=0){
    segundo=tempo;
}

printf("%d:%d:%d\n",hora,minuto,segundo);

    return 0;
}