#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class student{
    int sn;
    char name[12];
    char address[50];
    public:
    void getmultiple();
};
void student::getmultiple(){
    cout <<"Enter the sn of student";
    cin>> sn;
    cout<<"Enter the name  of student " ;
    cin >> name;
    cout<< "Enter the address of student";
    cin>> address;
    cout<< "Next " << endl;
     }
  int main(){
      student obj;
      ofstream write;
      write.open("nbn.txt");
      cout<<"Welcome to school management sysstem of bmc";
      for(int i=1;i<=3;i++){
           obj.getmultiple();
           write.write((char*)&obj,sizeof(student));
      }
      write.close();
      cout<<"File written successfull";
      getch();
      return 0;
  }   