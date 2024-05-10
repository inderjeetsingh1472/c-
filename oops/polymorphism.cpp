#include<iostream>
using namespace std;
/*
# polymorphism: ability of objects/methods to take different forms;
1. compile time polymorphism:-this is seen through function and operator overloading;
. define a nuber of functons with same function name they perform differently according to the argument  passed:
2. run time :
*/

class sum{ //function overloading
    public:
    void add(int a ,int b){
cout<<a+b<<endl;
    }
    void add(int a, int b, int c){
        cout<<a+b+c<<endl;
    }
    void add(float a,float b){
        cout<<a+b<<endl;
    }
};
class complex{
    public:
    int real;
    int img;
    complex(int x,int y){
real=x;
img=y;
    }
    complex operator+ (complex&c){
complex ans(0,0);
ans.real=real+c.real;
ans.img=img+c.img;
return ans;
    }
};
int main(){
    sum s;
s.add(2,3);
s.add(4,5,6);
s.add(float (3.4),float (4.5));

complex c1(1,2);
complex c2(1,3);
complex c3=c1+c2;
cout<<c3.real<<"   i"<<c3.img<<endl;


}