/* 
Daniel Costa Andrade
11/04/2026
*/

#include <stdio.h>
#include <stdbool.h>

int max(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

int min(int a, int b, int c) {
    int m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    return m;
}

bool par(int x) {
    if (x % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

bool dentro(int x, int y, int z) {
    if (x >= y && x <= z) {
        return true;
    } else {
        return false;
    }
}

bool fora(int x, int y, int z) {
    if (x < y || x > z) {
        return true;
    } else {
        return false;
    }
}

bool divisivel(int x, int y) {
    if (x % y == 0) {
        return true;
    } else {
        return false;
    }
}

bool bissexto(int ano) {
    if (divisivel(ano, 400) || (divisivel(ano, 4) && !divisivel(ano, 100))) {
        return true;
    } else {
        return false;
    }
}

int main() {
    printf("Maior entre 10, 20, 15: %d\n", max(10, 20, 15));
    printf("Menor entre 10, 20, 15: %d\n", min(10, 20, 15));


    printf("O numero 4 e par? ");
    if (par(4)) {
        printf("verdadeiro\n");
    } else {
        printf("falso\n");
    }

    printf("O numero 5 esta dentro de 1e 10? ");
    if (dentro(5, 1, 10)) {
        printf("verdadeiro\n");
    } else {
        printf("falso\n");
    }

    printf("O numero 15 esta fora de 1 e 10]? ");
    if (fora(15, 1, 10)) {
        printf("verdadeiro\n");
    } else {
        printf("falso\n");
    }

    int anos[] = {2000, 1900, 3600, 2004};
    for (int i = 0; i < 4; i++) {
        printf("Bissexto(%d): ", anos[i]);
        if (bissexto(anos[i])) {
            printf("verdadeiro\n");
        } else {
            printf("falso\n");
        }
    }

    return 0;
}
