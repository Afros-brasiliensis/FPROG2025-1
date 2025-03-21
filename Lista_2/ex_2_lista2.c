/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float reais, taxa, dolares;
    printf("Dolares a comprar: ");
    scanf("%f", &dolares);
    printf("Qual a taxa de cambio atual? ");
    scanf("%f", &taxa);
    reais = dolares * taxa;
    printf("O equivalente em reais é: R$%.2f\n", reais);
    
    return 21;
}
