#include <iostream>
using namespace std;

// Base class  or parent class
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating..." << endl;
    }
};

// Derived class  or child class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking..." << endl;
    }
};

int main()
{
    // Creating object of derived class
    Dog myDog;

    // Accessing base class member function using derived class object
    myDog.eat();

    // Accessing derived class member function
    myDog.bark();

    return 0;
}
