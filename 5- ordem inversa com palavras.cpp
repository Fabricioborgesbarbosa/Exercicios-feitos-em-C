/* Construa um algoritmo que leia um vetor de 15palavrase mostre-os na ordem inversa */

#include <stdio.h>
#include <stdlib.h>
 
 int main (void){
 //variaveis
 	char palavras [50][15];
 	int i;
//entrada
	for(i=0; i<15; i++){
		printf("digite a %i palavra:\n", i+1 );
			gets(palavras[i]);
				fflush(stdin);
	}
 	for(i=14; i>=0; i--){
	 	printf("%s, ", palavras[15]);
	 }
return 0;
 }
