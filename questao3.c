#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int i, j, op, QntReg, cod, qnt;
float TotalGeral = 0;
float TotalItem = 0;
int QntItem = 0;

typedef struct cardapioProduto {
    int codigo;
    char descricao[80];
    float ValorProd;
};

typedef struct MontaPedido {
    int cod;
    int qnt;
};

void MenuLanchonete(){
	printf("==========================================\n");
	printf("|         LANCHONETE-LANCHEBEM           |\n");
	printf("|----------------------------------------|\n");
	printf("| CODIGO |  DESCRICAO       |   PRECO    |\n");
	printf("|----------------------------------------|\n");
	printf("|  100   |  CACHORRO QUENTE |    4.20    |\n");
	printf("|----------------------------------------|\n");
	printf("|  101   |  BAURU SIMPLES   |    3.30    |\n");
	printf("|----------------------------------------|\n");
	printf("|  102   |  BAURU COM OVO   |    5.50    |\n");
	printf("|----------------------------------------|\n");
	printf("|  103   |  HAMBURGER       |    6.20    |\n");
	printf("|----------------------------------------|\n");
	printf("|  104   |  CHEESERBURGUER  |    5.30    |\n");
	printf("|----------------------------------------|\n");
	printf("|  105   |  REFRIGERANTE    |    4.50    |\n");
	printf("|----------------------------------------|\n");
    printf("||\n");
    printf("||\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    MenuProduto();

    struct cardapioProduto cardapio[6];

    for (i = 0; i < 6; i++) {
        printf("Digite o Código\n");
        scanf("%i", &cardapio[i].codigo);
        printf("Informe a descrição do produto\n");
        scanf("%[^\n]", cardapio[i].descricao);
        printf("Digite o valor do produto\n");
        scanf("%f", &cardapio[i].ValorProd);
    }

    printf("===========================\n");
    printf("|     Monte Seu Pedido     \n|");
    printf("===========================\n");
    printf("Informe a quantidade de itens do seu pedido\n");
    scanf("%i", &QntReg);
    struct MontaPedido Monta[QntReg];
    for (i = 0; i < QntReg; i++) {
        printf("Digite um codigo\n");
        scanf("%i", &Monta[i].cod);
        printf("Informe uma quantidade\n");
        scanf("%i", &Monta[i].qnt);
    }
    
    printf("===========================\n");
    printf("|      Pedido Montado!     \n|");
    printf("===========================\n");
    for ( 1 = 0; 1 < QntReg; i++) {
        for ( j = 0; j < 6; j++){
            if (Monta[i].cod == cardapio[j].codigo) {
                TotalItem = Monta[i].qnt * cardapio[j].ValorProd;
                printf("Código......:%i\n", cardapio[j].ValorProd);
                printf("Produto.....:%s\n", cardapio[j].codigo);
                printf("Quantidade..:%i\n", Monta[i].qnt);
                printf("Valor.......:%.2f\n", cardapio[j].ValorProd);
                printf("Total Item..:%.2f\n", TotalItem);
                TotalGeral += TotalItem;
                QntItem+=1;
                break;
            }
            
        }
    }
}
