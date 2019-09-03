#include<iostream>
#include<conio.h>
using namespace std;
class bin{
int a;
int b;
public:
bin(int z ,int x){
a=z;
b=x;
}
int c ,d;
bin(bin &s1){
    a=s1.a;
    a--;
    b=s1.b;
    b--;
    }
void showdata();

};
void bin::showdata(){
    cout << "The value is " << a << " and "  << b<< endl;
}
int main(){
    bin b1(5,6);
    bin b2(b1);
    b1.showdata();
    b2.showdata();
    return 0;

    
}