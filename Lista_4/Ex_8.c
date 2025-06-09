#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

	int num, fatorial;
        char continuar;

    do{
		fatorial = 1;
       printf("Digite um numero para calcular um fatorial:\n");
        scanf("%d", &num);

    	for(int i = 1; i <= num; i++){
          fatorial *= i;
    		printf("%d\n", fatorial);
          }
    	printf("Deseja continuar e calcular outro fatorial? (s/n)\n");
    	scanf(" %c", &continuar);

    	continuar = toupper(continuar);

    	}while (continuar == 'S');

       return 0;
       }
