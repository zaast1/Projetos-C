#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int opMenuPrincipal, opMenucadastro, opMenuImpressao;
char nome[80], disciplina[50];
void CadastroAluno(){
	printf("Digite seu nome completo\n");
	fgets(nome, sizeof(nome), stdin);
	getchar();
	printf("Informe a disciplina\n");
	fgets(disciplina, sizeof(disciplina), stdin);
}
void MenuPrincipal() { 
	printf("+===============================+\n");
	printf("|     TEMPLATE DA APLICACAO     |\n");
	printf("+===============================+\n");
	printf("|       1-ACAO1    2-ACAO2      |\n");
	printf("================================+\n");
	printf("|       3-ACAO3    4-ACAO4      |\n");
	printf("|Selecione a opcao ou o 5 para Sair|\n");
	printf("+===============================+\n");
	scanf("%i",&opMenuPrincipal);
}
void MenuCadastro() {
	printf("+===============================+\n");
	printf("|         MENU CADASTRO         |\n");
	printf("+===============================+\n");
	printf("|   1-CADASTRO    2-CADASTRO    |\n");
	printf("================================+\n");
	printf("|   3-CADASTRO    4-CADASTRO    |\n");
	printf("|Selecione a opcao ou o 5 p/ Voltar|\n");
	printf("+===============================+\n");
	scanf("%i",&opMenucadastro);
	switch(opMenucadastro){
	case 1:{  //1- Cadastro 17
		system("cls");
		CadastroAluno();
		break;
	}
	case 2:{  //2-Cadastro 2
	break;
	}
	case 3:{   //3-Cadastro 3

		break;
	}
	case 4:{   //4-Cadastro 4

		break;
	}
	}
}
void MenuImpressao() {
	printf("+===============================+\n");
	printf("|         MENU IMPRESSO        |\n");
	printf("+===============================+\n");
	printf("|   1-IMPRESSAO1   2-IMPRESSAO2 |\n");
	printf("================================+\n");
	printf("|   3-IMPRESSAO3   4-IMPRESSAO4 |\n");
	printf("|Selecione a opcao ou o 5 para Voltar|\n");
	printf("+===============================+\n");
	scanf("%i",&opMenuImpressao);
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	MenuPrincipal();	
	switch(opMenuPrincipal){
	case 1:{  //1-OP��O 1
		system("cls");
		MenuCadastro();
		break;
	}
	case 2:{  //2-OP��O 2
		system("cls");
		MenuImpressao();
		break;
	}
	case 3:{   //3-OP��O 3

		break;
	}
	case 4:{   //4-OP��O 4

		break;
	}
	}while(opMenuPrincipal!=5){

	}
}