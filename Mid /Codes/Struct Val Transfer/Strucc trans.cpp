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
  login l1;
  cin>>l1.name;
  cin>>l1.email;
  cin>>l1.num;
  cout<<l1.name<<" "<<l1.email<<" "<<l1.num<<endl;
  struct login l2={"abc", "xyz", 123};
  cout<<l2.name<<" "<<l2.email<<" "<<l2.num<<endl;
  cout<<"After exchange:"<<endl;
  strcpy(l1.name,l2.name);
  cout<<l1.name<<" "<<l1.email<<" "<<l1.num<<endl;
  cout<<l2.name<<" "<<l2.email<<" "<<l2.num<<endl;
}

