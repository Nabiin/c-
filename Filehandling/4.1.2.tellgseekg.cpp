/* >this file is open on read only because ios::in means read only so 
we must use sekkg and tellg for read only mode
>
 */
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("bhandari.txt",ios::in); //ios::In for read only file
    fin.seekg(0); //0 means on the begging
    cout<<(char)fin.get(); //show the starting alphabet
    cout<<endl;
    fin.seekg(-2,ios_base::end);   //the last character is denoted by -1 so its show -2 show 2nd character from end
    cout<<(char)fin.get();
    fin.seekg(5,ios_base::beg);//it show the 6th letter because file is read from 0 
    cout<< "the fifth alphabet byte is " << fin.tellg() ;
    cout<< endl << " the alphabet is " << (char)fin.get();
    return 0;
}