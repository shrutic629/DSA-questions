#include<bits/stdc++.h>
using namespace std;

void substring_search(vector<string>str,string substring,int length)
{
    int index=-1;
    for(int i=0; i<length; i++)
    {
        if(str[i].find(substring)!=std::string::npos)
        {
            index=i;
            break;
        }
    }
    if(index!=-1)
    {
        cout<<"substring found at index: "<<index<<endl;
    }
    else
    {
        cout<<"substring not found";
    }
}

int main()
{
    vector<string>str={"pen","pencil","eraser","notebook","sharpener"};
    int length=str.size();
    string substring="book";
    
    substring_search(str,substring,length);
    
    return 0;
}