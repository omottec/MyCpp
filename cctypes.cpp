// cctypes.cpp -- using the ctype.h library
#include <iostream>
#include <ctype.h>
// #include <cctype>

int main()
{
    using namespace std;
    cout << "Enter text for analysis, and type @ to terminate input.\n";
    char ch;
    int whitespace;
    int digits;
    int chars;
    int punct;
    int others;

    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))   // wrong ?
            whitespace++;
        else if (isdigit(ch))   // wrong ?
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";
}