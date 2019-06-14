// multiplication of number using recursive function
#include<iostream>
#include<conio.h>
using namespace std;
int facto(int);
int main(){
    cout << "Enter a number for facto ";
    int a;
    cin >> a;
    int v= facto(a);
    cout << "factorial is " << v;
    getch();
    return 0;
}

int facto (int l){
    int p=l;
    if ( p==0){
         return 1;
         }
            else{

       l=l*facto(p-1);
    }
    
}