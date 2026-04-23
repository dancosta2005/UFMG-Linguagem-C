/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double volume_caixa (double a, double b, double c){
return (a * b * c);
}

void verificar_volume_caixa() {
    assert(volume_caixa(2, 3, 4) == 24.0);
    printf("Volume Caixa: OK\n");
}

int main(){
    verificar_volume_caixa();
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double resultado = volume_caixa(a, b, c);
    printf("O volume da caixa e: %.2lf", resultado);
}
