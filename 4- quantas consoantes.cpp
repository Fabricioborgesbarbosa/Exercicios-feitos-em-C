/*Construa  um  algoritmo  que leia  um  vetor  de  10  caracteres,  e  diga  quantas consoantes foram lidas. Imprima as consoantes.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
//variaveis
int i=0, cont=0;
char vetor[10], l=0;
//entrada de dados
	for(i=0; i<9; i++){
		printf("Digite um letra:");
			scanf("%c", & l);
				fflush(stdin);
					vetor[i]=l;
	}
	for(i=0; i<10; i++){
		if(vetor[i]!='a' && vetor[i]!='e' && vetor[i]!='i' && vetor[i]!='o' && vetor[i]!='u'){
			cont++;
		}
	}
//a saida
		printf("a saida das consoantes:%i\n", cont);
				
return 0;
}
