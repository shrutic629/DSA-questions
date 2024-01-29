#include<bits/stdc++.h>
using namespace std;

void find_array_intersection(int n,int m,int arr1[],int arr2[])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n]={1,2,3,4,5,6,7};
    int arr2[m]={2,4,6,8,10,12,14};
    
    find_array_intersection(n,m,arr1,arr2);
    
    
    return 0;
}