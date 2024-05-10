#include<iostream>
#include<algorithm>
#include<string>
//get ith bit:-
using namespace std;
int getBit(int n,int pos){
    return(n&(1<<pos));
}
int main(){
    cout<<getBit(5,1)<<endl;
}