/* Construa  um  algoritmo  que  leia  uma  matriz  quadrada  de  ordem  4.  Leia  uma constante K, 
multiplique a diagonal principal por esta constante e imprima a matriz multiplicada.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main (void){
//variaveis
int a[TAM][TAM], i, j, k;
//entrada
for(i=0; i<TAM; i++){
	for(j=0; j<TAM;j++){
		printf("digite a[%i][%i]:", i, j);
			scanf("%i",& a[i][j]);
				fflush(stdin);
	}
}
		printf("Digite  o K:");
			scanf("%i",& k);
				fflush(stdin);
//processo
for(i=0; i<4; i++){
	a[i][i]=a[i][i]*k;
}
//saida
for(i=0; i<TAM; i++){
	for(j=0; j<TAM;j++){
		printf("%i\t", a[i][j]);
	}
	printf("\n");
}
return 0;
}
