/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double area_cilindro (double r, double h){
return (((2 * r) * 3.14) * h);
}

void verificar_area_cilindro() {
    assert(area_cilindro(1, 2));
    printf("Area Cilindro: OK\n");
}

int main(){
    verificar_area_cilindro();
    double r, h;
    scanf("%lf %lf", &r, &h);
    double resultado = area_cilindro(r, h);
    printf("O volume do cilindro e: %.2lf", resultado);
}
