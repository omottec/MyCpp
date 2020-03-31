// string1.h -- fixed and augmented string class definition
#include <iostream>
#ifndef STRING1_H_
#define STRING1_H_
using std::ostream;
using std::istream;

class String
{
private:
    char * str; // pointer to string
    int len;    // length of string
    static int num_strings; // number of object;
    static const int CINLIM = 80;
public:
    String(const char *);   // constructor
    String();    // default constructor
    String(const String &); 
    ~String();   // destructor
    int length() const { return len; }
    // overloaded oprator methods
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int);
    const char & operator[](int) const;
    // overloaded operator friends
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
    friend bool operator<(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);
    // static function
    static int HowMany();
};
#endif