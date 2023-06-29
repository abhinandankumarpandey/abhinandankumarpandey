#include <iostream>
using namespace std;
int main()
{
    /* Rules to declaring a variable
   1.We can start variable name with _ and a character ex. _ram, ram.
   2.We can write numerical value name after some character ex. ram2,ra2m,_3aam.
  */
    // Camle case natation
    /*
    if we write big name
    int intMarksObtained;
    and then we erite
    cout<<imo    it will consider and suggest intMarksObtainde;
    */
    short sa = 34;               // short integer value
    int a = 64;                  // integer value
    long la = 9475;              // lont integer value
    long long lla = 4848384;     // very long integer value
    float flo = 767.45;          // float value
    double dob = 474784.435;     // long float value
    long double ldob = 4945.354; // verylong float values
    char chas = 'a';             // this store character
    int const num = 45;          // This is a constant number that cannot be modified after declaration.
    string name = "Iam string";
    cout << sa << endl;
    cout << a << endl;
    cout << la << endl;
    cout << lla << endl;
    cout << ldob << endl;
    cout << dob << endl;
    cout << chas << endl;
    cout << num << endl;
    cout << name;
    return 0;
}