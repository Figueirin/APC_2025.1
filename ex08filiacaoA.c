#include <stdio.h>

struct tipoFiliacao{

    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240]){
    struct tipoFiliacao pessoa;

    int i = 0;
    int j = 0;
    int contador = 0;

    for(int k = 0; k < 80; k++){
        pessoa.nome[k] = '\0';
        pessoa.nomeMae[k] = '\0';
        pessoa.nomePai[k] = '\0';
    }

    while(linha[i] != '\0'){
        if(linha[i] == ','){
            contador++;
            j = 0;
        } else {
            if(contador == 0 && j < 79){
                pessoa.nome[j++] = linha[i];
            } else if (contador == 1 && j < 79){
                pessoa.nomeMae[j++] = linha[i];
            } else if (contador == 2 && j < 79){
                pessoa.nomePai[j++] = linha[i];
            }
        }
        i++;
    }
    return pessoa;
}