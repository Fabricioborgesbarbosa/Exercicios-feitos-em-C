/* Construa  um  algoritmo  que  leia  duas  matrizes  5x5
e  gere  uma  terceira  matriz com a subtraçãodos elementos correspondentes de a e b.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
//variaveis
int a[5][5], b[5][5], r[5][5], i, j;
//entrada
printf("Digite a Matriz a:\n");
for(i=0; i<5; i++){
	for(j=0; j<5; j++){
printf("Digite a[%i][%i]:", i, j);
		scanf("%i",& a[i][j]);
			fflush(stdin);
	}
}
printf("Digite a Matriz b:\n");
for(i=0; i<5; i++){
	for(j=0; j<5; j++){
printf("Digite B[%i][%i]:", i, j);
		scanf("%i",& b[i][j]);
			fflush(stdin);
	}
}
//processo
for(i=0; i<5; i++){
	for(j=0; j<5; j++){
		r[i][j]=a[i][j]-b[i][j];
	}
}
//saida
for(i=0; i<5; i++){
	for(j=0; j<5; j++){
printf("%i\t", r[i][j]);
	}
printf("\n");
}
return 0;
}
