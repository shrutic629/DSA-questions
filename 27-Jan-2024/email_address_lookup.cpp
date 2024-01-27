#include<bits/stdc++.h>
using namespace std;

void email_address_lookup(int n,string username[],string email[],string target)
{
    for(int i=0; i<n; i++)
    {
        if(username[i]==target)
        {
            cout<<email[i];
        }
    }
}

int main()
{
   int n;
   cin>>n;
   string username[n]={"shruti","nikita","vishan","vishal","priya","kuldeep"};
   string email[n]={"shrutic25@gmail.com","nikita12@gmail.com","vishan1@gmail.com","vishal23@gmail.com","priya10@gmail.com","kuldeep15@gmail.com"};
   string target="vishan";
   
   email_address_lookup(n,username,email,target);
   
    return 0;
}