/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double raiz1 (double a, double b, double c){
return (((-b) + sqrt((pow(b, 2) -  (4 * a * c)))) / (2 * a));
}

double raiz2 (double a, double b, double c){
return (((-b) - sqrt((pow(b, 2) -  (4 * a * c)))) / (2 *a));
}

void verificar_raiz1(){
    assert(raiz1(1, -5, 6) == 3.000);
    printf("Raiz 1: OK\n");
}

void verificar_raiz2(){
    assert(raiz2(1, -5, 6) == 2.000);
    printf("Raiz 2: OK\n");
}

int main(){
    verificar_raiz1();
    verificar_raiz2();
    double a, b, c;
    double delta = (pow(b, 2) -  (4 * a * c));
    scanf("%lf %lf %lf", &a, &b, &c);

        if(delta > 0){
            double resultado1 = raiz1(a, b, c);
            double resultado2 = raiz2(a, b, c);
            printf("As raizes sao: %.3lf %.3lf", resultado1, resultado2);
        } else {
            printf("Delta nao possui raiz real");
        }

}
