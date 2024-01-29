#include<bits/stdc++.h>
using namespace std;

void find_duplicates(int n,int arr[])
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"duplicate found "<<arr[i]<<endl;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n]={1,2,3,4,5,2,4,7,8};
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    
    find_duplicates(n,arr);
    return 0;
}