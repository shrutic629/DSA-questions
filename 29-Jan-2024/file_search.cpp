#include<bits/stdc++.h>
using namespace std;

void file_search(int n,string str[],string target,string file[])
{
    for(int i=0; i<n; i++)
    {
        if(str[i]==target)
        {
            cout<<file[i];
        }
    }
}

int main()
{
  int n;
  cin>>n;
  string file[n]={"file1","file2","file3","file4","file5","file6"};
  string str[n]={"english","maths","science","hindi","history","geography"};
  string target="history";
  
  file_search(n,str,target,file);
   
    return 0;
}