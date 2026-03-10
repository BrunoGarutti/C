#include <stdio.h>

void organizavetor (int v[],int n){
    int par = 0;
    int aux;

    for ( int i = 0 ; i < n ; i++ ){
        if ( v[i] % 2 == 0 ){
            aux = v[i];
            v[i] = v[par];
            v[par] = aux;
            
            par++;
        }
    }
}

int main(){
    int v[] = {3,5,2,8,1,10,4,7};
    int n = 8;

    organizavetor(v,n);

    printf("O vetor organziado fica: \n");
    for (int i = 0 ; i < n ; i++ ){
        printf(" %d",v[i]);
    }
    printf("\n");

    return 0;
}