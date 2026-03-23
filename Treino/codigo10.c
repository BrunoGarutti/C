#include <stdio.h>

int main(){
    int m[3][3] = {   
        {2, 3, 6},
        {9, -2, 3},
        {-7, 10, 12}
    };
    int t[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t[j][i] = m[i][j];
        }
    }

   printf("\nMatriz Transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
