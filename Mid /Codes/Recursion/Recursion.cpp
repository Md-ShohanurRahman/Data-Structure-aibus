#include<iostream>
using namespace std;
int sum=0;
void recursion(int val)
{
    if (val>0)
    {
         sum=val+sum;
         cout<<"VALUE="<<val<<" "<<"SUM="<<sum<<endl;
         recursion(val-1);
    }
}

int main()

{
   recursion(10);
}
