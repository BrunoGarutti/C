#include <stdio.h>

void multmatriz(int m[3][3],int i,int j,int x){
    for ( i = 0; i < 3; i++ ){
        for ( j = 0; j < 3; j++ ){
            m[i][j] *= x;
        }
    }
}

