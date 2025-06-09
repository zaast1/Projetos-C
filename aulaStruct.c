#include <stdio.h>
#include <stdlib.h>

int i;

struct CadastrarTitulos {
    int CodigoTitulo;
    char nomeCliente[80];
    char Nature[30];  //Credito ou Debito
    float ValorTitulo;
    char DataBaixa[10];
}; 

int main() {
    struct CadastrarTitulos CadTit[3];
    for (i = 1; i <= 3; i++) {
        printf("Num Titulo: 00%i\n", i);
        printf("Informe o nome do cliente\n");
        scanf("%s", &CadTit[i].nomeCliente);
        printf("Informe a natureza do titulo\n");
        scanf("%s", &CadTit[i].Nature);
        printf("Informe o valor do titulo\n");
        scanf("%f", &CadTit[i].ValorTitulo);
        printf("Informe a data de pagamento\n");
        scanf("%s", &CadTit[i].DataBaixa);
    }
    for ( i = 1; i <= 3; i++) {
        printf("BAIXA DE TITULO\n");
        printf("Num Titulo : 000%i\n", i);
        printf("Cliente : %s\n",CadTit[i].nomeCliente);
        printf("Natureza : %s\n", CadTit[i].Nature);
        printf("Valor Tit : %.2f\n", CadTit[i].ValorTitulo);
        printf("Data Baixa : %s \n", CadTit[i].DataBaixa);
    }
}