#include<iostream>
using namespace std;
int main()
{
  int a=14;
  int *b;
  b=&a;
  int **c;
  c=&b;
  cout<<a<<" "<<endl;
  cout<<*b<<" "<<endl;
  cout<<b<<" "<<endl;
  cout<<&a<<" "<<endl;
  cout<<c<<" "<<endl;
  cout<<**c<<" "<<endl;
  cout<<&b<<" "<<endl;

}

