#include <iostream>
using namespace std;

inline int square(int x) // inline keyword  function ko fast execute karne me madad karta hai
{
    return x * x;
}

int main()
{
    int num = 5;
    cout << "Square of " << num << " is " << square(num) << endl; // output: Square of 5 is 25
    return 0;
}
