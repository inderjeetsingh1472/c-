// hierarchical inhritance is defined as one parent class has more than one chiild classes;
#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
        cout<<"this is parent class"<<endl;

    }
};

class child:public parent{
    public:
    child(){
        cout<<"this is child class"<<endl;

    }
};

class child1:public parent{
    public:
    child1(){
        cout<<"this is child1 class"<<endl;

    }
};
int main(){
    child1 a;
    child b;
}