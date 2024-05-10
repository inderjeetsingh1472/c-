#include<iostream>
using namespace std;
/*
Diamond problem: base class has multiple parent classes having a common anchester class
for example class a inherud the properties of class b and c , and class b and c also a child of class d and c , also the class d and c inherid from one class named f .so  a class inherid the properties of f class 2 times .

*/
class parent{
    public:
    parent(){
        cout<<"hey i am parent"<<endl;
    }
};
class child1: public parent{
    public:
    child1(){
        cout<<"hey i am child1"<<endl;
    }
};
class child2: public parent{
    public:
    child2(){
        cout<<"hey i am child2"<<endl;

    }
};
class grandchild: public child1, public child2{
    public:
    grandchild(){
        cout<<"hey i am grandchild"<<endl;
    }
};
int main(){
    grandchild a;
}