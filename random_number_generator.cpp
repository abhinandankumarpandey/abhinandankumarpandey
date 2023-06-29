#include<iostream>
#include<cstdlib>//for random number library
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));//real random number generator
    for(int i=0;i<15;i++){
    cout<<rand()%7<<endl;//rand() for random mumbers
    }
    return 0;
}