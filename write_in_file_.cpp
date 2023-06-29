#include<iostream>
#include<fstream> //jarur use karna  hai read aur write karne ke liye file me
// 1. fstreambase--> ifstream aur ofstream isi de deriverd(bani ) hai.
// 2. ifstream-->ye syntax pehle se bani file ka likha hua read karke teminal me show karta hai
// 3. ofstream--> ye syntax pehle se bani file me write karne ke kaam aata hai
using namespace std;
/*file ko open karne ke do tarike hai
1. Constructor
2. member function open() of the class
 */
int main()
{
    string st="AbhinandanPandey this text is written by write_in_file.cpp";  //jo file me input karna hai wo likh do 
ofstream out("sample.txt");  //file ko constructor ki madad se khola gaya hai aur likha gaya hai
out<<st;  //out name ki sample file me write kar do 
out.close();
 return 0;
}