//in this program we will write a file using class 
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class student{
    public:
    char name[21];
    int roll;
        void getdata();
};
void student::getdata(){
    cout <<"Enter the name of student " ;
    cin >> name;
    cout << "Enter the  roll number  ";
    cin >> roll;
}
int main(){
    student obj;
    obj.getdata();
    ofstream fout;
    fout.open("nabin.txt");
    fout.write((char*)&obj,sizeof(student));
    if(fout){
        cout<<"File is written successfully";
    } 
else
{ cout<< "unable ot write a filel";
}
    
    fout.close();
    getch();
    return 0;  
}