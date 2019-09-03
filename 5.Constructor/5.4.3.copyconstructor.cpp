#include<iostream>
#include<conio.h>
using namespace std;
class name{
    int a ;
    float b;
    public:
    name(int z,float y);
    name(name &s);
    void showdata();
     };

name::name(int z,float y){
    a=z;
    // b=(int)z; //explicit type conversion
    b=y;
}
name::name(name &s){
    a=s.a;
    b=s.b;
}
void name::showdata(){
    cout<< "The value of a and b is " << a <<  " and " << b << endl;
}
int main(){
    name r1(80,15.6);
    name r2(r1);
    r1.showdata();
    r2.showdata();
    return 0;
    }