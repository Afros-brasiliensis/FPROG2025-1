#include <stdio.h>

float calcular_idade(int idade) {
    if (idade < 10) {
        return 100.0;
    }
    else if (idade < 30) {  // 10-29
        return 220.0;
    }
    else if (idade < 60) {  // 30-59
        return 395.0;
    }
    else {  // 60+
        return 480.0;
    }
}

int main() {
    int num_dependentes, opcao_idade;
    float valor_total = 300.0;

    // Ask for number of dependents (with validation)
    do {
        printf("Informe o numero de dependentes: ");
        scanf("%d", &num_dependentes);

        if (num_dependentes < 0) {
            printf("Numero invalido! Tente novamente.\n");
        }
    } while (num_dependentes < 0);

    // Loop for each dependent
    for (int i = 0; i < num_dependentes; i++) {
        printf("\nDependente %d:\n", i + 1);

        // Ask for age group
        do {
            printf("Escolha a faixa etaria:\n");
            printf("1 - Ate 10 anos\n");
            printf("2 - 10 a 29 anos\n");
            printf("3 - 30 a 59 anos\n");
            printf("4 - 60+ anos\n");
            printf("Digite a opcao (1-4): ");
            scanf("%d", &opcao_idade);

            if (opcao_idade < 1 || opcao_idade > 4) {
                printf("Opcao invalida! Tente novamente.\n");
            }
        } while (opcao_idade < 1 || opcao_idade > 4);

        // Map the selected group to an example age and calculate cost
        switch (opcao_idade) {
            case 1:
                valor_total += calcular_idade(5);  // Example: 5 years (group <10)
                break;
            case 2:
                valor_total += calcular_idade(20); // Example: 20 years (group 10-29)
                break;
            case 3:
                valor_total += calcular_idade(45); // Example: 45 years (group 30-59)
                break;
            case 4:
                valor_total += calcular_idade(65);  // Example: 65 years (group 60+)
                break;
        }
    }

    printf("\nValor total a pagar: R$ %.2f\n", valor_total);
    return 0;
}