#include<iostream>
using namespace std;
// print half pyramid after 180 degree rotation;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(i==j||j>i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}