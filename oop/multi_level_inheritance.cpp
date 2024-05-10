#include<iostream>
// MULTI-LEVEL  INHERITANCE= parent class is derived from another class;
using namespace std;
class parent{
    public:
    parent(){
        cout<<"public class"<<endl;
    }
};
class child:public parent{
    public:
    child(){
        cout<<"this is child class"<<endl;

    }
};
class grandchild:public child{
    public:
    grandchild(){
        cout<<"this is grand child class"<<endl;
    }
};
int main(){
    grandchild p;
}