// Make a program to print a macro named NUMBER whose value is an integer to the terminal.

//     If NUMBER has not been defined,
//     an error message shall be generated and compilation shall be terminated.

//         If NUMBER is not equal to 8 or
//         16,
//     an error message shall be generated and compilation shall be terminated.

//     The macro shall be defined when you compile the program.

#include <iostream>

// Check if NUMBER is defined
#ifndef NUMBER
#error "NUMBER is not defined. Compilation terminated."
#endif

// Check if NUMBER is equal to 8 or 16
#if (NUMBER != 8) && (NUMBER != 16)
#error "NUMBER must be either 8 or 16. Compilation terminated."
#endif

int main()
{
    std::cout << "The value of NUMBER is: " << NUMBER << std::endl;
    return 0;
}
