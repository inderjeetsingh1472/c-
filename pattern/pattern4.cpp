#include<iostream>
using namespace std;
//print half pyramid;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}