#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"you eligible for vote"<<endl;
    }
    else{
        cout<<"you cannot eligible for vote";
    }
    return 0;
}