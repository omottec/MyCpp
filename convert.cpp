// convert.cpp -- converts stone to pounds
#include <iostream>
int stonetolb(int); // function prototype
using namespace std;

int main()
{

    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone 
         << " stone = "
         << pounds 
         << " pounds." 
         << endl;
    return 0;
}

int stonetolb(int sts)
{
    cout << "arg sts: " << sts << endl;
    return 14 * sts;
}