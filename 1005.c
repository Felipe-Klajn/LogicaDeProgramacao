#include <stdio.h>
 
int main() {
 
    double A = 0.0;
    double B = 0.0;
    double media = 0.0;
    
    scanf("%lf",&A);
    scanf("%lf",&B);
    media=(A*3.5 + B*7.5)/11.0;
    
    printf("MEDIA = %.5lf\n", media); 
    return 0;
}