#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* HEAD=NULL;
void create(int val)
{
    node*nptr=new node;
    nptr->data=val;
    nptr->next=NULL;
    if(HEAD==NULL)
    {
        HEAD=nptr;
    }
    else
    {
        node*tptr=HEAD;
        tptr->next=nptr;
        tptr=nptr;
    }
}
void AddFirst(int val)
{
    node*nptr=new node;
    nptr->data=val;
    nptr->next=NULL;
    if(HEAD==NULL)
    {
        HEAD=nptr;
    }
    else
    {
        nptr->next=HEAD;
        HEAD=nptr;
    }
}
void print()
{
    cout<<"CURRENT LINKED LIST:";
    node*tptr=HEAD;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<"->";
        tptr=tptr->next;
    }
    cout<<endl;
}
int main()
{
    AddFirst(5);
    print();
    AddFirst(6);
    print();
}
