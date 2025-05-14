#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int dias = 2;
	int Tatu_canastra = 0;
	int Gato_maracajá = 0;
	int Tamanduá_bandeira = 0;
	int avistamentos;


	printf("Quantos avistamentos teve o Tatu Canastra no dia 1?\n");
	scanf("%d", &Tatu_canastra);

	int dia1_tatu = Tatu_canastra;

	printf("Quantos avistamentos teve o Gato Maracajá no dia 1?\n");
	scanf("%d", &Gato_maracajá);

	int dia1_gato = Gato_maracajá;

	printf("Quantos avistamentos teve o Tamanduá Bandeira no dia 1?\n");
	scanf("%d", &Tamanduá_bandeira);

	int dia1_tamandua = Tamanduá_bandeira;

	printf("Quantos avistamentos teve o Tatu Canastra no dia 2?\n");
	scanf("%d", &Tatu_canastra);

	int dia2_tatu = Tatu_canastra;

	printf("Quantos avistamentos teve o Gato Maracajá no dia 2?\n");
	scanf("%d", &Gato_maracajá);

	int dia2_gato = Gato_maracajá;

	printf("Quantos avistamentos teve o Tamanduá Bandeira no dia 2?\n");
	scanf("%d", &Tamanduá_bandeira);

	int dia2_tamandua = Tamanduá_bandeira;

	printf("Quantos avistamentos teve o Tatu Canastra no dia 3?\n");
	scanf("%d", &Tatu_canastra);

	int dia3_tatu = Tatu_canastra;

	printf("Quantos avistamentos teve o Gato Maracajá no dia 3?\n");
	scanf("%d", &Gato_maracajá);

	int dia3_gato = Gato_maracajá;

	printf("Quantos avistamentos teve o Tamanduá Bandeira no dia 3?\n");
	scanf("%d", &Tamanduá_bandeira);

	int dia3_tamandua = Tamanduá_bandeira;

	printf("Quantos avistamentos teve o Tatu Canastra no dia 4?\n");
	scanf("%d", &Tatu_canastra);

	int dia4_tatu = Tatu_canastra;

	printf("Quantos avistamentos teve o Gato Maracajá no dia 4?\n");
	scanf("%d", &Gato_maracajá);

	int dia4_gato = Gato_maracajá;

	printf("Quantos avistamentos teve o Tamanduá Bandeira no dia 4?\n");
	scanf("%d", &Tamanduá_bandeira);

	int dia4_tamandua = Tamanduá_bandeira;

	printf("Quantos avistamentos teve o Tatu Canastra no dia 5?\n");
	scanf("%d", &Tatu_canastra);

	int dia5_tatu = Tatu_canastra;

	printf("Quantos avistamentos teve o Gato Maracajá no dia 5?\n");
	scanf("%d", &Gato_maracajá);

	int dia5_gato = Gato_maracajá;

	printf("Quantos avistamentos teve o Tamanduá Bandeira no dia 5?\n");
	scanf("%d", &Tamanduá_bandeira);

	int dia5_tamandua = Tamanduá_bandeira;

	printf("Quantos avistamentos teve o Tatu Canastra no dia 6?\n");
	scanf("%d", &Tatu_canastra);

	int dia6_tatu = Tatu_canastra;

	printf("Quantos avistamentos teve o Gato Maracajá no dia 6?\n");
	scanf("%d", &Gato_maracajá);

	int dia6_gato = Gato_maracajá;

	printf("Quantos avistamentos teve o Tamanduá Bandeira no dia 6?\n");
	scanf("%d", &Tamanduá_bandeira);

	int dia6_tamandua = Tamanduá_bandeira;

	printf("Quantos avistamentos teve o Tatu Canastra no dia 7?\n");
	scanf("%d", &Tatu_canastra);

	int dia7_tatu = Tatu_canastra;

	printf("Quantos avistamentos teve o Gato Maracajá no dia 7?\n");
	scanf("%d", &Gato_maracajá);

	int dia7_gato = Gato_maracajá;

	printf("Quantos avistamentos teve o Tamanduá Bandeira no dia 7?\n");
	scanf("%d", &Tamanduá_bandeira);

	int dia7_tamandua = Tamanduá_bandeira;


	avistamentos = dia1_tatu + dia2_tatu + dia3_tatu + dia4_tatu + dia5_tatu + dia6_tatu + dia7_tatu + dia1_gato + dia2_gato + dia3_gato + dia3_gato + dia4_gato + dia5_gato + dia6_gato + dia7_gato + dia1_tamandua + dia2_tamandua + dia3_tamandua + dia4_tamandua + dia5_tamandua + dia6_tamandua + dia7_tamandua;

	int avistamentos_Tatu = dia1_tatu + dia2_tatu + dia3_tatu + dia4_tatu + dia5_tatu + dia6_tatu + dia7_tatu;

	int avistamentos_Gato = dia1_gato + dia2_gato + dia3_gato + dia4_gato + dia5_gato + dia6_gato + dia7_gato;

	int avistamentos_Tamandua = dia1_tamandua + dia2_tamandua + dia3_tamandua + dia4_tamandua + dia5_tamandua + dia6_tamandua + dia7_tamandua;



	printf("O total de avistamentos do Tatu foi %d\n\n", avistamentos_Tatu);

	printf("O total de avistamentos do Gato foi %d\n\n", avistamentos_Gato);

	printf("O total de avistamentos do Tamandua foi %d\n\n", avistamentos_Tamandua);

	float mediaavistamentos_tatu = (dia1_tatu + dia2_tatu + dia3_tatu + dia4_tatu + dia5_tatu + dia6_tatu + dia7_tatu) / 7;

	printf("A media de avistamentos diarios do tatu foi de %.2f\n\n", mediaavistamentos_tatu);

	float mediaavistamentos_gato = (dia1_gato + dia2_gato + dia3_gato + dia4_gato + dia5_gato + dia6_gato + dia7_gato) / 7;

	printf("A media de avistamentos diarios do gato foi de %.2f\n\n", mediaavistamentos_gato);

	float mediaavistamentos_tamandua = (dia1_tamandua + dia2_tamandua + dia3_tamandua + dia4_tamandua + dia5_tamandua + dia6_tamandua + dia7_tamandua) / 7;

	printf("A media de avistamentos diarios do tamandua foi de %.2f\n\n", mediaavistamentos_tamandua);

	if (avistamentos_Gato > avistamentos_Tatu && avistamentos_Gato > avistamentos_Tamandua) {
		printf("O gato foi a especie mais avistada\n\n");
	}

	if (avistamentos_Tatu > avistamentos_Gato && avistamentos_Tatu > avistamentos_Tamandua) {
		printf("O tatu foi a especie mais avistada\n\n");
	}

	if (avistamentos_Tamandua > avistamentos_Gato && avistamentos_Tamandua > avistamentos_Tatu) {
		printf("A tamandua foi a especie mais avistada\n\n");
	}
	return 0;




}
