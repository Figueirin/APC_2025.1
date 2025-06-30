#include <stdio.h>

int main() {
    int M, N, Q;
    char caderno1[100][81];
    char caderno2[100][81];
    
    scanf("%d %d %d", &M, &N, &Q);
    
    for (int i = 0; i < M; i++) {
        scanf(" %[^\n]", caderno1[i]);
    }
    
    for (int i = 0; i < N; i++) {
        scanf(" %[^\n]", caderno2[i]);
    }
    
    for (int i = 0; i < Q; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        
        char *frase;
        if (A == 1) {
            frase = caderno1[B - 1];
        } else {
            frase = caderno2[B - 1];
        }
        
        printf("%s\n", frase + C);
    }
    
    return 0;
}
