/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double volume_cilindro (double r, double h){
return ((pow(r, 2) * 3.14) * h);
}

void verificar_volume_cilindro() {
    assert(volume_cilindro(1, 2));
    printf("Volume Cilindro: OK\n");
}

int main(){
    verificar_volume_cilindro();
    double r, h;
    scanf("%lf %lf", &r, &h);
    double resultado = volume_cilindro(r, h);
    printf("O volume do cilindro e: %.2lf", resultado);
}
