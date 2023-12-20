#include <cstdint>
#include <iostream>

int main()
{
    int x{3};

    printf("%d, %d, %d, %d\n", x++, x, ++x, x);

    return 0;
}