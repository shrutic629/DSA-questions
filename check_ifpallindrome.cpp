#include<bits/stdc++.h>
using namespace std;

void pallindrome(string str,int length)
{
    string str2 = str;
    int i=0,j=length-1;
    while(i<=j)
    {
        swap(str2[i],str2[j]);
        i++;
        j--;
    }
    
    if(str==str2)
    {
        cout<<"it is pallindrome";
    }
    else
    {
        cout<<"not a pallindrome";
    }
}

int main()
{
    string str="shruti";
    int length=str.size();
    
    pallindrome(str,length);
    return 0;
}