/* delete is opposite of new 
delete operator is used  to freee up the memory */
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int *p=new int[5];
    cout<<"Enter the numbers";
    for (int i=0;i<5;i++){
        cin>>*(p+i);
    }
        for (int i=0;i<5;i++){
        cout<<*(p+i);
    
    }
    delete []p;
    cout<<endl<<"Thank you";
    return 0;
}
