#include <stdio.h>

void tabuada(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    tabuada(numero);
    return 0;
}
