#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

        srand(time(NULL));


    for (int i = 0; i < 25; i++) {
        int presente = rand() % 100 + 1;
        if (presente > 1 && presente <= 60) {
            presente = 1;
        }
        else if (presente > 60 && presente <= 85) {
            presente = 2;
        }
        else if (presente > 85 && presente <= 95) {
            presente = 3;
        }
        else if (presente > 95 && presente <= 100) {
            presente = 4;
        }

        switch (presente) {
            case 1: printf("Voce recebeu um presente comum\n\n");
            break;

            case 2: printf("Voce recebeu um presente especial\n\n");
            break;

            case 3: printf("Voce recebeu um presente raro\n\n");
            break;

            case 4: printf("Voce recebeu um presente lendario\n\n");
            break;

        }
    }
return 0;


}