#include<iostream>
#include<conio.h>
using namespace std;
class test{
    int a;
    int b;
    public: 
   int setdata(int ,int);
   int printdata();
};
int test::setdata(int c, int d){
    a=c;
    b=d;
}
int test::printdata(){
    cout << "value of a is " << a <<" value of b is " << b << endl;

}
int main(){
    test t[3];
    for (int i=0;i<3;i++){
        t[i].setdata(i+1,i+2);
            t[i].printdata();
            }
            getch();
            return 0;
            
}