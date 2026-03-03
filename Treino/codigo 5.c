#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    
    printf("Digite o valor de n: \n");
    scanf("%d",&n);
    
    if ( n <= 0 ){
        printf("VALOR INVALIDO \n");
        return 1;
    }
    
    int i = 1;
    
    while ( i <= n ){
        soma += i;
        i++;
    }
    
    printf("%d",soma);
    
    return 0;
}