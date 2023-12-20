#include <iostream>

int main()
{

    const int var{100};
    const int &ref{var};

    int &temp{(int &)ref};

    temp = 200;

    std::cout << var << "," << temp << std::endl;

    std::cout << &var << "," << &temp << std::endl;

    return 0;
}