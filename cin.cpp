#include <iostream>
#include<bits/stdc++.h>  //universal header file
#include<string>// header file
using namespace std;
int main()
{
    string str;   //declare string of 10 unit space
    string str2;   //declare string of 7 unit of space
    int a, b;
    cout << "Enter the first name="<<endl;
    cin >> str;
    cout << "Enter the last name surname"<<endl;
    cin >> str2;
    cout << "Your name is=" << str << str2<<endl;
    cout << "Enter two numbers=";
    cin >> a >> b;
    cout << "The sum of a and b is =" << a + b;
    getchar();
    return 0;
}
//
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[10]; // declare an array of 10 string objects
    string str2[7]; // declare another array of 7 string objects
    int a, b;
    
    cout << "Enter the first name: ";
    cin >> str[0]; // to store the first name in the first element of the array (index 0)
    
    cout << "Enter the last name: ";
    cin >> str2[0]; // to store the last name in the first element of the array (index 0)
    
    cout << "Your name is: " << str[0] << " " << str2[0] << endl;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The sum of a and b is: " << a + b << endl;
    
    return 0;
}
*/