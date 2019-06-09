/*  manipulaters are 3 types 
- endl
- setprisions
- setw  
========================version 3==
       */


#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    cout << "Nabin"<< endl << setw(6) << "Nabin" << endl << setw(100) <<" Nabin";
 cout<< "\n this is an example of setprisiious" << endl ;
float a=12.1261312132121231;
 cout << endl << a<< endl<< setprecision(3) <<a << endl << setprecision(4) << a << endl << setprecision(5) << a<< endl;
 getch();
    return 0;
}