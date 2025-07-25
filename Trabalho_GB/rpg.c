#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
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

void imprimir_personagem(Personagem p) {
    const char* nomes[] = {"Guerreiro", "Mago", "Caçador", "Paladino", "Bárbaro"};
    const char* status = p.vida > 0 ? "VIVO" : "MORTO";
    printf("  %-9s | Vida: %6.1f | Status: %s\n", nomes[p.classe], p.vida, status);
}

// Função que sorteia um alvo aleatório entre os vivos do time adversário
int sortear_alvo(Personagem time[], int tamanho) {
    int vivos[5];
    int qnt_vivos = 0;

    for (int i = 0; i < tamanho; i++) {
        if (time[i].vida > 0) {
            vivos[qnt_vivos++] = i;
        }
    }

    if (qnt_vivos == 0) return -1;

    int alvo = rand() % qnt_vivos;
    return vivos[alvo];
}

// Função que retorna o índice do personagem com maior razão vida/ataque
int personagem_atacante(Personagem time[], int qnt_integrantes) {
    int quemataca = -1;
    float maior_razao = -1.0;
    for (int i = 0; i < qnt_integrantes; i++) {
        if (time[i].vida > 0 && time[i].ataque > 0) {
            float razao = time[i].vida / time[i].ataque;
            if (razao > maior_razao) {
                maior_razao = razao;
                quemataca = i;
            }
        }
    }
    return quemataca;
}

float calcular_dano(Personagem atacante, Personagem defensor) {
    float dano;
    int chance;
    int defesa_falhou = rand() % 100 < 20;
    float defesa;

    if (defesa_falhou) {
        defesa = 0;
    } else {
        defesa = defensor.defesa;
    }

    // chance de errar (exceto Bárbaro)
    if (atacante.classe != Bárbaro && rand() % 100 < 20) {
        printf("Ataque errou!\n");
        return 0;
    }

    dano = atacante.ataque - defesa;
    if (dano < 0) {
        dano = 0;
    }

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
                dano = atacante.ataque;
                printf("Habilidade especial: Bola de Fogo!\n");
            }
            break;
        case Caçador:
            if (chance < 15) {
                printf("Habilidade especial: Ataque Duplo!\n");
                dano += calcular_dano(atacante, defensor);
            }
            break;
    }

    printf("Dano causado: %.1f\n", dano);
    return dano;
}

int main() {
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        int start = rand() % 2;
        int last = 1 - start;

        int quemataca = personagem_atacante(times[start], 5);
        int alvo = sortear_alvo(times[last], 5);

        if (quemataca == -1 || alvo == -1) {
            printf("Nenhum ataque nesta rodada: algum time está sem membros vivos.\n");
            continue;
        }

        float dano = calcular_dano(times[quemataca][start], times[alvo][last]);

        times[alvo][last].vida -= dano;
        if (times[alvo][last].vida < 0)
            times[alvo][last].vida = 0;

        printf("Vida restante do alvo: %.2f\n", times[alvo][last].vida);
    }

    return 0;
}
