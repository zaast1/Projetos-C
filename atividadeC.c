#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, j, op, valor;

void MontarMenuMatriz() {
    valor = 1;
    int matriz[3][5];
    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++) {
            matriz [i][j] = valor++;
        }
    }
    printf("+------------------------+\n");
    printf("+    Menu De Questões    +\n");
    printf("+------------------------+\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("|%4i", matriz[i][j]);
            printf("|\n");
        }
    }
    printf("+------------------------+\n");
}

void Questao001() {
    printf("Questão 1 em desenvolvimento\n");
}

void Questao002() {
    printf("Questão 2 em desenvolvimento\n");
}

void Questao003() {
    printf("Questão 3 em desenvolvimento\n");
}

void Questao004() {
    printf("Questão 4 em desenvolvimento\n");
}

void Questao005() {
    printf("Questão 5 em desenvolvimento\n");
}

void Questao006() {
    printf("Questão 6 em desenvolvimento\n");
}

void Questao007() {
    printf("Questão 7 em desenvolvimento\n");
}

void Questao008() {
    printf("Questão 8 em desenvolvimento\n");
}

void Questao009() {
    printf("Questão 9 em desenvolvimento\n");
}

void Questao010() {
    printf("Questão 10 em desenvolvimento\n");
}

void Questao011() {
    printf("Questão 11 em desenvolvimento\n");
}

void Questao012() {
    printf("Questão 12 em desenvolvimento\n");
}

void Questao013() {
    printf("Questão 13 em desenvolvimento\n");
}

void Questao014() {
    printf("Questão 14 em desenvolvimento\n");
}

void Questao015() {
    printf("Questão 15 em desenvolvimento\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    do {
        MontarMenuMatriz();
        printf("Selecione a questão entre 1 e 15 ou Zero p/sair\n");
        scanf("%i", &op);
        switch (op) {
        case 1:
            Questao001();
            break;
        case 2:
            Questao002();
            break;
        case 3:
            Questao003();
            break;
        case 4:
            Questao004();
            break;
        case 5:
            Questao005();
            break;
        case 6:
            Questao006();
            break;

        default:
            break;
        }
    } while (op!=0);
}