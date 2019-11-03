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
    cout<<"the value of a is " << a << endl << "the value of b is " << b ;
}
class son: public dad{
public:
void puta(int xyz);
};
void son::puta(int yx){
a=yx;
b=++yx; //if this line is not put then when calling obj.showdata() we get error value in variable b
}
class dau : public dad{
public:
void putb(int nn);
};
void dau::putb(int nn){
    b=nn;
    a=++nn;   //if this line is not put then when calling obj1.showdata() we get error value in variable a
}
int main(){
int x,y;
cout <<"Enter the value for a "; 
cin >> x;
cout <<"Enter the value for b " ;
cin >>y ;
son obj;
dau obj1;
obj.puta(x);
obj1.putb(y);
cout <<endl << "-----------------------------------" << endl;
cout<< "Displaying  son i.e obj  " << endl;
obj.showdata();
cout << endl<< endl;
cout<< "Displaying  dau i.e obj1  " << endl;
obj1.showdata();

cout <<endl <<  "---------------------------------------------" << endl;
return 0;

}