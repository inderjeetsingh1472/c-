/*
Encapsulation:
1. which ensure binding of methods and variable together into a single unit(class)
how?= data is only accessible from the class method


2. it also leads to data abstraction /hiding;
because this property class is known as abstract data type(ADT)



*/
#include<iostream>
using namespace std;
class abc{
    int x;
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }

};
int main(){
    abc obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl;
}