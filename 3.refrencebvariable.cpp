/* reference variable is a way to represent variable by 2  names for ex int n ; and to represent n we made another refernce
variable &a =n; this refrence variable doesnot occupy space in memory location

 */

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    int &a=n;
    cout << "enter an number   " ;
    cin >> a;
    cout << "the number is " << a << endl;
    cout << "another number is "<< n << endl;
    
    cout << "the number is " << &n << endl;
    cout << "another number is "<< &a << endl;
    getch();
    return 0;
}