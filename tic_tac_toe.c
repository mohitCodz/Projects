#include "stdio.h"

 inputValue(int input, char player) {
    int row = (input - 1) / 3;
    int col = (input - 1) % 3;
    board[row][col] = player;
}
int isValidMove(int input) {
    int row = (input - 1) / 3;
    int col = (input - 1) % 3;
    return (input >= 1 && input <= 9 && board[row][col] == ' ');
}

 int computerMove() {
    int move;
    do {
        move = (rand() % 9) + 1; // Random number between 1 and 9
    } while (!isValidMove(move));
    return move;
}

int main() {
    int input;
    char player = 'X'; // Player starts with 'X'
    int status = 0;

    srand(time(0)); // Seed for random number generation

    draw();
    printf("Press any key to start!\n");
    getch();

    system("cls");
    removeNumber();

    for (int i = 0; i < 9; i++) {
        draw();

        if (player == 'X') {
            // Human player
            printf("Your turn! Enter a number (1-9): ");
            scanf(" %d", &input);
            while (!isValidMove(input)) {
                printf("Invalid move! Enter a valid number (1-9): ");
                scanf(" %d", &input);
            }
        } else {
            sleep(2); 
            // Computer player
            printf("Computer's turn...\n");
            input = computerMove();
            printf("Computer chose: %d\n", input);
        } 

        inputValue(input, player);
        if (check()) {
            system("cls");
            draw();
            if (player == 'X')
                printf("You win!\n");
            else
                printf("Computer wins!\n");
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X'; // Switch turns
        system("cls");
    }

    draw();
    printf("It's a draw!\n");
    return 0;
}