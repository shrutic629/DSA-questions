#include<bits/stdc++.h>
using namespace std;

void employee_id_lookup(int n,string employee[],int ID[],int target)
{
    for(int i=0; i<n; i++)
    {
        if(ID[i]==target)
        {
            cout<<"name of employee: "<<employee[i];
        }
    }
}

int main()
{
   int n;
   cin>>n;
   string employee[n]={"shruti","nikita","vishal","vishan","kuldeep"};
   int ID[n]={5909,8772,6754,4323,7682};
   int target=4323;
   
   employee_id_lookup(n,employee,ID,target);
    return 0;
}