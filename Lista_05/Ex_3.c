#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    long long dado;
    int array[6];
    int i, encontrou;

    srand(time(NULL));

    do {
        dado = rand() % 6 + 1;  // Sorteia um valor entre 1 e 6
        printf("Dado sorteado: %lld\n", dado);

        // Preenche o array com valores aleatórios
        for (i = 0; i < 6; i++) {
            array[i] = rand() % 6 + 1;
        }

        // Verifica se o valor do dado está no array
        encontrou = 0;
        for (i = 0; i < 6; i++) {
            if (array[i] == dado) {
                encontrou = 1;
                break;
            }
        }

    } while (!encontrou);

    // Exibe os valores do array
    printf("Valores do array: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
