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
    scanf("%s", NovoProduto.NomeProduto);
    
    printf("Quantidade do Produto: \n");
    scanf("%d", &NovoProduto.QuantidadeProduto);

    printf("Preço do Produto: \n");
    scanf("%lf", &NovoProduto.PrecoProduto);

    Estoque[TotalProdutos] = NovoProduto;
    TotalProdutos++;

    printf("Produto Cadastrado Com Sucesso!\n");

}

void MenuArmazenamentoEstoque() {
    int opcao;

    do {
        printf("+========================+\n");
        printf("+   Menu Armazenamento   +\n");
        printf("+------------------------+\n");
        printf("+   1-Listar Produtos    +\n");
        printf("+------------------------+\n");
        printf("+    2-Buscar Codigo     +\n");
        printf("+------------------------+\n");
        printf("+   3-Calcular Estoque   +\n");
        printf("+------------------------+\n");
        printf("+        4-Voltar        +\n");
        printf("+========================+\n");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            system("close");
            printf("+====================+\n");
            printf("+   Lista Produtos   +\n");
            for (int i = 0; i < TotalProdutos; i++) {
                printf("Código: %d\n", Estoque[i].CodigoProduto);
                printf("Nome: %s\n", Estoque[i].NomeProduto);
                printf("Quantidade: %d\n", Estoque[i].QuantidadeProduto);
                printf("Preço: R$ %.2f\n", Estoque[i].PrecoProduto);
                printf("+====================+\n");
            }
            break;
    
        case 2:
            system("clear");
            int CodigoBusca;

            printf("Digite o Codigo do Produto Desejado: \n");
            scanf("%d", &CodigoBusca);

            int encontrado = 0;

            for (int i = 0; i < TotalProdutos; i++) {
                if (Estoque[i].CodigoProduto == CodigoBusca) {
                    printf("+========================+\n");
                    printf("+   Produto Encontrado   +\n");
                    printf("+------------------------+\n");
                    printf("Código: %d\n", Estoque[i].CodigoProduto);
                    printf("Nome: %s\n", Estoque[i].NomeProduto);
                    printf("Quantidade: %d\n", Estoque[i].QuantidadeProduto);
                    printf("Preço: R$ %.2f\n", Estoque[i].PrecoProduto);
                    printf("+========================+\n");
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado){
                printf("Produto Não Encontrado!\n");
            }
            break;

        case 3:
            system("clear");
            double ValorTotal = 0.0;
            for (int i = 0; i < ValorTotal; i++) {
                ValorTotal += Estoque[i].QuantidadeProduto * Estoque[i].PrecoProduto;
            }
            printf("Valor Total em Estoque: R$ %.2lf\n", ValorTotal);
            break;

        case 4:
            system("clear");
            printf("Retornando ao menu principal...\n");
            break;

        default:
            printf("Opção inválida!\n");
        }
    } while (opcao !=4);
}

int main() {
    do {
        menuPrincipal();
        switch (opMenuPrincipal) {
            case 1: {
                system("clear");
                MenuCadastroEstoque();
                break;
            }
            case 2: {
                system("clear");
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