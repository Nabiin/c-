 #include<iostream>
 #include<conio.h>
 #include<fstream>
 using namespace std;
 class student{
     public:
     char name[21];
     int roll;
void showdata();

 };
 void student::showdata(){
     cout <<" the name of student is " << name << " and her roll number is " << roll;
 }
 int main(){
     ifstream fin;
     student obj;
     fin.open("nabin.txt");
    fin.read((char*)&obj,sizeof(student));
    obj.showdata();
    return 0;
getch();
     
 }