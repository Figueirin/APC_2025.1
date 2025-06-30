#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){

    double horas = (double) (tB - tA) / 3600;
    if(horas <= 0){
        return 0;
    }
    return distancia / horas;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){

    double vel_media = calculaVelocidadeMedia(tA, tB, distancia);
    if(vel_media >= velocidadeMaxima){
        return 1;
    } else {
        return 0;
    }
}