// // Make a struct type named person_t which has, name, age and id members.
// // Make a program to create an array of 3 persons.
// //  Then read 3 persons from the standard input and then sort the persons according thier ids
// //  and print the persons to the standard output. To sort and print use only pointers.

#include <iostream>
#include <algorithm>

// Define the person_t struct
struct person_t
{
    std::string name;
    int age;
    int id;
};

// Function to compare persons based on their ids
bool compareById(const person_t &a, const person_t &b)
{
    return a.id < b.id;
}

int main()
{
    // Create an array of 3 persons
    person_t persons[3];

    // Read 3 persons from standard input
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Enter details for person " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> persons[i].name;
        std::cout << "Age: ";
        std::cin >> persons[i].age;
        std::cout << "ID: ";
        std::cin >> persons[i].id;
    }

    // Sort the persons based on their ids using pointers
    std::sort(persons, persons + 3, compareById);

    // Print the sorted persons
    std::cout << "\nSorted Persons based on ID:\n";
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Name: " << persons[i].name << ", Age: " << persons[i].age << ", ID: " << persons[i].id << "\n";
    }

    return 0;
}
