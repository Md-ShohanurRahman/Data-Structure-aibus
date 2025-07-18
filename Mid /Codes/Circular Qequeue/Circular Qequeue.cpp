#include<iostream>
using namespace std;
   const int size=5;
   int arr[size];
   int front=1,rear=1;
void enq(int val)
{
    int nx_rear=(rear+1)%size;
    cout<<"NEXT REAR"<<" "<<nx_rear<<endl;
    if(nx_rear==front)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        arr[rear]=val;
        cout<<"REAR"<<" "<<rear<<endl;
        rear=nx_rear;
    }
}
void dqu()
{
    if(rear==front)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        front=(front+1)%size;
    }

}
void print()
{
    cout<<"Current Queue:";
    for(int i=front;i!=rear;i=(i+1)%size)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  enq(1);
  print();
  enq(4);
  print();
  enq(5);
  print();
  enq(3);
  print();
  enq(2);
  print();
  dqu();
  print();
}
