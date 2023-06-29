#include<iostream>
#include<fstream> //jarur use karna  hai read aur write karne ke liye file me
using namespace std;/*
 1. fstreambase--> ifstream aur ofstream isi se deriverd(bani) hai.
 2. ifstream-->ye syntax pehle se bani file ka likha hua read karke teminal me show karta hai
 3. ofstream--> ye syntax pehle se bani file me write karne ke kaam aata hai*/
int main(void)
{
    string str;
    //ye file constructor ki madad se khola ja raha hai or read bhi kiya ja raha hai
    ifstream aandar_aa("reading_sample.txt");//ifstream data read karne ke kaam aata hai..
    //aandar_aa>>str;  --->ye command sirf pehla word hi read karega 
    getline(aandar_aa,str);  //getline sub kuch likha hua terminal me show kar deta hai.
    cout<<str;// andar_aa ka jo str me aa gaya hai use cout kar do
    aandar_aa.close(); //opened file close kaene ke kaam aata hai.
 return 0;
}