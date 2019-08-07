// in this program we will learn how to call parent protected from child class
#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    private:
    int a;
    protected:
    int getdata(int x){
        a=x;
        cout << "assigning value to a is completed " <<endl;
    }
    public:
  void showdata(){
        cout << "The value of a  is " << a;
    }
};

class child: public demo{
    public:
     void inputdata(int x){
       getdata(x);
    }
};
int main(){
    child obj;
    obj.inputdata(53);
     obj.showdata();
    return 0;
}
