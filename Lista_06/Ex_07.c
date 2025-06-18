
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[5][5];
    int i, j;

    srand(time(NULL));

    printf("Matriz original:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            M[i][j] = rand() % 41 - 20;
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz com sinais invertidos:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            M[i][j] = -M[i][j];
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
