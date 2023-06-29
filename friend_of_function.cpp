#include <iostream>
using namespace std;
class abhi
{
private:
    string tv;

public:
    void show()
    {
        tv = "IPL 3040";
    }
    friend void nandan(abhi reference);
};
void nandan(abhi reference)
{
    cout << "Watching" << reference.tv;
}
int main()
{
    abhi object;
    object.show();
    nandan(reference);
    return 0;
}
#include <iostream>
using namespace std;

class abhi
{
private:
    string tv;

public:
    void show()
    {
        tv = "IPL 3040";
    }

    string tv_name()
    {
        return tv;
    }

    friend void nandan(abhi reference);
};

void nandan(abhi reference)
{
    cout << "Watching " << reference.tv_name() << endl;
}

int main()
{
    abhi object;
    object.show();
    nandan(object);
    return 0;
}
