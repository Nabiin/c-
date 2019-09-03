#include<iostream>
#include<conio.h>
using namespace std;

class bin{
    int b;
    public:
   int getdata(int c){
       b=c;
   }
    void showdata();
};
void bin::showdata(){
    cout <<endl<<  b;
}

int main(){
    int a,b;
    int i;
    bin obj[6];
    for(i=0;i<6;i++){
        cout << "Enter a number for " << i;              
        cin >>a ;
        obj[i].getdata(a);
    }
    
        for(i=0;i<6;i++){
           obj[i].showdata();
            }
return 0;
}