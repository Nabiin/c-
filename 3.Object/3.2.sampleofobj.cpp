#include<iostream>
#include<conio.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    void showdata(){
        cout << "Name of student is " << name << endl<< "Roll number of "<<name<<" is " <<roll<<endl;
    }
};
int main(){
    student bin;
    cout <<"Enter the name of student ";
    cin >> bin.name;
    cout <<"Enter the roll number of student ";
    cin >>bin.roll;
    bin.showdata();
    cout << endl << endl<< "Another way to show data is " << endl;
    cout << "Name of student is " << bin.name;
    cout << endl << "Roll number of student is "<<bin.roll;
    getch();
    return 0;
}