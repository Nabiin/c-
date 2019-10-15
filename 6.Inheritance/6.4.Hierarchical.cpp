#include<iostream>
#include<conio.h>
using namespace std;
class dad{
    protected:
    int a;
    int b;
    public:
    void showdata();
};
void dad::showdata(){
    cout<<"the value of a is " << a << endl << "the value of b is " << b ,
}
class son: public dad{
public:
void puta(int xyz);
};
void son::puta(int xyx){
a=xyz;
}
class dau : public dad{
public:
void putb(int nn);
};
void dau::putb(int nn){
    b=nn;
}
int main(){



    //for you nabin 
}