#include <stdio.h>

void cumprimentar(char nome[]) {
    printf("Olá, %s!\n", nome);
}

int main() {
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    cumprimentar(nome);
    return 0;
}
