#include <iostream>
using namespace std;
class abhi
{
private:
    static int num;
    int local_num;

public:
    void show_result()
    {
        local_num = 0;
        ++local_num;
        cout << " The answer that come is static in nature and increasing order =" << num;
        cout << "\n The number showen after this line is a local type variable =" << local_num;
    }
    static void increse()
    {
        ++num;
    }
};
int abhi::num; // Static data type ko class ke bahar globally declare karna padta hai
int main()
{
    abhi object;
    object.increse();
    object.show_result();
    cout << "\n After second time run the value of staic  is changed" << endl;
    object.increse();
    object.show_result();
    return 0;
}