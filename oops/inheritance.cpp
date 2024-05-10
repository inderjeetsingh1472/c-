/*
# Inheritance:-
- a class inherits properties of another class
- here the class which properties inherid to another is called parent class/super class;
- also the another class which inherid other class properties is called child class/sub class;
** Access specifiers and mode of inheritance :
1. public : data and function access from anywhere in the code
2. private: data and function accessible on in own class
3. protected: data an dfunction accessible in own calss, parent class and derived class
*/
#include<iostream>
using namespace std;
class parent{
public:
int x;
protected:
int y;
private:
int z;
};

class child1: public parent{
//x will remain public y will remain protected , z will not accessible
};class child2: private parent{
// x will be private , y will also private, z will remain inaccessible
};
class child:protected parent{
    // x will be protected , y will also protected, z will inaccessible
};
// # single inheritance

 
int main(){
    parent p;
    p.x;
    

} 