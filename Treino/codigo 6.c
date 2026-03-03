#include <stdio.h>

int main() {
    int n;
    int fat = 1;
    
    printf("Digite o valor de n: \n");
    scanf("%d",&n);
    
    if ( n < 0 ){
        printf("VALOR INVALIDO \n");
        return 1;
    }
    
    int i = 1;
    
    while ( i <= n ){
        fat *= i;
        i++;
    }
    
    printf("%d",fat);
    
    return 0;
}