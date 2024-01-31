#include<bits/stdc++.h>
using namespace std;

void Maximum(int n, int arr[])
{
    int max=arr[0];
    int index=-1;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    
    cout<<"maximum :"<<max<<" "<<"at position :"<<index;
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n]={23,98,67,13,29,34};
    
    Maximum(n,arr);
    
    return 0;
}