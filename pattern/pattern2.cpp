#include<iostream>
using namespace std;
//print hollow rectangle:-
int main(){
    int rows,columns;
    cin>>rows>>columns;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            if(i==1 || i==rows){
                cout<<"*";
            }
            else if(j==1 || j==columns){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}