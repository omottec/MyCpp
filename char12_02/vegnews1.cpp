// vegnews.cpp -- using new and delete with classes
// compile with string1.cpp
#include <iostream>
#include "string1.h"
using std::cout;

void callme1(String1 &);  // pass by reference
void callme2(String1); // pass by value

int main()
{
    using std::endl;
    {
        cout << "Starting an inner block.\n";
        String1 headline1("Celery Stalks at Midnight");
        String1 headline2("Lettuce Prey");
        String1 sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another:\n";
        String1 sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        String1 knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of main()\n";
}

void callme1(String1 & rsb)  // pass by reference
{
    cout << "String passed by reference:\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(String1 sb) // pass by value
{
    cout << "String passed by value:\n";
    cout << "   \"" << sb << "\"\n";
}