
#include <stdio.h>

int main() {
    int M[3][5] = {
        {1, 5, 9, 2, 5},
        {7, 4, 13, 21, 6},
        {8, -3, 5, 7, 12}
    };

    printf("Matriz multiplicada por 7:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", M[i][j] * 7);
        }
        printf("\n");
    }

    return 0;
}
