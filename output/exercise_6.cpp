// Make a program to fill a 10-element int array with random numbers in the range of 0 and 99, then

// print the array to the output.
// sort the array ascending(from the smallest to the largest) and then
// Print the sorted array to the output.
// To fill, print and sort the array use only pointers.

#include <iostream>
#include <algorithm>
#include <ctime>

const int AARRAY_SIZE = 10;

void fillArray(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

void sortArray(int *arr, int size)
{

    std::sort(arr, arr + size);
}

int main()
{
    std::srand(std::time(0));

    int *Myarray = new int[AARRAY_SIZE];

    fillArray(Myarray, AARRAY_SIZE);

    std::cout << "Original array" << std::endl;

    printArray(Myarray, AARRAY_SIZE);

    sortArray(Myarray, AARRAY_SIZE);

    std::cout << "The sorted array" << std::endl;

    printArray(Myarray, AARRAY_SIZE);
    delete[] Myarray;
    return 0;
}