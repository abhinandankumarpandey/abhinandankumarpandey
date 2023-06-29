

//Ambiguity solve karne ke liye boy class ke function ko uncomment kar do..
#include<iostream>
using namespace std;
class father{
public:
void fatu() //isi name ke ek aur function mother class me bhi hai
//isi wajah se hame nahi pata chal raha hai ki konsa function call hoga boy class me se
{
    cout<<"I am your father \n";
}
};
class mother{
public:
void fatu()
{
    cout<<"I am your mother";
}
};
class boy:public father,public mother{   //dono base class ko inherit kar rehe hai
int a;
//Ambiguity ka solution hai ki jis ka function hum cahte hai usko usi name ka function bana ke uske andar likh do..
/*
public:
void fatu()
{
    father::fatu();
}*/
};
int main()
{   
    class father fa;
    fa.fatu();
    class mother ma;
    ma.fatu();
    class boy bo;
    bo.fatu();//function uncomment karo chalane ke liye 
 return 0;
}

//doosra tarika ambiguity hatane ka
// Is se pehle uper wale program ko comment karo
#include<iostream>
using namespace std;
class b{
    public:
    void greet()
    {
        cout<<"I am b \n";
    }
};
class d:public b{
public:
void greet(){//hamne ek alag program bana diye greet name ka is liye ye wala execute hoga.
    cout<<"I am the function of d class which is derived from class b";
}
};
int main()
{
    class b bui;
    bui.greet();//ye I am b ko print karega 
    class d dui;
    dui.greet();//ye I am the function of d class which is derived from class b ko print karega..
 return 0;
}