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
void removeval (int val)
{
    if(HEAD==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        if(HEAD->data==val)
        {
            HEAD=HEAD->next;
        }
        else
        {
           static node*tptr=HEAD;
           while(tptr->next!=NULL&& tptr->next->data!=val)
           {
               tptr=tptr->next;
           }
           if(tptr->next==NULL)
           {
               cout<<"not found"<<endl;
           }
           else
           {
               tptr->next=tptr->next->next;
           }
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
    AddFirst(4);
    print();

}
