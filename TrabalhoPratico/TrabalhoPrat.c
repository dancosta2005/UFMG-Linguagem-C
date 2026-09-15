/*
Daniel Costa Andrade
Trabalho Prático PDS1
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NOME 50
#define MAX_TIPO 20
#define MAX_POKEMON 100

typedef struct {
    char nome[MAX_NOME];
    float ataque;
    float defesa;
    float vida;
    char tipo[MAX_TIPO];
    bool derrotado;
} Pokemon;

float obtertipo(const char *tipo_atq, const char *tipo_def) {
    if (strcmp(tipo_atq, "elétrico") == 0 || strcmp(tipo_atq, "eletrico") == 0) {
        if (strcmp(tipo_def, "água") == 0 || strcmp(tipo_def, "agua") == 0) return 1.2f;
        if (strcmp(tipo_def, "pedra") == 0) return 0.8f;
    }
    if (strcmp(tipo_atq, "água") == 0 || strcmp(tipo_atq, "agua") == 0) {
        if (strcmp(tipo_def, "fogo") == 0) return 1.2f;
        if (strcmp(tipo_def, "elétrico") == 0 || strcmp(tipo_atq, "eletrico") == 0) return 0.8f;
    }
    if (strcmp(tipo_atq, "fogo") == 0) {
        if (strcmp(tipo_def, "gelo") == 0) return 1.2f;
        if (strcmp(tipo_def, "água") == 0 || strcmp(tipo_def, "agua") == 0) return 0.8f;
    }
    if (strcmp(tipo_atq, "gelo") == 0) {
        if (strcmp(tipo_def, "pedra") == 0) return 1.2f;
        if (strcmp(tipo_def, "fogo") == 0) return 0.8f;
    }
    if (strcmp(tipo_atq, "pedra") == 0) {
        if (strcmp(tipo_def, "elétrico") == 0 || strcmp(tipo_def, "eletrico") == 0) return 1.2f;
        if (strcmp(tipo_def, "gelo") == 0) return 0.8f;
    }
    return 1.0f;
}

int main() {
    FILE *arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro: O arquivo 'dados.txt' nao pôde ser aberto.\n");
        return 1;
    }

    int n, m;
    if (fscanf(arquivo, "%d %d", &n, &m) != 2) {
        fclose(arquivo);
        return 1;
    }
    printf("%d %d\n", n, m);

    Pokemon j1[MAX_POKEMON];
    Pokemon j2[MAX_POKEMON];

    for (int i = 0; i < n; i++) {
        fscanf(arquivo, "%s %f %f %f %s", j1[i].nome, &j1[i].ataque, &j1[i].defesa, &j1[i].vida, j1[i].tipo);
        j1[i].derrotado = false;
        printf("%s %.0f %.0f %.0f %s\n", j1[i].nome, j1[i].ataque, j1[i].defesa, j1[i].vida, j1[i].tipo);
    }

    for (int i = 0; i < m; i++) {
        fscanf(arquivo, "%s %f %f %f %s", j2[i].nome, &j2[i].ataque, &j2[i].defesa, &j2[i].vida, j2[i].tipo);
        j2[i].derrotado = false;
        printf("%s %.0f %.0f %.0f %s\n", j2[i].nome, j2[i].ataque, j2[i].defesa, j2[i].vida, j2[i].tipo);
    }

    fclose(arquivo);

    int p1 = 0, p2 = 0;
    int turno = 1;

    while (p1 < n && p2 < m) {
        float fator, poder_ataque, dano;

        if (turno == 1) {
            fator = obtertipo(j1[p1].tipo, j2[p2].tipo);
            poder_ataque = j1[p1].ataque * fator;
            
            if (poder_ataque > j2[p2].defesa) {
                dano = poder_ataque - j2[p2].defesa;
            } else {
                dano = 1.0f;
            }
            
            j2[p2].vida -= dano;

            if (j2[p2].vida <= 0) {
                j2[p2].derrotado = true;
                printf("%s venceu %s\n", j1[p1].nome, j2[p2].nome);
                p2++;
            } else {
                turno = 2;
            }
        } else {
            fator = obtertipo(j2[p2].tipo, j1[p1].tipo);
            poder_ataque = j2[p2].ataque * fator;
            
            if (poder_ataque > j1[p1].defesa) {
                dano = poder_ataque - j1[p1].defesa;
            } else {
                dano = 1.0f;
            }
            
            j1[p1].vida -= dano;

            if (j1[p1].vida <= 0) {
                j1[p1].derrotado = true;
                printf("%s venceu %s\n", j2[p2].nome, j1[p1].nome);
                p1++;
            } else {
                turno = 1;
            }
        }
    }

    if (p1 < n) {
        printf("Treinador 1 venceu\n");
    } else {
        printf("Treinador 2 venceu\n");
    }

    printf("Pokemon sobreviventes:\n");
    bool primeiro = true;
    for (int i = 0; i < n; i++) {
        if (!j1[i].derrotado) {
            if (!primeiro) printf(" ");
            printf("%s", j1[i].nome);
            primeiro = false;
        }
    }
    for (int i = 0; i < m; i++) {
        if (!j2[i].derrotado) {
            if (!primeiro) printf(" ");
            printf("%s", j2[i].nome);
            primeiro = false;
        }
    }
    printf("\n");

    printf("Pokemon derrotados:\n");
    primeiro = true;
    for (int i = 0; i < n; i++) {
        if (j1[i].derrotado) {
            if (!primeiro) printf(" ");
            printf("%s", j1[i].nome);
            primeiro = false;
        }
    }
    for (int i = 0; i < m; i++) {
        if (j2[i].derrotado) {
            if (!primeiro) printf(" ");
            printf("%s", j2[i].nome);
            primeiro = false;
        }
    }
    printf("\n");

    return 0;
}
