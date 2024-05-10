// INHERITANCE=# a class inherits properties of another class
// # if properties of A class is inherid by B class , then A is parent class/super class and B is child/sub class
// * Access specifier & modes of inheritance
//    #public= Data and func - they can accessed from anywhere in the code
// #private= Data and Func - accessible only in own calss
// # protected = Data and Func- accessible in own class , parent class & derived(child) class;
#include<iostream>
using namespace std;
class parent{
    // public:
    // int x;
    public:
    parent(){
        cout<<"parent class"<<endl;
    }
    // protected:
    // int y;
    // private:
    // int z;
};
class child1:public parent{
    public:
    child1(){
        cout<<"child class"<<endl;
    }
    //x will remain public
    //y will remain protected 
    // z will not be accessable
};
class child2:private parent{
    //x will be private;
    //y will be private;
    //z will remain inaccesable;
};
class child3:protected parent{
//x will be protected;
//y will be protected;
// z will remain inaccesssable;
};
int main(){
    child1 p;
    // p.x;

    return 0;
}