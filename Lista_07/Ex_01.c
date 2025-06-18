#include <stdio.h>
#include <string.h>

void cumprimentar(){
    char nome[50];
    printf("Insira seu nome: ");
    scanf("%s", nome);
    printf("Olá, %s.\n", nome);

}

int main() {
    cumprimentar();
    return 0;
}