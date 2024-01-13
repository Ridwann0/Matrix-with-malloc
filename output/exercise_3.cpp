// Make a program to read a positive integer number from the standard input,
//     then sum all the even numbers from 0 to the entered number and print it to the output.

#include <iostream>

int main()
{
    int number, reslut = 0;

    std::cout << "Enter a positive number: " << number << std::endl;
    std::cin >> number;

    if (number <= 0)
    {
        std::cout << "Please enter a positive number" << std::endl;

        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        if (i % 2 == 0)
        {
            reslut += i;
        }
    }

    std::cout << "The sum of the numbers from 0 to " << number << " is " << reslut << std::endl;
    return 0;
}