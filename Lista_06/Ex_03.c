
#include <stdio.h>

void gerarIdentidade(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = (i == j) ? 1 : 0;
        }
    }
}

int main() {
    int I[4][4];
    gerarIdentidade(I);

    printf("Matriz identidade 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", I[i][j]);
        }
        printf("\n");
    }

    return 0;
}
