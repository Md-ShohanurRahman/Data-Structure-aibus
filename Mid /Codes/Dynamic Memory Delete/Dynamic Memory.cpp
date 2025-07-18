#include<iostream>
using namespace std;
int main()
{
   int *a;
    {
       int x=10;
      a=new int (5);

    cout<<a<<endl<<x<<endl<<*a<<endl<<endl;
    }
   cout<<*a<<endl;
   delete a;
   cout<<*a<<endl<<a<<endl;
}

