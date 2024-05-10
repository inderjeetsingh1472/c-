#include<iostream>
using namespace std;
/*
Hierarchical inhertance : where multiple child classes derived from one parent class
*/
class parent{
public:
parent(){
    cout<<"parent class"<<endl;
}
};
class child1: public parent{
    public:
    child1(){
cout<<"child1 class"<<endl;
    }
};
class child2: public parent{
    public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};
int main(){
    child1 c;
    child2 a;
}
