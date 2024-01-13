// Make a program to fill a 2D array (2x3) of type int
//  with random numbers in the range of 0 and 99 and then print the array to the terminal.
// To fill and print the array, use only pointers.

#include <iostream>
#include <algorithm>
#include <ctime>
const int ROWS = 3;
const int COLS = 2;

void fillArray(int *arr, int rows, int cols)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            *((arr + i * COLS) + j) = rand() % 100;
        }
    }
}

void printArray(int *arr, int rows, int cols)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << *((arr + i * COLS) + j) << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::srand(static_cast<unsigned>(std::time(0)));
    int *Myarray = new int[ROWS * COLS];

    fillArray(Myarray, ROWS, COLS);

    std::cout << "The 2D array" << std::endl;

    printArray(Myarray, ROWS, COLS);

    delete[] Myarray;
    return 0;
}