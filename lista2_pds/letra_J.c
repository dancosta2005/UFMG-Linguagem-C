/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double hipotenusa (double b, double c){
return sqrt(pow(b, 2) + pow(c, 2));
}

void verificar_hipotenusa() {
    assert(hipotenusa(3, 4) == 5.0);
    printf("Hipotenusa: OK\n");
}

int main(){
    verificar_hipotenusa();
    double b, c;
    scanf("%lf %lf", &b, &c);
    double resultado = hipotenusa(b, c);
    printf("A hipotenusa e: %.2lf", resultado);
}
