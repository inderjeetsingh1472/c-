#include<iostream>
using namespace std;
int main(){
    int rows , coloumn;
    cin>>rows>>coloumn;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=coloumn;j++){
        cout<<"*";
    }
    cout<<endl;
}
}