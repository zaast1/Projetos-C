#include <stdio.h>

double renda_familiar;
float media_notas;
float nota1, nota2;
double frequencia;

int main() {
    printf("<======================================================================================>\n");
    printf("Para participar do programa de bolsas voce precisa atingir certos requisitos sendo eles:\n");
    printf("|                   Renda Familiar menor ou igual a 2000 reais\n                         |");
    printf("<-------------------------------------------------------------------------------------->\n");
    printf("                      Media das notas maior ou igual a 7.5\n                             |");
    printf("<-------------------------------------------------------------------------------------->\n");
    printf("|            Frequencia escolar maior ou igual a 75 porcento das aulas\n                 |");
    printf("<======================================================================================>\n");
    printf("Para comecar digite a Renda Familiar abaixo:\n");
    scanf("%lf", &renda_familiar);
    printf("Agora digite a sua primeira nota:\n");
    scanf("%f", &nota1);
    printf("Agora digite a sua segunda nota:\n");
    scanf("%f", nota2);
    printf("agora digite em quantas aulas das 200 voce esteve presente\n");
    scanf("%lf", &frequencia);

    media_notas = nota1 + nota2;
    
    if (renda_familiar <= 2000 && media_notas >= 7.5 && frequencia >= 150) {
        printf("<====================================>");
        printf("|Parabens voce esta apto para a bolsa|");
        printf("<====================================>");
    }
    else {
        printf("<======================================================>");
        printf("|Voce não possui os requisitos necessarios para a bolsa|");
        printf("<======================================================>");
    }

    return(0);
}