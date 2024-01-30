#include<bits/stdc++.h>
using namespace std;

void find_second_largest_element(int n,int arr[])
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<arr[n-2];
}

int main()
{
   int n;
   cin>>n;
   int arr[n]={2,6,9,5,3,7};
   
   find_second_largest_element(n,arr);
    
    
    return 0;
}