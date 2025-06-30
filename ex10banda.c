#include <stdio.h>

struct tipoMusica{

    char nome[80];
    int ano;
};

struct tipoBanda{
    char nome[80];
    int qtd;
    struct tipoMusica musicas[100];    
};

int comparaString(char a[], char b[]){

    int i = 0;
    while(a[i] != '\0' && b[i] != '\0'){
        if(a[i] != b[i]){
            return 0;
        }
        i++;
    }
    return a[i] == '\0' && b[i] == '\0';
}

void pesquisarNomeMusica(char pesquisa[80], struct tipoBanda bandas[50], int n){

    int flag = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < bandas[i].qtd; j++){
            if(comparaString (pesquisa, bandas[i].musicas[j].nome)){
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
                flag = 1;
            }
        }
    }
    if(!flag){
        printf("Musica nao cadastrada\n");
    }
}   