#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class student{
    int roll;
    char name[12];
    float marks;
    void getmarks(){
        cout<<"Enter the roll number of marks ";
        cin >> roll;
        cout<<"Enter the name of student";
        cin >> name;
        cout<<"Enter the marks of that student ";
        cin >> marks;
    }
    public:
    void addrecord(){
        fstream f;
        student s;
        f.open("nabin.txt");
        getmarks();
        f.write((char*)&s,sizeof(student));
        f.close();
    }
};
int main(){
    student ob;
    char ch='n';
    do{
        ob.addrecord();
        cout<<"Do you want to add another record (y/n)";
        ch=getch();
    }while(ch=='y' || ch=='Y');
    cout<< "Data written successful ";
    return 0;
}

