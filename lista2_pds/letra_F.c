/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double area_caixa (double a, double b, double c){
return (2 * ((a * b) + (a * c) + (b * c)));
}

void verificar_area_caixa() {
    assert(area_caixa(2, 3, 4) == 52.0);
    printf("Area Caixa: OK\n");
}

int main(){
    verificar_area_caixa();
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double resultado = area_caixa(a, b, c);
    printf("A area da caixa e: %.2lf", resultado);
}
