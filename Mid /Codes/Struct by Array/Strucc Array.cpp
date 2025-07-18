#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  struct login
  {
      char name[15];
      char email[20];
      int num;

  };
  login l1[2];
  cout<<"Enter data:"<<endl;
  for(int i=0;i<1;i++)
  {
     cin>>l1[i].name;
     cin>>l1[i].email;
     cin>>l1[i].num;
  }
  for(int j=0;j<1;j++)
     {
         static int count=1;
         cout<<"Number"<<" "<<count<<"Name"<<" "<<l1[j].name<<"Email"<<" "<<l1[j].email<<"Num "<<l1[j].num<<endl;
         count++;
    }
}

