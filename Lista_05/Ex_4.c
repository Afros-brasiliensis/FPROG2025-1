#include <stdio.h>

int main() {
    int passos[7], i, total = 0;
    float media;
    const char* dias[] = {"Dom", "Seg", "Ter", "Qua", "Qui", "Sex", "Sab"};

    printf("Digite os passos dados em cada dia da semana:\n");
    for (i = 0; i < 7; i++) {
        printf("%s: ", dias[i]);
        scanf("%d", &passos[i]);
        total += passos[i];
    }

    media = total / 7.0;

    printf("\nTotal de passos na semana: %d\n", total);
    printf("Média de passos por dia: %.2f\n", media);
    printf("Dias com meta (>= 10000 passos): ");
    for (i = 0; i < 7; i++) {
        if (passos[i] >= 10000) {
            printf("%s ", dias[i]);
        }
    }
    printf("\n");

    return 0;
}
