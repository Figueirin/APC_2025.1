#include <stdio.h>

int validaPeso(double peso){

    if(peso < 0){
        return 0;
    } else {
        return 1;
    }
}

void fazTonelada(double peso){

    double tonelada = peso / 1000;
    printf("%.4f\n", tonelada);
}

void fazGrama(double peso){

    double grama = peso * 1000;
    printf("%.4f\n", grama);
}