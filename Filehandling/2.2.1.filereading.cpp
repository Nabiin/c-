#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ifstream read;
    read.open("nepal.txt");
char ch;
read >> ch;
cout << ch;
return 0;
}