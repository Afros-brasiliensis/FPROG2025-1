#include <stdio.h>

int main() {
    int colmeia_inicial = 0;
    int meses;

    printf("Qual o numero inicial de abelhas na colmeia? ");
    scanf("%d", &colmeia_inicial);

    printf("Em quantos meses a colmeia vai crescer? ");
    scanf("%d", &meses);

    double colmeia = colmeia_inicial;

    for (int mes = 1; mes <= meses; mes++) {
        double crescimento = colmeia * 2;
        double migracao = crescimento * 0.03;
        if (migracao > 0 && migracao < 1) {
            migracao = 1;
        }
        colmeia = crescimento - migracao;  // Valor DEPOIS da migração

        printf("Mes %d:\n", mes);
        printf("Colmeia apos o crescimento: %.0f abelhas\n", crescimento);  // Corrigido aqui
        printf("Quantidade de abelhas migradas: %.0f\n", migracao);
        printf("Quantidade de abelhas final: %.0f\n\n", colmeia);
    }

    return 0;
}