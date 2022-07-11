#include <stdio.h>
#include <stdlib.h>
int triangulo (int t);

int main (void){
//variaveis
int t;
 
	
//saida 
  triangulo (t);
}
 int triangulo (int t){
 //variaveis
 int t1, t2, t3;
 //entrada
 	printf("primeira ponta:\n");
 		scanf("%i", & t1);
 			fflush(stdin);
	printf("segunda ponta:\n");
 		scanf("%i", & t2);
 			fflush(stdin);
	printf("terceira ponta:\n");
 		scanf("%i", & t3);
 			fflush(stdin);
 if(t1 == t2 && t2 == t1 && t2 == t3 && t1 == t3){
 	printf("equilatero");
 	}else if(t1 == t2 && t3 != t2 || t1 == t3 && t1 != t2 || t2 == t3 && t2 != t1 ){
 		printf("isosceles ");
	 }
	 else{
	 	printf("escaleno");
	 }
 }
