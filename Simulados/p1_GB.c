#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear(int inicio, int fim) {
    return rand() % (fim - inicio + 1) + inicio;
}

int main() {
    int inicio, fim;

    printf("Digite o valor inicial do sorteio: ");
    scanf("%d", &inicio);

    printf("Digite o valor final do sorteio: ");
    scanf("%d", &fim);

    srand(time(NULL));

    if (inicio > fim) {
        printf("Intervalo inválido! Início maior que fim.\n");
        return 1;
    }

    int resultado = sortear(inicio, fim);
    printf("Número sorteado entre %d e %d: %d\n", inicio, fim, resultado);

    return 0;
}
