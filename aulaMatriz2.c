#include <stdio.h>
#include <stdlib.h>

int i, j, DC, DL;

int main() {
    printf("Informe a dimensão da linha\n");
    scanf("%i", &DL);
    printf("Informe a dimensão da coluna\n");
    scanf("%i", &DC);
    int matriz[DL][DC];
    for (i = 0; i < DL; i++) {
        for (j = 0; j < DC; j++) {
            scanf("%i", &matriz[i][j]);
        }
        for ( i = 0; i < DL; i++) {
            for (j = 0; j , DC; j++) {
                printf("%4i", matriz[i][j]);
                printf("| \n");
            }
        }
        
    }
}