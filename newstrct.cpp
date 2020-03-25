// newstruct.cpp -- using new with a structure
#include <iostream>
struct inflatable // structure definition
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable * ps = new inflatable; // allocate memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);    // method1 for member access
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;    // method2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volun: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;  // free memory used by structure
}