// ifelse.cpp -- using the if else statement
#include <iostream>
int main()
{
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
        {
            std::cout << ch;    // done if newline
        }
        else
        {
            // std::cout << ++ch;  // done otherwise
            std::cout << (ch+1);
        }
        std::cin.get(ch);
    }
    std::cout << "\nPlease execute the slight confusion.\n";
}