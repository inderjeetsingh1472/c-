#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    int flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<"\n";
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"element is found\n";
    }
    else{
        cout<<"element is not found\n"<<endl;
    }
    return 0;
}