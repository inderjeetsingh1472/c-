// write a program to check the given no is prime;
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool prime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime){
        cout<<"this is prime no"<<endl;
    }
    else{
        cout<<"this is not a prime"<<endl;
    }
    return 0;
}