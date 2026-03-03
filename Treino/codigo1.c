#include <stdio.h>

int main() {
    int a;
    printf("Digite a sua idade\n");
    scanf("%d",&a);
    
    if ( a >= 18 ){
        printf("Maior de idade \n");
    } else if ( a <= 18 ){
        printf("Menor de idade \n");
    } else {
        printf("Idade Invalida \n");
    }
    
    return 0;
}
