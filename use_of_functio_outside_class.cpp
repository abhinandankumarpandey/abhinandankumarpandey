#include <iomanip>
#include <iostream>
using namespace std;
class circle
{
    double r;

public:
    void input();
    void area();
    void circum();
};
void circle::input()
{
    cout << "Enter radius of circle =";
    cin >> r;
}
void circle::area()
{
    double ar = 3.1415 * r * r;
    cout << "Area of circle =" << ar;
}
void circle::circum()
{
    double cir = 2 * 3.1415 * r;
    cout << "\n Circumfrence of circle =" << cir;
}
int main()
{
    circle c1;
    c1.input();
    c1.area();
    c1.circum();
    return 0;
}