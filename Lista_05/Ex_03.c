#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LANCAMENTOS 1000000 // Maximum number of rolls

int main() {
    srand((unsigned int)time(NULL)); // Seed the random number generator

    unsigned long long num_lancamentos;
    printf("Quantas vezes o dado sera lancado? (max %d): ", MAX_LANCAMENTOS);
    
    // Verifica se o scanf foi bem sucedido
    if (scanf("%llu", &num_lancamentos) != 1) {
        printf("Erro na leitura do numero de lancamentos.\n");
        return 1;
    }

    // Verifica se o número de lançamentos é válido
    if (num_lancamentos == 0) {
        printf("Numero de lancamentos deve ser maior que zero.\n");
        return 1;
    }

    if (num_lancamentos > MAX_LANCAMENTOS) {
        printf("Numero de lancamentos excede o maximo permitido (%d).\n", MAX_LANCAMENTOS);
        return 1;
    }

    int contador[6] = {0}; // Array to count occurrences of each face (1-6)

    // Não precisamos armazenar todos os resultados, podemos contar diretamente
    for (unsigned long long i = 0; i < num_lancamentos; i++) {
        int resultado = rand() % 6 + 1; // Generate a random number between 1 and 6
        contador[resultado - 1]++; // Increment the count for the rolled face
    }

    for (int i = 0; i < 6; i++) {
        double percentual = (double)contador[i] / num_lancamentos * 100;
        printf("Face %d: %d vezes (%.2f%%)\n", i + 1, contador[i], percentual);
    }

    return 0;
}