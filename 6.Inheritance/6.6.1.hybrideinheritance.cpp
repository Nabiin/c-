#include<iostream>
#include<conio.h>
using namespace std;
class c1{
    private:
    int pvt1;
    public:
    int pub1;
    protected:
    int pro1;

};
class c2: public c1{
    private:
    int pvt2;
    protected:
    int pro2;
    public:
    int pub2;

};
class c3{
    private:
    int pvt3;
    protected:
    int pro3;
    public:
    int pub3;

};
class c4:private c2, private c3{
    private:
    int pvt4;
    protected:
    int pro4;
    public:
    int pub4;

    void 


};
int main(){
 c4 obj;
     
    

































return 0;
}