#include <stdio.h>

struct tipoLogradouro{

    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240]){
    struct tipoLogradouro logradouro;

    int i = 0;
    
    for(int j = 0; info.tipo[j] != '\0' && i < 239; j++){
        linha[i++] = info.tipo[j];
    }

    if(i < 239){
        linha[i++] = ';';
    }

    for(int j = 0; info.nome[j] != '\0' && i < 239; j++){
        linha[i++] = info.nome[j];
    }

    if(i<239){
        linha[i++] = ';';
    }

    for(int j = 0; info.complemento[j] != '\0' && i < 239; j++){
        linha[i++] = info.complemento[j];
    }

    linha[i] = '\0';
}   