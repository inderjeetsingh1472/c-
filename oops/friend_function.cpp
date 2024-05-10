#include<iostream>
using namespace std;
/*
# friend function:
non member func which can access private member of the class;
*/
class A{
int x;
friend void print(A &obj);
public:
A(int y){
    x=y;
}
};
void print(A &obj){
    cout<<obj.x<<endl;
}
int main(){
    A obj(5);
    // cout<<obj.x<<endl; give error
    print(obj);
}