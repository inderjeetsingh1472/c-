#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int updateBit(int n,int pos){
    //update by 1
    return n|(1<<pos);}
    int main(){
        cout<<updateBit(5,1)<<endl;
    }
