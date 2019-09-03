/* in parameterized constructor 
-class name and member function name should be same 
-while creating an object we must we must pass some value to make parameterized constructor    
-simple parameterized constructor lai implicite call pani vanchhan 
 */


#include<iostream>
#include<conio.h>
using namespace std;
class cons{
    public:
    cons( int x , int y){                                 // member function is same as class 
        cout << "the value of x is " << x << endl << "and the value of y is " << y;
    }
};
int main(){
    cons c1(6,9); //this is implicit call || while creating an object we pass somw parameter i.e 6 and 9  in ordder to make constructor
    return 0;
}