#include <iostream>
// #include <process.h>
using namespace std;
class demo
{

public:
    demo()
    {
        cout << "\nConstructor is called.....\n";
    }
    // Destructor is used to deallocate the memory
    // It is used to delete the object of the class
    // Destructor koi bhi argument nahi leta
    ~demo()
    {
        cout << " destructor is called..";
    }
};
int main()
{
    demo d;
    return 0;
}