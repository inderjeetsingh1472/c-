#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
   cin>>a[i];
    }

    
     const int  m=10;
     int idx[m];
     for(int i=0;i<m;i++){
        a[i]=-1;
     }
     int minidx = INT_MAX;
     for(int i=0;i<n;i++){

    if(idx[a[i]] != -1){
        minidx=min(minidx,idx[a[i]]);
    }
    else
    {
idx[a[i]]=i;
    }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }
    return 0;
}