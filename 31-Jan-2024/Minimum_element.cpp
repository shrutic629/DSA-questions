#include<bits/stdc++.h>
using namespace std;

void minimum(int n, int arr[])
{
    int min=arr[0];
    int index=-1;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            index=i;
        }
    }
    
    cout<<"minimum :"<<min<<" "<<"at position :"<<index;
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n]={23,98,67,13,29,34};
    
    minimum(n,arr);
    
    return 0;
}