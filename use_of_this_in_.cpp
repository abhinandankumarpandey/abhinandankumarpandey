// This keyword in cpp
/*Use for current instance of a class*/
#include <iostream>
#include <string.h> //For using string operations
using namespace std;
class bca
{
    char sname[50];
    int age; // These three are private Data members
    float marks;

public:
    bca(char sname[50], int age, float marks) // Constructor with parameters
    {
        strcpy(this->sname, sname); // string is coppied or assigned from one to another  sname<--sname
        this->age = age;
        this->marks = marks; // arrow is also used with this keyword in cpp
    }
    void show() // Show in terminal
    {
        cout << sname << age << marks << endl;                 // Formal arguments are out here
        cout << this->sname << this->age << this->marks;       // class member variable are printed here with the help of this keyword.
        cout << (*this).sname << (*this).age << (*this).marks; // Without arrow operator //or replacement of -> operator just syntax is changed
    }
};
int main()
{
    bca d("Abhinandan", 18, 88.88);
    d.show(); // calling of show function in cpp
    return 0;
}