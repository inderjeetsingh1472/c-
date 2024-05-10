/*
Destructor:
1. this func is called when obj is deleted 
2. cannot pass any parameter
3. name ->    ~(class name)
*/

#include<iostream>
using namespace std;
class rectangle{
public:
int l;
int b;

rectangle(){   //default constructor- no arguments passed;
    l=0;
    b=0;
}

rectangle(int x,int y){ // parameterised constructor -arg passed
    l=x;
    b=y;
}


rectangle(rectangle& r){// copy constructor - intilise an obj by another existing obj;
l=r.l;
b=r.b;
}


~rectangle(){//destructor func
    cout<<"destructor is called"<<endl;
}
};
int main(){
    rectangle* r1 = new rectangle();
    cout<<r1->l<<"   "<<r1->b<<endl;
delete r1;//herer destructor is called


    rectangle r2(3,4);//use of parametrised constuctor
cout<<r2.l<<"  "<<r2.b<<endl;




rectangle r3=r2;// this is usse of copy constructor
cout<<r3.b<<"  "<<r3.l<<endl;
}