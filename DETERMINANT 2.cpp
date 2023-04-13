#include <stdio.h>
#define ROWS 3
#define COLS 3
void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);
int main()
{
    int matrix[ROWS][COLS];
    int i, j;
    printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
    inputMatrix(matrix, ROWS, COLS);
    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);
    return 0;
}
void inputMatrix(int matrix[][COLS], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
}
void printMatrix(int (*matrix)[COLS], int rows, int cols)
{ int i, j;


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", ((matrix + i) + j));
        }

        printf("\n");
    }
        printf("%d ", matrix[0][0] * ((matrix[1][1]*matrix[2][2]) - (matrix[2][1]*matrix[1][2])) -matrix[0][1] * (matrix[1][0]
   * matrix[2][2] - matrix[2][0] * matrix[1][2]) + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]));
                printf("\n");
   
}
