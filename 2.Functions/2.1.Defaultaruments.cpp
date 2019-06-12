/* default argument means when function call without values then the values
are teken form funcion decleration for calculations
 */
#include<iostream>
#include <conio.h>
int intrest (int p=10, int t=50 , int r=100);
using namespace std;
int main()
{
    int pp,tt,rr;
    cout << "Enter the value of p t r  " << endl;
    cin >> pp >>tt>>rr;
    int i,j,k,l;
    i=intrest(pp,tt,rr);
    j=intrest(pp,tt); //FUNCTION CALL WITHOUT RR ARGUMEnt so the the rate will be taken form function decleration 
    k=intrest(pp);
    l=intrest();
    getch();
    cout << "The value are " << endl<< i <<endl << j<<endl<<k<<endl<<l;
    getch();
}
int intrest (int p,int t,int r)
{
    return ((p*t*r)/100);
}
