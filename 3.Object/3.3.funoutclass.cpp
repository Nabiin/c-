// in this programs we will know how use member function outside the class

#include <iostream>
#include <conio.h>
using namespace std;
class student
{
private:
    int a;
    int b;

public:
    void getdata();
    int calculatedata();
    int showdata();
};

void student::getdata()
{
    cout << "Enter the number for a  ";
    cin >> a;
    cout << "Enter the number for b   ";
    cin >> b;
    cout << endl
         << "Thanks for giving details " << endl;
}
int student::calculatedata() ////suntax :- datatype class-name :: member-function() //function outside the classa
{
    return (a + b);
}
int student::showdata()   //function outside the classa
{
    cout << endl<<"The sum of two numbert is " << (a + b) << endl;
}
int main()
{
    student n;
    n.getdata();
    n.calculatedata();
    n.showdata();
    getch();
    return 0;
}
