#include <iostream>
using namespace std;
class A
{
private:
    int a;

protected:
    int b;

public:
    int c;
};
int main()
{
    A obj;
    obj.a = 10; // not allow
    obj.b = 44;
    obj.c = 4;
    cout << obj.a << obj.b << obj.c;
    return 0;
}