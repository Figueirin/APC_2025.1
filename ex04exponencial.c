#include <stdio.h>

double exp_natural(int x, int n) {
    double resultado = 1.0; 
    double termo = 1.0;

    for (int i = 1; i <= n; ++i) {
        termo *= (double)x / i;
        resultado += termo;
    }

    return resultado;
}