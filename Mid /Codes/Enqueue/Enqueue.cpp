#include<iostream>
using namespace std;
const int size=5;
int qu[size],front=0,rear=0;
void enque(int val)
{
    if(rear==size)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<val<<" "<<"ADDED"<<endl;
        qu[rear]=val;
    }
    rear++;
}
void display()
{
    //int temp;
    if(front==rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"\n current queue"<<" ";
        for(int i=front;i<rear;i++)
        {
         cout<<qu[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
   enque(5);
   display();
   enque(7);
   display();
   enque(9);
   display();
}
