#include "stdio.h"
#include "stdlib.h"
#include <wchar.h>
#include <locale.h>

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void removeNumber()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

/* for windows using ascii value

void draw()
{
    printf("\t\t\t\t\t\t");
    printf(" %c %c %c %c %c \n", board[0][0], 186, board[0][1], 186, board[0][2]);
    printf("\t\t\t\t\t\t");
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205);
    printf("\t\t\t\t\t\t");
    printf(" %c %c %c %c %c \n", board[1][0], 186, board[1][1], 186, board[1][2]);
    printf("\t\t\t\t\t\t");
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205);
    printf("\t\t\t\t\t\t");
    printf(" %c %c %c %c %c \n", board[2][0], 186, board[2][1], 186, board[2][2]);
}
*/
 // for mac

 void draw()
{
    // Set locale for wide-character support
    setlocale(LC_ALL, "");

    wprintf(L"\t\t\t\t\t\t");
    wprintf(L" %c %lc %c %lc %c \n", board[0][0], L'\u2551', board[0][1], L'\u2551', board[0][2]);
    wprintf(L"\t\t\t\t\t\t");
    wprintf(L"%lc%lc%lc%lc%lc%lc%lc%lc%lc%lc%lc\n", L'\u2550', L'\u2550', L'\u2550', L'\u256C', L'\u2550', L'\u2550', L'\u2550', L'\u256C', L'\u2550', L'\u2550', L'\u2550');
    wprintf(L"\t\t\t\t\t\t");
    wprintf(L" %c %lc %c %lc %c \n", board[1][0], L'\u2551', board[1][1], L'\u2551', board[1][2]);
    wprintf(L"\t\t\t\t\t\t");
    wprintf(L"%lc%lc%lc%lc%lc%lc%lc%lc%lc%lc%lc\n", L'\u2550', L'\u2550', L'\u2550', L'\u256C', L'\u2550', L'\u2550', L'\u2550', L'\u256C', L'\u2550', L'\u2550', L'\u2550');
    wprintf(L"\t\t\t\t\t\t");
    wprintf(L" %c %lc %c %lc %c \n", board[2][0], L'\u2551', board[2][1], L'\u2551', board[2][2]);
}



int check()
{

    // return 1 win
    // return 0 draw / fail /continue

    // Check for X
    // Horizontal
    if ((board[0][0] == 'X') && (board[0][1] == 'X') && (board[0][2] == 'X'))
    {
        return 1;
    }
    else if ((board[1][0] == 'X') && (board[1][1] == 'X') && (board[1][2] == 'X'))
    {
        return 1;
    }
    else if ((board[2][0] == 'X') && (board[2][1] == 'X') && (board[2][2] == 'X'))
    {
        return 1;
    }
    // vertical
    else if ((board[0][0] == 'X') && (board[1][0] == 'X') && (board[2][0] == 'X'))
    {
        return 1;
    }
    else if ((board[0][1] == 'X') && (board[1][1] == 'X') && (board[2][1] == 'X'))
    {
        return 1;
    }
    else if ((board[0][2] == 'X') && (board[1][2] == 'X') && (board[2][2] == 'X'))
    {
        return 1;
    }

    // Cross

    else if ((board[0][0] == 'X') && (board[1][1] == 'X') && (board[2][2] == 'X'))
    {
        return 1;
    }
    else if ((board[0][2] == 'X') && (board[1][1] == 'X') && (board[2][0] == 'X'))
    {
        return 1;
    }

    // Check for O
    // Horizontal
    if ((board[0][0] == 'O') && (board[0][1] == 'O') && (board[0][2] == 'O'))
    {
        return 1;
    }
    else if ((board[1][0] == 'O') && (board[1][1] == 'O') && (board[1][2] == 'O'))
    {
        return 1;
    }
    else if ((board[2][0] == 'O') && (board[2][1] == 'O') && (board[2][2] == 'O'))
    {
        return 1;
    }

    // vertical
    else if ((board[0][0] == 'X') && (board[1][0] == 'X') && (board[2][0] == 'X'))
    {
        return 1;
    }
    else if ((board[0][1] == 'O') && (board[1][1] == 'O') && (board[2][1] == 'O'))
    {
        return 1;
    }
    else if ((board[0][2] == 'O') && (board[1][2] == 'O') && (board[2][2] == 'O'))
    {
        return 1;
    }

    // Cross
    else if ((board[0][0] == 'O') && (board[1][1] == 'O') && (board[2][2] == 'O'))
    {
        return 1;
    }
    else if ((board[0][2] == 'O') && (board[1][1] == 'O') && (board[2][0] == 'O'))
    {
        return 1;
    }

    return 0;
}

void inputValue(int input, int player)
{
    char ch = ' ';
    if (player == 1)
    {
        ch = 'X';
    }
    else
    {
        ch = 'O';
    }

    if (input == 1)
    {
        board[0][0] = ch;
    }
    else if (input == 2)
    {
        board[0][1] = ch;
    }
    else if (input == 3)
    {
        board[0][2] = ch;
    }
    else if (input == 4)
    {
        board[1][0] = ch;
    }
    else if (input == 5)
    {
        board[1][1] = ch;
    }
    else if (input == 6)
    {
        board[1][2] = ch;
    }
    else if (input == 7)
    {
        board[2][0] = ch;
    }
    else if (input == 8)
    {
        board[2][1] = ch;
    }
    else if (input == 9)
    {
        board[2][2] = ch;
    }
}
int isOccupied(int input)
{
    int row = (input - 1) / 3;
    int col = (input - 1) % 3;
    return (board[row][col] == 'X' || board[row][col] == 'O');
}

void errorCheck()
{
}
int main()
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


        printf("Enter the val 1 - 9 : ");
        scanf(" %d", &input);

        inputValue(input, player);
        status = check();

        if (status == 1)
        {
            break;
        }

        system("cls");
        draw();
        player = !player;
        system("cls");
    }
    system("cls");

    if (check())
    {
        printf("Player %d wins!\n", player);
    }

    draw();
    return 0;
}