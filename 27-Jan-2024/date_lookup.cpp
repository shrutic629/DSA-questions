#include<bits/stdc++.h>
using namespace std;

void date_lookup(int n,long date[],string events[],long target)
{
   for(int i=0; i<n; i++)
   {
       if(date[i]==target)
       {
           cout<<"event as per date is: "<<events[i]<<endl;
       }
   }
}

int main()
{
    int n;
    cin>>n;
    long date[n]={22-11-2023,25-11-2023,26-11-2023,28-11-2023,30-11-2023};
    string events[n]={"sangeet","haldi","wedding","dancecompetition","birthday"};
    long target=26-11-2023;
    
    date_lookup(n,date,events,target);
    
    return 0;
}