#include<bits/stdc++.h>
using namespace std;

void sum_unsorted(int n,int arr[])
{
    int sum=0;
    
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    
    cout<<sum;
}

int main()
{ 
    int n;
    cin>>n;
    int arr[n]={23,76,45,19,20,82,63};
    
    sum_unsorted(n,arr);
    
    return 0;
}