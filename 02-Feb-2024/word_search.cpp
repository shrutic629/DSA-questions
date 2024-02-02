#include<bits/stdc++.h>
using namespace std;

void Flower_search(string flower[],string target)
{
    int flag=0;
    int index=-1;
    for(int i=0; i<5; i++)
    {
        if(flower[i]==target)
        {
            flag=1;
            index=i;
            break;
        }
    }
    if(flag==1)
    {
      cout<<index;  
    }
}

int main()
{
    string flower[5]={"rose", "lily","marigold","mogra","sunflower"};
    string target="lily";
    
    Flower_search(flower,target);
    return 0;
}