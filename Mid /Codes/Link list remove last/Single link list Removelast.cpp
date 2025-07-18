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
void removeLast()
{
    if(HEAD==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        if(HEAD->next==NULL)
        {
            HEAD=NULL;
        }
        else
        {
           node*tptr=HEAD;
           while(tptr->next->next!=NULL)
           {
               tptr=tptr->next;
           }
           tptr->next=NULL;
        }
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
   /* cout<<"REMOVED....."<<endl;
    removeFirst();
    print();*/
    removeLast();
    print();
    removeLast();
    print();

}
