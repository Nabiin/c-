#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("nabin.txt" ,ios::in);
    cout<<fin.tellg(); // gives location in byte 
    cout<<endl;
    cout<<(char)fin.get();  //gets from file and display in monitor
    cout<<endl;
    fin.seekg(3); //moves 3 steps
    cout<<fin.tellg() << endl; //gives location 3 becouse it move 3 steps
    cout<<(char)fin.get();
    fin.seekg(6);
    cout<<endl<<fin.tellg();
    cout<<endl<<(char)fin.get();
   fin.seekg(17,ios_base::beg); //its count form the begging
    cout<<endl << fin.tellg() << " " << (char)fin.get();
   fin.seekg(-9,ios_base::end);  //its cout from the end the number shuld be in negative
   cout<<endl<<fin.tellg() << "  " << (char)fin.get();
    getch();
    return 0;
}