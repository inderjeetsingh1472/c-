#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int ClearBit(int n,int pos){
    return n&(~(1<<pos));
}
int main(){
    cout<<ClearBit(5,2)<<endl;
}