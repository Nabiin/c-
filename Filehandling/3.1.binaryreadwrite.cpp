//the simple program to wrie and read files in binary 

#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ofstream write;
    ifstream read;
    int a;
    float b;
    cout << "Enter int number for a : " ;
    cin >> a;
    cout << "Enter flaot number of b : " ;
    cin >>b;
    write.open("nabinn.txt",ios::binary);
    write.write((char*)&a,sizeof(int));
    write.write((char*)&b,sizeof(b));
    write.close();
    read.open("nabinn.txt",ios::binary);
    int c;
    float d;
    read.read((char*)&c,sizeof(int));
    read.read((char*)&d,sizeof(d));
    read.close();
    cout << "The value is " << c << endl <<" And the float value is " << d << endl;
    return 0;

}


/* 
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    int num=2090;
    int numm;
    float nuum;
    float num1=1219.510;
    ofstream input;
input.open("bin.txt",ios::binary);
input.write((char*)&num,sizeof(num));
input.write((char*)&num1,sizeof(num1));
input.close();

ifstream output;
output.open("bin.txt",ios::binary);
output.read((char*)&numm,sizeof(numm));
output.read((char*)&nuum,sizeof(nuum));
cout << numm << " Is numm and " << nuum << " is nuum " << endl;
output.close();
} */
