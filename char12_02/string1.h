#include <iostream>
#ifndef STRING1_H_
#define STRING1_H_
class String1
{
private:
    char * str; // pointer to string
    int len;    // length of string
    static int num_strings; // number of object;
public:
    String1(const char *);   // constructor
    String1();    // default constructor
    String1(const String1 &); 
    ~String1();   // destructor
    String1 & operator=(const String1 &);
    // friend function
    friend std::ostream & operator<<(std::ostream & os, const String1 & st);
};
#endif