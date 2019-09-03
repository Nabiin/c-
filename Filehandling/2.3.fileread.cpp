#include<iostream>
#include<conio.h>
#include <fstream>
using namespace std;
int main(){
    ifstream nai;
    nai.open("nepal.txt");
    char bin;
    while(nai){
    nai.get(bin);
    cout << bin;
    }
    return 0;
}