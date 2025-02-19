int main() {

    int choice;
    printf("Enter 1 for two player and 0 to play with computer \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int input;
    char player = 'X'; // Player starts with 'X'
    int status = 0;
 srand(time(0)); // Random number generation

    draw();
    printf("Press any key to start the game!\n");
    getchar();

    system("clear");
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
        status = check();
        if (status == 1) {
            system("clear");
            draw();
            printf("%c wins!\n", player);
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X'; // Switch turns
        system("clear");
    }

    draw();
    printf("It's a draw!\n");
    return 0;
}
    }

    else if (choice == 0)
{

    int input;
    int player = 0;
    int status = 0;
    draw();
    printf("Enter any key to Start !!");
    getchar();

    system("cls");
    removeNumber();
    for (int i = 0; i < 10; i++)
    {

        draw();
        do
        {
            printf("Player %d, enter the value 1 - 9: ", player);
            scanf("%d", &input);

            if (isOccupied(input))
            {
                printf("Position already taken. Try again.\n");
            }
        } while (isOccupied(input));
        inputValue(input, player);
        status = check();

        if (status == 1)
        {
            break;
        }

        system("clear");
        draw();
        player = !player;
        system("clear");
    }
    system("clear");

    if (check())
    {
        printf("Player %d wins!\n", player);
    }

    draw();
    return 0;

}