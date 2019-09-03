#include<iostream>
#include<conio.h>
using namespace std;
class bin{
    int a;
    public:
    bin(){
        cout << " Constructor is called " << endl;

    }
~bin(){                                           //distructor is denoted by ~ sign and have same name as class and this is run at the last of program 
        cout <<"Distructor is called " << endl; 
    }
};
int main(){
    cout << "THIS IS THE PROGRAM TO SHOW DESTRUCTOR IN REAL LIFE " << endl;
    bin obj;
    cout <<" The program run successfully " << endl; 
    //now the destructor is called here i.e at the end 
       return 0;
}