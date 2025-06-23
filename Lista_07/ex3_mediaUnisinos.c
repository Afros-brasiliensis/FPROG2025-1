#include <stdio.h>

float mediaUnisinos(float grauA, float grauB) {
    return (grauA + grauB) / 2;
}

int main() {
    float A, B;
    printf("Digite a nota do Grau A: ");
    scanf("%f", &A);
    printf("Digite a nota do Grau B: ");
    scanf("%f", &B);
    printf("Nota final: %.2f\n", mediaUnisinos(A, B));
    return 0;
}
