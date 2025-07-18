#include<iostream>
using namespace std;
int *arr;
int size;
int top=-1;
void push(int val)
{
    if (top<size-1)
    {
        top++;
        arr[top]=val;
    }
    else
    {
        cout<<"Stack is Full"<<endl;
    }
}
void pop()
{
    if (top>=0)
    {
        top--;
    }
    else
    {
        cout<<"POP is done,Stack is empty"<<endl;
    }
}
void print()
{
    cout<<"THE STACK IS:"<<" ";
    for (int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
   cout<<"ENTER STACK SIZE:";
   cin>>size;
   arr= new int[size];
   push(6);
   print();

   push(10);
   print();

   push(7);
   print();

   push(5);
   print();

   push(20);
   print();

   cout<<"After poped."<<endl;
   pop();
   print();
   cout<<"Push Again."<<endl;
   push(200);
   print();
}
