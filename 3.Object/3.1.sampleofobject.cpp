#include<iostream>
#include<conio.h>
using namespace std;
class rectangle{
private:
    int len;
    int b;
    int c,d;
public:
    int getdata(){
        cout << "Enter length of rec ";
        cin >> len;
        cout << "Enter breadth of rec ";
        cin >> b;
    }
    int finddata(){
        c=len*b;
        return c;
    }
    int finddata1(){
        d=2*(len+b);
        return d;
    }
    void showdata(){
        cout << endl<< "At last i also want to same data " << endl;
        cout << "AREA is " << c << endl << "Perimeter is " << d << endl;
    }
};
int main(){
    rectangle r1;
    r1.getdata();
    cout << endl<< "The area of rectangle is " << r1.finddata() ;
    cout << endl << "The perimeter of rectangle is " << r1.finddata1();
    r1.showdata();
    getch();
    return 0;

}