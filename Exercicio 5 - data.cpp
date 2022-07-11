#include <stdio.h>
#include <stdlib.h>
int data (int d, int m, int a);


int main(void){
//variaveis
int d, m, a;
//funcao
data(d, m, a);	
return 0;
}
//funcao data
int data (int d, int m, int a){


	printf("Digite um data (DD/MM/AAAA):");
		scanf("%i%i%i", & d, & m, & a );
			fflush(stdin);
//saida
printf("%i/%i/%i", d, m,a);	
}
