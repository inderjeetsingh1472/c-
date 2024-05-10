//in this object orientated programming my main focus is on data manuplating
// bind the data to the func using it
//program-divided into objects(data,functions)
//CLASS= * fundamental unit of oop
        //  *user defined data types
//OBJECTS= # variable of type class
#include<iostream>
#include<math.h>
#include<string>
using namespace std;
class fruit{
    public:
string name;
string color;
};
int main(){
    fruit apple;//this is i create a object of type fruit
apple.name="Apple";
apple.color="red";
cout<<apple.name<<apple.color<<endl;

fruit*mango=new fruit();
mango->name="mango";
mango->color="yellow";
cout<<mango->name<<"\n"<<mango->color<<endl;
return 0;
}
