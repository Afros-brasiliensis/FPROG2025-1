#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int comuns = 0, raros = 0, lendarios = 0, opcao;

    srand(time(NULL));

    do {
        printf("\n1 - Abrir uma caixa\n2 - Consultar itens\n0 - Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int chance = rand() % 100;
            if (chance < 1) {
                printf("Você coletou 1 item lendário!\n");
                lendarios++;
            } else if (chance < 20) {
                printf("Você coletou 1 item raro!\n");
                raros++;
            } else {
                printf("Você coletou 1 item comum!\n");
                comuns++;
            }
        } else if (opcao == 2) {
            printf("Itens comuns: %d\nItens raros: %d\nItens lendários: %d\n", comuns, raros, lendarios);
        }

    } while (opcao != 0);

    return 0;
}
