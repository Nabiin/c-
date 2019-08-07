#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    protected:
    int a;
    public:
    void getadata();
};
void demo::getadata(){
    cout << "Enter the value for a data " ;
    cin >>a;
}
class sample{
    protected:
    int b;
    public:
    void getbdata();
};
void sample::getbdata(){
    cout << endl << "Enter the value for b " ;
    cin >> b;
}
class baby: public demo, public sample{
    public :
    void showdata(){
        cout << "value of a is " << a << endl << "value of b is " << b << endl;
        cout << "Sum of two number is " << a+b << endl << "Multiplication of two number is " << a*b << endl;
           }

};
int main(){
    baby nabin;
    nabin.getadata();
    nabin.getbdata();
    nabin.showdata();
    return 0;
}