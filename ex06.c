#include <stdio.h>

int contarEstrelas(int qtd, int abertura){

    int foton_estrelas[qtd];    
    int estrelas_visiveis = 0;

    for(int i = 0; i < qtd; i++){
        scanf("%d", &foton_estrelas[i]);
    }

    for(int i = 0; i < qtd; i++){
        if(foton_estrelas[i] * abertura >= 40000000){
            estrelas_visiveis++;
        }
    }

    return estrelas_visiveis;
}