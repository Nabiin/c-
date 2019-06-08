#include<iostream>
#include<conio.h>
using namespace std;
namespace v1
{
  int a=21;
}
namespace v2
{
  int a=22;
}
int a=23;
int main()
{
  int a=24;
  cout << "here is the value " << endl;
  cout << "the first value is " << v1::a;
  cout << "the second value is " << v2::a;
 cout << "\n the third valude is " << ::a;
    cout << "\n the forth in aody value is " << a;
   getch();
   return 0;
}