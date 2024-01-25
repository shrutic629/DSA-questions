#include<bits/stdc++.h>
using namespace std;

void anagram_check(string str1,string str2,int length1,int length2)
{
    if(length1!=length2)
    {
        cout<<"strings are not anagrams";
    }
    
    int min_index;
    for(int i=0; i<length1; i++)
    {
        min_index=i;
        for(int j=i+1; j<length1; j++)
        {
            if(str1[j]<str1[min_index])
            {
                min_index=j;
            }
        }
        swap(str1[i],str1[min_index]);
    }
    
    
    for(int i=0; i<length2; i++)
    {
        min_index=i;
        for(int j=i+1; j<length1; j++)
        {
            if(str2[j]<str2[min_index])
            {
                min_index=j;
            }
        }
        swap(str2[i],str2[min_index]);
    }
    
    if(str1==str2)
    {
        cout<<"strings are anagrams"<<endl;
    }
    else
    {
        cout<<"not anagrams";
    }
}

int main()
{
   string str1="listen";
   string str2="silent";
   int length1=str1.length();
   int length2=str2.length();
   
   
   anagram_check(str1,str2,length1,length2);
    return 0;
}