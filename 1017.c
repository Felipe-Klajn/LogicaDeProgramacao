#include <stdio.h>
 
int main() {
 
int tempo=0;
int velo_media=0;
float result=0.0;
float result_litros=0.0;

scanf("%d",&tempo);
scanf("%d",&velo_media);
result=tempo*velo_media;

result_litros=result/12;

printf("%.3f\n",result_litros);

    return 0;
}