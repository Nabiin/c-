//this program is used to read the file which is already created successfully 
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ifstream fileinread;             //we made an object fileinread for ifstream class
    fileinread.open("nepal.txt");         //we open the txt file here
    char name;    
    fileinread >>name;                                 
    while(!fileinread.eof()){           //at the end of line eof gives 1 but and other its gives 0 so here we started to readd the character hence eof gives 0 to run this loop we use ! marks to invert the value
     
        cout << name;
           fileinread >> name; 
    }
fileinread.close();
return 0;
}