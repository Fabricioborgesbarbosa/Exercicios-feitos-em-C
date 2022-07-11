#include <stdio.h>
#include <stdlib.h>
//funcoes
int funcao1 (int a);
int funcao2 (int b);
int funcao3 (int c);
int funcao4 (int d);
int funcao5 (int f);

int main (void){
//variaveis
char opcao, s;
int numero;
int a, b, c, d, f;
//entrada
	do {
		system("cls");

	printf("digite um numero de 1 ate 5:");
		scanf("%i", & opcao);
			fflush (stdin);
//processamento
switch(opcao){
		case 1:  funcao1 (a);
		break;
		case 2:  funcao2 (b);
		break;	
		case 3:  funcao3 (c);
		break;
		case 4:  funcao4 (d);
		break; 
		case 5:  funcao5 (f);	
		break;
	default: printf("caracter invalido");
	}
//saida

	printf("deseja repetir?\n");
	printf("Digite s para repitir ou\n");
	printf("Digite n para sai:");
	
	scanf("%c", & s);
		fflush (stdin);

		
	}while(s == 's');
	
	
return 0;	
}
//função a
int funcao1 (int a){
 int i, j, s = 0;
//calculo
for(i = 1  ; i <= 99; i+=2){
	for (j= 1 ; j <= 50; j++){
	
		s+= i/j;
	}
}
//saida
	printf("%i", s );
}
//função b
int funcao2 (int b){
//variaveis
int i, j, s = 0;
// s = 1/1 - 2/2 + 3/3 - 4/4 + 5/5 - 6/6 + 7/7 - 8/8 + 9/9 - 10/10;
//processo
 for(i=1; i<=10; i++){
	for(j=1; j<=10; j++){
		s+= i/j;
		s+=-i/j;
		s+=+i/j;
	}
} 
	printf("%i", s);
}
//funcao c
int funcao3 (int c){
//variaveis
int i, j, s;

for(i=1000; i>=0; i-=3){
 	s = i/j-i/j;
	}
 	for(j=1; j<=1000; j++){	
    s += i/j+i/j;
	 }
	 //saida
	 printf("%i", s);
}
//funcao d
int funcao4 (int d){
//variaveis	
int i , j , s;
for(i=10; i>=0; i-=5){
	for(j=1; j<=2; j++){
		s +=i/j;
		}
	}
	printf("%i", s );
}
//funcao f
int funcao5 (int f){

	printf("\nThe end");
	printf("\nObrigado por passar por aqui!!");




	return f; 
}

