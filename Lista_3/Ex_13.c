#include <stdio.h>
#include <ctype.h>

int main() {
    double nota_GA = 0; 
    double nota_GB = 0;
    char opcao;

    do {
        printf("Qual nota voce tirou no GA?\n");
        scanf("%lf", &nota_GA);
        if (nota_GA > 10 || nota_GA < 0) {
            printf("Nota invalida, digite sua nota do Grau A novamente (0 a 10):\n");
        }
    } while (nota_GA > 10 || nota_GA < 0);

    do {
        printf("Qual nota voce tirou no GB?\n");
        scanf("%lf", &nota_GB);
        if (nota_GB > 10 || nota_GB < 0) {
            printf("Nota invalida, digite sua nota do Grau B novamente (0 a 10):\n");
        }
    } while (nota_GB > 10 || nota_GB < 0);

    nota_GA = nota_GA * (1.0/3.0);
    nota_GB = nota_GB * (2.0/3.0);

    double media = nota_GA + nota_GB;

    if (media >= 6.0) {
        printf("Voce foi aprovado\n");   
    }
    else { 
        printf("Voce foi quase reprovado\n");
        
        double nota_GC = 0;
        do {
            printf("Qual sua nota do Grau C? (0 a 10)\n");
            scanf("%lf", &nota_GC);
        }
        while (nota_GC > 10 || nota_GC < 0);



        printf("Qual nota voce deseja substituir? Digite (a) para Grau A ou (b) para Grau B \n");
        scanf(" %c", &opcao);
        
        while(opcao != 'a' && opcao != 'b') {
            printf("Opcao invalida, digite novamente a ou b, para Grau A ou Grau B, respectivamente: ");
            scanf(" %c", &opcao);
        }

        if(opcao == 'a') {
            nota_GA = nota_GC * (1.0/3.0);
        } else {
            nota_GB = nota_GC * (2.0/3.0);
        }

        media = nota_GA + nota_GB;
        
        if(media >= 6.0) {
            printf("Apos substituicao, voce foi aprovado com media %.2f\n", media);
        } else {
            printf("Apos substituicao, voce foi reprovado com media %.2f\n", media);
        }
    }

    return 0;
}