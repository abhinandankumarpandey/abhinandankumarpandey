
// Constructor overloading
#include <iostream>
using namespace std;
class constructor
{
public:
    float area;
    constructor();
    constructor(int, int); // constructor with perameters
    void display();        // A  common method(function)
};                         // constructor outsisde of class
constructor::constructor() // Class name Scope resolution operator and then function name
{                          // function return type class name :: function name(){}
    area = 0;
}
constructor::constructor(int a, int b)
{

    area = a * b;
}
void constructor::display() // bast example to write function outside of class
{
    cout << " \nArea of square is :" << area;
}
int main()
{
    constructor obj1;
    constructor obj2(2, 3);
    obj1.display();
    obj2.display();

    return 0;
}