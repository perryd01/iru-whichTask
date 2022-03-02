#include <iostream>
#include "string.h"
#include <vector>

int main(int argc, char *argv[])
{
    std::string neptun = argv[1];

    int sum = 0;

    for (auto v : neptun)
    {
        int n = v;
        sum += n;
    }

    std::vector<char> vec = {'A', 'B', 'C', 'D'};

    int rest = sum % 4;
    char letter = vec[rest];

    std::cout << "sum: " << sum << std::endl;
    std::cout << "rest: " << rest << std::endl;
    std::cout << "letter: " << vec[rest] << std::endl;
    return 0;
}