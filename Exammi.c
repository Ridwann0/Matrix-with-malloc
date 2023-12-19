/**
 * @file exam6-12-23.c
 * @author Ridwan (Ridwann04@hotmail.com)
 * @brief
 * @version 0.1
 * @date 2023-12-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillAMatrix(int *matrix, int rows, int columns, int min, int max)
{
    int tNumbers = rows * columns;

    int *uNumbers = (int *)malloc(sizeof(int) * tNumbers);

    for (int i = 0; i < tNumbers; ++i)
    {
        uNumbers[i] = 0;
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            int randomNumber;
            do
            {
                randomNumber = (rand() % ((max - min) / 2 + 1)) * 2 + min;
            } while (uNumbers[randomNumber / 2]);

            matrix[i * columns + j] = randomNumber;
            uNumbers[randomNumber / 2] = 1;
        }
    }

    free(uNumbers);
}

void printMatrix(int *matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            printf("%d\t", matrix[i * columns + j]);
        }
        printf("\n");
    }
}
void calculateRowSum(int *matrix, int rows, int columns, int *rowSum)
{
    for (int i = 0; i < rows; ++i)
    {
        rowSum[i] = 0;
        for (int j = 0; j < columns; ++j)
        {
            rowSum[i] += matrix[i * columns + j];
        }
    }
}
void calculateColumnSum(int *matrix, int rows, int columns, int *colSum)
{
    for (int j = 0; j < columns; ++j)
    {
        colSum[j] = 0;
        for (int i = 0; i < rows; ++i)
        {
            colSum[j] += matrix[i * columns + j];
        }
    }
}

int main()
{
    srand(time(NULL));

    int R, C;
    printf("Enter number of rows (R): ");
    scanf("%d", &R);
    printf("Enter the number of columns (C): ");
    scanf("%d", &C);

    // JxK array
    int *matrix = (int *)malloc(sizeof(int) * R * C);
    fillAMatrix(matrix, R, C, 10, 1000);

    printf("\nMatrix:\n");
    printMatrix(matrix, R, C);

    int *rowSum = (int *)malloc(sizeof(int) * R);
    calculateRowSum(matrix, R, C, rowSum);

    int *colSum = (int *)malloc(sizeof(int) * C);
    calculateColumnSum(matrix, R, C, colSum);
    printf("\n Sum of each row Sum:\t");
    for (int i = 0; i < R; ++i)
    {
        printf("%d\t", rowSum[i]);
    }
    printf("\n");

    printf("\nColumns Sum:\n");
    for (int j = 0; j < C; ++j)
    {
        printf("%d\t", colSum[j]);
    }
    printf("\n");

    free(matrix);
    free(rowSum);
    free(colSum);

    return 0;
}
