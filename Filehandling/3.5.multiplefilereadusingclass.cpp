#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class student{
    
    int sn;
    int name[12];
    int address[50];
    public:
    void showdata();
};
void student::showdata(){
    cout<< sn << " " << name << " " << address << endl;
}
int main(){
    ifstream fin;
    student s;
    fin.open("nabin.dat");
    cout<<"The student management system of bmc record found the following student "<< endl;
    for(int i=1;i<=3;i++){
        //fin.read((char *)&s,sizeof(student));
            fin.read((char*)&s,sizeof(student));

        s.showdata();
    }
    fin.close();
    return 0;
    getch();
}
