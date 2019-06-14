/* addition of numbers using recursive function */


#include<iostream>
#include<conio.h>
using namespace std;
int facto(int);
int main()
{
    int a;
    cout << "Enter the value for facto add ";
    cin >> a;
    int b;
    b=facto(a);
    cout << "th3e number is " << b;
    getch();
    return 0;
}
int facto (int c)
{
    if(c==1)
    {
        return c;
    }
    else {
    c=c+facto(c-1);
    return c;}
}