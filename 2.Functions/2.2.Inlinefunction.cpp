/* just write inline word before function decleraion
when function is call then copy of funcion decleration funcions transfer to function _ function_call and sace the memoy
inline  --- easy to use --- save memory means its use less _MEMORYFWD_H
 */

#include<iostream>
#include<conio.h>
using namespace std;
inline int whois(int a , int b)
{
    return ((a>b)?a:b);
}
int main()
{
    cout << "ENTR THE VALUE OF A AND B" << endl;
    int a,b;
    cin >> a>>b;
    cout << "the greater value is " <<  whois(a,b);
    getch();
    return 0;
}