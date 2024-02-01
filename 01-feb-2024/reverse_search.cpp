#include<bits/stdc++.h>
using namespace std;

void reverse_search(int arr[],int target,int n)
{
    int flag=0,index=-1;
    for(int i=(n-1); i>=0; i--)
    {
        if(arr[i]==target)
        {
            flag=1;
            index=i;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"index of target element is: "<<index;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n]={4,7,1,9,8,3};
    int target=7;
    
    reverse_search(arr,target,n);
    
    return 0;
}