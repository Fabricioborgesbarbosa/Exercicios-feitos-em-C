/*Construa  um  algoritmo  que  leia  um  vetor  de  10  n�meros  reais  e  mostre-os  na ordem inversa.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
//variaveis
float vetor[10];
int i;
//entrada
	for(i=0; i<10; i++  ){
		printf("digite um numero:");
			scanf("%f", & vetor[i]);
			 fflush(stdin);
			 
	}
	for(i=9; i>=0; i--){
		printf("%f ", vetor[i]);
}
return 0;
}
