#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

FILE *ArqAluno;
int opMenuPrincipal, opMenuCadastro, opMenuImpressao, i;
char nome[80], disciplina[50];
char usuario[20];
char senha[20];

void BarraProgressao(){ 
    system("color A");
    printf("+===================================================================================================+\n");
	printf("|A   G   U   A   R    D    E       O         S  I   S  T   E   M   A      C  A  R  R  E  G   A   R !|\n");
    printf("+===================================================================================================+\n");
      printf("\n");
	for (i=1;i<=100;i++){
      printf("\█"); //\xDB
	  Sleep(100);		
	}
/*	int j;int espacosAntes = 50;
    for (j = 1; j <= 100; j++) {
        printf("\r%*d %%", espacosAntes, j);
        fflush(stdout); 
        Sleep(100); 
    }*/
	 printf("\n");
	 system("cls");
}

int verificarLogin(char *usuario, char *senha) {
    if (strcmp(usuario, "Admin") == 0 && strcmp(senha, "321") == 0) {
        return 1;  
    } else {
        return 0;  
    }
}
void Login(){
    BarraProgressao(); 
    printf("+=================================+\n");
    printf("|    Digite o nome de usuario     |\n");
    printf("|---------------------------------|\n");
    scanf("%s", usuario);
    
     
    printf("+=================================+\n");
    printf("|         Digite a senha          |\n");
    printf("|---------------------------------|\n");
    printf("+=================================+\n");
    scanf("%s", senha);    
     
    if (verificarLogin(usuario, senha)) {
        printf("Login bem-sucedido!\n");
        system("cls");
        MenuPrincipal();
    } else {
        printf("Nome de usuario ou senha incorretos.\n");
    }
	printf("\n");
	printf("\n");				
}