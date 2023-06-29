#include <iostream>
using namespace std;
class ara_rara
{
private:
    int run;

public:
    float time;
    ara_rara(int a, float b)
    {
        run = a;
        time = b;
    }
    void winner()
    {
        cout << "Won the match with" << time << " hour time "
             << "and" << run << endl
             << "run";
    }
};
int main()
{
    ara_rara object(234, 6.43);
    object.winner();
    return 0;
}