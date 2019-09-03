//in this program we implicite and explicite call to the constructor an 

#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    int sid;
    float marks;
    public:
    demo(int i,float j){
        sid=i;
        marks=j;
    }
    void showdata();
};
void demo::showdata(){
    cout << "student is " << sid <<endl << "marks is " << marks  << endl;
}

int main(){
    demo d1(3,70); // implicit call (call automatically by compiler)
    demo d2=demo(2,80);  //expicite call ( this is the call by me let think that)
    d1.showdata();
    d2.showdata();
    return 0;
}