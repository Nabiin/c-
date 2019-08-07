/* this is an example of default constructor 


---->in default cons. no parameters and values were passed
--> to create default constructor we use same name in member function and in class
-->consrtuctor is called while creating an object


 */

#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    int a;
    public:
    demo(){
        cout<< "Hello i am  Default Constructor ";
    }
};

int main(){
    demo d1;    //donot do demo d1()  ..this is not wright in default arugment
    getch();
    return 0;

}