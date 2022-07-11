#include <stdio.h>
#include <stdlib.h>
//função
int letras (int caracter);

int main (void){
//variaveis
int caracter;

//entrada

//saida
 letras(caracter);
return 0;
}

int letras( int caracter){
	int linhas = 0, colunas = 0; 
	int i, j;

		
		
		printf("Digite a quantidade de linhas:");
			scanf("%i", & linhas);
				fflush(stdin);
		printf("Digite a quantidade de colunas:");
			scanf("%i", & colunas);
				fflush(stdin);
			
for(i=0; i<linhas; i++ ){
	for(j=0; j<colunas; j++){
		printf("a");
	}
	printf("\n");
}
	
}

