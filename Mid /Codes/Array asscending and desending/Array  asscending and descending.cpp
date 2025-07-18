#include <iostream>
using namespace std;
int main()
{
   int arr[6]={0,1,2,3,4,5};
   for(int i=0;i<=5;i++)
   {
       cout<<arr[i]<<" ";

   }
   cout<<endl;
   for(int i=5;i>=0;i--)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<5;i++)
   {
       arr[i]=arr[i+1];
       cout<<arr[i]<<" ";
   }
}


