#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    char name[20];           ///[20] it means we3 can assign or give maximum 20 character to name
    fstream fin;
    cin.getline(name,15);  //name,15 means it can take total 15 character over 20 character 
    cout << "********Name is ******* " << endl;
    cout.write(name,10);                     //name,1o means it can display or print total 10 character over 15 character 
    cout<< endl <<" ******* Name is ********  " << endl;
    cout << name;
    return 0;

}