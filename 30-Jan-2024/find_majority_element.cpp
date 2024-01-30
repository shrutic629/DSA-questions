#include<bits/stdc++.h>
using namespace std;

void max(int n,int arr[])
{
    int count=1;
    int element=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                element=arr[i];
            }
        }
    }
    if(count>(n/2))
    {
        cout<<element;
    }
    else
    {
        cout<<"-1";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n]={5,2,3,5,6,3,2,3};

    max(n,arr);
    
    return 0;
}