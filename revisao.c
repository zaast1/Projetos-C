#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j;
    int matriz[n][n];

    printf("digite o valor da matriz: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", matriz[i][j]);
        }
    }
}