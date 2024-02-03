#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class LinkedList
{
    private:
    Node *head;
    
    public:
    LinkedList()
    {
        head=NULL;
    }
    
    void push_back(int data)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        
        Node *curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=newnode;
    }
    
    void push_front(int data)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        newnode->next=head;
        head=newnode;
    }
    
    void pop_back()
    {
        if(head==NULL)
        {
            cout<<"List is empty.cannot perform pop back operation."<<endl;
            return;
        }
        
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
            return;
        }
        
        Node *curr=head;
        while(curr->next->next!=NULL)
        {
            curr=curr->next;
        }
        delete curr->next;
        curr->next=NULL;
    }
    
    void pop_front()
    {
        if(head==NULL)
        {
            cout<<"List is empty. cannot perform pop front operation."<<endl;
            return;
        }
        
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
            return;
        }
        
        Node *curr=head;
        head=head->next;
        delete curr;
        curr=NULL;
    }
    
    int length()
    {
        int count =0;
        Node *curr=head;
        
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        return count;
    }
    
    void display()
    {
        Node *curr=head;
        while(curr!=NULL)
        {
            cout<<curr->data<<"->";
            curr=curr->next;
        }
        cout<<"N"<<endl;
    }
    
};

int main()
{
    LinkedList mylist;
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    mylist.push_back(4);
    mylist.push_front(100);
    mylist.push_front(200);
    mylist.pop_back();
    mylist.pop_back();
    mylist.pop_front();
    
    mylist.display();
    int l=mylist.length();
    cout<<"Length: "<<l<<endl;
    
    return 0;
}