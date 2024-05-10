#include<iostream>
using namespace std;
//print inverted half pyramid using numbers
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}