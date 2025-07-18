#include<iostream>
using namespace std;
int *arr=new int[1];
int size=1;
int top=-1;
void resize()
{
    cout<<"Old stack size is:"<<size<<endl;
    int *newarr= new int[size*2];
    for(int i=0;i<=top;i++)
    {
        newarr[i]= arr[i];
    }
    size=size*2;
    cout<<"After resizing the stack size is:"<<size<<endl;
    delete[]arr;
    arr=newarr;
}
void push(int val)
{
    if (top<size-1)
    {
        top++;
        arr[top]=val;
    }
    else
    {
        cout<<"Stack is Full,Resizing"<<endl;
        resize();
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

}
