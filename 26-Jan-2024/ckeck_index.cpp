#include<bits/stdc++.h>
using namespace std;

void linear_search(int n,int arr[],int key)
{
    int flag=0;
    int index=-1;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            index=i;
            break;
        }
    }
    
    if(flag==1)
    {
        cout<<"Element found at :"<<index;
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
    int arr[n]={23,56,98,16,38,29,54};
    int key=20;
    
    linear_search(n,arr,key);
    return 0;
}