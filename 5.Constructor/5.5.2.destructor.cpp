#include<iostream>
#include<conio.h>
using namespace std;
class bin{
string name;
    int roll;
    public:
    bin(){
        cout << "Enter the name of student " ;
        cin >>name;
        cout << "Enter the roll number of student ";
        cin>> roll;
    }
    bin(bin &s){
        name=s.name;
        roll=s.roll;
    }
    void show(){
        cout <<"The output is " << name << " has the roll nubmer " << roll << endl;
    }
~bin(){
cout << endl << "The program run successfully ";
}

};
int main(){
    bin obj;
    bin obj1(obj);
    obj.show();
    obj1.show();
    getch();
    return 0;
    }