/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double area_circulo (double r){
return (pow(r, 2) * 3.14);
}

void verificar_area_circulo(){
    assert (area_circulo(2));
    printf("Area Circulo: OK\n");
}

int main(){
    verificar_area_circulo();
    double r;
    scanf("%lf", &r);
    double resultado = area_circulo(r);
    printf("A area do circulo e: %.2lf", resultado);
}
