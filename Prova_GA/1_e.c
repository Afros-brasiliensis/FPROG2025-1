#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num;
    int condicao = 0;


    do {
        num = rand() % (150 - 50) + 50;

        if (num % 5 == 0){
        condicao = 1;
    }
    }while (condicao == 0);

    printf("O numero sorteado e divisivel por 5 eh: %d\n", num);
}