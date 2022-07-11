#include <stdio.h>
#include <stdlib.h>
//função
int retorna (int num);

int main(void){
//variavis
int num;
//entrada
printf("Digite um numero:");
	scanf("%i", & num);
		fflush(stdin);
//saida
	retorna(num);
	
return 0;
}

int retorna (int num){
	if(num % 2 == 0){
	printf("par:%i", num);
	return 1;	
	}
	else if(num % 2 == 1){
	printf("impar:%i", num);
	return 0;
	}
}
