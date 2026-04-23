/* 
Daniel Costa Andrade
14/04/2026
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>

double media (double a, double b, double c){
return ((a + b + c) / 3);
}

void verificarMedia() {
    assert(media(10, 20, 30));
    printf("Media: OK\n");
}

int main(){
     verificarMedia();
    double a, b, c;
    scanf("%lf %lf  %lf", &a, &b, &c);
    double resultado = media(a, b, c);
    printf("A media e: %.2lf", resultado);
}
