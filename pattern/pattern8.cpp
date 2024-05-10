#include <iostream>
using namespace std;
// print half pyramid using row number;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}