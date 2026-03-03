#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    printf("Digite o valor de A: \n");
    scanf("%d",&a);
    printf("Digite o valor de B: \n");
    scanf("%d",&b);
    printf("Digite o valor de C: \n");
    scanf("%d",&c);
    
    if ( a + b > c && a + c > b && b + c > a ){
        if ( a == b && b == c ){
            printf("EQUILATERO \n");
        } else if (( a == b && a != c) || ( a == c && a != b) || ( b == c && b != a )) {
            printf("ISOSCELES \n");
        } else if ( a != b && a != c && b != c ){
            printf("ESCALENO \n");
        }
        
    } else {
        printf("NAO FORMA TRIANGULO \n");
    }
    return 0;
}