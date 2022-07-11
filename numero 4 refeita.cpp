/* Construa  um  algoritmo  que leia  um  vetor  de  10  caracteres,  e  diga  quantas consoantes foram lidas. Imprima as consoantes. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
//variaveis
 char vetor[10], l;
 int i, cont=0;
 //entrada // processo
 for(i=0; i<10; i++){
 	printf("digite %i caracter:", i+1);
 		scanf("%c", & l);
 			fflush(stdin);
 			vetor[i]=l;
 }
 for(i=0; i<10; i++){
 if(vetor[i]!='a' && vetor[i]!='e' && vetor[i]!='i' && vetor[i]!='o' && vetor[i]!='u'){
 	cont++;
}
 }
 	printf("numero de consoantes sao:\n");
 	printf("%i ", cont);
 	printf("\nas consoantes sao:");
 	for(i=0; i<10; i++){
 		printf("%c, ", vetor[i]);
	 }
return 0;
}
