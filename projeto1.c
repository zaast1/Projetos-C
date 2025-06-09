#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 50
#define MAX_PRODUTOS 200

typedef struct {
    int CodigoProduto;
    char NomeProduto[TAM_NOME];
    int QuantidadeProduto;
    double PrecoProduto;
} Produto;

Produto Estoque[MAX_PRODUTOS];
int TotalProdutos = 0;

int opMenuPrincipal, opCadastroEstoque, opArmazenamentoEstoque;

void menuPrincipal() {
    printf("+================================+\n");
    printf("+         Menu Principal         +\n");
    printf("+--------------------------------+\n");
    printf("+     1-Cadastro de estoque      +\n");
    printf("+--------------------------------+\n");
    printf("+   2-Armazenamento de estoque   +\n");
    printf("+--------------------------------+\n");
    printf("+         3 - Para sair          +\n");
    printf("+================================+\n");
    scanf("%i", &opMenuPrincipal);
}

void MenuCadastroEstoque() {
    if (TotalProdutos >= MAX_PRODUTOS) {
        printf("Estoque Cheio, Não é possivel cadastrar mais produtos! \n");
        return;
    }

    Produto NovoProduto;
    printf("Codigo do Produto: \n");
    scanf("%d", &NovoProduto.CodigoProduto);

    for (int i = 0; i < TotalProdutos; i++) {
        if (Estoque[i].CodigoProduto == NovoProduto.CodigoProduto) {
            printf("Erro: Esse codigo ja foi registrado!\n");
            return;
        }
    }

    printf("Nome do produto: \n");
    scanf("%s", NovoProduto.NomeProduto);  // Corrigido para %s e removido &
    
    printf("Quantidade do Produto: \n");
    scanf("%d", &NovoProduto.QuantidadeProduto);

    printf("Preço do Produto: \n");
    scanf("%lf", &NovoProduto.PrecoProduto);

    Estoque[TotalProdutos] = NovoProduto;
    TotalProdutos++;

    printf("Produto Cadastrado Com Sucesso!\n");
}

void MenuArmazenamentoEstoque() {
    // Implementação da função que estava faltando
    printf("Função de armazenamento de estoque\n");
    // Adicione aqui a lógica para mostrar o estoque
}

int main() {
    do {
        menuPrincipal();
        switch (opMenuPrincipal) {
            case 1: {
                system("cls");
                MenuCadastroEstoque();
                break;
            }
            case 2: {
                system("cls");
                MenuArmazenamentoEstoque();
                break;
            }
            case 3: {
                printf("Saindo...\n");
                break;
            }
            default: {
                printf("Opção inválida!\n");
            }
        }
    } while (opMenuPrincipal != 3);
    
    return 0;
}