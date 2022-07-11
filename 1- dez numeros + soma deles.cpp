#include <stdio.h>
#include <stdlib.h>
int main (void){
//variaveis
	int i, vetor[10], soma=0 ;
//entrada
		for(i=0; i<10; i++){
			printf("DIGITE UM NUMERO:\n");
				scanf("%i",& vetor[i]);
					fflush(stdin);
		}
		for(i=0; i<10; i++){
			soma+=vetor[i];
		}
			printf("a soma e:%i\n", soma );
return 0;
}
