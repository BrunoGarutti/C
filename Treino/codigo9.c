#include <stdio.h>

// Função que multiplica cada elemento da matriz por um valor x
void multmatriz(int m[3][3], int x) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m[i][j] *= x;
        }
    }
}

int main() {
    // 1. Declaração e inicialização da matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int multiplicador;

    printf("Digite o valor para multiplicar a matriz: ");
    scanf("%d", &multiplicador);

    // 2. Chamada da função
    multmatriz(matriz, multiplicador);

    // 3. Exibição do resultado
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}