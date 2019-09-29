#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("bhandari.txt",ios::in);
    cout<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(2);
    cout<<(char)fin.get();
    return 0;
}