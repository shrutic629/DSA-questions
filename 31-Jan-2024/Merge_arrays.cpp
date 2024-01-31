#include<bits/stdc++.h>
using namespace std;

void Merge_arrays(int arr1[],int arr2[],int length1,int length2)
{
    int arr3[length1+length2];
    int k=0,i=0,j=0;
    
    while((i<length1) && (j<length2))
    {
        if(arr1[i]<=arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        if(arr2[j]<arr1[i])
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<length1)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<length2)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    
    for(int k=0; k<(length1+length2); k++)
    {
        cout<<arr3[k]<<" ";
    }
    
}

int main()
{
    int arr1[]={1,4,9,10,16};
    int arr2[]={2,7,8,12,15,19,23};
    int length1=(sizeof(arr1)/sizeof(arr1[0]));
    int length2=(sizeof(arr2)/sizeof(arr2[0]));
    
    Merge_arrays(arr1,arr2,length1,length2);
    return 0;
}