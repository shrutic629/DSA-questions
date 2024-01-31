#include<bits/stdc++.h>
using namespace std;

int missing_num(int arr[],int length)
{
    int sum=0;
    for(int i=0; i<length; i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}

int main()
{
    int arr[]={5,-1,4,-2,3,1};
    int length=(sizeof(arr)/sizeof(arr[0]));
    
    int s=missing_num(arr,length);
    cout<<s<<endl;
    
    int count=0;
    for(int i=0; i<length; i++)
    {
        if(arr[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    
    int sum1=0;
    for(int i=0; i<=count+1; i++)
    {
       sum1+=i; 
    }
    cout<<sum1<<endl;
    cout<<"missing number is: "<<sum1-s;
    
    
    return 0;
}