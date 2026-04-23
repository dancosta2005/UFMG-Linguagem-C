/* 
Daniel Costa Andrade
16/04/2026
*/

#include <stdio.h>

int fat(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) res *= i;
    return res;
}

int mdc(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int mdc3(int a, int b, int c) {
    int m = mdc(a, b);
    return mdc(m, c);
}

int fib(int n) {
    int a = 0, b = 1, c;
    if (n == 0) return a;
    if (n == 1) return b;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int primo(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

void decrescente(int x) {
    for (int i = x - 1; i > 0; i--) printf("%d ", i);
    printf("\n");
}

int res(int a, int b) {
    while (a >= b) a -= b;
    return a;
}

int form(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) soma += (i * i);
    return soma;
}

int mmc(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / mdc(a, b);
}

int div(int a, int b) {
    int quociente = 0;
    while (a >= b) {
        a -= b;
        quociente++;
    }
    return quociente;
}

double raiz(double n) {
    double x = n, r;
    if (n == 0) return 0;
    while (1) {
        r = 0.5 * (x + (n / x));
        double diff = x - r;
        if (diff < 0) diff = -diff;
        if (diff < 0.001) break;
        x = r;
    }
    return r;
}

int dig(int n) {
    int soma = 0;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int potencia(int k, int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) resultado *= k;
    return resultado;
}

void crescente(int x) {
    for (int i = 1; i <= x; i++) printf("%d ", i);
    printf("\n");
}

int main() {
    printf("a) %d\n", fat(5));
    printf("b) %d\n", mdc(24, 18));
    printf("c) %d\n", mdc3(24, 18, 12));
    printf("d) %d\n", fib(6));
    
    printf("e) ");
    if (primo(7)) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    printf("f) ");
    decrescente(5);
    
    printf("g) %d\n", res(10, 3));
    printf("h) %d\n", form(3));
    printf("i) %d\n", mmc(4, 6));
    printf("j) %d\n", div(10, 3));
    printf("l) %.3f\n", raiz(25));
    printf("m) %d\n", dig(132));
    printf("n) %d\n", potencia(2, 3));
    
    printf("o) ");
    crescente(5);

    return 0;
}
