#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    char name[20]; // this name is created
    cout<< "Enter the name of character ";
    cin.getline(name,15);
    cout.write(name,15);
    return 0;
}