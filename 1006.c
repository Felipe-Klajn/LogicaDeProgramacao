#include <stdio.h>
 
int main() {
 

    float A=0.0;
    float B=0.0;
    float C=0.0;
    float media=0.0;
    
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    
    media=(A*2+B*3+C*5)/10.0;
    
    printf("MEDIA = %.1f\n",media);
    return 0;
}