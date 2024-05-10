#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int returnone(int n){
    int loop=0;
    for(int i=0;i<n;i++){
        int m=(n&n-1);
        n=n-1;
loop++;
if(m==0){
    break;
}

    }
    return loop;
}

int main(){
    int n;
    cin>>n;
    cout<<returnone(n)<<endl;
    return 0;
}