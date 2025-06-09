#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opMenuPrincipal, opMenuCadastro, opMenuImpressao;
int codigo;
char descricao[50];

void MenuPrincipal() {
    printf("+==========================+\n");
    printf("+   Prototipo do Projeto   +\n");
    printf("+--------------------------+\n");
    printf("+   1-ACAO1   |   2-ACAO2  +\n");
    printf("+--------------------------+\n");
    printf("+   3-ACAO3   |   4-ACAO4  +\n");
    printf("+--------------------------+\n");
    printf("+   Digite 5 Para sair!    +\n");
    printf("+==========================+\n");
    scanf("%i", &opMenuPrincipal);
}

void MenuCadastro() {
    do {
    printf("+===============================+\n");
	printf("+         MENU CADASTRO         +\n");
	printf("+-------------------------------+\n");
	printf("+    1-Produto    2-CADASTRO    +\n");
	printf("+-------------------------------+\n");
	printf("+   3-CADASTRO    4-CADASTRO    +\n");
    printf("+-------------------------------+\n");
	printf("+      Digite 5 Para sair!      +\n");
	printf("+===============================+\n");
	scanf("%i",&opMenuCadastro);
    switch (opMenuCadastro) {
    case 1:{
        system("clear");
        CadastroProduto();   
        break;
    }
    case 2:{
        system("clear");
        printf("Em Desenvolvimento...");
        break;
    }
    default:
        break;
    }
    
    }while (opMenuCadastro !=5) {
        
    }
    
}

void CadastroProduto() {
    printf("Digite o código: \n");
    scanf("%i", &codigo);
    printf("Informe a Descrição do Produto:\n");
    scanf("%s", descricao);
}

void MenuImpressao() {
	printf("+===============================+\n");
	printf("+          MENU IMPRESSO        +\n");
	printf("+-------------------------------+\n");
	printf("+   1-IMPRESSAO1   2-IMPRESSAO2 +\n");
	printf("+-------------------------------+\n");
	printf("+   3-IMPRESSAO3   4-IMPRESSAO4 +\n");
    printf("+-------------------------------+\n");
	printf("+      Digite 5 para sair!      +\n");
	printf("+===============================+\n");
	scanf("%i",&opMenuImpressao);
}



int main() {
    setlocale(LC_ALL, "Portuguese");
    do { 
    MenuPrincipal();
    switch (opMenuPrincipal) {
    case 1:{
        system("clear");
        MenuCadastro();
        break;
    }
    case 2:{
        system("clear");
        MenuImpressao();
        break;
    }
    case 3:{
        break;
    }
    case 4:{
        break;
    }
    }
    }while (opMenuPrincipal !=5); {
    }
    
    return(0);
}