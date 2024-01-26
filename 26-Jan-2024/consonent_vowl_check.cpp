#include<bits/stdc++.h>
using namespace std;

void consonent_vowl_check(string str,char target, int length)
{
    for(int i=0; i<length; i++)
    {
        if(str[i]==target)
        {
            if(target=='a',target=='e',target=='i',target=='o',target=='u')
            {
                cout<<"vowls";
            }
            else
            {
                cout<<"consonents";
            }
        }
    }
}

int main()
{
    string str="shruti";
    int length=str.length();
    char target ='i';
    
    consonent_vowl_check(str,target,length);
    return 0;
}