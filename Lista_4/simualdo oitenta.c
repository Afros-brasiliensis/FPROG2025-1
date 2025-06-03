#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int e;
    srand(time(NULL));

    e = (rand() % (100/5 + 1)) * 5;


    printf("%d\n", e);
}