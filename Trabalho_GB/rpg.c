#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

typedef enum {
    Guerreiro,
    Mago,
    Caçador,
    Paladino,
    Bárbaro
} Classe;


typedef struct {
    Classe classe;
    float ataque;
    float defesa;
    float vida;
} Personagem;

Personagem times[5][2] = {
    {{Guerreiro, 20.0, 10.0, 100.0}, {Guerreiro, 20.0, 10.0, 100.0}},
    {{Mago, 30.0, 5.0, 100.0}, {Mago, 30.0, 5.0, 100.0}},
    {{Caçador, 18.0 , 8.0, 100.0}, {Caçador, 18.0 , 8.0, 100.0}},
    {{Paladino, 15.0, 12.0, 100.0}, {Paladino, 15.0, 12.0, 100.0}},
    {{Bárbaro, 25.0, 6.0, 100.0}, {Bárbaro, 25.0, 6.0, 100.0}}
};




//FUNÇÃO QUE SORTEIA QUEM VAI SER ATACADO, RETORNA "ALVO" 
// Vai retornar o índice do personagem com maior razão (vida/ataque)
// ou -1 se nenhum personagem válido (vivo e ataque > 0)
int personagem_atacante(Personagem time[], int qnt_integrantes) {
    int quemataca = -1; //guarda o índice do personagem com maior razao até agora
    float maior_razao = -1.0;  // inicializa com -1 para conseguir a possível substituição
    for (int i = 0; i < qnt_integrantes; i++){
        if (time[i][start].vida > 0 && time[i][start].ataque > 0){
             float razao = time[i][start].vida / time[i][start].ataque;
             if (razao > maior_razao){
             maior_razao = razao;
             quemataca = i; //vai retornar o índice/endereço do atacante
            }
        }
    }
    return quemataca;
}


//FUNÇÃO QUE ESCOLHE QUEM ATACA, RETORNA "QUEMATACA"

float calcular_dano(Personagem atacante, Personagem defensor) {
    float dano;
    int chance;
    int defesa_falhou = rand() % 100 < 20;
    float defesa;

    if (defesa_falhou == true){
    defesa = 0;} 

    else{
    defesa = defensor.defesa;}

    //chance de errar (exceto Bárbaro)
    if (atacante.classe != Bárbaro && rand() % 100 < 20) {
        printf("Ataque errou!\n");
        return 0;
    }

    //dano "base", sem habilidades especiais
    dano = atacante.ataque - defesa;
    if (dano < 0){
    dano = 0;}

    // verifica se vão usar habilidades especiais
    chance = rand() % 100;

    switch (atacante.classe) {
        case Guerreiro:
            if (chance < 20) {
                dano = atacante.ataque * 2 - defesa;
                if (dano < 0) dano = 0;
                printf("Habilidade especial: Golpe Crítico!\n");
            }
            break;

        case Mago:
            if (chance < 25) {
                dano = atacante.ataque; // ignora defesa
                printf("Habilidade especial: Bola de Fogo!\n");
            }
            break;

        case Caçador:
            if (chance < 15) {
                printf("Habilidade especial: Ataque Duplo!\n");
                // Chama duas vezes e soma
                dano += calcular_dano(atacante, defensor);
            }
            break;
    }

    printf("Dano causado: %.1f\n", dano);
    return dano;
}


int main()
{
    
for (i = 0; i < 5; i++) {

    int start = rand() % 2;
    int last = 1 - start

    float calcular_dano(times[quemataca][start], times[alvo][last]);

    times[alvo][last].vida -= dano;

    printf("Vida restante = %.2f", times[alvo][last].vida);
}

}