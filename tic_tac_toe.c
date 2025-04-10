#include <stdio.h>
#define HEIHGT 5
#define WIDTH 5

void draw_field(char field[HEIHGT][WIDTH], char first_player, char second_player);
void player_1_move(char field[HEIHGT][WIDTH], char first_player);
void player_2_move(char field[HEIHGT][WIDTH], char second_player);
int check_win(char field[HEIHGT][WIDTH], char player);
int chek_draw(char field[HEIHGT][WIDTH]);

int main() {
    char pole[HEIHGT][WIDTH];
    char first_player = 'X';
    char second_player = 'O';
    while (1) {
        player_1_move(pole, first_player);
        draw_field(pole, first_player, second_player);
        if (chek_draw(pole)) {
            printf("Ничья\n");
            break;
        }
        if (check_win(pole, first_player)) {
            printf("Победил игрок №1\n");
            break;
        }
        player_2_move(pole, second_player);
        draw_field(pole, first_player, second_player);
        if (check_win(pole, second_player)) {
            printf("Победил игрок №2\n");
            break;
        }
    }
    return 0;
}

void draw_field(char field[HEIHGT][WIDTH], char first_player, char second_player) {
    for (int i = 1; i < HEIHGT; i++) {
        for (int j = 1; j < WIDTH; j++) {
            if (field[i][j] == first_player) {
                field[i][j] = first_player;
            } else if (field[i][j] == second_player) {
                field[i][j] = second_player;
            } else {
                field[i][j] = ' ';
            }
        }
    }
    for (int i = 0; i < HEIHGT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == 0 || i == HEIHGT - 1) {
                printf("—");
            } else if ((j == 0 || j == WIDTH - 1)) {
                printf("|");
            } else {
                printf("%c", field[i][j]);
            }
        }
        printf("\n");
    }
}

void player_1_move(char field[HEIHGT][WIDTH], char first_player) {
    int x, y;
    printf("Ход игрока № 1: ");
    scanf("%d %d", &x, &y);
    field[x][y] = first_player;
}

void player_2_move(char field[HEIHGT][WIDTH], char second_player) {
    int x, y;
    printf("Ход игрока № 2: ");
    scanf("%d %d", &x, &y);
    field[x][y] = second_player;
}

int check_win(char field[HEIHGT][WIDTH], char player) {
    int ret_flug = 0;
    for (int i = 1; i < HEIHGT; i++) {
        int flag = 0;
        for (int j = 1; j < WIDTH; j++) {
            if (field[i][j] == player) {
                flag++;
            }
        }
        if (flag == 3) {
            ret_flug = 1;
            break;
        }
    }
    if (ret_flug == 0) {
        for (int j = 1; j < HEIHGT; j++) {
            int flag = 0;
            for (int i = 1; i < WIDTH; i++) {
                if (field[i][j] == player) {
                    flag++;
                }
            }
            if (flag == 3) {
                ret_flug = 1;
                break;
            }
        }
    }
    if (field[2][2] == player && ret_flug == 0) {
        if ((field[1][1] == player && field[3][3] == player) ||
            (field[1][3] == player && field[3][1] == player)) {
            ret_flug = 1;
        }
    }
    return ret_flug;
}

int chek_draw(char field[HEIHGT][WIDTH]) {
    for (int i = 1; i < HEIHGT - 1; i++) {
        for (int j = 1; j < WIDTH - 1; j++) {
            if (field[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}