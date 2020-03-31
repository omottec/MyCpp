#include <cstring>  // string.h for some
#include "string1.h"
using std::cout;

// initializing static class member
int String1::num_strings = 0;

// class methods
// construct StringBad from C string
String1::String1(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

String1::String1()
{
    len = 3;
    str = new char[4];
    std::strcpy(str, "C++");    // default string
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created\n";
}

String1::String1(const String1 & st)
{
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}


String1::~String1()
{
    cout << "\"" << str << "\" object deleted, ";
    num_strings--;
    cout << num_strings << " left\n";
    delete [] str;
}

String1 & String1::operator=(const String1 & st)
{
    if (this == &st)    // object assigned to itself
        return *this;   // all done
    delete [] str;      // free old string
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}


std::ostream & operator<<(std::ostream & os, const String1 & st)
{
    os << st.str;
    return os;
}