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

    int maior = 0, menor = 0;

    if(a > b){
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    int pot10 = 1;
    int temp = menor;

    while(temp > 0){
        pot10 *= 10;
        temp /= 10;
    }

    while(maior >= menor){
        if((maior % pot10) == menor){
            return 1;
        }
        maior /= 10;
    }
    return 0;

}