#include<iostream>
using namespace std;
/*
# multiple inhertance: the class which inherid from multiple parent classes;
*/
class parent1{
public:
parent1(){
    cout<<"parent1 class"<<endl;
}
};
class parent2{
    public:
    parent2(){
        cout<<"parent2 class"<<endl;
    }
};
class child: public parent1, public parent2{
    public:
    child(){
cout<<"child class"<<endl;
    }
};
int main(){
    child c;
}
