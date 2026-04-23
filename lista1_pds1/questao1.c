#include <stdio.h> 
#include <math.h>

int main (){

    double letraA, letraB, letraC, letraD, letraE, letraF, letraG, letraH, letraI, letraJ, letraK, letraL, letraM, letraN, letraO, letraP, letraQ, letraR, letraS;
    char LETRA;


    letraA = (3 + 4); 
    letraB = (7.0/4.0);
    letraC = pow(3, 2);
    letraD = (5.3 - 2.1);
    letraE = ((2 * 5) - 2);
    letraF = (2 + (2 * 5));
    letraG = ((2 + 5) * 3);
    letraH = (sin(3.141502));
    letraI = sqrt(5);
    letraJ = (1 + 2 + 3);
    letraK = (1 * 2 * 3);
    letraL = ((1 + 2 + 3 / 3.0));
    letraM = ((2 + 4) * (3 - 1));
    letraN = ((9/3) + (3 * 2));
    letraO = (sin(4.5) + cos(3.7));
    letraP = (log10(2.3) - log10(3.1));
    letraQ = (log10(7) + ((log10(7) * log10(7)) - cos(log10(7))));
    letraR = (((10.3 + 8.4)/50.3) - (10.3 + 8.4));
    letraS = ((cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)));

    printf("Selecione uma das letras da lista: ");
    scanf("%c", &LETRA);

        if(LETRA == 'a'){
        printf("%0.lf", letraA);
    
        } else if (LETRA == 'b'){
        printf("%.2lf", letraB);
        
        } else if (LETRA == 'c'){
        printf("%0.lf", letraC);

        } else if (LETRA == 'd'){
        printf("%.1lf", letraD);

        } else if (LETRA == 'e'){
        printf("%0.lf", letraE);

        } else if (LETRA == 'f'){
        printf("%0.lf", letraF);

        } else if (LETRA == 'g'){
        printf("%0.lf", letraG);

        } else if (LETRA == 'h'){
        printf("%lf", letraH);

        } else if (LETRA == 'i'){
        printf("%lf", letraI);

        } else if (LETRA == 'j'){
        printf("%0.lf", letraJ);

        } else if (LETRA == 'k'){
        printf("%0.lf", letraK);

        } else if (LETRA == 'l'){
        printf("%1.lf", letraL);

        } else if (LETRA == 'm'){
        printf("%0.lf", letraM);

        } else if (LETRA == 'n'){
        printf("%0.lf", letraN);

        } else if (LETRA == 'o'){
        printf("%lf", letraO);

        } else if (LETRA == 'p'){
        printf("%lf", letraP);

        } else if (LETRA == 'q'){
        printf("%lf", letraQ); 

        } else if (LETRA == 'r'){
        printf("%.1lf", letraR); 

        } else if (LETRA == 's'){
        printf("%lf", letraS);

        } else {
            
            printf("TENTE NOVAMENTE");

        }

    return 0;
}
