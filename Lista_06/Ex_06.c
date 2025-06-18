
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float notas[10][3];
    int i;

    srand(time(NULL));

    printf("Notas dos alunos:\n");
    printf("Grau A\tGrau B\tMedia Unisinos\n");

    for (i = 0; i < 10; i++) {
        notas[i][0] = (rand() % 101) / 10.0;
        notas[i][1] = (rand() % 101) / 10.0;
        notas[i][2] = (notas[i][0] + notas[i][1]) / 2;

        printf("%.1f\t%.1f\t%.1f\n", notas[i][0], notas[i][1], notas[i][2]);
    }

    return 0;
}
