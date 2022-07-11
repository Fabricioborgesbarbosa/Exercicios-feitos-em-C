/* Construa  um  algoritmo  que  leia  uma  matriz quadrada  de  ordem  3. 
 Leia  uma constante  K, diminuia  diagonal  principal  por  esta  constante  e  imprima  a  matriz diminuida. */
 #include <stdio.h>
 #include <stdlib.h>
 #define TAM 3
 int main (void){
//variaveis
int matriz[TAM][TAM], k, i, j;
//entrada
for(i=0; i<TAM; i++){
	for(j=0; j<TAM; j++){
		printf("Digite Matriz[%i][%i]:", i, j);
			scanf("%i", & matriz[i][j]);
				fflush(stdin);
	}
}
		printf("Digite o valor de K:");
			scanf("%i",& k);
				fflush(stdin);
//processamento
	for(i=0; i<TAM; i++){
		matriz[i][i]=matriz[i][i]-k;
	}
//saida
for(i=0; i<TAM; i++){
	for(j=0; j<TAM; j++){
	printf("%i\t", matriz[i][j]);
	}	
	printf("\n");
}
return 0;
}

