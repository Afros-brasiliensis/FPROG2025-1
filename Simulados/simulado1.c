#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

int main() {
    srand(time(NULL));

     char letra = 'A' + rand() % (90 - 65 + 1);

    printf("%c\n", letra);
}
