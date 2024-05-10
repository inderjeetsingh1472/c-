#include<iostream>
using namespace std;
int main(){
    //write a program to print all prime number in a given range;
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        for(int j=2;j<=i;j++){
            if(i%j==0){
                if(j!=i){
                    break;

                }
                else{
                    cout<<i<<endl;

                }
            }
        
        }
    }
    return 0;
}