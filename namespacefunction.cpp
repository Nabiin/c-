// function under namespace  and global funtion decleraion
#include<iostream>
#include<conio.h>
using namespace std;
namespace v1
{
    int a=333;
    void nabin()
    {
        cout << "hello i am namespace";
    }
    }

    void global()
    {
        cout << "hello world i am global function decleration";
    }
    int main()
    {
        v1::nabin();
        global();
        cout << v1::a;
        getch();
        return 0;
    }

