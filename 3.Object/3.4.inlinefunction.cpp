/* generaly funcion inside class are innline function but we can also make the funtion inline
outside the class by using inline keyword */
#include<iostream>
#include<conio.h>
using namespace std;
class nabin{
   public:
   int a;
   int b;
  int bin();
}ob1;
inline int nabin::bin(){
     return a*b;
}
 
int main(){
cout<< "Enter the value of a ";
cin >> ob1.a;
cout<< "Enter the value okf b ";
cin >> ob1.b;
cout <<  "The area is " << ob1.bin();

}

 