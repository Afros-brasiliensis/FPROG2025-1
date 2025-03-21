/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	float a, b, c, x, y;


	printf("Digite o valor de a: ");
	scanf("%f", &a);

	printf("Digite o valor de b: ");
	scanf("%f", &b);

	printf("Digite o valor de c: ");
	scanf("%f", &c);

	printf("Digite o valor de x: ");
	scanf("%f", &x);


	y = (a * (x * x)) + (b * x) + c;


	printf("O valor de y = %.2f\n", y);

	return 0;
}