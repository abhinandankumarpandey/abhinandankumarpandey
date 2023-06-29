#include <iostream>
using namespace std;
class a
{
    int ab, b;

public:
    a(int as, int b)//yaha parameter pass ho raha hai
    {

        cout << as << "is my age and" << b << "is my class roll no";
    }
};
int main()
{
    a o(22, 5);//object me parameter pass ho raha hai
    return 0;
}