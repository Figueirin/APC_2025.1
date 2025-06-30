#include <stdio.h>
#include <string.h>

int encaixa(int a, int b){

    int digitos_b = 0;
    int temp = b;

    if(b == 0){
        digitos_b = 1;
    } else {
        while(temp > 0){
            temp /= 10;
            digitos_b++;
        }
    }

    int potencia = 1;
    for(int i = 0; i < digitos_b; i++){
        potencia *= 10;
    }

    int ultimos_num = a % potencia;

    if(ultimos_num == b){
        return 1;
    } else {
        return 0;
    }
}

int segmento(int a, int b){

    char menor[12], maior[12];

    if (a <= b) {
        sprintf(menor, "%d", a);
        sprintf(maior, "%d", b);
    } else {
        sprintf(menor, "%d", b);
        sprintf(maior, "%d", a);
    }

    if(strstr(maior, menor) != NULL){
        return 1;
    } else {
        return 0;
    }
}