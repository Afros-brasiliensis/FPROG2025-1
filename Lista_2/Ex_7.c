#include <stdio.h>

int main() {
    int passaros;
    float racao, racao_total, racao_total_em_kg;

    printf("Quantos passaros voce tem?");
    scanf("%d", &passaros);

    racao = 30;

    racao_total = racao * passaros;

    racao_total_em_kg = (racao/1000)*passaros;

    printf("O total de racao em gramas que voce precisa para alimentar todos os passaros e %.0fg e em kilos e %.2fkg", racao_total, racao_total_em_kg);

    return 0;
}



