#include<iostream>
using namespace std;
/*CONSTRUCTOR
# Uses/properties:-
. used to intilize an object
.this is a function which is called when an object is created.
.same name as class name
#Types:-
1. default
2. parametarized
3. copy
*/
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
};
int main(){
    rectangle r1;//use of default constructor
    cout<<r1.l<<r1.b<<endl;



    rectangle r2(3,4);//use of parametrised constuctor
cout<<r2.l<<"  "<<r2.b<<endl;




rectangle r3=r2;// this is usse of copy constructor
cout<<r3.b<<"  "<<r3.l<<endl;
}