#include<bits/stdc++.h>
using namespace std;

void duplicate_element_search(int arr[])
{
    for(int i=0; i<7-1; i++)
    {
        for(int j=i+1; j<7; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"duplicate element is: "<<arr[i]<<endl;
                cout<<"index: "<<i<<endl;
                return;
            }
        }
    }
    cout<<"no duplicate element is found";
}

int main()
{
    int arr[7]={1,2,3,2,4,3,7};
    
    duplicate_element_search(arr);
    return 0;
}