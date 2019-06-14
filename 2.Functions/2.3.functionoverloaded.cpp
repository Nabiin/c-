/* . function overloading is the process of using the same name for two or more functions.
 */

#include<iostream>
#include<conio.h>
using namespace std;
float perimeter(float);
int perimeter(int ,int);
int perimeter(int ,int ,int);
int main()
{
    perimeter(12.2);
    perimeter(12,12);
    perimeter(10,10,10);
    getch();
    return 0;
 }
 float perimeter(float a){
     a=(2*3.12*a);
     cout<<"perimeter of circle is " << a<<endl;
 return 0;
 }
 int perimeter(int l,int b){
     int a;
     a=2*(l+b);
     cout<<" the perimeter of rectangle is "<< a<<endl;
      return 0;
      }
      int perimeter(int l,int b,int w){
          int a;
          a=w+l+b;
          cout<< "the perimetr of triangle is " << a<<endl;
          return 0;
      }