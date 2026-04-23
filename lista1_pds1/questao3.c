#include <stdio.h>
#include <math.h>

int main (){

    int a, b, c;
    double letraA, letraB, letraC, letraD, letraE, letraF, letraG, raiz1, raiz2, delta;
    char LETRA;

    printf("De uma valor para as variaveis a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = (pow(b, 2) - (4 * a * c));

    letraA = ((a + b + c) / 3.00);
    letraB = (((a * 3.00) + (b * 4.00) + (c * 5.00)) / 12.00);
    letraC = ((2 * a) * 3.14);
    letraD = ((pow(a, 2)) * 3.14);
    letraE = ((b * c )/ 2.00);
    letraF = (pow(b, 2) + pow(c, 2));

    printf("Selecione uma das letras da lista: ");
    scanf(" %c", &LETRA);

        if(LETRA == 'a'){
        printf("%lf", letraA);
   
        } else if (LETRA == 'b'){
        printf("%lf", letraB);

        } else if (LETRA == 'c'){
        printf("%lf", letraC);

        } else if (LETRA == 'd'){
        printf("%lf", letraD);

        } else if (LETRA == 'e'){
        printf("%lf", letraE);

        } else if (LETRA == 'f'){
        printf("%lf", letraF);

        } else if (LETRA == 'g'){
            if(delta < 0){
               
                printf("Nao possui raiz real");
            
            } else {
                raiz1 = ((-b + sqrt(delta)) / (2.00 * a));  
                raiz2 = ((-b - sqrt(delta)) / (2.00 * a));  

                printf("%lf %lf", raiz1, raiz2);
            }

        } else {
            printf("TENTE NOVAMENTE");
        }
    }
