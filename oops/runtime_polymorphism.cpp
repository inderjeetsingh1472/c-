#include<iostream>
using namespace std;
/*
Run time polymorphism:
-resolved at run time;
-using func overiding;

child class defines a function of parent class;
*/
#include<iostream>
using namespace std;
class parent{
    public:
    virtual void print(){
        cout<<"parent class"<<endl;
    }
    void show(){
        cout<<"parent class"<<endl;
    }
};
class child: public parent{
    public:
    void print(){
        cout<<"child class"<<endl;
    }
    void show(){
        cout<<"child class"<<endl;
    }
};
int main(){
    parent *p;
    child c;
    p=&c;
    p->print();
    p->show();
}
