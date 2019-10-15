#include<iostream>
#include<conio.h>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void getroll();
};
void student::getroll(){
    cout << "Enter the rollnumber of  an student " ;
    cin >> roll;
}

class marks:public student{
    protected:
    float marks1,marks2;
    public:
    void getmarks();
    };

    void marks::getmarks(){
        cout << "Enter the marks in chemistry ";
        cin >>marks1;
        cout <<  "Enter the marks in physic  " ;
        cin >>marks2;
    }
    class total:public marks{
    public:
    int t;
    void totalmarks();
    }; 
    void total::totalmarks(){
    cout <<endl << endl<< "The  roll number of an student is " << roll << endl;
    t=marks1+marks2;
  cout << "The total marks is "  << t << endl;
    }
    int main(){
        total obj;
        obj.getroll();
        obj.getmarks();
        obj.totalmarks();
        return 0;
            }
