#include <stdio.h>

#define SIZE 3

void initializeBoard(char board[SIZE][SIZE]);
void displayBoard(char board[SIZE][SIZE]);
int isValidMove(char board[SIZE][SIZE], int row, int col);
void makeMove(char board[SIZE][SIZE], int row, int col, char player);
int checkWin(char board[SIZE][SIZE], char player);
int checkDraw(char board[SIZE][SIZE]);
void gameLoop();

int main()
{
    gameLoop();
    return 0;
}

void initializeBoard(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void displayBoard(char board[SIZE][SIZE])
{
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < SIZE - 1)
        {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

int isValidMove(char board[SIZE][SIZE], int row, int col)
{
    return row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ';
}

void makeMove(char board[SIZE][SIZE], int row, int col, char player)
{
    if (isValidMove(board, row, col))
    {
        board[row][col] = player;
    }
}

int checkWin(char board[SIZE][SIZE], char player)
{
    // Check rows and columns
    for (int i = 0; i < SIZE; i++)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return 1;
    }
    return 0;
}

int checkDraw(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

void gameLoop()
{
    char board[SIZE][SIZE];
    initializeBoard(board);
    char players[2] = {'X', 'O'};
    int currentPlayer = 0;
    int row, col;
    int gameWon = 0, gameDraw = 0;

    while (!gameWon && !gameDraw)
    {
        displayBoard(board);
        printf("Player %c, enter your move (row and column): ", players[currentPlayer]);
        scanf("%d %d", &row, &col);

        if (isValidMove(board, row, col))
        {
            makeMove(board, row, col, players[currentPlayer]);
            gameWon = checkWin(board, players[currentPlayer]);
            if (gameWon)
            {
                displayBoard(board);
                printf("Player %c wins!\n", players[currentPlayer]);
            }
            else
            {
                gameDraw = checkDraw(board);
                if (gameDraw)
                {
                    displayBoard(board);
                    printf("The game is a draw!\n");
                }
                else
                {
                    currentPlayer = (currentPlayer + 1) % 2;
                }
            }
        }
        else
        {
            printf("Invalid move. Try again.\n");
        }
    }
}