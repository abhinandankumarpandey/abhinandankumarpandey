// constructor bina bulai aa jata hai

#include <iostream>
using namespace std;
class bca
{
    int a;
    float b;

public:
    bca()
    {
        a = 23;
        b = 44;
        cout << "\nthe addition of a and b is =" << a + b;
    }
};
/*
                     // constructor out side of class
class bca
{
    int a;
    float b;

public:
    bca();
};
bca::bca(){
    a = 23;
        b = 44;
        cout << "\nthe addition of a and b is =" << a + b;
}
*/
int main()
{
    bca object;
    return 0;
}