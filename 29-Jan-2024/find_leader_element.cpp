#include<bits/stdc++.h>
using namespace std;

void Leader_element(int arr[])
{
    
    for(int i=0; i<=7; i++)
    {
        for(int j=i+1; j<=7; j++)
        {
            if(arr[i]<arr[j])
            {
                break;
            }
            else
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}

int main()
{
    int arr[7]={1,2,6,9,7,4,3};
    
    Leader_element(arr);
    
    return 0;
}