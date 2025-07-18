#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*left=NULL;
    Node*right=NULL;
};
Node*Root=NULL;
void Add(int val)
{
    Node* nptr=new Node;
    nptr->data=val;
    nptr->left=NULL;
    nptr->right=NULL;
    if (Root==NULL)
    {
        Root=nptr;
    }
    else
    {
        Node* tptr=Root;
        while (true)
        {
            if (tptr->data>val)
            {
                if(tptr->left==NULL)
                {
                    tptr->left=nptr;
                    break;
                }
                else
                {
                    tptr=tptr->left;
                }
            }
        }
    }
}
void search(int val)
{
    Node*tptr=Root;
    while(true)
    {
        if(tptr==NULL||tptr->data==val)
        {
            break;
        }
        else
        {
           if(val<tptr->data)
           {
               tptr=tptr->left;
           }
            else
          {
            tptr=tptr->right;
          }
        }
    }
    if(tptr==NULL)
    {
        cout<<val<<"Not Found"<<endl;
    }
    else
    {
        cout<<val<<"Found"<<endl;
    }
}
void print(Node* node)
{
    if(node!=NULL)
    {
        print(node->left);
        cout<<node->data<<" ";
        print(node->left);
    }
}
int main()
{
    Add(30);
    Add(20);
    Add(50);
    Add(60);
    Add(70);
    print(Root);
    cout<<"Searching....."<<endl;
    search(70);
}
