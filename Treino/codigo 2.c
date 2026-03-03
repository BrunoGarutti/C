#include <stdio.h>

int main() {
    int a;]
    printf("Digite o numero \n");
    scanf("%d",&a);
    
    if ( a % 2 == 0 ){
        printf("O numero digitado é par \n");
    } else {
        printf("O numero digitado é impar \n");
    }
    return 0;
}