// strtype3.cpp -- more string class features
#include <iostream>
#include <string>   // make string class available
#include <string.h> // C-style string library
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "cpp";
    string str1;
    string str2 = "java";

    str1 = str2;
    strcpy(charr1, charr2);

    str1 += "lang";
    strcat(charr1, "lang");

    int str1_size = str1.size();
    int str1_length = str1.length();
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " size:" << str1_size 
        << ", length:" << str1_length << endl;
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
}