#include <stdio.h>

int main() {
    int board[10][10];
    int snake[100][2];
    int length = 0;
    char move;
    int head_x, head_y;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &board[i][j]);
            if (board[i][j] > 0) {
                snake[board[i][j]-1][0] = i;
                snake[board[i][j]-1][1] = j;
                if (board[i][j] > length) {
                    length = board[i][j];
                }
            }
        }
    }

    head_x = snake[length-1][0];
    head_y = snake[length-1][1];

    while (1) {
        scanf(" %c", &move);
        if (move == 'p') {
            printf("Venceu\n");
            break;
        }

        int new_x = head_x;
        int new_y = head_y;

        if (move == 'w') new_x--;
        else if (move == 's') new_x++;
        else if (move == 'a') new_y--;
        else if (move == 'd') new_y++;

        if (new_x < 0 || new_x >= 10 || new_y < 0 || new_y >= 10) {
            printf("Bateu na parede\n");
            break;
        }

        int collision = 0;
        for (int i = 0; i < length-1; i++) {
            if (snake[i][0] == new_x && snake[i][1] == new_y) {
                collision = 1;
                break;
            }
        }
        if (collision) {
            printf("Bateu em si mesma\n");
            break;
        }

        for (int i = 0; i < length-1; i++) {
            snake[i][0] = snake[i+1][0];
            snake[i][1] = snake[i+1][1];
        }
        snake[length-1][0] = new_x;
        snake[length-1][1] = new_y;
        head_x = new_x;
        head_y = new_y;

        printf("Nao bateu\n");
    }

    return 0;
}
