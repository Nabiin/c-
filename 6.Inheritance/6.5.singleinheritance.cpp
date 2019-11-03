#include<iostream>
using namespace std;
class dad{
    int a;
    protected:
    int b;
    public: 
    int c;

};
class son:private dad{
    int d;
    protected:
    int e;
    public:
    int f;
    int showdata(){
        cout << "the value of a is " << f << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
        
    }
    int putdata(){
    
        cout <<"#Enter the value for b " << endl;
           cin >>b ;
        cout <<"#Enter the value for c " << endl;
           cin >>c ;
        cout <<"#Enter the value for d " << endl;
           cin >> d;
        cout <<"#Enter the value for  e" << endl;
           cin >> e;
    }

};
int main(){
    son obj;
    cout<<"Enter the value for f " ;
    cin >> obj.f;
    obj.putdata();
    obj.showdata();
    return 0;

}