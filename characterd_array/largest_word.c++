#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int curr=0,maxi=0;
    int srt=0,maxsrt=0;
    while(1){
        if(arr[i]==' '||arr[i]=='\0'){
            if(curr>maxi){
                maxi=curr;
                maxsrt=srt;
            }
            curr=0;
            srt=i+1;
        }
        else
        curr++;
        if(arr[i]=='\0')
        break;

        i++;
    }
    cout<<maxi<<endl;

for(int i=0;i<maxi;i++){
    cout<<arr[i+maxsrt];
}
return 0;
}