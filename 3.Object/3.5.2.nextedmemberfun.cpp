/* this is an another example of inxted member function here we call 
private member function  */

#include<iostream>
#include<conio.h>
using namespace std;
class intrest{
    private :
    int p;
    int t;
    int r;
    int findintrest(){
        return p*t*r/100;
    }
    public:
    void getdata(int a,int b,int c=5);
    void printdata();
};
void intrest::getdata(int a,int b,int c){
p=a;
t=b;
r=c;
}
void intrest::printdata(){
cout << "The intrest is " << findintrest();     //CALLING private member function
}
int main(){
    class intrest obj;
    obj.getdata(500,5);
    obj.printdata();
    getch(); 
}