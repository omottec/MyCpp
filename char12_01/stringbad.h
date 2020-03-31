// stringbad.h -- flawed string class definition
#include <iostream>
#ifndef STRINGBAD_H_
#define STRINGBAD_H_
class StringBad
{
private:
    char * str; // pointer to string
    int len;    // length of string
    static int num_strings; // number of object;
public:
    StringBad(const char *);   // constructor
    StringBad();    // default constructor
    ~StringBad();   // destructor
    // friend function
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif