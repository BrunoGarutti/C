#include <stdio.h>

// Removidos i e j dos parâmetros, pois são auxiliares internos
int countpar(int m[3][3]) {
    int par = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m[i][j] % 2 == 0) {
                par++;
            }
        }
    }
    return par;
}

int main() {
    int m[3][3] = {
        {2, 3, 6},
        {9, -2, 3},
        {-7, 10, 12}
    };

    int resultado = countpar(m);

    printf("O numero de pares dentro da matriz eh: %d\n", resultado);

    return 0;
}