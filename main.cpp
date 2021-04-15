#include <iostream>
#include "io.h"

int main()
{
    int a = readNumber();

    int b = readNumber();

    writeNumber(a + b);

    const int c = 7;
    std::cout << c << std::endl;

    return 0;
}
