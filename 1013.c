#include <stdio.h>
 
int main() {
 
    int a = 0;
    int b = 0;
    int c = 0;
    int maior = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    maior = a;
    
    if (b>maior){
        maior = b;
    }
        
    if (c>maior){
        maior = c;
    }
   
    printf("%d eh o maior\n", maior);
 
    return 0;
}