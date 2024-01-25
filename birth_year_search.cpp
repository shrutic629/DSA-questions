#include<bits/stdc++.h>
using namespace std;

void birth_year_search(int n,string names[],int year[],string target)
{
    for(int i=0; i<n; i++)
    {
        if(names[i]==target)
        {
            cout<<"birth year is: "<<year[i];
        }
    }
}

int main()
{
   int n;
   cin>>n;
   string names[n]={"shruti","nikita","vishal","vishan","kuldeep"};
   int year[n]={1993,2002,2001,1995,1997};
   string target="nikita";
   
   birth_year_search(n,names,year,target);
    return 0;
}