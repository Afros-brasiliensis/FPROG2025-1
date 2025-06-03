#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    srand(time(NULL));

    int b;

    b = rand() % (-5 - (-20) + 1) + (-20);
    printf("%d\n", b);
}