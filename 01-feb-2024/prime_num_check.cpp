#include<bits/stdc++.h>
using namespace std;

void prime_num_check(int n)
{
    bool flag=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"non-prime";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"prime number";
    }
}

int main()
{
    int n;
    cin>>n;
    
    prime_num_check(n);
    return 0;
}