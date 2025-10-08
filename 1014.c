#include <stdio.h>
 
int main() {
 
int X=0;
float Y=0.0;
float consumo_medio=0.0;

scanf("%d",&X);
scanf("%f",&Y);
consumo_medio=X/Y;

printf("%.3f km/l\n",consumo_medio);
 
    return 0;
}