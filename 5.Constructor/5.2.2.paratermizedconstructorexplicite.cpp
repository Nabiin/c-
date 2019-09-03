#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    int z,x;
    public:
    demo(int a ,int b);
     void showdata();
 
};
demo::demo(int a,int b){
z=a;
x=b;
}
void demo::showdata(){
    cout << "The value of z or a is " << z << endl << "The value of x or b is " << x;
}
int main(){
    demo r1=demo(9,8);  //here this is the parameterized construcxtor || we call this as explicite call
    r1.showdata();
    return 0;

}