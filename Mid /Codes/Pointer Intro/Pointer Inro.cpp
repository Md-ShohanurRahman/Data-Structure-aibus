#include<iostream>
using namespace std;
int main()
{
  int a=14;
  int *b;
  b=&a;
  cout<< a<<" "<<endl;
  cout<<*b<<" "<<endl;
  cout<<b<<" "<<endl;
  cout<<&a<<" "<<endl;
}

