#include<iostream>
#include<algorithm>
#include<string>
// write a program to char16_teck if a given no is a power of2
using namespace std;
bool binaryno(int n){
    return n&(!(n&n-1));
}
int main(){
int n;
cin>>n;
if(binaryno(n)){
    cout<<"this this is a power 2";
}
else{
    cout<<"this is not a power of2"<<endl;
}
}