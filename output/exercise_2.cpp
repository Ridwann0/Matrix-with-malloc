// // Make a program to read a number in the range of 0 and 255
//  from the standard input and then print the hexadecimal form of the number
//  to the output. While the enetered number is not in the range,
//  the program shall ask for a new number.

#include <iostream>
#include <iomanip>

int main()
{

    int Number;

    do
    {
        std::cout << "Enter a number between 0 255: ";
        std::cin >> Number;

        if (Number < 0 || Number > 255)
        {
            std::cout << "Please enter a number between 0 and 255" << std::endl;
        }

    } while (Number < 0 || Number > 255);

    std::cout << "Hexadecimal form: 0x" << std::hex << std::uppercase << Number << std::endl;
    return 0;
}