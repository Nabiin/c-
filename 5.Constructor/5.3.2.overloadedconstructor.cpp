#include<iostream>
#include<conio.h>
using namespace std;
class demo{
       public:
      demo(){
          cout<<"Hello my name is default constructor ";
      }
    demo(int z){
        cout<<"Hello my name is z and value is " << z <<endl;
    }
    demo(double y){
        cout<<"Hwll  my name is y and value is "<< y << endl;
         }
   demo(float a){
            cout<<"Hello my name is a " << a <<endl;
        }
    
};
int main(){
    demo d2(285),d3(11.21),d4(11.4),d;
    return 0;
}