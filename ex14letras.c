#include <stdio.h>

int main() {
    char letra;
    char texto[1001];
    int total_palavras = 0;
    int palavras_com_letra = 0;
    int i = 0;

    scanf("%c\n", &letra);
    fgets(texto, sizeof(texto), stdin);

    while (texto[i] != '\0' && texto[i] != '\n') {
        int tem_letra = 0;
        while (texto[i] != ' ' && texto[i] != '\0' && texto[i] != '\n') {
            if (texto[i] == letra) {
                tem_letra = 1;
            }
            i++;
        }
        if (tem_letra) {
            palavras_com_letra++;
        }
        if (texto[i] == ' ') {
            total_palavras++;
        }
        i++;
    }

    if (i > 0) {
        total_palavras++;
    }

    double porcentagem = 0.0;
    if (total_palavras > 0) {
        porcentagem = (double)palavras_com_letra / total_palavras * 100;
    }

    printf("%.1f\n", porcentagem);
    return 0;
}
