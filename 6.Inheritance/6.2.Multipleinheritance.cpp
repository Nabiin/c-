#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    public:
    int a;
};
class sample{
    private:
    int sum;
    public:
    int b;
    protected:
    void display(int x){
sum=b+x;
cout << "The sum is " << sum;
    }

};
class child:public demo,public sample{
    
    public:
    void getdata(){
        cout << "Enter a number as sample " ;
        cin >> a;
        cout << endl << "Enter the value  for b " ;
        cin >> b;
    }
    void showdata(){
         display(a);
        }
    };

int main(){
        child b1;
        b1.getdata();    
        b1.showdata();
        return 0;
    }