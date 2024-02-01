#include<bits/stdc++.h>
using namespace std;

void reverse_string(string str,int length)
{
    int i=0,j=(length-1);
    while(i<=j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    
    for(int i=0; i<length; i++)
    {
        cout<<str[i];
    }
}

int main()
{
    string str="shruti";
    int length=str.length();
    
    reverse_string(str,length);
    return 0;
}