#include <stdio.h>
#include <stdlib.h>
int main (void){
//variaveis
int a[3][3], b[3][3], r[3][3], i, j;

//entrada
for(i=0; i<3; i++){
	for(j=0; j<3; j++ ){
		printf("Digite a[%i][%i]:", i,j);
			scanf("%i",& a[i][j]);
				fflush(stdin);	
	}	
}
printf("Matriz B \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		printf("Digite b[%i][%i]:", i, j);
			scanf("%i",& b[i][j]);
				fflush(stdin);	
	}
}
//processo
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		r[i][j]=a[i][j]+b[i][j];
	}
}
//saida 
printf("A saida e:\n");
for(i=0; i<3; i++ ){
	for(j=0; j<3; j++){
		printf("%i\t", r[i][j]);
	}
	printf("\n");
}
return 0;
}
