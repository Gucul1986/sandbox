//
// Created by kosta on 15.04.2021.
//

#include <iostream>

int readNumber()
{
    std::cout << "Enter your number> ";
    int i = 0;
    std::cin >> i;

    return i;
}

void writeNumber(int number)
{
    std::cout << number << std::endl;
}
