#include<iostream>
#include<conio.h>
using namespace std;
class anabin{
    private:
    int a,b,c,d;
    public:
    anabin(int l,int m){
       a=l;
       b=m;
    }
    anabin(anabin &s){
        c=s.a;
        d=s.b;
    }
    void showdata(){
        cout<<"The values are " << a <<" and " << b <<endl;

    }
    void show(){
        cout<< "The values are " << c << " and " << d<< endl <<"Thank you";
    }
};
int main(){
   anabin obj(12,56);
    anabin obj1(obj);
    obj.showdata();
    obj1.show();
    return 0;
}