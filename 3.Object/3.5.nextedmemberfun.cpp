/* nexted member function 
in this program one member function call another member function by thir name only */

#include<iostream>
#include<conio.h>
using namespace std;
class bin{
    private :
    int a;
    int b;
    public:
    void getdata();
    int calculatedata();
    void printdata();
};

void bin::getdata(){
    cout << "Enter the value of a " ;
    cin >> a;
    cout << "Enter the value of b ";
    cin >> b;
}
inline int bin::calculatedata(){
    return a*b;
}

void bin::printdata(){
    cout << "The multiplication of two number is " << calculatedata();   //nexted functioin
}


int main(){
    bin obj;
    obj.getdata();
    obj.calculatedata();
    obj.printdata();
    getch();
    return 0;
}