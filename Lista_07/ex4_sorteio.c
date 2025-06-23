#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(int inicio, int fim) {
    return inicio + rand() % (fim - inicio + 1);
}

int main() {
    int ini, fim;
    srand(time(NULL));
    printf("Digite o valor inicial: ");
    scanf("%d", &ini);
    printf("Digite o valor final: ");
    scanf("%d", &fim);
    printf("Número sorteado: %d\n", sorteio(ini, fim));
    return 0;
}
