#include <iostream>
using namespace std;
class person
{
private:
    int run; // state
    string msg;

public:
    void runfun() // behavior
    {
        run = 44;
        cout << "i win" << run << "km run" << endl;
    }

    void walk()
    {
        msg = "i walked in the morning";
        cout << msg;
    }
};
int main()
{
    person obj; // identity of object
    obj.runfun();
    obj.walk();
    return 0;
}