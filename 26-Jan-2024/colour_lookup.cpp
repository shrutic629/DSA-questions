#include<bits/stdc++.h>
using namespace std;

void colour_lookup(int n,string colour_name[],string database[],string properties[],string target)
{
    for(int i=0; i<n; i++)
    {
        if(colour_name[i]==target)
        {
            cout<<colour_name[i]<<"and its properties are"<<database[i]<<" "<<properties[i];
        }
    }
}

int main()
{
   int n;
   cin>>n;
   string colour_name[n]={"red","blue","green"};
   string database[n]={"#FF0000,255,0,0","#0000FF,0,0,255","00FF00,0,255,0"};
   string properties[n]={"the colour of passion and energy","the colour of sky and sea","the colour of nature and growth"};
   string target="blue";
   
   colour_lookup(n,colour_name,database,properties,target);
    return 0;
}