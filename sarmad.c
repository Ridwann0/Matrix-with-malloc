#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef void print_matrix(int row, int column, int *array);

void Fill_matrix(int row, int column, int *array)
{
    srand(time(0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            int random_even_Number;
            do
            {
                random_even_Number = rand() % 991 + 10;
            } while (random_even_Number % 2 != 0);

            *(array + i * column + j) = random_even_Number;
            printf("%d ", *(array + i * column + j));
        }
        printf("\n");
    }
}

int SumOfrow(int row, int column, int *array)
{
    int sum = 0;
    for (int loop = 0; loop < column; loop++)
    {
        sum = sum + *(array + row * column + loop);
    }
    return sum;
}

int SumOfcolumn(int column, int row, int *array)
{
    int sum = 0;
    for (int loop = 0; loop < row; loop++)
    {
        sum = sum + *(array + loop * column + column);
    }
    return sum;
}

int main()
{
    printf("Please enter the number of rows (R):\n");
    int R;
    scanf("%d", &R);

    printf("Please enter the number of columns (C):\n");
    int C;
    scanf("%d", &C);

    int matrix[R][C];

    // Fill matrix
    Fill_matrix(R, C, &matrix[0][0]);

    // Calculate and print sum of each row
    for (int i = 0; i < R; i++)
    {
        int rowSum = SumOfrow(i, C, &matrix[0][0]);
        printf("The sum of row %d is: %d\t", i + 1, rowSum);
    }

    // Calculate and print sum of each column
    for (int j = 0; j < C; j++)
    {
        int colSum = SumOfcolumn(j, R, &matrix[0][0]);
        printf("The sum of column %d is: %d\n", j + 1, colSum);
    }

    return 0;
}