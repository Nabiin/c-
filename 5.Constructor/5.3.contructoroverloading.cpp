#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    int x;
    int y;
    int z;
    public:
    demo(int a ,int b, int c){
        cout << "Hello i am the value of a b c " <<endl<< a << endl <<  b << endl<<c << endl;
        x=a+b+c;
        cout << endl<< "The value of x is " << x<< endl<<endl;
    }


demo(int a, int b){
    cout << "The value of a and b is " << a << endl<< b;
    y=a+b;
    cout << endl << "The sum of the value is " << y;
}

demo(int a){
    z=a;
cout << "The value of  z is " << z;
}

demo(){
    cout << endl<< "This is default constructor  ";

}
};
int main(){
    demo d1(5,5,5),d2(10,10),d3(15),d4;
    return 0;
}