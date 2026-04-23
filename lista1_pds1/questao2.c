#include <stdio.h> 
#include <math.h>

int main (){

    int a, b, c, d;
    double letraA, letraB, letraC, letraD, letraE, letraF, letraG, letraH, letraI, letraJ, letraK, letraL, letraM, letraN, letraO, letraP, letraQ, letraR, letraS;
    char LETRA;
    
    printf("De uma valor para as variaveis a, b, c e d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

     letraA = (a + b); 
    letraB = ((double) a / c);
    letraC = pow (a, 2);
    letraD = (b * c);
    letraE = ((a * b) - c);
    letraF = (a + (b * c));
    letraG = ((a + b) * c);
    letraH = (sin(a));
    letraI = sqrt(b);
    letraJ = (a + b + c);
    letraK = (a * b * c);
    letraL = ((double)(a + b + c) / d);
    letraM = ((a + b) * (a - d));
    letraN = (((double)b/c) + (a * d));
    letraO = (sin(b) + cos(c));
    letraP = (log10(a) - log10(c));
    letraQ = (log10(a) + ((log10(b) * log10(d)) - cos(log10(c))));
    letraR = (((double)(b + a)  /c) - (d + a));
    letraS = ((cos(d) + sin(c)) * (cos(b) - sin(a)));

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
        printf("%lf", letraG);

        } else if (LETRA == 'h'){
        printf("%lf", letraH);

        } else if (LETRA == 'i'){
        printf("%lf", letraI);

        } else if (LETRA == 'j'){
        printf("%lf", letraJ);

        } else if (LETRA == 'k'){
        printf("%lf", letraK);

        } else if (LETRA == 'l'){
        printf("%lf", letraL);

        } else if (LETRA == 'm'){
        printf("%lf", letraM);

        } else if (LETRA == 'n'){
        printf("%lf", letraN);

        } else if (LETRA == 'o'){
        printf("%lf", letraO);

        } else if (LETRA == 'p'){
        printf("%lf", letraP);

        } else if (LETRA == 'q'){
        printf("%lf", letraQ); 

        } else if (LETRA == 'r'){
        printf("%lf", letraR); 

        } else if (LETRA == 's'){
        printf("%lf", letraS);

        } else {
            
            printf("TENTE NOVAMENTE");

        }

    return 0;
}
