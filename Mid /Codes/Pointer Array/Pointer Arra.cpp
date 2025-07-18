#include<iostream>
using namespace std;
int main()
{
   int arr[3]={1,2,3};
   int *a;
   a=arr;
   for(int i=0;i<3;i++)
   {
       cout<<(*a+i)<<" ";
       cout<<endl;
   }
}

