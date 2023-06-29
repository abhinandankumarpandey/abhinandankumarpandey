#include <iostream>
#include <iomanip> // Manipulators
using namespace std;
class Circle
{
public:
    double radius; // ye public me hai tabihi hum ise object te through value de pate hai
    double circle_area()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    class Circle obj;
    obj.radius = 5.5;
    cout << "Radius is :" << obj.radius << "\n";
    cout << "Area is:" << setw(9) << obj.circle_area();
    return 0;
}