/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double area_triangulo (double b, double c){
return ((b + c) / 2);
}

void verificar_area_triangulo(){
    assert(area_triangulo(10, 5));
    printf("Area Triangulo: OK\n");
}

int main() {
    verificar_area_triangulo();
    double b, c;
    scanf("%lf %lf", &b, &c);
    double resultado = area_triangulo(b, c);
    printf("A area do triangulo e: %.2lf", resultado);
}
