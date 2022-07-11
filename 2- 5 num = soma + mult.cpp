#include <stdlib.h>
#include <stdio.h>
int main (void){
//variaveis
int i;
float vetor[5], mult = 1, soma = 0;  
	for(i=0; i<5; i++){
		printf("DIGITE UM NUMERO:\n");
			scanf("%f",& vetor[i]);
				fflush(stdin);
	}
	for(i=0; i<5; i++){
		soma+=vetor[i];
		mult*=vetor[i];
	}
		printf("A SOMA E:%.2f\n", soma);
		printf("A MULTIPLLICACAO:%.2f\n", mult);
	for(i=0; i<5; i++){
		printf("%.2f, ", vetor[i]);
	}
return 0;
}
