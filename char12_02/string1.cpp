// string1.cpp -- String class methods
#include <cstring>  // string.h for some
#include "string1.h"    // includes <iostream>
using std::cout;
using std::cin;

// initializing static class member
int String::num_strings = 0;

// static method
int String::HowMany()
{
    return num_strings;
}

// class methods
// construct String from C string
String::String(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

String::String()    // default constructor
{
    len = 4;
    str = new char[1];
    str[0] = '\0';    // default string
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created\n";
}

String::String(const String & st)
{
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}


String::~String()
{
    cout << "\"" << str << "\" object deleted, ";
    num_strings--;
    cout << num_strings << " left\n";
    delete [] str;
}

// overloaded operator methods
// assign a String to a String
String & String::operator=(const String & st)
{
    if (this == &st)    // object assigned to itself
        return *this;   // all done
    delete [] str;      // free old string
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}

// assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str, s);
    return *this;
}

// read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

// read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}

// overload operator friends
bool operator<(const String &st1, const String &st2)
{
    return std::strcmp(st1.str, st2.str) < 0;
}
    
bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return std::strcmp(st1.str, st2.str) == 0;
}

// simple String output
std::ostream & operator<<(std::ostream & os, const String & st)
{
    os << st.str;
    return os;
}

// quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}