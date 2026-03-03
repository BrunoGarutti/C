#include <stdio.h>

int main() {
    int a; 
    printf("Digite um valor dentre 1 a 100, e descubra qual time você pertence: \n");
    scanf("%d",&a);
    
    if ( a >= 90 ){
        printf("A \n");
    } else if ( a >= 70 ){
        printf("B \n");
    } else if ( a >= 50 ){
        printf("C \n");
    } else if ( a < 50 ){
        printf("D \n");
    } else {
        printf("Numero Invalido \n");
    }
    
    return 0;
}