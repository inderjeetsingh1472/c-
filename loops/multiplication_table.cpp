#include<iostream>
using namespace std;
// write a program to write a table of n upto 10
int main(){
int n;
cin>>n;
for(int i=1;i<=10;i++){
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
return 0;
}