// support.cpp -- use external variable
// compile with external.cpp
#include <iostream>
extern double warming;   // use warming from another file

// function prototypes
void update(double dt);
void local();

using std::cout;
void update(double dt)  // modifies global variable
{
    // extern double warming;  // optional redeclaration
    warming += dt;  // uses global warming
    cout << "Updating global warming to " << warming
         << " degrees.\n";
}

void local()    // uses local variable
{
    double warming = 0.8;   // new variable hides external one
    cout << "Local warming = " << warming
         << " degrees.\n";
    // access global variable with the scope resolution operator
    cout << "But global warming = " << ::warming
         << " degrees.\n";
}