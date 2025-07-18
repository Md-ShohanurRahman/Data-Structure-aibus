#include<iostream>
using namespace std;
int main()
{
  int v;
  int *a,sum=0;
  cout<<"ENTER MATCH NUMBER =";
  cin>>v;
  a= new int(v);
  for(int i=0;i<v;i++)
  {
      cout<<"Match number ="<<(i+1)<<" "<<"Scored =";
      cin>>a[i];
      sum= sum+a[i];
  }
  cout<<"Goal scored in ="<<v<<" Match scored ="<<sum<<endl;
  delete []a;
}
