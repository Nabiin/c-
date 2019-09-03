#include<iostream>
#include<conio.h>
using namespace std;
class bin{
    public:
    int a;
    bin(){
        cout<<"Hello i am Default constructor #@* Nabin sir " << endl;
    }
};

int main(){
    bin obj1=bin();
    bin obj2;


    return 0;
}