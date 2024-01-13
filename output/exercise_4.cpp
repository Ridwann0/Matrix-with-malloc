// Make a program to fill a 10 elements int array with positive random numbers lessr than 100
//  Print the array to the output.Sort the array
//  ascending(from the smallest to the largest) and
// then Print the sorted array to the output.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void fillArray(int Array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        Array[i] = rand() % 100;
    }
}

void printArray(int Array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << Array[i] << " ";
    }

    std::cout << std::endl;
}

int main()
{
    const int size = 10;
    int numbers[size];

    srand(static_cast<unsigned int>(time(nullptr)));

    fillArray(numbers, size);
    std::cout << "Orignal array " << std::endl;
    printArray(numbers, size);

    std::sort(numbers, numbers + size);

    std::cout << "Array in acending order" << std::endl;
    printArray(numbers, size);

    return 0;
}