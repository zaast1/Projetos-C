#include <stdio.h>
#include <stdlib.h>

int x, y, i;
double salario;

int main() {
    printf("Digite o seu salario:\n");
    scanf("%lf", &salario);
    if (salario > 180 && salario < 800) {
        printf("Salario valido para financiamento!");
    }
    else {
        printf("Salario fora da faixa permitida para financiamento!");
    }
    
    
    return(0);
}