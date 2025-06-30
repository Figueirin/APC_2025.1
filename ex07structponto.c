#include <stdio.h>
#include <math.h>

struct tipoPonto{
    int x;
    int y;
};

double distancia(struct tipoPonto pa, struct tipoPonto pb){

    int dx = (pb.x - pa.x);
    int dy = (pb.y - pa.y);
    return sqrt(dx * dx - dy * dy);
}