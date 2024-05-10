//write a program to print all odd no upto n;
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        if(n%2==0){
            n--;
            continue;
        }
        else{
            cout<<n<<endl;
            n--;
        }
        
    }
}