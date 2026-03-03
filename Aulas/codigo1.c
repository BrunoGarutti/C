#include <stdio.h>

int potencia(int b, int exp){
    int resultado = 1;
    if (exp == 0){
        return ("Como o expoente é 0 o resultado sempre sera 1 ");
    }

    for (int i = 0; i < exp, i++){
        resultado = resultado * base;
    }
    return resultado;
}

int main(){
    printf("Digite o valor da base : \n");
    scanf("%d",&b);
    printf("Digite o valor do expoente : \n");
    scanf("%d",&exp);
    int pot = potencia(b,exp);
    printf("O resultado dessa potencia eh de : %d \n",pot);
    return 0;
}
