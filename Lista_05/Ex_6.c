#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int consumo[30], i, total = 0, maior, menor, diaMaior = 0, diaMenor = 0;
    float media;

    srand(time(NULL));

    for (i = 0; i < 30; i++) {
        consumo[i] = rand() % 401 + 100;
        total += consumo[i];
        if (i == 0 || consumo[i] > maior) {
            maior = consumo[i];
            diaMaior = i;
        }
        if (i == 0 || consumo[i] < menor) {
            menor = consumo[i];
            diaMenor = i;
        }
    }

    media = total / 30.0;

    printf("Consumo total: %d litros\n", total);
    printf("Média de consumo: %.2f litros\n", media);
    printf("Dia com maior consumo: Dia %d (%d litros)\n", diaMaior + 1, maior);
    printf("Dia com menor consumo: Dia %d (%d litros)\n", diaMenor + 1, menor);

    return 0;
}
