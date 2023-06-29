#include <iostream>
using namespace std;
class balak
{

public: // hamne yaha 3 function banain hai wo bhi ek hi name se ise hi hum function overloading kehte hai
    void display();
    void display(int a, int b);
    void display(double a, double c);
};
void balak::display()
{
    cout << "\n this is only a default function without parameter\n";
}
void balak::display(double a, double c)
{
    cout << "\n This is a double function which is showing multiply of two numbers =" << a * c;
}
void balak::display(int a, int b)
{
    cout << "\n This is a function whose parameters are integer in nature the addition of these no is =" << a + b;
}
int main()
{
    balak object;
    object.display();
    object.display(3, 5);
    object.display(34.544, 664.8);
    return 0;
}