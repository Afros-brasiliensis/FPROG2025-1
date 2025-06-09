#include <stdio.h>

int main() {
    int vetor[5];
    int resultado[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero para o vetor:\n ");
        scanf("%d", &vetor[i]);
    }
    printf("O vetor completo e: ");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }
    for (int i = 0; i < 5; i++) {
        resultado[i] = vetor[i] * i;
        printf("O resultado e: %d\n", resultado[i]);
    }

}