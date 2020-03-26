// textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;  // use basic input
    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);  // use the cin.get(ch) function
    while (ch != '#')
    {
        cout << ch;     // echo the character
        count++;        // count the character
        cin.get(ch);      // use it again
    }
    cout << endl << count << " characters read\n";
}