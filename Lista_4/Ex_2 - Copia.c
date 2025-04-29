#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite, tentativas = 0;
    const int MAX_TENTATIVAS = 3;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Sorteia um número entre 1 e 10
    numero_sorteado = rand() % 10 + 1;

    printf("Tente adivinhar o numero entre 1 e 10. Voce tem %d tentativas.\n", MAX_TENTATIVAS);

    while (tentativas < MAX_TENTATIVAS) {
        printf("\nTentativa %d: ", tentativas + 1);
        scanf("%d", &palpite);

        if (palpite == numero_sorteado) {
            printf("Parabens! Voce acertou o numero %d!\n", numero_sorteado);
            return 0;
        }
        else if (palpite < numero_sorteado) {
            printf("O numero sorteado eh MAIOR que %d.\n", palpite);
        }
        else {
            printf("O numero sorteado eh MENOR que %d.\n", palpite);
        }

        tentativas++;
    }

    printf("\nSuas tentativas acabaram! O numero correto era %d.\n", numero_sorteado);
    return 0;
}