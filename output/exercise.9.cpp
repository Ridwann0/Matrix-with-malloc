// Make a program to get a positive integer as an argument
//  from the command line and then check if the number is prime or not.
#include <iostream>
#include <cstdlib>
#include <cmath>

constexpr int PRIMENMR = 1;

static bool isprime(int num) // primenumber function
{
    bool prime = true;
    if (num <= PRIMENMR)
    {
        prime = false;
    }
    else
    {

        if (num > PRIMENMR)
        {
            const int max_number = std::ceil(std::sqrt(num));

            for (int i = 2; i <= max_number; i++)
            {
                if (num % i == 0)
                {
                    prime = false;
                    break;
                }
            }
        }
    }
    return prime;
}
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Inavalid numbers" << std::endl;
        exit(1);
    }

    int number = std::stoi(argv[1]);

    std::cout << number << " is " << (isprime(number) ? "" : "not ") << "prime" << std::endl;

    return 0;
}