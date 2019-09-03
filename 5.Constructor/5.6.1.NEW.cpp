//Dynamic memory allocation
/* Dynamic constructor is used to allocate the memory to the 
objects at the run time. Memory is allocated at run time 
with the help of 'new' operator. By using this constructor,
we can dynamically initialize the objects.
 */

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int *p;
    p=new int[3];
    cout<<"Enter those numbedr ";
    for (int i=0;i<3;i++){
        cin>>p[i];
    }
    for (int i=0;i<3;i++){
        cout<< p[i];
    }
    getch();
    return 0;
}