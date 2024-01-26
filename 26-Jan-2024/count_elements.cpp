#include<bits/stdc++.h>
using namespace std;

void linear_search(int n,int arr[],int key)
{
    int count =0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
    }
    
    cout<<count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n]={23,56,98,23,38,29,23};
    int key=23;
    
    linear_search(n,arr,key);
    return 0;
}