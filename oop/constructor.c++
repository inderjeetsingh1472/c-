//CONSTRUCTOR=# used to inilize an object;
//            #this is a func which is ccalled when an object is created
// same name as class name
#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;
    rectangle(){//default constructor-no arg passed
        l=0;
        b=0;
    }
    rectangle(int x,int y){//parametrized constructor-arg passed
l=x;
b=y;
    }
    rectangle(rectangle& r){//copy constructor-intilize an object by another existing object
l=r.l;
b=r.b;
    }
    ~rectangle(){//destructor
      cout<<"destructor is called"<<endl;
    }
};
    int main(){
        rectangle*r1=new rectangle();
        cout<<r1->l<<"\n"<<r1->b<<endl;
        delete r1;
        rectangle r2(5,7);
        cout<<r2.l<<"\n"<<r2.b<<endl;
        rectangle r3=r2;
        cout<<r3.l<<"\n"<<r3.b<<endl;

    }
