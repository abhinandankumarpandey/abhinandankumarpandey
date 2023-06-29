#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str="This is Abhinandan Pandey";
 ofstream out;
 out.open("Sumple.txt");
 out<<str;
 out.close();
 return 0;
}