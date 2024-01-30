#include<bits/stdc++.h>
using namespace std;

void misssing_no(int n,int arr[],int Total_sum)
{
    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        sum+=arr[i];
    }
    
    cout<<sum<<endl;;
    cout<<Total_sum<<endl;;
    cout<<"missing element is: "<<(Total_sum-sum);
}

int main()
{ 
    int n;
    cin>>n;
    int arr[n]={1,2,3,5,6,7,8};
    int Total_sum=((n*(n+1))/2);
    
    misssing_no(n,arr,Total_sum);
    
    return 0;
}