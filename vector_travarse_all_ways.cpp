#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> integers;
    integers.push_back(10);//push_back keyword se hum input dete hai 
    integers.push_back(20);
    integers.push_back(30);
    for(int i=0;i<integers.size();i++){
        cout<<integers[i]<<endl;
    }

    vector <int>::iterator itr;
for(itr=integers.begin();itr!=integers.end();itr++)
{
    cout<<*itr<<endl;

}
for (auto element:integers)
{
    cout<<element<<endl;
}
    return 0;
}

