//this program open the or create the file and write some text on it


#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ofstream nabin;
    nabin.open("nepal.txt");
    getch();
    nabin<<"hello this is my first program";
        getch();
        nabin.close();
        getch();
}