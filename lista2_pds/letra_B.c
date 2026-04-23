/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double mediaponderada (double a, double b, double c){
return (((a * 3) + (b * 4) + (c * 5)) / 12);
}

void verificar_media_ponderada() {
    assert(mediaponderada(10, 10, 10));
    printf("Media Ponderada: OK\n");
}

int main(){
    verificar_media_ponderada();
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double resultado = mediaponderada(a, b, c);
    printf("A media ponderada e: %.2lf", resultado);
}
