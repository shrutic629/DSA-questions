#include<bits/stdc++.h>
using namespace std;

void char_search(vector<char>ch,int key,int length)
{
    int flag=0;
    int index=-1;
    
    for(int i=0; i<length; i++)
    {
        if(ch[i]==key)
        {
            flag=1;
            index=i;
        }
    }
    
    if(flag==1)
    {
        cout<<"index of key char: "<<index;
    }
}

int main()
{ 
    vector<char>ch={'a','s','d','f','g','h'};
    int key= 's';
    int length=ch.size();
    
    char_search(ch,key,length);
    return 0;
}