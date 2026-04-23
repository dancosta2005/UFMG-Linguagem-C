/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double perimetro (double r){
return ((2 * 3.14) * r);
}

void verificar_perimetro_circulo() {
    assert(perimetro(1));
    printf("Perimetro: OK\n");
}

int main(){
    verificar_perimetro_circulo();
    double r;
    scanf("%lf", &r);
    double resultado = perimetro(r);
    printf("O perimetro e: %.2lf", resultado);
}
