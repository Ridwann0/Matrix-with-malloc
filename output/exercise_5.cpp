// Write a program to make a 2 dimensional(3x3) array of type int.

//     Then ask the user to enter all the elements and then print the array to the output.

//     Print the array to the output like a table.For example :

//     123 234 456

//     54 678 987

//     12 987 100

#include <iostream>
// Matrix
int main()
{
    const int rows = 3;
    const int cols = 3;

    int matrix[rows][cols];

    std::cout << "Enter the three first number in the matrix" << std::endl;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << "Enter a number for the first one[" << i << "] and the seconed one here[" << j << "]" << std::endl;

            std::cin >> matrix[i][j];
        }
    }

    std::cout << "The 3x3 matrix is::" << std::endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << matrix[i][j] << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}