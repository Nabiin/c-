//cin.get helps to get data from user and put into variable and cout.put() is used to write the output on display

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    char name;
    while(name!='\n'){
        cin.get(name);
        cout.put(name);
    }
    
    getch();
    return 0;
  
}