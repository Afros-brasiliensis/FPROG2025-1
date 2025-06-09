#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num1, num2, num3;

    do{
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1;
        num3 = rand() % 10 + 1;

        }while (num1 < num2 && num2 < num3);


printf("%d %d %d", num1, num2, num3);
}

